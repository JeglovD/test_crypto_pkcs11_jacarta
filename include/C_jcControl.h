#ifndef JC_CONTROL_H
#define JC_CONTROL_H

#include "jcPKCS11.h"

#include <stdint.h>
/*  Все функции и структуры описанные в этом файле являются устаревшими и не рекомендуются для использования */


/*! 
* \typedef C_jcCtrl
* \deprecated 
* \brief Указатель на метод, позволяющий выполнять операции со SWYX-считывателем
* \param slotID - идентификатор(номер) слота. Все слота можно получить с помощью C_GetSlotList
* \param operation - код операции (см. #C_JCCTRL_OPERATION_CODES)
* \param pData - указатель на массив байт в который будут записаны выходные данные, или сообщение для отображения(в случае операции #JC_CTRL_SWYX_DISPLAY)
* Для конкретного значения параметра в контексте каждой операции см. описание структуры #C_JCCTRL_OPERATION_CODES
* \param ulDataLen - указатель на длину массива с выходными или входными (в случае операции #JC_CTRL_SWYX_DISPLAY) данными
* Для конкретного значения параметра в контексте каждой операции см. описание структуры #C_JCCTRL_OPERATION_CODES
* \return код результата в терминах PKCS11
**/
#ifdef __cplusplus
extern "C"
{
#endif

#define CK_PKCS11_FUNCTION_INFO(name) extern CK_DECLARE_FUNCTION(CK_RV, name)
CK_PKCS11_FUNCTION_INFO(C_jcCtrl)(CK_ULONG slotId, CK_ULONG operation, CK_VOID_PTR pData, CK_ULONG_PTR ulDataLen);
#undef CK_PKCS11_FUNCTION_INFO

#define CK_PKCS11_FUNCTION_INFO(name) typedef CK_DECLARE_FUNCTION_POINTER(CK_RV, __PASTE(FP_,name))
CK_PKCS11_FUNCTION_INFO(C_jcCtrl)(CK_ULONG slotId, CK_ULONG operation, CK_VOID_PTR pData, CK_ULONG_PTR ulDataLen);
#undef CK_PKCS11_FUNCTION_INFO

#ifdef __cplusplus
}
#endif

#pragma pack(push,1)

#define JC_CTRL_BIOMETRIC 0x8000

/* коды операций для метода jc_ctrl */
enum C_JCCTRL_OPERATION_CODES
{
    /// Получить свойства SWYX-считывателя. Аргументы #C_JCCTRL: в pData  будут записаны свойства в виде структуры #_SWYX_PROPERTIES_RESPONSE (байты идут в little endian),
    /// ulDataLen будет содержать размер структуры со свойствами (должно быть 12 байт)
    JC_CTRL_GET_PROPERTIES = 0,
    /// Включить SWYX-режим.  Аргументы pData и ulDataLen в #C_JCCTRL не используются
    JC_CTRL_SWYX_START = 1,
    /// Выключить SWYX-режим и получить лог + подпись.  Аргументы #C_JCCTRL: в pData будет записан лог в формате xml + 64 байта подписи в конце,
    /// ulDataLen будет содержать суммарный размер лога и подписи
    JC_CTRL_SWYX_STOP = 2,
    /// Отобразить текст на экране SWYX-считывателя и предложить пользователю подписать его. Аргументы #C_JCCTRL: в
    /// pData должен содержать структуру #SWYX_DISPLAY_ARGUMENTS, ulDataLen - размер этой структуры.
    /// В случае если пользователь отменит операцию подписи, метод C_JCCTRL вернет CKR_FUNCTION_REJECTED (0x00000200),
    /// в случае тайм-аута - CKR_FUNCTION_CANCELED (0x00000050)
    JC_CTRL_SWYX_DISPLAY = 3,
    /// Сгенерировать новую ключевую пару на SWYX-считывателе. Аргументы pData и ulDataLen в #C_JCCTRL не используются.
    /// В случае, если пользователь отменит операцию метод C_JCCTRL вернет CKR_FUNCTION_REJECTED (0x00000200)
    JC_CTRL_PERSONALIZE = 4,
    /// Получить открытый ключ SWYX-считывателя. Аргументы #C_JCCTRL: pData - должен содержать открытый ключ, ulDataLen - размер этого ключа (должно быть 64 байта)
    JC_CTRL_ENROLL = 5,
    /// Получить серийный номер апплета, находящегося внутри SWYX-считывателя. Аргументы #C_JCCTRL: pData должен содержать серийный номер, ulDataLen - его длину (должно быть 8 байт)
    JC_CTRL_SWYX_GET_APPLET_SN = 6,
    /// Запросить ПИН-код пользователя. Аргументы pData и ulDataLen в #C_JCCTRL не используется.  В случае, если пользователь отменит операцию,
    /// метод #C_JCCTRL вернет CKR_FUNCTION_REJECTED (0x00000200), в случае тайм аута ввода (30 секунд) - CKR_FUNCTION_CANCELED (0x00000050)
    JC_CTRL_PIN_VERIFY = 7,
    /// Установить точку монтирования для Jacarta MicroSD. Аргументы #C_JCCTRL: pData - должен содержать строку с абсолютным путем до точки монтирования Jacarta MicroSD, ulDataLen - длину этой строки
    JC_CTRL_SET_MOUNT_INFO = 8,
    /// Получить точку монтирования для Jacarta MicroSD. Аргументы #C_JCCTRL: pData - будет строку с абсолютным путем до точки монтирования Jacarta MicroSD, ulDataLen - длину этой строки
    JC_CTRL_GET_MOUNT_INFO = 9,
    /// Получить идентификатор модели апплета и дату производства
    JC_CTRL_GET_ISD_DATA = 10,
    // Установка параметров персонализации для PKI апплета (LASER). Принимает на вход указатель на структуру JCCTRL_PerosnalizationData
    JC_CTRL_PKI_SET_COMPLEXITY = 13,
    /// Инициализировать генератор псевдослучайных чисел в апплете Криптотокен-1. Метод требует логина пользователя. Аргументы нулевые.
    JC_CTRL_INIT_CT1_PRNG = 14,
    /// Выполнить внутренние тесты в апплетах типа Криптотокен-1. Метод требует логина пользователя. Аргументы нулевые.
    JC_CTRL_DO_TESTS_CT1 = 15,
    /// Получение параметров персонализации для PKI аплета (LASER). Заполняет структуру JCCTRL_PerosnalizationData текущими параметрами персонализации
    JC_CTRL_PKI_GET_COMPLEXITY = 16,
    /// Очистка содержимого карты Laser. Метод требует логина администратора. Аргументы нулевые.
    JC_CTRL_PKI_WIPE_CARD = 17,
    /// Инициализация PIN - кода пользователя, через антифрод терминал.Аргументы: указатель на структуру INIT_PIN_ARGUMENTS и ее размер.
    JC_CTRL_PIN_INIT = 18,
    /// Установить метку токена - для всех токенов. Метод требует логина пользователя. pData - указатель на метку типа CK_UTF8CHAR_PTR, ulDataLen - размер метки в байтах, но не более 32
    JC_CTRL_SET_LABEL = 21,
    /// получить счетчики ПИН-кодов для Laser. pData - указатель на структуру JC_CTRL_PKI_PIN_INFO, ulDataLen - sizeof(JC_CTRL_PKI_PIN_INFO)
    JC_CTRL_PKI_GET_PIN_INFO = 26,
    /// получить challenge для внешней аутентификации Laser. pData - указатель на буфер для challenge, ulDataLen - размер буфера
    JC_CTRL_PKI_GET_CHALLENGE = 27,
    ///установить родительское окно для BIO операций. pData - HWND, ulDataLen - NULL
    JC_CTRL_PKI_SET_BIO_PARENT_HWND = 30,
    ///разблокировать пин пользователя. требует аутентификации администратором. pData - HWND, ulDataLen - NULL. Возвращает CKR_CANNOT_UNLOCK если разблокировка не возможна
    JC_CTRL_PKI_UNLOCK_USER_PIN = 33,

    // биометрические функции
    // получение структуры JC_BIO_SUPPORT_INFO с информацией о поддерживаемых картой биометрических возможностях
    JC_CTRL_BIOMETRIC_GET_SUPPORTED = JC_CTRL_BIOMETRIC | 12,
    // получение структуры JC_CTRL_AUTHTYPE с информации о поддерживаемых картой механизмах аутентификации
    JC_CTRL_BIOMETRIC_GET_AUTHTYPE = JC_CTRL_BIOMETRIC | 13,
    // получение идентификаторов зарегистрированных пальцев (0x01-0x0A) от 0 до 10 байт
    JC_CTRL_BIOMETRIC_GET_ENROLLED_FINGERS_INDEXES = JC_CTRL_BIOMETRIC | 14,
    // получение публичной биометрической информации о пальце по его индексу. индекс задается первым байтом pData, результат помещается в pData
    JC_CTRL_BIOMETRIC_GET_PUBLIC_DATA = JC_CTRL_BIOMETRIC | 15,
    // регистрация отпечатка на карте, pData должен содержать указать на структуру JC_CTRL_BIOMETRIC_ENROLL_DATA
    JC_CTRL_BIOMETRIC_ENROLL_FINGER = JC_CTRL_BIOMETRIC | 16,
    // удаление отпечатка по индексу, первый байт pData должен содержать индекс отпечатка
    JC_CTRL_BIOMETRIC_DELIST_FINGER = JC_CTRL_BIOMETRIC | 17,
    // установка пути к биометрической библиотеке. по умолчанию используется jcBIO.dll в текущей папке
    JC_CTRL_BIOMETRIC_SET_LIBRARY = JC_CTRL_BIOMETRIC | 18
};

struct SWYX_DISPLAY_ARGUMENTS
{
    /// тайм-аут подтверждения подписи. 1 единица - 5 секунд. 0 - ждать бесконечно
    CK_BYTE swyxDisplayTimeout;
    /// текст для отображения на экране считывателя в кодировке UTF8 длиной от 5 до 400 символов
    CK_UTF8CHAR_PTR text;
    /// длина текста
    CK_ULONG textLength;
};

struct CHECK_PIN_ARGUMENTS
{
    /// Тип пользователя
    CK_USER_TYPE userType;
    /// ПИН-код
    CK_UTF8CHAR_PTR pPin;
    /// Длина ПИН-кода
    CK_ULONG ulPinLen;
};

struct INIT_PIN_ARGUMENTS
{
    /// Код языка. 0x0409 - английский, 0x0419 - русский.
    CK_ULONG wLangId;
    /// Требовать ли повторного ввода ПИН-кода для подтверждения.
    CK_BBOOL confirmRequired;
};

typedef struct
{
    // модель
    CK_UTF8CHAR model[32];
    // дата производства в формате ГГГГММДД ( 1 мая 2010 = 20100501 )
    CK_BYTE manufacturingDate[8];
} IDS_DATA;

enum JC_CTRL_BIOMETRY_TYPE
{
    JC_CTRL_BIOMETRY_TYPE_PRECISE_BIOMATCH = 0x81,
    JC_CTRL_BIOMETRY_TYPE_PRECISE_ANSI = 0x82,
    JC_CTRL_BIOMETRY_TYPE_NEUROTECHNOLOGY_MEGAMATCHER = 0x83,
    JC_CTRL_BIOMETRY_TYPE_PRECISE_ISO = 0x84,
    JC_CTRL_BIOMETRY_TYPE_ID3_ISO = 0x85
};

// типы данных для поддержки биометрии
enum JC_CTRL_AUTHTYPE
{
    JC_CTRL_AUTHTYPE_PIN = 0x01,
    JC_CTRL_AUTHTYPE_BIO = 0x03,
    JC_CTRL_AUTHTYPE_PIN_OR_BIO = 0x04,
    JC_CTRL_AUTHTYPE_PIN_AND_BIO = 0x05
};

struct JC_CTRL_BIOMETRIC_ENROLL_DATA
{
    /**
     @brief Идентификатор пальца 1-мизинец левой руки - 10-мизинец правой руки.
     */
    CK_BYTE m_FingerIndex;

    /**
     @brief Публичные биометрические данные (получается от SDK)
     */
    CK_BYTE * m_PublicData;
    CK_ULONG m_PublicDataLen;
    /**
    @brief Личные биометрические данные (получается от SDK)
    */
    CK_BYTE * m_PrivateData;
    CK_ULONG m_PrivateDataLen;
    /**
    @brief Название устройства, применяемого для считывания +++ не вполне понятно зачем это нужно и какие есть ограничения на его значение
    */
    CK_BYTE * m_DeviceName;
    CK_ULONG m_DeviceNameLen;
};

struct JC_BIO_AUTH_DATA
{
    CK_BYTE * m_Image;
    CK_ULONG m_ImageLen;
    CK_ULONG m_FingerIndex;
};

struct JC_BIO_SUPPORT_INFO
{
    /** Поддерживается ли биометрия
    */
    CK_BBOOL m_BiometryEnabled;

    /**
     @brief Тип аутентификации, см. описание JC_CTRL_AUTHTYPE
     */
    enum JC_CTRL_AUTHTYPE m_AuthType;
    /** Длина дополнительных данных (кратна 3)
    */
    CK_ULONG m_OptionalDataLength;
    /** Указатель на дополнительные данные. Данные состоят из 0 и более 3-х байтовых последовательностей:
    1) Идентификатор реализации биометрии (JC_CTRL_BIOMETRY_TYPE)
    2) Используется или нет нативная реализация биометрии (01 если используется)
    3) Используется ли нативная реализация биометрии по умолчанию (01 если используется)
    */
    CK_BYTE_PTR m_OptionalData;
};

typedef enum
{
    UserPINTypeUndefined = 0x00,
    UserPINTypePIN = 0x01,
    UserPINTypeBio = 0x03,
    UserPINTypePINorBIO = 0x04,
    UserPINTypePINandBIO = 0x05
} EUserPINType;

typedef enum
{
    SecureMessagingMode_OFF = 0x00,
    SecureMessagingMode_RSA = 0x01,
    SecureMessagingMode_EC = 0x02
} ESecureMessagingMode;

enum JC_BIO_PURPOSE
{
    JC_BIO_PURPOSE_FAR_100      = (0x7fffffff / 100),
    JC_BIO_PURPOSE_FAR_1000     = (0x7fffffff / 1000),
    JC_BIO_PURPOSE_FAR_10000    = (0x7fffffff / 10000),
    JC_BIO_PURPOSE_FAR_100000   = (0x7fffffff / 100000),
    JC_BIO_PURPOSE_FAR_1000000  = (0x7fffffff / 1000000)
};

// структура вынесена отдельно, на случай если потребуется задавать ее целиком снаружи, как в оригинальном C_Control set complexity
struct JCCTRL_PersonalizationData
{
    uint8_t IsPersonalized; // 1 - апплет персонализирован, 0 - не персонализирован

    uint16_t MaxDFSize;
    uint8_t UserMaxAttempts;
    uint8_t UserMaxUnblock;
    uint8_t AdminMaxAttempts;
    uint8_t AdminIsChalResp;
    EUserPINType UserPinType;

    // not used
    uint8_t CardType;

    // 00
    uint8_t UserMinChars;
    uint8_t UserMaxChars;
    uint8_t UserMinAlphaChars;
    uint8_t UserMinLowerChars;
    uint8_t UserMinUpperChars;
    // 00
    uint8_t UserMinDigits;
    uint8_t UserMinNonAlphaChars;
    uint8_t UserPinHistorySize;

    // Параметры ПИН кода администратора. Неприменимо для 3des
    // 00
    uint8_t AdminMinChars;
    uint8_t AdminMaxChars;
    uint8_t AdminMinAlphaChars;
    uint8_t AdminMinLowerChars;
    uint8_t AdminMinUpperChars;
    // 00
    uint8_t AdminMinDigits;
    uint8_t AdminMinNonAlphaChars;
    // 00

    uint32_t UserPINValidForSeconds;
    uint32_t UserPINExpiresAfterDays;
    uint8_t AllowCardWipe;
    uint8_t BioImageQuality;
    uint32_t BioPurpose;
    uint8_t BioMaxFingers;

    uint8_t X931Use;
    uint8_t BioMaxUnblock;
    uint8_t UserMustChangeAfterUnlock;

    uint8_t UserMaxRepeatingPin;
    uint8_t UserMaxSequencePin;

    uint8_t AdminMaxRepeatingPin;
    uint8_t AdminMaxSequencePin;

    // digital signature specific
    uint8_t DSSupport;
    uint8_t MaxRSA1024Keys;
    uint8_t MaxRSA2048Keys;

    uint8_t DSPinMaxChars;
    uint8_t DSPinMinChars;
    uint8_t DSPinMinDigits;
    uint8_t DSPinMinAlphaChars;
    uint8_t DSPinMinNonAlphaChars;
    // 00
    uint8_t DSPinMinLowerChars;
    uint8_t DSPinMinUpperChars;
    uint8_t DSPinMinAlphabeticChars;
    uint8_t DSPinMaxRepeatingPin;
    uint8_t DSPinMaxSequencePin;
    uint8_t DSPinMaxUnblock;
    uint8_t DSPinMaxAttempts;

    uint8_t DSPUKMaxChars;
    uint8_t DSPUKMinChars;
    uint8_t DSPUKMinDigits;
    uint8_t DSPUKMinAlphaChars;
    uint8_t DSPUKMinNonAlphaChars;
    // 00
    uint8_t DSPUKMinLowerChars;
    uint8_t DSPUKMinUpperChars;
    uint8_t DSPUKMinAlphabeticChars;
    uint8_t DSPUKMaxRepeatingPin;
    uint8_t DSPUKMaxSequencePin;
    uint8_t DSPUKMaxUnblock;
    uint8_t DSPUKMaxAttempts;

    uint8_t DSSynchronizationOption;
    uint8_t DSVerificationPolicy;
    uint8_t DSActivationPINValue[16];
    uint8_t DSActivationPINLen;
    uint8_t DSDeactivationPINValue[16];
    uint8_t DSDeactivationPINLen;

    uint8_t UserPinAlways;

    uint8_t BioType;

    uint8_t UserMustChangeAfterFirstUse;
    uint8_t StartDate[8];

    uint8_t DefaultFinger;

    //режим обмена между токеном и компьютером
    ESecureMessagingMode SecureMessagingMode;

    //длина нового пин-кода администратора. м.б. = 0
    uint8_t NewAdminPinLength;
    //буфер нового пин-кода админстратора
    uint8_t NewAdminPin[16];
};

struct JC_CTRL_PKI_PIN_INFO
{
    /**
    * Количество попыток ввода ПИН-кода пользователя
    */
    CK_BYTE UserPinRemains;
    /**
    * Количество попыток аутентификации пользователя через BIO
    */
    CK_BYTE UserBioPinRemains;
    /**
    * Количество попыток ввода ПИН-кода администратора
    */
    CK_BYTE AdminPinRemains;
};

/*!
* \brief Указатель на метод, позволяющий выполнять операции со SWYX-считывателем
* \param slotID - идентификатор(номер) слота. Все слота можно получить с помощью C_GetSlotList
* \param operation - код операции (см. #JC_ANTIFRAUD_OPERATION_CODES)
* \param pArgument - указатель на структуру аргументов, для конкретного значения параметра в контексте каждой операции
* см. описание структуры #JC_ANTIFRAUD_OPERATION_CODES
* \param ulArgumentDataLen - длина агрумента команды
* \param pResultingData - указатель на массив байт в который будут записаны выходные данные
* Для конкретного значения параметра в контексте каждой операции см. описание структуры #JC_ANTIFRAUD_OPERATION_CODES
* \param pulResultingDataLen - указывает на длину: при входе вызывающая сторона записывает длину буфера pResultingData,
* при выходе JC_AFT записывает длину ответа
* Для конкретного значения параметра в контексте каждой операции см. описание структуры #JC_ANTIFRAUD_OPERATION_CODES
* \return код результата в терминах PKCS11
**/#ifdef __cplusplus
extern "C" {
#endif

#define CK_PKCS11_FUNCTION_INFO(name) extern CK_DECLARE_FUNCTION(CK_RV, name)
    CK_PKCS11_FUNCTION_INFO(JC_Antifraud)(CK_ULONG slotId, CK_ULONG operation, CK_BYTE_PTR pArgument, CK_ULONG ulArgumentDataLen, CK_BYTE_PTR pResultingData, CK_ULONG_PTR pulResultingDataLen);
#undef CK_PKCS11_FUNCTION_INFO

#define CK_PKCS11_FUNCTION_INFO(name) typedef CK_DECLARE_FUNCTION_POINTER(CK_RV, __PASTE(FP_,name))
    CK_PKCS11_FUNCTION_INFO(JC_Antifraud)(CK_ULONG slotId, CK_ULONG operation, CK_BYTE_PTR pArgument, CK_ULONG ulArgumentDataLen, CK_BYTE_PTR pResultingData, CK_ULONG_PTR pulResultingDataLen);
#undef CK_PKCS11_FUNCTION_INFO

#ifdef __cplusplus
}
#endif

enum JC_ANTIFRAUD_OPERATION_CODES
{
    /// Получение PIN-кода (пользователя/администратора от терминала после его ввода пользователем.
    /// в арументах на входе AFT_PIN_VERIFY_ARGUMENTS, результат AFT_PIN_VERIFY_RESPONCE
    AFT_GET_READER_VERSION = 0,
    AFT_PIN_VERIFY = 1,
    AFT_PIN_MODIFY = 2,
    AFT_PIN_GET_COPY = 3,
    AFT_SWYX_START = 4,
    AFT_SWYX_STOP = 5,
    AFT_SWYX_DISPLAY = 6,
    AFT_GET_PROPERTIES = 7,
    AFT_ENROLL = 8,
    AFT_CTRL_SWYX_GET_APPLET_SN = 9,

    AFT_ENTER_ADMIN_PIN = 10,
    AFT_SAVE_ADMIN_PIN = 11,
    AFT_INIT_CARD = 12,
    AFT_SET_USER_PIN = 13,
    AFT_VERIFY_PIN = 14,

    AFT_PERFORM_PERSONALIZATION = 15,

    AFT_IS_CARDLESS_MODE_SUPPORTED = 16,
};

#define AFT_MINIMAL_APPLICATION_VERSION_FOR_CARDLESS_MODE   34

// This specification splits the 1 - byte index into two nibbles : the lower nibble(4 bits) and the higher nibble(4 bits).
// In the lower nibble(4 bits) the original index(bMsgIndex) can be programmed.In the higher nibble(4 bits) additional information can be transferred.
// This additional information in the high nibble refers to an additional text which is to be displayed on the lines below the regular PIN entry.

// The JCR - 770 reader shall use the following text(bMsgIndex low nibble, line one) :
//   bMsgIndex       English message          Russian message
//   low nibble
//   0               “Enter PIN”              ”Введите PIN - код”
//   1               “Enter new PIN”          “Введите новый PIN”
//   2               “Repeat PIN”             “Повторите PIN”

// The JCR-770 reader shall use the following text (bMsgIndex high nibble, line two):
//   bMsgIndex       English message          Russian message
//   high nibble
//   0               (empty)                  (empty)
//   1               “of user”                “пользователя”
//   2               “of admin”               “администратора”
//   3               “for signature”          “подписи”

struct AFT_GET_READER_VERSION_RESPONCE
{
    CK_CHAR m_OSVersion[4]; // версия ОС считывателя
    CK_CHAR m_ApplicationVersion[4]; // версия приложения считывателя
};

struct AFT_PIN_VERIFY_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
    CK_BYTE  m_MessageIdx1;  // индекс собщения которое будет показано на антифрод терминале: 0x10/0x20/0x30 “Введите PIN пользователя/администратора/подписи”
    CK_BYTE  m_MessageIdx2;  // индекс собщения которое будет показано на антифрод терминале: 0x10/0x20/0x30 “Введите PIN пользователя/администратора/подписи”
};

struct AFT_SWYX_START_ARGUMENTS
{
    CK_BYTE m_bReference[8]; // reference параметр будет занесен в SWYX журнал по окончании SWYX работы
};

struct AFT_SWYX_DISPLAY_ARGUMENTS
{
    /// тайм-аут подтверждения подписи. 1 единица - 5 секунд. 0 - ждать бесконечно
    CK_BYTE m_swyxDisplayTimeout;
    /// 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_ULONG m_AFTLanguage;
    /// длина текста
    CK_ULONG m_textLength;
    CK_BYTE m_DisplayIndex; // (optional) indicator (0..1) for the bottom line. Default=0.
    /// текст для отображения на экране считывателя в кодировке UTF8 длиной от 5 до 400 символов
    //CK_UTF8CHAR m_text[];
};

struct ATF_SWYX_PROPERTIES
{
    CK_BYTE m_DisplayType; // 0=Text Only, 1=Graphical Display
    CK_ULONG m_LcdMaxCharacters; // Maximum number of characters on a single line
    CK_ULONG m_LcdMaxLines; // Maximum number of lines that can be used
    CK_ULONG m_GraphicMaxWidth; // Width of graphic display in pixels
    CK_ULONG m_GraphicMaxHeight; // Height of graphic display in pixels
    CK_BYTE m_GraphicColorDepth; // 1=Monochrome, 2=Grayscale(4bit), 4=Color(4bit)
    CK_ULONG m_MaxVirtualSize; // max nr of characters in VISIBLE buffer
};

struct AFT_PIN_VERIFY_RESPONCE
{
    CK_BYTE m_PIN[32]; // запрошенный PIN
};

struct AFT_PIN_MODIFY_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
    CK_BYTE  m_Confirmation; // 0x01 запросить подтверждение нового ПИн кода, 0x00 не запрашивать
    CK_BYTE  m_MessageIdx;
};

struct AFT_ENTER_ADMIN_PIN_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
    CK_BYTE  m_Confirmation; // 0x01 запросить подтверждение нового ПИн кода, 0x00 не запрашивать
    CK_BYTE  m_Message1Idx;
    CK_BYTE  m_Message2Idx;
};

struct AFT_SAVE_ADMIN_PIN_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
    CK_BYTE  m_PINLength;
    //CK_BYTE  m_PINvalue[];
};

struct AFT_INIT_CARD_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
};

struct AFT_LOGIN_SO_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
};


struct AFT_SET_USER_PIN_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
};

struct AFT_VERIFY_PIN_ARGUMENTS
{
    CK_ULONG m_AFTLanguage; // 0x0419, 0x0409 русский, английский язык используемый AFT терминалом для приглашений пользователю
    CK_BYTE  m_AFTTimeout;  // таймаут ожидания ввода пользователя на AFT терминале в секундах, 0 тайаут по умоляанию
    CK_BYTE  m_MessageIdx;
};

struct AFT_IS_CARDLESS_MODE_SUPPORTED_RESPONCE
{
    CK_BYTE m_CardlessSupport; // 0 no cardless mode, 1 cardless mode support
};

#pragma pack(pop)

#endif //JC_CONTROL_H
