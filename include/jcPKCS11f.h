#include "jcPKCS11t.h"

/**
* Получить список функций-расширений
* @param ppFunctionList список функций-расширений
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_GetFunctionList)
#ifdef CK_NEED_ARG_LIST
(
    JC_FUNCTION_LIST_PTR_PTR ppFunctionList
);
#endif

/**
* Получить информацию о считывателе.
*
* @param pReaderName имя считывателя
* @param ulReaderNameSize размер имени считывателя в байтах. М.б. равен CK_UNAVAILABLE_INFORMATION если имя считывателя заканчивается 0
* @param pProperties информация о считывателе
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_GetReaderProperties)
#ifdef CK_NEED_ARG_LIST
(
    CK_UTF8CHAR_PTR pReaderName,
    CK_ULONG ulReaderNameSize,
    JC_TOKEN_PROPERTIES_PTR pProperties
);
#endif

/**
* Установить метку. Требуется аутентификация.
* @param slotID идентификатор слота
* @param pLabel метка
* @param ulLabelSize размер метки в байтах (не более 32. М.б. равен CK_UNAVAILABLE_INFORMATION если метка заканчивается 0)
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SetLabel)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_UTF8CHAR_PTR pLabel,
    CK_ULONG ulLabelSize
);
#endif

/**
* Получить информацию о ридере
* @param slotID идентификатор слота
* @param pISD информация о ридере
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_GetISD)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_ISD_DATA_PTR pISD
);
#endif

/**
* Установить точку монтирования для Jacarta MicroSD
* @param pMountPoint абсолютный путь до точки монтирования Jacarta MicroSD
* @param ulMountPointSize длина пути в байтах. М.б. CK_UNAVAILABLE_INFORMATION, если путь заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SD_SetMountPoint)
#ifdef CK_NEED_ARG_LIST
(
    CK_UTF8CHAR_PTR pMountPoint,
    CK_ULONG ulMountPointSize
);
#endif

/**
* Получить точку монтирования для Jacarta MicroSD
* @param pMountPoint буфер для абсолютного пути до точки монтирования Jacarta MicroSD
* @param pulMountPointSize длина пути в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SD_GetMountPoint)
#ifdef CK_NEED_ARG_LIST
(
    CK_UTF8CHAR_PTR pMountPoint,
    CK_ULONG_PTR pulMountPointSize
);
#endif

/**
* Установка параметров персонализации для PKI апплета. Параметры персонализации применяются только при инициализации апплета
* @param slotID идентификатор слота
* @param pInfo параметры персонализации
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_SetComplexity)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PKI_PERSONALIZATION_INFO_PTR pInfo
);
#endif

/**
* Получение параметров персонализации для PKI апплета.
* @param slotID идентификатор слота
* @param pInfo параметры персонализации
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_GetComplexity)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PKI_PERSONALIZATION_INFO_PTR pInfo
);
#endif

/**
* Очистка содержимого карты Laser. Метод требует аутентификации администратором.
* @param slotID идентификатор слота
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_WipeCard)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Получить счетчики ПИН-кодов для Laser.
* @param slotID идентификатор слота
* @param pInfo счетчики ПИН-кодов
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_GetPINInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PKI_PIN_INFO_PTR pInfo
);
#endif

/**
* Получить challenge для внешней аутентификации Laser.
* @param slotID идентификатор слота
* @param pChallange буфер для challenge
* @param ulChallangeSize размер буфера в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_GetChallenge)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pChallange,
    CK_ULONG ulChallangeSize
);
#endif

/**
* Разблокировать пин пользователя для Laser. требует аутентификации администратором.
* @param slotID идентификатор слота
* @return   код ошибки
*           CKR_CANNOT_UNLOCK если разблокировка не возможна или код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_UnlockUserPIN)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Получить информацию о поддержке биометрии
* @param slotID идентификатор слота
* @param pInfo информация о поддержке биометрии
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_BIO_GetSupported)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PKI_BIO_SUPPORT_INFO_PTR pInfo
);
#endif

/**
* Получить идентификаторы зарегистрированных пальцев
* @param slotID идентификатор слота
* @param pFingers буфер для идентификаторов пальцев
* @param pulFingerCount количество идентификаторов пальцев
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_BIO_GetFingerIndexes)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pFingers,
    CK_ULONG_PTR pulFingerCount
);
#endif

/**
* Получить публичную биометрическую информацию о пальце по его идентификатору.
* @param slotID идентификатор слота
* @param fingerIndex идентификатор пальца (от 1 до 10)
* @param pPublicData буфер для публичной биометрической информации о пальце
* @param pulPublicDataSize размер буфера в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_BIO_GetFingerPublicData)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE fingerIndex,
    CK_BYTE_PTR pPublicData,
    CK_ULONG_PTR pulPublicDataSize
);
#endif

/**
* Установить биометрическую информацию о пальце по его идентификатору. Требует аутентификации администратором.
* @param slotID идентификатор слота
* @param fingerIndex идентификатор пальца (от 1 до 10)
* @param pPublicData буфер публичной биометрической информации о пальце
* @param ulPublicDataSize размер буфера публичной информации в байтах
* @param pPrivateData буфер закрытой биометрической информации о пальце
* @param ulPrivateDataSize размер буфера закрытой информации в байтах
* @param pDeviceName имя устройства
* @param ulDeviceNameSize размер имени устройства в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_BIO_SetFingerData)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE fingerIndex,
    CK_BYTE_PTR pPublicData,
    CK_ULONG ulPublicDataSize,
    CK_BYTE_PTR pPrivateData,
    CK_ULONG ulPrivateDataSize,
    CK_BYTE_PTR pDeviceName,
    CK_ULONG ulDeviceNameSize
);
#endif

/**
* Удалить отпечаток по идентификатору пальца. Требует аутентификации администратором.
* @param slotID идентификатор слота
* @param fingerIndex идентификатор пальца (от 1 до 10)
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_BIO_DeleteFinger)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE fingerIndex
);
#endif

/**
* Установить путь к биометрической библиотеке
* @param pLibraryPath абсолютный путь до библиотеки
* @param ulLibraryPathSize размер пути до библиотеки в байтах или CK_UNAVAILABLE_INFORMATION, если путь заканчивается 0.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_BIO_SetLibrary)
#ifdef CK_NEED_ARG_LIST
(
    CK_UTF8CHAR_PTR pLibraryPath,
    CK_ULONG ulLibraryPathSize
);
#endif

/**
* Инициализировать генератор псевдослучайных чисел в апплете Криптотокен-1. Требует аутентификации пользователем.
* @param slotID идентификатор слота
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT1_InitPrng)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Выполнить внутренние тесты в апплете Криптотокен-1. Требует аутентификации пользователем.
* @param slotID идентификатор слота
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT1_DoTests)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Проверить персонализирован ли Криптотокен-2.
* @param slotID идентификатор слота
* @param pPersonalized признак персонализации
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_IsPersonalized)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BBOOL_PTR pPersonalized
);
#endif

/**
* Получить дополнительную информацию о Криптотокен-2.
* @param slotID идентификатор слота
* @param pInfo дополнительная информацию о Криптотокен-2
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_ReadExtInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_KT2_EXTENDED_INFO_PTR pInfo
);
#endif

/**
* Рассчитать контрольную сумму Криптотокен-2.
* @param slotID идентификатор слота
* @param pCheckSum буфер для контрольной суммы
* @param pulCheckSumSize длина контрольной суммы в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_CalcCheckSum)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pCheckSum,
    CK_ULONG_PTR pulCheckSumSize
);
#endif

/**
* Установить ПИН-код подписи для КТ2. Требуется аутентификация пользователем
* @param slotID идентификатор слота
* @param pPin ПИН-код подписи
* @param ulPinSize длина ПИН-кода подписи в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПИН-код подписи заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_SetSignaturePIN)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_UTF8CHAR_PTR pPin,
    CK_ULONG ulPinSize
);
#endif

/**
* Установить ПИН-код подписи для КТ2. Требуется аутентификация пользователем.
* @param slotID идентификатор слота
* @param pOldPin старый ПИН-код подписи
* @param ulOldPinSize длина старого ПИН-кода подписи в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПИН-код подписи заканчивается 0
* @param pNewPin новый ПИН-код подписи
* @param ulNewPinSize длина нового ПИН-кода подписи в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПИН-код подписи заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_ChangeSignaturePIN)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_UTF8CHAR_PTR pOldPin,
    CK_ULONG ulOldPinSize,
    CK_UTF8CHAR_PTR pNewPin,
    CK_ULONG ulNewPinSize
);
#endif

/**
 * @brief Установить ПУК-код для КТ2. Требуется аутентификация администратором.
 * @param slotID идентификатор слота
 * @param pPuk ПУК-код
 * @param ulPukSize длина ПУК-кода в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПУК-код заканчивается 0
 * @return код ошибки
 */
CK_PKCS11_FUNCTION_INFO(JC_CT2_SetPUK)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_UTF8CHAR_PTR pPuk,
    CK_ULONG ulPukSize
);
#endif

/**
* @brief Установить политику ПИН-кода. Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @param pinType тип ПИН-кода
* @param pPinPolicy политика ПИН-кода
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT2_SetPINPolicy)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_KT2_PIN_TYPE pinType,
    JC_KT2_PIN_POLICY_PTR pPinPolicy
);
#endif

/**
* Функция не поддерживается и всегда возвращает CKR_FUNCTION_NOT_SUPPORTED
* @param hSession
* @param enabled
* @param exclusive
* @param hPublicKey
* @param pPrivateKeyValue
* @param ulPrivateKeyValueSize
* @return CKR_FUNCTION_NOT_SUPPORTED
*/
CK_PKCS11_FUNCTION_INFO(JC_deprecated_0)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BBOOL enabled,
    CK_BBOOL exclusive,
    CK_OBJECT_HANDLE hPublicKey,
    CK_BYTE_PTR pPrivateKeyValue,
    CK_ULONG ulPrivateKeyValueSize
);
#endif

/**
* Получить версию Атнифрод-считывателя
* @param    slotID                  идентификатор слота
* @param    pulOSVersion            версия ОС
* @param    pulApplicationVersion   версия приложения
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_GetReaderVersion)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_ULONG_PTR pulOSVersion,
    CK_ULONG_PTR pulApplicationVersion
);
#endif

/**
* Получить работает ли Атнифрод-считыватель в бескарточном режиме
* @param    slotID      идентификатор слота
* @param    pSupported  признак поддержки бес карточного режима. Равен CK_TRUE, если бескарточный режим поддерживается
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_IsCardlessSupported)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BBOOL_PTR pSupported
);
#endif

/**
* Включить SWYX-режим.
* @param    slotID      идентификатор слота
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SWYX_Start)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Отобразить текст на экране SWYX-считывателя и предложить пользователю подписать его.
* В случае если пользователь отменит операцию подписи, метод JC_SWYX_Display вернет CKR_FUNCTION_REJECTED (0x00000200),
в случае тайм-аута - CKR_FUNCTION_CANCELED (0x00000050)
* @param    slotID          идентификатор слота
* @param    language        Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout       тайм-аут
* @param    ulDisplayIndex  индекс дисплея
* @param    pText           текст для отображения на экране считывателя в кодировке UTF8 длиной от 5 до 400 символов
* @param    ulTextSize      длина текста в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SWYX_Display)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout,
    CK_ULONG ulDisplayIndex,
    CK_UTF8CHAR_PTR pText,
    CK_ULONG ulTextSize
);
#endif

/**
* Выключить SWYX-режим.
* @param    slotID              идентификатор слота
* @param    pSignature          буфер для подписи
* @param    pulSignatureSize    размер буфера для подписи в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SWYX_Stop)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pSignature,
    CK_ULONG_PTR pulSignatureSize
);
#endif

/**
* Инициализировать карту, вставленную в Антифрод-считыватель (Криптотокен)
* @param    slotID          идентификатор слота
* @param    language        Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout       тайм-аут
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_InitCard)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout
);
#endif


/**
* Получить серийный номер апплета, находящегося внутри Антифрод-считывателя.
* @param    slotID          идентификатор слота
* @param    pSerial         буфер для серийного номера
* @param    pulSerialSize   размер буфера для серийного номера в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_GetSerialNumber)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pSerial,
    CK_ULONG_PTR pulSerialSize
);
#endif

/**
* Инициализировать ПИН-код пользователя на карте в Антифрод-считывателе (Криптотокен).
* @param    slotID              идентификатор слота
* @param    language            Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout           тайм-аут
* @param    confirmRequired     Требовать ли повторного ввода ПИН-кода для подтверждения. CK_TRUE - требовать
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_InitUserPin)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout,
    CK_BBOOL confirmRequired
);
#endif

/**
* Запросить ПИН-код и проверить его на карте.
* @param    slotID              идентификатор слота
* @param    userType            тип ПИН-кода
* @param    language            Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout           тайм-аут
* @param    messageIndex        индекс сообщения которое будет показано на антифрод терминале
* @return код ошибки или CKR_FUNCTION_REJECTED, если пользователь отменил операцию
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_VerifyPin)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_USER_TYPE userType,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout,
    CK_BYTE messageIndex
);
#endif

/**
* Сменить ПИН-код.
* @param    slotID              идентификатор слота
* @param    userType            тип ПИН-кода
* @param    language            Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout           тайм-аут
* @param    confirmRequired     Требовать ли повторного ввода ПИН-кода для подтверждения. CK_TRUE - требовать
* @return код ошибки или CKR_FUNCTION_REJECTED, если пользователь отменил операцию
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_ModifyPin)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_USER_TYPE userType,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout,
    CK_BBOOL confirmRequired
);
#endif

/**
* Получить свойства считывателя.
* @param    slotID      идентификатор слота
* @param    pProperties свойства считывателя
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_GetProperties)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    SWYX_PROPERTIES_RESPONSE_PTR pProperties
);
#endif

/**
* Сгенерировать новую ключевую пару на считывателе. Карта может отсутствовать
* @param    slotID      идентификатор слота
* @return код ошибки или CKR_FUNCTION_REJECTED, если пользователь отменил операцию
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_Personalize)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Получить открытый ключ считывателя. Карта может отсутствовать
* @param    slotID              идентификатор слота
* @param    pPublicKey          открытый ключ
* @param    pulPublicKeySize    размер открытого ключа в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_GetPublicKey)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pPublicKey,
    CK_ULONG_PTR pulPublicKeySize
);
#endif

/**
* Запросить у пользователя ПИН-код и сохранить его внутри считывателя (но не на карте). Карта может отсутствовать
* @param    slotID              идентификатор слота
* @param    language            Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout           тайм-аут
* @param    confirmRequired     Требовать ли повторного ввода ПИН-кода для подтверждения. CK_TRUE - требовать
* @param    messageIndex1       индекс первого сообщения которое будет показано на антифрод терминале
* @param    messageIndex2       индекс второго сообщения которое будет показано на антифрод терминале
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_EnterLocalPin)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout,
    CK_BBOOL confirmRequired,
    CK_BYTE messageIndex1, 
    CK_BYTE messageIndex2
);
#endif

/**
* Записать ПИН-код переданный приложением внутрь считывателя (но не на карту). Карта может отсутствовать
* @param    slotID          идентификатор слота
* @param    language        Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout       тайм-аут
* @param    pPin            ПИН-код
* @param    ulPinLength     размер ПИН-кода в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_WriteLocalPin)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout,
    CK_BYTE_PTR pPin,
    CK_ULONG ulPinLength
);
#endif

/**
* Запрашивает ПИН-код и возвращает его значение
* @return CKR_BUFFER_TOO_SMALL если буфер указан (pPin != NULL) и его размер слишком мал для ПИН-кода
*/
/**
* Запросить ПИН-код и вернуть его приложению. Карта может отсутствовать
* @param    slotID          идентификатор слота
* @param    userType        тип пользователя. CK_UNAVAILABLE_INFORMATION - если тип пользователя неизвестен
* @param    language        Код языка. JC_AFT_LANGUAGE_TYPE_ENGLISH(0x0409) - английский, JC_AFT_LANGUAGE_TYPE_RUSSIAN(0x0419) - русский.
* @param    ulTimeout       тайм-аут
* @param    confirmMode     режим подтверждения ввода
* @param    pPin            режим подтверждения ввода
* @param    ulPinLength     входной - размер буфера для ПИН-кода в байтах, выходной - размер ПИН-кода в байтах
* @param    messageIndex1   индекс первого сообщения которое будет показано на антифрод терминале
* @param    messageIndex2   индекс второго сообщения которое будет показано на антифрод терминале
* @return код ошибки или CKR_BUFFER_TOO_SMALL если буфер указан (pPin != NULL) и его размер слишком мал для ПИН-кода
*/
CK_PKCS11_FUNCTION_INFO(JC_AFT_EnterAndReadPin)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_USER_TYPE userType,
    JC_AFT_LANGUAGE_TYPE language,
    CK_ULONG ulTimeout,
    JC_CONFIRM_MODE confirmMode,
    CK_BYTE_PTR pPin,
    CK_ULONG_PTR pulPinLength,
    CK_BYTE messageIndex1,
    CK_BYTE messageIndex2
);
#endif

/**
* Формирование PKCS#7 сообщения типа signed data.
* @param hSession PKCS#11 сессия.
* @param pData данные для подписи.
* @param ulDataLength длина данных для подписи.
* @param hSignCertificate сертификат создателя сообщения.
* @param ppEnvelope указатель на указатель на буфер в который будет записано сообщение. Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulEnvelopeSize указатель на длину созданного буфера с сообщением.
* @param hPrivateKey закрытый ключ создателя сообщения. Может устанавливаться в CK_INVALID_HANDLE, тогда поиск закрытого ключа будет осуществляться по CKA_ID сертификата.
* @param phCertificates указатель на массив сертификатов, которые следует добавить в сообщение.
* @param ulCertificatesCount количество сертификатов в параметре certificates.
* @param flags флаги
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(pkcs7Sign)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pData,
    CK_ULONG ulDataLength,
    CK_OBJECT_HANDLE hSignCertificate,
    CK_BYTE_PTR_PTR ppEnvelope,
    CK_ULONG_PTR pulEnvelopeSize,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_OBJECT_HANDLE_PTR phCertificates,
    CK_ULONG ulCertificatesCount,
    JC_PKCS7_FLAGS flags
);
#endif

/**
* Проверка подписи в PKCS#7 сообщении типа signed data. Используются программные реализации методов проверки подписи и хеширования.
* @param pEnvelope PKCS#7 сообщение.
* @param ulEnvelopeSize длина PKCS#7 сообщения.
* @param pData если сообщение не содержит самих данных, то необходимо передать их в этот параметр.
* @param ulDataSize длина данных.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(pkcs7Verify)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pEnvelope,
    CK_ULONG ulEnvelopeSize,
    CK_BYTE_PTR pData,
    CK_ULONG ulDataSize
);
#endif

/**
* Проверка подписи в PKCS#7 сообщении типа signed data. Используется аппаратная реализация проверки подписи. Для КТ2 ключ для проверки подписи д.б. предварительно импортирован на токен.
* @param hSession PKCS#11 сессия.
* @param pEnvelope PKCS#7 сообщение.
* @param pEnvelopeSize длина PKCS#7 сообщения.
* @param pData Если сообщение не содержит данных (используется отсоединенная подпись), то необходимо передать их в этот параметр.
* @param pDataSize длина данных.
* @param flags флаги. Может принимать значение 0 или PKCS7_HARDWARE_HASH.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(pkcs7VerifyHW)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pEnvelope,
    CK_ULONG pEnvelopeSize,
    CK_BYTE_PTR pData,
    CK_ULONG pDataSize,
    JC_PKCS7_FLAGS flags
);
#endif

/**
* Проверка подписи в PKCS#7 сообщении типа signed data с дополнительной проверкой. Для КТ2 ключ для проверки подписи д.б. предварительно импортирован на токен.
* на соответствие подписи ключа проверки ЭП открытому ключу доверенного сертификата. Используется аппаратная реализация проверки подписи.
* @param hSession               PKCS#11 сессия.
* @param pEnvelope              PKCS#7 сообщение.
* @param pEnvelopeSize          Длина PKCS#7 сообщения.
* @param pData                  Если сообщение не содержит данных (используется отсоединенная подпись), то необходимо передать их в этот параметр.
* @param pDataSize              Длина данных.
* @param pTrustedSigner         Буфер с доверенным сертификатом в DER формате.
* @param ulTrustedSignerSize    Длина буфера.
* @param flags Флаги. Может принимать значение 0 или PKCS7_HARDWARE_HASH.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(pkcs7TrustedVerifyHW)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pEnvelope,
    CK_ULONG pEnvelopeSize,
    CK_BYTE_PTR pData,
    CK_ULONG pDataSize,
    CK_BYTE_PTR pTrustedSigner,
    CK_ULONG ulTrustedSignerSize,
    JC_PKCS7_FLAGS flags
);
#endif

/**
* Проверка подписи сертификата на соответствие ключу его подписанта. Для КТ2 ключ для проверки подписи д.б. предварительно импортирован на токен.
* Проверка подписи выполняется аппаратно. Хеширование выполняется аппаратно, если
* была вызвана функция useHardwareHash(CK_TRUE).
* @param    hSession                PKCS11# сессия.
* @param    pCertificate            Буфер с сертификатом в DER формате, проверка подписи по которому выполняется.
* @param    ulCertificateSize   Длина буфера.
* @param    pTrustedSignerCertificate           Буфер с сертификатом доверенного подписанта проверяемого сертификата в DER формате.
* @param    ulTrustedSignerCertificateSize  Длина буфера.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(checkCertSignature)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pCertificate,
    CK_ULONG ulCertificateSize,
    CK_BYTE_PTR pTrustedSignerCertificate,
    CK_ULONG ulTrustedSignerCertificateSize
);
#endif

/**
* Извлечение данных и сертификата подписанта из PKCS#7 контейнера.
* @param    pEnvelope               PKCS#7 контейнер.
* @param    ulEnvelopeSize          Длина контейнера.
* @param    ppSignerCertificate     Буфер для записи сертификата.
* @param    pulSignerCertificate    Длина буфера.
* @param    ppAttachedData          Буфер для записи данных.
* @param    pulAttachedDataSize     Длина буфера.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(pkcs7Parse)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pEnvelope,
    CK_ULONG ulEnvelopeSize,
    CK_BYTE_PTR_PTR ppSignerCertificate,
    CK_ULONG_PTR pulSignerCertificate,
    CK_BYTE_PTR_PTR ppAttachedData,
    CK_ULONG_PTR pulAttachedDataSize
);
#endif

/**
* Извлечение данных, подписи и сертификата подписанта из PKCS#7 контейнера.
* @param    pEnvelope       PKCS#7 контейнер.
* @param    ulEnvelopeSize  Длина контейнера.
* @param    ppSignerCert        Буфер для записи сертификата.
* @param    pulSignerCertLen    Длина буфера.
* @param    ppAttachedData          Буфер для записи данных.
* @param    pulAttachedDataLength       Длина буфера.
* @param    ppSignature       Буфер для записи подписи.
* @param    pulSignatureLength Длина буфера.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(pkcs7ParseEx)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pEnvelope,
    CK_ULONG ulEnvelopeSize,
    CK_BYTE_PTR_PTR ppSignerCert,
    CK_ULONG_PTR pulSignerCertLen,
    CK_BYTE_PTR_PTR ppAttachedData,
    CK_ULONG_PTR pulAttachedDataLength,
    CK_BYTE_PTR_PTR ppSignature,
    CK_ULONG_PTR pulSignatureLength
);
#endif


/**
* Проверка пути сертификации.
* @param hSession PKCS#11 сессия.
* @param hCertificateToVerify сертификат, который необходимо проверить.
* @param phTrustedCertificates массив доверенных сертификатов.
* @param ulTrustedCertificatesLength количество сертификатов в trustedCertificates.
* @param phCertificateChain промежуточные сертификаты.
* @param ulCertificateChainLength количество сертификатов в certificateChain.
* @param ppCrls массив списков отозванных сертификатов.
* @param pulCrlsLengths массив с длинами списков отозванных сертификатов.
* @param ulCrlsLength количество списков отозванных сертификатов в crls.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(certVerify)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hCertificateToVerify,
    CK_OBJECT_HANDLE_PTR phTrustedCertificates,
    CK_ULONG ulTrustedCertificatesLength,
    CK_OBJECT_HANDLE_PTR phCertificateChain,
    CK_ULONG ulCertificateChainLength,
    CK_BYTE_PTR_PTR ppCrls,
    CK_ULONG_PTR pulCrlsLengths,
    CK_ULONG ulCrlsLength
);
#endif

/**
* Сформировать запрос на сертификат.
* @param hSession PKCS#11 сессия.
* @param hPublicKey открытый ключ для создания сертификата.
* @param ppDN distinguished name. В параметр должен передаваться массив строк. В первой строке должен располагаться тип поля в текстовой форме, или
*                OID, например, "CN". Во второй строке должно располагаться значение поля в UTF8.
*                Последующие поля передаются в следующих строках. Количество строк должно быть четным.
* @param ulDNLength количество строк в dn.
* @param ppCsr указатель на указатель на буфер в который будет записан запрос на сертификат.
*                Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param ulCsrLength длина буфера в который будет записан запрос на сертификат.
* @param hPrivateKey закрытый ключ, парный publicKey. Если значение установленно в 0, то поиск закрытого ключа будет осуществляться
*                    по CKA_ID открытого ключа.
* @param ppAttributes дополнительные атрибуты для включения в запрос. Формат аналогичен dn.
* @param ulAttributesLength количество строк в attributes.
* @param ppExtensions расширения для включения в запрос. Формат аналогичен dn.
* @param ulExtensionsLength количество строк в extensions.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(createCSR)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hPublicKey,
    CK_UTF8CHAR_PTR_PTR ppDN,
    CK_ULONG ulDNLength,
    CK_BYTE_PTR_PTR ppCsr,
    CK_ULONG_PTR pulCsrLength,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_CHAR_PTR_PTR ppAttributes,
    CK_ULONG ulAttributesLength,
    CK_CHAR_PTR_PTR ppExtensions,
    CK_ULONG ulExtensionsLength
);
#endif

/**
* Расширенное формирование запроса на сертификат.
* @param hSession PKCS#11 сессия.
* @param hPublicKey открытый ключ для создания сертификата.
* @param ppDN distinguished name. В параметр должен передаваться массив строк. В первой строке должен располагаться тип поля в текстовой форме, или
*                OID, например, "CN". Во второй строке должно располагаться значение поля в UTF8.
*                Последующие поля передаются в следующих строках. Количество строк должно быть четным.
* @param ulDNLength количество строк в dn.
* @param ppCsr указатель на указатель на буфер в который будет записан запрос на сертификат.
*                Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param ulCsrLength длина буфера в который будет записан запрос на сертификат.
* @param hPrivateKey закрытый ключ, парный publicKey. Если значение установленно в 0, то поиск закрытого ключа будет осуществляться
*                    по CKA_ID открытого ключа.
* @param ppAttributes дополнительные атрибуты для включения в запрос. Формат аналогичен dn.
* @param ulAttributesLength количество строк в attributes.
* @param ppExtensions расширения для включения в запрос. Формат аналогичен dn.
* @param ulExtensionsLength количество строк в extensions.
* @param pSignMechanism указатель на механизм подписи
* @return код ошибки
*/

CK_PKCS11_FUNCTION_INFO(createCSREx)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hPublicKey,
    CK_UTF8CHAR_PTR_PTR ppDN,
    CK_ULONG ulDNLength,
    CK_BYTE_PTR_PTR ppCsr,
    CK_ULONG_PTR pulCsrLength,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_CHAR_PTR_PTR ppAttributes,
    CK_ULONG ulAttributesLength,
    CK_CHAR_PTR_PTR ppExtensions,
    CK_ULONG ulExtensionsLength,
    CK_MECHANISM_PTR pSignMechanism
);
#endif

/**
* Расширенное формирование запроса на сертификат при помощи сторонних реализаций PKCS#11.
* @param pFunctionList функции PKCS#11
* @param hSession PKCS#11 сессия.
* @param hPublicKey открытый ключ для создания сертификата.
* @param ppDN distinguished name. В параметр должен передаваться массив строк. В первой строке должен располагаться тип поля в текстовой форме, или
*                OID, например, "CN". Во второй строке должно располагаться значение поля в UTF8.
*                Последующие поля передаются в следующих строках. Количество строк должно быть четным.
* @param ulDNLength количество строк в dn.
* @param ppCsr указатель на указатель на буфер в который будет записан запрос на сертификат.
*                Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param ulCsrLength длина буфера в который будет записан запрос на сертификат.
* @param hPrivateKey закрытый ключ, парный publicKey. Если значение установленно в 0, то поиск закрытого ключа будет осуществляться
*                    по CKA_ID открытого ключа.
* @param ppAttributes дополнительные атрибуты для включения в запрос. Формат аналогичен dn.
* @param ulAttributesLength количество строк в attributes.
* @param ppExtensions расширения для включения в запрос. Формат аналогичен dn.
* @param ulExtensionsLength количество строк в extensions.
* @param pSignMechanism указатель на механизм подписи
* @return код ошибки
*/

CK_PKCS11_FUNCTION_INFO(JC_CreateCertificateRequest)
#ifdef CK_NEED_ARG_LIST
(
    CK_FUNCTION_LIST_PTR pFunctionList,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hPublicKey,
    CK_UTF8CHAR_PTR_PTR ppDN,
    CK_ULONG ulDNLength,
    CK_BYTE_PTR_PTR ppCsr,
    CK_ULONG_PTR pulCsrLength,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_CHAR_PTR_PTR ppAttributes,
    CK_ULONG ulAttributesLength,
    CK_CHAR_PTR_PTR ppExtensions,
    CK_ULONG ulExtensionsLength,
    CK_MECHANISM_PTR pSignMechanism
);
#endif

/**
* Проверить подпись в запросе на сертификат.
* @param pRequest запрос на сертификат.
* @param ulRequestSize длина запроса на сертификат
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(verifyReq)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pRequest,
    CK_ULONG ulRequestSize
);
#endif

/**
* Получить определенные данные их x509 сертификата
* @param pX509data сертификат в формате x509
* @param ulX509dataSize его длина
* @param dataType тип получаемых данных:
    X509_SUBJECT (0x01) получить владельца сертификата (нуль терминированная строка)
    X509_ISSUER (0x02)  получить издателя сертификата (нуль терминированная строка)
    X509_SERIAL (0x03)  получить серийный номер сертификата
* @param pOutputdata выходные данные
* @param pulOutputdataSize их длина
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(getCertificateAttribute)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pX509data,
    CK_ULONG ulX509dataSize,
    JC_EX_X509_DATA_TYPE dataType,
    CK_BYTE_PTR_PTR pOutputdata,
    CK_ULONG_PTR pulOutputdataSize
);
#endif

/**
* Расширенная проверка подпись в запросе на сертификат. Подпись может проверятся на токене
* @param hSession PKCS#11 сессия.
* @param hPublicKey открытый ключ из ключевой пары, использованной при создании запроса на сертификат
* @param pCsr запрос на сертификат.
* @param ulCsrLength длина запроса на сертификат
* @param pMechanism механизм проверки подписи
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(verifyReqEx)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hPublicKey,
    CK_BYTE_PTR pCsr,
    CK_ULONG ulCsrLength,
    CK_MECHANISM_PTR pMechanism
);
#endif

/**
* Создать сертификат из запроса.
* @param hSession PKCS#11 сессия.
* @param pCsr запрос на сертификат.
* @param ulCsrLength длина запроса на сертификат
* @param hPrivateKey закрытый ключ издателя сертификата
* @param pSerial серийный номер сертификата в строковом представлении
* @param ppIssuerDN distinguished name издателя сертификата. В параметр должен передаваться массив строк. В первой строке должен располагаться тип поля в текстовой форме,
                    или OID, например, "CN". Во второй строке должно располагаться значение поля в UTF8.
                    Если issuerDN равно нулю, distinguished name издателя устанавливается равным distinguished namе субъекта.
* @param ulIssuerDNLength количество строк в issuerDN.
* @param ulDays срок действия сертификата в днях.
* @param ppCertificate указатель на указатель на буфер в который будет записан сертификат.
                        Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulCertificateLength длина буфера в который будет записан сертификат.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(genCert)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pCsr,
    CK_ULONG ulCsrLength,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_CHAR_PTR pSerial,
    CK_UTF8CHAR_PTR_PTR ppIssuerDN,
    CK_ULONG ulIssuerDNLength,
    CK_ULONG ulDays,
    CK_BYTE_PTR_PTR ppCertificate,
    CK_ULONG_PTR pulCertificateLength
);
#endif

/**
* Расширенное создание сертификата из запроса
* @param hSession PKCS#11 сессия.
* @param pCsr запрос на сертификат.
* @param ulCsrLength длина запроса на сертификат
* @param hPrivateKey закрытый ключ издателя сертификата
* @param hPublicKey открытый ключ издателя сертификата
* @param pSerial серийный номер сертификата в строковом представлении
* @param ppIssuerDN distinguished name издателя сертификата. В параметр должен передаваться массив строк. В первой строке должен располагаться тип поля в текстовой форме,
                    или OID, например, "CN". Во второй строке должно располагаться значение поля в UTF8.
                    Если issuerDN равно нулю, distinguished name издателя устанавливается равным distinguished namе субъекта.
* @param ulIssuerDNLength количество строк в issuerDN.
* @param ulDays срок действия сертификата в днях.
* @param ppCertificate указатель на указатель на буфер в который будет записан сертификат.
                        Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulCertificateLength длина буфера в который будет записан сертификат.
* @param pMechanism механизм подписи
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(genCertEx)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pCsr,
    CK_ULONG ulCsrLength,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_OBJECT_HANDLE hPublicKey,
    CK_CHAR_PTR pSerial,
    CK_UTF8CHAR_PTR_PTR ppIssuerDN,
    CK_ULONG ulIssuerDNLength,
    CK_ULONG ulDays,
    CK_BYTE_PTR_PTR ppCertificate,
    CK_ULONG_PTR pulCertificateLength,
    CK_MECHANISM_PTR pMechanism
);
#endif

/**
* Получить информацию о сертификате в текстовом виде.
* @param hSession PKCS#11 сессия.
* @param hCertificate сертификат.
* @param ppCertificateInfo указатель на указатель на буфер в который будет записана информация о сертификате.
                         Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulCertificateInfoLength длина буфера в который будет записана информация о сертификате.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(getCertificateInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hCertificate,
    CK_CHAR_PTR_PTR ppCertificateInfo,
    CK_ULONG_PTR pulCertificateInfoLength
);
#endif

/**
* Формирование PKCS#7 сообщения типа signed data.
* @param hSession PKCS#11 сессия.
* @param pData данные для подписи.
* @param ulDataLength длина данных для подписи.
* @param pSignCertificate сертификат создателя сообщения в DER кодировке (массив байт).
* @param ulSignCertificateLength длина signCertificate.
* @param ppEnvelope указатель на указатель на буфер в который будет записано сообщение.
                  Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulEnvelopeLength указатель на длину созданного буфера с сообщением.
* @param hPrivateKey закрытый ключ создателя сообщения. Может устанавливаться в 0, тогда поиск закрытого ключа будет осуществлятся по CKA_ID сертификата.
* @param phCertificates указатель на массив сертификатов, которые следует добавить в сообщение.
* @param ulCertificatesLength количество сертификатов в параметре certificates.
* @param flags флаги. Может принимать значение 0 и PKCS7_DETACHED_SIGNATURE.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(pkcs7SignEx)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pData,
    CK_ULONG ulDataLength,
    CK_BYTE_PTR pSignCertificate,
    CK_ULONG ulSignCertificateLength,
    CK_BYTE_PTR_PTR ppEnvelope,
    CK_ULONG_PTR pulEnvelopeLength,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_OBJECT_HANDLE_PTR phCertificates,
    CK_ULONG ulCertificatesLength,
    JC_PKCS7_FLAGS flags
);
#endif

/**
* Получить информацию о сертификате в текстовом виде.
* @param pCertificate сертификат в DER кодировке (массив байт).
* @param ulCertificateLength длина certificate.
* @param ppCertificateInfo указатель на указатель на буфер в который будет записана информация о сертификате.
                           Буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulCertificateInfoLength длина буфера в который будет записана информация о сертификате.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(getCertificateInfoEx)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pCertificate,
    CK_ULONG ulCertificateLength,
    CK_CHAR_PTR_PTR ppCertificateInfo,
    CK_ULONG_PTR pulCertificateInfoLength
);
#endif

/**
* Освободить буфер, выделенный в одной из других функций.
* @param pBuffer буфер.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(freeBuffer)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pBuffer
);
#endif

/**
* Установить использование аппаратного вычисления значения хеш-функции в функциях расширения.
* @param hardware - CK_TRUE - использовать аппаратное хеширование; CK_FALSE - использовать программное хеширование.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(useHardwareHash)
#ifdef CK_NEED_ARG_LIST
(
    CK_BBOOL hardware
);
#endif

/**
* Начать установку TLS соединения. Функция может возвращать код CKR_NEED_MORE_DATA, если установка соединения со стороны сервера не завершена, и требуются дополнительные данные от сервера.
* @param ppContext контекст соединения. После окончания работы с контекстом необходимо освободить его, вызвав функцию TLSCloseConnection().
* @param hSession PKCS#11 сессия.
* @param hCertificate сертификат.
* @param hPrivateKey закрытый ключ.
* @param pDataIn данные полученные от другой стороны (NULL_PTR в случае работы в режиме TLS клиента).
* @param ulDataInLength длина данных, полученных от другой стороны (0 в случае работы в режиме TLS клиента).
* @param pDataOut данные для передачи другой стороне
* @param ulDataOutLength длина данных для передачи другой стороне (при вызове значение на которое указывает указатель должно содержать доступную длину буфера dataOut)
* @param serverMode устанавливать соединение в режиме TLS сервера (иначе в режиме TLS клиента)
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(TLSEstablishConnectionBegin)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR_PTR ppContext,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hCertificate,
    CK_OBJECT_HANDLE hPrivateKey,
    CK_BYTE_PTR pDataIn,
    CK_ULONG ulDataInLength,
    CK_BYTE_PTR pDataOut,
    CK_ULONG_PTR ulDataOutLength,
    CK_BBOOL serverMode
);
#endif

/**
* Продолжить установку TLS соединения. Функция может возвращать код CKR_NEED_MORE_DATA, если установка соединения со стороны сервера не завершена, и требуются дополнительные данные от сервера.
* @param pContext контекст соединения.
* @param pDataIn данные полученные от другой стороны.
* @param ulDataInLength длина данных, полученных от другой стороны.
* @param pDataOut данные для передачи другой стороне
* @param ulDataOutLength длина данных для передачи другой стороне (при вызове значение на которое указывает указатель должно содержать доступную длину буфера dataOut)
* @param serverMode устанавливать соединение в режиме TLS сервера (иначе в режиме TLS клиента)
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(TLSEstablishConnectionContinue)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR pContext,
    CK_BYTE_PTR pDataIn,
    CK_ULONG ulDataInLength,
    CK_BYTE_PTR pDataOut,
    CK_ULONG_PTR ulDataOutLength,
    CK_BBOOL serverMode
);
#endif

/**
* Получить сертификат сервера (peer-а). Можно вызывать только после успешного установления соединения.
* @param pContext контекст соединения.
* @param pCertificate сертификат сервера.
* @param pulCertificateLength длина сертификата сервера (при вызове значение на которое указывает указатель должно содержать доступную длину буфера dataOut).
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(TLSGetPeerCertificate)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR pContext,
    CK_BYTE_PTR pCertificate,
    CK_ULONG_PTR pulCertificateLength
);
#endif

/**
* Получить значение открытого ключа сервера (peer-а). Можно вызывать только после успешного установления соединения.
* @param pContext контекст соединения.
* @param pPublicKeyValue открытый ключа.
* @param pulPublicKeyValueLength длина открытого ключа сервера (при вызове значение на которое указывает указатель должно содержать доступную длину буфера dataOut).
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(TLSGetPeerPublicKeyValue)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR pContext,
    CK_BYTE_PTR pPublicKeyValue,
    CK_ULONG_PTR pulPublicKeyValueLength
);
#endif

/*
* Закодировать данные для передачи на сервер.
* @param pContext контекст соединения.
* @param pDataIn данные для передачи.
* @param ulDataInLength длина данных для передачи.
* @param pDataOut данные для передачи другой стороне. Не меньше 1 и не больше 0x4000 (16Kb).
* @param ulDataOutLength длина данных для передачи другой стороне (при вызове значение на которое указывает указатель должно содержать доступную длину буфера dataOut)
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(TLSEncodeData)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR pContext,
    CK_BYTE_PTR pDataIn,
    CK_ULONG ulDataInLength,
    CK_BYTE_PTR pDataOut,
    CK_ULONG_PTR ulDataOutLength
);
#endif

/*
* Раскодировать данные, пришедшие от сервера.
* @param pContext контекст соединения.
* @param pDataIn данные от сервера.
* @param ulDataInLength длина данных от сервера.
* @param pDataOut данные для передачи другой стороне. Не меньше 1 и не больше 0x4000 (16Kb).
* @param ulDataOutLength длина данных для передачи другой стороне (при вызове значение на которое указывает указатель должно содержать доступную длину буфера dataOut)
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(TLSDecodeData)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR pContext,
    CK_BYTE_PTR pDataIn,
    CK_ULONG ulDataInLength,
    CK_BYTE_PTR pDataOut,
    CK_ULONG_PTR ulDataOutLength
);
#endif

/*
* Закрыть TLS соединение
* @param pContext контекст соединения.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(TLSCloseConnection)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR pContext
);
#endif

/**
* Получить счетчики ПИН-кодов для ГОСТ
* @param slotID идентификатор слота
* @param pPinCounters информация о счетчиках ПИН-кодов
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT1_ReadPinCounters)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_CT1_PIN_COUNTERS_PTR pPinCounters
);
#endif

/**
* Получить счетчики ПИН-кодов для Datastore
* @param slotID идентификатор слота
* @param pPinCounters информация о счетчиках ПИН-кодов
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_DS_ReadPinCounters)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_DS_PIN_COUNTERS_PTR pPinCounters
);
#endif

/**
* Получить расширенную информацию для WebPass
* @param slotID идентификатор слота
* @param pInfo расширенная информация о WebPass
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_WP_ReadExtInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_WP_INFO_PTR pInfo
);
#endif

/**
* Считать значение слота WebPass. Результирующее значение зависит от типа слота
* Тип слота       | Возвращаемое значение
* ----------------|-----------------------
* JC_WP_TYPE_OTP  | Случайный одноразовый пароль с префиксом (если префикс был указан при создании)
* JC_WP_TYPE_PASS | Многоразовый пароль
* JC_WP_TYPE_URL  | Адрес с префиксом в виде кода платформы и суффиксом в виде символа с кодом 0x0D
*
* @param hSession дескриптор сессии
* @param hObject дескриптор объекта
* @param pOutput буфер для считываемого значения
* @param pulOutputLength размер буфера для считываемого значения
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_WP_ReadValue)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_BYTE_PTR pOutput,
    CK_ULONG_PTR pulOutputLength
);
#endif

/**
* Загрузить контейнер для виртуального токена
* @param type тип токена
* @param pFileName абсолютный путь до файла, содержащего контейнер
* @param ulFileNameSize длина пути в байтах. М.б. CK_UNAVAILABLE_INFORMATION, если путь заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_VT_LoadContainer)
#ifdef CK_NEED_ARG_LIST
(
    JC_APPLET_TYPE type,
    CK_UTF8CHAR_PTR pFileName,
    CK_ULONG ulFileNameSize
);
#endif

/**
* Выгрузить контейнер для виртуального токена
* @param pFileName абсолютный путь до файла, содержащего контейнер
* @param ulFileNameSize длина пути в байтах. М.б. CK_UNAVAILABLE_INFORMATION, если путь заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_VT_UnloadContainer)
#ifdef CK_NEED_ARG_LIST
(
    CK_UTF8CHAR_PTR pFileName,
    CK_ULONG ulFileNameSize
);
#endif

/**
* Проверить принадлежит ли слот виртуальному токену
* @param slotID идентификатор слота
* @param pVirtual CK_TRUE, если слот принадлежит виртуальному токену
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_VT_IsVirtual)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BBOOL_PTR pVirtual
);
#endif

/**
* Управление логированием библиотеки. М.б. вызвана до вызова C_Initialize
* @param mode режим логирования
* @param pFileName имя файла для лога. Каталоги должны существовать. М.б. указано stdout для вывода на консоль
* @param ulFileNameLength размер имени файла в байтах. М.б. равен CK_UNAVAILABLE_INFORMATION если имя файла заканчивается 0
*/
CK_PKCS11_FUNCTION_INFO(JC_SetLog)
#ifdef CK_NEED_ARG_LIST
(
    JC_LOG_MODE mode,
    CK_UTF8CHAR_PTR pFileName,
    CK_ULONG ulFileNameLength
);
#endif

/**
* Получить информацию о WebPass, заданную на этапе производства
* @param slotID идентификатор слота
* @param pInfo информация о WebPass, заданную на этапе производства
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_WP_ReadProductionInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_WP_PRODUCTION_INFO_PTR pInfo
);
#endif

/**
* Инициализировать установить значение атрибута защищенного объекта. Требует аутентификации пользователем.
* @param hSession дескриптор сессии
* @param hObject дескриптор объекта
* @param pAttribute адрес массива описателей устанавливаемых атрибутов объекта
* @param ulCount число описателей устанавливаемых атрибутов
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT1_SetAttributeValue)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hObject,
    CK_ATTRIBUTE_PTR pAttribute,
    CK_ULONG ulCount
);
#endif

/**
* Считать пароль профиля SecurLogon. Требует аутентификации пользователем
* @param hSession дескриптор сессии
* @param hProfile дескриптор о профиля SecurLogon
* @param pPassword буфер для пароля
* @param pulPasswordLength длина буфера пароля в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SL_ReadPassword)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hProfile,
    CK_BYTE_PTR pPassword,
    CK_ULONG_PTR pulPasswordLength
);
#endif

/**
* Сохранить пароль профиля SecurLogon. Требует аутентификации пользователем
* @param hSession дескриптор сессии
* @param hProfile дескриптор о профиля SecurLogon
* @param pPassword пароль
* @param ulPasswordLength длина пароля в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SL_WritePassword)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hProfile,
    CK_BYTE_PTR pPassword,
    CK_ULONG ulPasswordLength
);
#endif

/**
* Получить расширенную информацию об устройстве
* @param slotID идентификатор слота
* @param pExtendedInfo расширенная информация об устройстве
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_GetExtendedInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_F2_EXTENDED_INFO_PTR pExtendedInfo
);
#endif

/**
* Установить жизненный цикл Flash2. Функция прототип, возможно ее изменение. Требуется аутентификация администратором.
* После успешного выполнения необходимо повтор найти токен, т.к. в процессе выполнения команды он отключается и подключается заново.
* Схема допустимых переключений жизненных циклов
*
* Текущий жизненный цикл          | Жизненный цикл, который можно установить
* --------------------------------|-------------------------------------------------------------------------------
* JC_F2_LIFE_CYCLE_EMPTY          | JC_F2_LIFE_CYCLE_READY_TO_CLEAR, доступен вызов JC_F2_Format
* JC_F2_LIFE_CYCLE_INITIALIZED    | JC_F2_LIFE_CYCLE_READY_TO_CLEAR, JC_F2_LIFE_CYCLE_READY
* JC_F2_LIFE_CYCLE_READY          | JC_F2_LIFE_CYCLE_READY_TO_CLEAR, JC_F2_LIFE_CYCLE_INITIALIZED (только до инициализации ключа шифрования скрытых разделов, см. JC_F2_EXTENDED_INFO.HasPartitionKey)
* JC_F2_LIFE_CYCLE_READY_MOUNTED  | JC_F2_LIFE_CYCLE_READY_TO_CLEAR, JC_F2_LIFE_CYCLE_READY
* JC_F2_LIFE_CYCLE_READY_TO_CLEAR | JC_F2_LIFE_CYCLE_EMPTY (не требуется аутентификация)
*
* @param slotID идентификатор слота
* @param lifeCycle устанавливаемый жизненный цикл за исключением JC_F2_LIFE_CYCLE_READY_MOUNTED
* @param bForceOperation если значение выставлено в CK_TRUE, то функция выполняется без ожидания завершения операций чтения/записи для разделов
*                        если значение выставлено в CK_FALSE, то функция может возвращать CKR_DEVICE_BUSY, если существуют не завершенные операции чтения/записи
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_SetLifeCycle)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_F2_LIFE_CYCLE lifeCycle,
    CK_BBOOL bForceOperation
);
#endif

/**
* Форматировать устройство Flash2. Все размеры задаются в секторах, размер которого составляет 512 байт. Минимальный размер раздела JC_F2_MIN_PARTITION_SIZE байт
* М.б. выполнено только в жизненном цикле JC_F2_LIFE_CYCLE_EMPTY. Переводит устройство в жизненный цикл JC_F2_LIFE_CYCLE_INITIALIZED.
* После успешного выполнения необходимо повторно найти токен, т.к. в процессе выполнения команды он отключается и подключается заново.
* Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @param ulPublicRWSize размер открытого RW раздела в секторах
* @param ulPublicCDSize размер открытого CDROM раздела в секторах
* @param ulPrivateCDSize размер скрытого CDROM раздела в секторах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_Format)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_ULONG ulPublicRWSize,
    CK_ULONG ulPublicCDSize,
    CK_ULONG ulPrivateCDSize
);
#endif

/**
* Установить размеры образов, записываемых на раздел CDROM. Все размеры задаются в секторах размер которого составляет 512 байт
* М.б. выполнена только в жизненном цикле JC_F2_LIFE_CYCLE_INITIALIZED.
* Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @param ulPublicISOSize размер образа, записываемый на открытый CDROM раздел в секторах
* @param ulPrivateISOSize размер образа, записываемый на скрытый CDROM раздел в секторах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_SetISOSizes)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_ULONG ulPublicISOSize,
    CK_ULONG ulPrivateISOSize
);
#endif

/**
* Обновить прошивку антифрод терминала.
* @param slotID идентификатор слота
* @param pszReaderName имя считывателя, может быть NULL, если присутствует, то используется вместо идентификатора слота
* @param pOS адрес
* @param ulOSSize размер
* @param pApplication адрес
* @param ulApplicationSize размер
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT1_UpgradeVascoFW)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_CHAR_PTR pszReaderName,
    CK_VOID_PTR pOS,
    CK_ULONG ulOSSize,
    CK_VOID_PTR pApplication,
    CK_ULONG ulApplicationSize
);
#endif

/**
* Получить запрос, необходимый для подключения скрытого раздела. М.б. выполнена только в жизненном цикле JC_F2_LIFE_CYCLE_READY.
* Требуется аутентификация пользователем. М.б. выполнена только в жизненном цикле JC_F2_LIFE_CYCLE_READY.
* @param hSession дескриптор сессии
* @param hTokenKey дескриптор ключа токена
* @param pChallenge буфер для запроса не подключение скрытого раздела
* @param pulChallengeSize размер буфера запроса на подключение скрытого раздела в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_GetMountChallenge)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hTokenKey,
    CK_BYTE_PTR pChallenge,
    CK_ULONG_PTR pulChallengeSize
);
#endif

/**
* Подключить скрытый раздел с использованием ответа на запрос, полученный при помощи JC_F2_CreateMountResponse.
* Переводит устройство в жизненный цикл JC_F2_LIFE_CYCLE_READY_MOUNTED.
* После успешного выполнения необходимо повторно найти токен, т.к. в процессе выполнения команды он отключается и подключается заново.
* Требуется аутентификация пользователем или администратором. М.б. выполнена только в жизненном цикле JC_F2_LIFE_CYCLE_READY.
* @param slotID идентификатор слота
* @param forceMount CK_TRUE - подключить скрытый раздел без ожидания завершения операция чтения/записи. CK_FALSE - если активны операции чтения/записи данных, то будет возвращен код ошибки CKR_DEVICE_BUSY
* @param pResponse буфер ответа на запрос
* @param ulResponseSize длина ответа на запрос в байтах
* @param offlineMode CK_TRUE, если монтирование происходит в автономном режиме
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_MountPrivateDisks)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BBOOL forceMount,
    CK_BYTE_PTR pResponse,
    CK_ULONG ulResponseSize,
    CK_BBOOL offlineMode
);
#endif

/**
* Отключить скрытый раздел.
* Переводит устройство в жизненный цикл JC_F2_LIFE_CYCLE_READY.
* После успешного выполнения необходимо повторно найти токен, т.к. в процессе выполнения команды он отключается и подключается заново.
* Требуется аутентификация пользователем или администратором при отключении без ожидания. М.б. выполнена только на жизненном цикле JC_F2_LIFE_CYCLE_READY_MOUNTED
* @param slotID идентификатор слота
* @param forceUmount CK_TRUE - отключить скрытый раздел без ожидания завершения операция чтения/записи. CK_FALSE - если активны операции чтения/записи данных, то будет возвращен код ошибки CKR_DEVICE_BUSY
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_UmountPrivateDisks)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BBOOL forceUmount
);
#endif

/**
* Создать ответ на запрос подключения скрытого раздела, полученного при помощи функции JC_F2_GetMountChallenge
* Требуется аутентификация пользователем. М.б. выполнена только на жизненном цикле JC_F2_LIFE_CYCLE_READY
* @param hSession дескриптор сессии
* @param hMasterKey дескриптор мастер-ключа
* @param pChallange запроса на подключение скрытого раздела
* @param ulChallengeSize размер запроса на подключение скрытого раздела в байтах
* @param pResponse буфер для ответа на запрос
* @param pulResponseSize размер буфера для ответа на запрос в байтах
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_CreateMountResponse)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE hMasterKey,
    CK_BYTE_PTR pChallange,
    CK_ULONG ulChallengeSize,
    CK_BYTE_PTR pResponse,
    CK_ULONG_PTR pulResponseSize
);
#endif

/**
* Инициализировать шифрование разделов токена.
* Требуется аутентификация администратором. М.б. выполнена только на жизненном цикле JC_F2_LIFE_CYCLE_INITIALIZED. Данные для инициализации
* для токена администратора генерируются случайно с размером 32 байта, для токена пользователя получаются как результат выполнения функции JC_F2_CreateInitResponse
* @param slotID идентификатор слота
* @param tokenType тип инициализации токена
* @param algorithm алгоритм шифрования скрытых разделов
* @param pInitData данные инициализации
* @param ulInitDataSize размер данных инициализации в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_InitPartitionKey)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_F2_TOKEN_TYPE tokenType,
    JC_F2_ALGORITHM_TYPE algorithm,
    CK_VOID_PTR pInitData,
    CK_ULONG ulInitDataSize
);
#endif

/**
* Установить ПУК-код для Flash2. Требуется аутентификация администратором.
* Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @param pPuk ПУК-код
* @param ulPukSize размер ПУК-кода в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПУК-код заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_SetPUK)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_UTF8CHAR_PTR pPuk,
    CK_ULONG ulPukSize
);
#endif

/**
* Установить политику ПИН-кода. Требуется аутентификация администратором.
* Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @param pinType тип политики
* @param pPinPolicy политика
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_SetPINPolicy)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_F2_PIN_TYPE pinType,
    JC_F2_PIN_POLICY_PTR pPinPolicy
);
#endif

/**
* Сохранить описание токена. При задании tokenType == CK_UNAVAILABLE_INFORMATION и pDescription == NULL и ulDescriptionSize == 0 информация об описании токена удаляется
* Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @param tokenType тип токена
* @param pDescription описание токена
* @param ulDescriptionSize размер описания токена в байтах. М.б. равен CK_UNAVAILABLE_INFORMATION если описание заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_SetDescription)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_F2_TOKEN_TYPE tokenType,
    CK_UTF8CHAR_PTR pDescription,
    CK_ULONG ulDescriptionSize
);
#endif

/**
* Прочитать описание токена
* @param slotID идентификатор слота
* @param pTokenType тип токена
* @param pDescription буфер для описания токена
* @param pulDescriptionSize размер буфера для описания токена в байтах.
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_GetDescription)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_F2_TOKEN_TYPE_PTR pTokenType,
    CK_UTF8CHAR_PTR pDescription,
    CK_ULONG_PTR pulDescriptionSize
);
#endif

/**
* Попытаться восстановить состояние токена после ошибки CKR_BROKEN_STATE
* Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_RestoreState)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Создать запрос для инициализации токена
* @param slotID идентификатор слота
* @param pChallenge буфер для запроса на инициализацию токена
* @param pulChallengeSize размер буфера для запроса на инициализацию токена в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_GetInitChallenge)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pChallenge,
    CK_ULONG_PTR pulChallengeSize
);
#endif

/**
* Создать ответ на запрос инициализации токена, полученный при помощи функции JC_F2_GetInitChallenge
* Требуется аутентификация администратором. М.б. выполнена только на жизненном цикле JC_F2_LIFE_CYCLE_READY
* @param slotID идентификатор слота
* @param pChallenge запрос на инициализацию токена
* @param ulChallengeSize размер запроса на инициализацию токена в байтах
* @param pResponse данные для инициализации токена пользователя
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_CreateInitResponse)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pChallenge,
    CK_ULONG ulChallengeSize,
    JC_F2_INIT_RESPONSE_PTR pResponse
);
#endif

/**
* Вычислить ответ на запрос подключения скрытых разделов без использования токена
* @param pChallenge информация о запросе на подключение скрытых разделов
* @param pResponse буфер для ответа на запрос
* @param pulResponseSize размер буфера для ответа на запрос в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_CreateMountResponseSW)
#ifdef CK_NEED_ARG_LIST
(
    JC_F2_MOUNT_CHALLENGE_INFO_PTR pChallenge,
    CK_BYTE_PTR pResponse,
    CK_ULONG_PTR pulResponseSize
);
#endif

/**
* Установить режим перезаписи скрытых разделов. Ключ шифрования раздела - это результат выполнения функции JC_F2_CreateInitResponse: JC_F2_INIT_RESPONSE.PartitionKey
* @param slotID идентификатор слота
* @param pPartitionKey значение ключа шифрования скрытых разделов
* @param ulPartitionKeySize размер ключа шифрования скрытых разделов в байтах
* @param forceOperation если значение выставлено в CK_TRUE, то функция выполняется без ожидания завершения операций чтения/записи для разделов
*                        если значение выставлено в CK_FALSE, то функция может возвращать CKR_DEVICE_BUSY, если существуют не завершенные операции чтения/записи
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_EnableISORewrite)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pPartitionKey,
    CK_ULONG ulPartitionKeySize,
    CK_BBOOL forceOperation
);
#endif

/**
* Подготовить токен к автономному монтированию
* Требуется аутентификация администратором.
* @param slotID идентификатор слота
* @param pChallenge буфер для запроса на автономное монтирование токена
* @param pulChallengeSize размер буфера для запроса на автономное монтирование токена в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_GetOfflineMountChallenge)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pChallenge,
    CK_ULONG_PTR pulChallengeSize
);
#endif

/**
* Создать ответ на запрос автономного монтирования токена, полученный при помощи функции JC_F2_GetOfflineMountChallenge
* @param pAuthorizationKey мастер ключ авторизации
* @param ulAurthorizationKeySize размер мастер ключа авторизации в байтах
* @param pChallenge запрос на автономное монтирование токена
* @param ulChallengeSize размер запроса на автономное монтирование токена в байтах
* @param pResponse буфер для ответа на запрос автономного монтирования
* @param pulResponseSize размер буфера для ответа на запрос автономного монтирования в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_CreateOfflineMountResponse)
#ifdef CK_NEED_ARG_LIST
(
    CK_BYTE_PTR pAuthorizationKey,
    CK_ULONG ulAurthorizationKeySize,
    CK_BYTE_PTR pChallenge,
    CK_ULONG ulChallengeSize,
    CK_BYTE_PTR pResponse,
    CK_ULONG_PTR pulResponseSize
);
#endif

/**
* Записать или выбрать ключ авторизации. При пере подключении или отключении токена, активным становится ключ авторизации со значением JC_MIN_AUTHORIZATION_KEY_INDEX. Ключ с таким индексом
* записывается на токен при вызове функции JC_F2_InitPartitionKey.
* Требуется аутентификация администратором или пользователем.
* @param slotID идентификатор слота
* @param ulKeyIndex индекс ключа в пределах [JC_MIN_AUTHORIZATION_KEY_INDEX, JC_MAX_AUTHORIZATION_KEY_INDEX]. При значении индекса JC_MIN_AUTHORIZATION_KEY_INDEX задавать значение ключа запрещено
* @param pAuthorizationKey ключ авторизации. М.б. равен NULL, если необходимо выбрать уже существующий ключ
* @param ulAurthorizationKeySize размер ключа авторизации в байтах. М.б. равен 0, если необходимо выбрать уже существующий ключ
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_SetAuthorizationKey)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_ULONG ulKeyIndex,
    CK_BYTE_PTR pAuthorizationKey,
    CK_ULONG ulAurthorizationKeySize
);
#endif

/**
* Инициализация операции шифрования/расшифрования без использования токена
* @param mode тип операции. Допустимые значения: JC_SW_OPERATION_MODE_ENCRYPT и JC_SW_OPERATION_MODE_DECRYPT
* @param pMechanism механизм шифрования. Поддерживаются механизмы: CKM_DES3_CBC, CKM_DES3_ECB, CKM_AES_CBC, CKM_AES_ECB, CKM_GOST28147, CKM_GOST28147_ECB
* @param pKeyAttributes атрибуты ключа шифрования
* @param ulKeyAttributesCount количество атрибутов ключа шифрования
* @param pOperation дескриптор операции шифрования/расшифрования
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_EncryptDecryptInit)
#ifdef CK_NEED_ARG_LIST
(
    JC_SW_OPERATION_MODE mode,
    CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_PTR pKeyAttributes,
    CK_ULONG ulKeyAttributesCount,
    JC_SW_OPERATION_HANDLE_PTR pOperation
);
#endif

/**
* Выполнить шифрование/расшифрование. После выполнения функции операция шифрования/расшифрования завершается, за исключением завершения с кодом ошибки CKR_BUFFER_TOO_SMALL
* @param operation дескриптор операции
* @param pData обрабатываемые данные
* @param ulDataSize размер обрабатываемых данных в байтах
* @param pResult буфер для результата обработки данных
* @param pulResultSize размер буфера для результата обработки данных в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_EncryptDecrypt)
#ifdef CK_NEED_ARG_LIST
(
    JC_SW_OPERATION_HANDLE operation,
    CK_BYTE_PTR pData,
    CK_ULONG ulDataSize,
    CK_BYTE_PTR pResult,
    CK_ULONG_PTR pulResultSize
);
#endif

/**
* Выполнить частичное шифрование/расшифрование. При возникновении ошибки, за исключением ошибки CKR_BUFFER_TOO_SMALL, операция завершается. При успешном выполнении возможно вызвать 
* JC_SW_EncryptDecryptUpdate или JC_SW_EncryptDecryptFinal
* @param operation дескриптор операции
* @param pData обрабатываемые данные
* @param ulDataSize размер обрабатываемых данных в байтах
* @param pResult буфер для результата обработки данных
* @param pulResultSize размер буфера для результата обработки данных в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_EncryptDecryptUpdate)
#ifdef CK_NEED_ARG_LIST
(
    JC_SW_OPERATION_HANDLE operation,
    CK_BYTE_PTR pData,
    CK_ULONG ulDataSize,
    CK_BYTE_PTR pResult,
    CK_ULONG_PTR pulResultSize
);
#endif

/**
* Завершить частичное шифрование/расшифрование. При успешном выполнении или возникновении ошибки, за исключением ошибки CKR_BUFFER_TOO_SMALL, операция завершается.
* @param operation дескриптор операции
* @param pResult буфер для результата обработки данных
* @param pulResultSize размер буфера для результата обработки данных в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_EncryptDecryptFinal)
#ifdef CK_NEED_ARG_LIST
(
    JC_SW_OPERATION_HANDLE operation,
    CK_BYTE_PTR pResult,
    CK_ULONG_PTR pulResultSize
);
#endif

/**
* Получить версию используемой библиотеки iOS для работы со считывателями
* @param pVersion версия библиотеки
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_iOS_GetLibVersion)
#ifdef CK_NEED_ARG_LIST
(
    char * pVersion
);
#endif

/**
* Получить версию прошивки и "железа" считывателя
* @param pFirmware версия прошивки
* @param pHardware версия "железа"
* @param estabilish флаг
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_iOS_GetDevFirmwareHardware)
#ifdef CK_NEED_ARG_LIST
(
    char * pFirmware,
    char * pHardware,
    CK_BBOOL estabilish
);
#endif

/**
* Инициализация хэширования без использования токена
* @param pMechanism механизм хэширования. Поддерживаются механизмы: CKM_MD5, CKM_SHA_1, CKM_SHA256, CKM_SHA384, CKM_SHA512, CKM_GOSTR3411
* @param pOperation дескриптор операции хэширования
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_DigestInit)
#ifdef CK_NEED_ARG_LIST
(
    CK_MECHANISM_PTR pMechanism,
    JC_SW_OPERATION_HANDLE_PTR pOperation
);
#endif

/**
* Выполнить хэширования. После выполнения функции операция хэширования завершается, за исключением завершения с кодом ошибки CKR_BUFFER_TOO_SMALL
* @param operation дескриптор операции
* @param pData обрабатываемые данные
* @param ulDataSize размер обрабатываемых данных в байтах
* @param pResult буфер для результата обработки данных
* @param pulResultSize размер буфера для результата обработки данных в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_Digest)
#ifdef CK_NEED_ARG_LIST
(
    JC_SW_OPERATION_HANDLE operation,
    CK_BYTE_PTR pData,
    CK_ULONG ulDataSize,
    CK_BYTE_PTR pResult,
    CK_ULONG_PTR pulResultSize
);
#endif

/**
* Выполнить частичное хэширования. При возникновении ошибки, за исключением ошибки CKR_BUFFER_TOO_SMALL, операция завершается. При успешном выполнении возможно вызвать
* JC_SW_DigestUpdate или JC_SW_DigestFinal
* @param operation дескриптор операции
* @param pData обрабатываемые данные
* @param ulDataSize размер обрабатываемых данных в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_DigestUpdate)
#ifdef CK_NEED_ARG_LIST
(
    JC_SW_OPERATION_HANDLE operation,
    CK_BYTE_PTR pData,
    CK_ULONG ulDataSize
);
#endif

/**
* Завершить частичное хэширование. При успешном выполнении или возникновении ошибки, за исключением ошибки CKR_BUFFER_TOO_SMALL, операция завершается.
* @param operation дескриптор операции
* @param pResult буфер для результата обработки данных
* @param pulResultSize размер буфера для результата обработки данных в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SW_DigestFinal)
#ifdef CK_NEED_ARG_LIST
(
    JC_SW_OPERATION_HANDLE operation,
    CK_BYTE_PTR pResult,
    CK_ULONG_PTR pulResultSize
);
#endif

/**
* Получить полный номер версии библиотеки
* @param pVersionInfo информация о полном номере версии библиотеки
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_GetVersionInfo)
#ifdef CK_NEED_ARG_LIST
(
    JC_VERSION_INFO_PTR pVersionInfo
);
#endif

/**
* Функция не поддерживается и всегда возвращает CKR_FUNCTION_NOT_SUPPORTED
* @param slotID
* @param enabled
* @return CKR_FUNCTION_NOT_SUPPORTED
*/
CK_PKCS11_FUNCTION_INFO(JC_deprecated_1)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BBOOL enabled
);
#endif

/**
* Получить счетчики ПИН-кода для Laser
* @param slotID идентификатор слота
* @param userType тип пользователя
* @param pPinCounters информация о счетчика ПИН-кода
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_ReadPinCounters)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_USER_TYPE userType,
    JC_PKI_PIN_COUNTERS_PTR pPinCounters
);
#endif

/**
* Создать запрос для разблокировки
* @param slotID идентификатор слота
* @param pChallenge буфер для данных запроса разблокировки
* @param pulChallengeLength длина буфер запроса разблокировки в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_CreateUnlockChallenge)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pChallenge,
    CK_ULONG_PTR pulChallengeLength
);
#endif

/**
* Функция не поддерживается и всегда возвращает CKR_FUNCTION_NOT_SUPPORTED
* @param pAdminPin
* @param ulAdminPinLength
* @param pChallenge
* @param ulChallengeLength
* @param pResponse
* @param pulResponseLength
* @return CKR_FUNCTION_NOT_SUPPORTED
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_CreateUnlockResponse)
#ifdef CK_NEED_ARG_LIST
(
    CK_UTF8CHAR_PTR pAdminPin,
    CK_ULONG ulAdminPinLength,
    CK_BYTE_PTR pChallenge,
    CK_ULONG ulChallengeLength,
    CK_BYTE_PTR pResponse,
    CK_ULONG_PTR pulResponseLength
);
#endif

/**
* Разблокировать ПИН-код пользователя ответом на запросом от администратора
* @param slotID идентификатор слота
* @param pResponse ответом на запрос от администратора
* @param ulResponseLength длина ответа на запрос от администратора
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_UnlockWithResponse)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pResponse,
    CK_ULONG ulResponseLength
);
#endif

/**
* Получить информацию о разблокировке по таймауту
* @param slotID идентификатор слота
* @param pInfo информация о разблокировке по таймауту
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_GetTimeoutUnlockInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_KT2_TIMEOUT_UNLOCK_INFO_PTR pInfo
);
#endif

/**
* Функция не поддерживается и всегда возвращает CKR_FUNCTION_NOT_SUPPORTED
* @param slotID
* @param pInfo
* @return CKR_FUNCTION_NOT_SUPPORTED
*/
CK_PKCS11_FUNCTION_INFO(JC_deprecated_2)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_KT2_TIMEOUT_UNLOCK_INFO_PTR pInfo
);
#endif

/**
* Разблокировать ПИН-код
* @param slotID идентификатор слота
* @param userType тип разблокируемого ПИН-кода. Допустимые значения: CKU_USER, CKU_CONTEXT_SPECIFIC, CKU_PUK
* @param pulRepeatCount количество необходимых повторений. Определяет сколько раз еще необходимо вызвать функцию JC_KT2_UnlockWithTimeout для разблокировки.
* @return код ошибки. CKR_CANNOT_UNLOCK - если необходимо повторно вызвать функцию
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_UnlockWithTimeout)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_USER_TYPE userType,
    CK_ULONG_PTR pulRepeatCount
);
#endif

/**
* Инициализация токена после АРМ админстрирования. Все сессии д.б. закрыты перед вызовом этой функции
* @param slotID идентификатор слота
* @param pPin ПИН_код пользователя
* @param ulPinLen размер ПИН-кода пользователя
* @param pLabel метка - строка выровненная пробелам справа до размера 32х байт
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KT2_InitToken)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_UTF8CHAR_PTR pPin,
    CK_ULONG ulPinLen,
    CK_UTF8CHAR_PTR pLabel
);
#endif

/**
* Задать политику ПИН'а пользователя
* @param slotID идентификатор слота
* @param pPolicy параметры ПИН
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_SetUserPinPolicy)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PJ_PINPOLICY_PTR pPolicy
);
#endif

/**
* Получить политику ПИН'а пользователя
* @param slotID идентификатор слота
* @param pPolicy параметры ПИН
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_GetUserPinPolicy)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PJ_PINPOLICY_PTR pPolicy
);
#endif

/**
* Задать политику ПИН'а пользователя
* @param slotID идентификатор слота
* @param pPolicy параметры ПИН
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_InitToken)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PJ_INITIALIZATION_INFO_PTR pInfo
);
#endif

/**
* Определить счетчики ПИН-кодов
* @param slotID идентификатор слота
* @param userType тип пользователя
* @param pPolicy параметры ПИН
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_GetPinCounters)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_USER_TYPE userType,
    JC_PJ_PIN_COUNTERS_PTR pPinCounter
);
#endif

/**
* Разблокировать ПИН-код пользователя. Операция должна быть начата функцией JC_PJ_UnlockInit. Любое завершение функции (в том числе и с ошибкой) автоматически завершает операцию разблокировки.
* @param slotID идентификатор слота
* @param pResponse ответ на challenge, полученный от функции JC_PJ_GetChallenge
* @param ulPinLen длина ответа на challenge в байтах
* @param pPin ПИН
* @param ulPinLen длина ПИН в байтах
* @param toBeChanged CK_TRUE, если необходимо, чтобы пользователь сменил ПИН-код
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_Unlock)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pResponse,
    CK_ULONG ulResponseLen,
    CK_UTF8CHAR_PTR pPin,
    CK_ULONG ulPinLen,
    CK_BBOOL toBeChanged
);
#endif

/**
 * Получить возможности токена
 * @param slotID идентификатор слота
 * @param pCapablities возможности токена 
 * @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_GetCapabilities)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PJ_CAPABILITIES_PTR pCapabilites
);
#endif

/**
* Получить параметры инициализации
* @param slotID идентификатор слота
* @param pInitParams параметры инициализации
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_GetInitParams)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_PJ_INIT_PARAMS_PTR pInitParams
);
#endif

/**
* Включить SWYX-режим. Расширенная версия
* @param slotID      идентификатор слота
* @param pReference  reference indicator
* @param ulReferenceLen reference indicator length in bytes (no more then 8)
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SWYX_StartEx)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pReference,
    CK_ULONG ulReferenceLen
);
#endif

/**
* Получить challenge для начала разблокировки ПИН-кода пользователя. После вызова JC_PJ_UnlockInit не следует вызывать другие функции кроме JC_PJ_Unlock
* JC_PJ_Unlock
* @param slotID идентификатор слота
* @param pChallange буфер для challenge
* @param pulChallangeSize размер буфера challenge в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_UnlockInit)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR pChallenge,
    CK_ULONG_PTR pulChallengeSize
);
#endif

/**
* Функция устарела.
* @param slotID
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_deprecated_6)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID
);
#endif

/**
* Получить информацию о токене по дескриптору сессии
* @param hSession дескриптор сессии
* @param pInfo информация о токене
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_GetTokenInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_TOKEN_INFO_PTR pInfo
);
#endif

/**
* Изменить стартовый ключ
* @param slotID идентификатор слота
* @param newData - указатель на данные для формирования нового ключа
* @param newDataLen - длина данных
* @param oldData - указатель на данные для формирования старого ключа
* @param oldDataLen - даннных
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_ChangeAppletKey)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_BYTE_PTR newData, CK_ULONG newDataLen,
    CK_BYTE_PTR oldData, CK_ULONG oldDataLen
);
#endif

/**
* инициализировать ПИН
* @param slotID идентификатор слота
* @param pUserPin ПИН
* @param ulUserPinLen длина ПИН
* @param ulUserMaxTriesCount максимальное число попыток
* @param toBeChanged необходимость сменять при первой аутентификации
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PJ_InitPIN)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    CK_UTF8CHAR_PTR pUserPin,
    CK_ULONG ulUserPinLen,
    CK_ULONG ulUserMaxTriesCount,
    CK_BBOOL toBeChanged
);
#endif

/**
* Получить информацию о регистрации событий
* @param slotID идентификатор слота
* @param pLoggingInfo информация о регистрации событий
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_GetLoggingInfo)
#ifdef CK_NEED_ARG_LIST
(
    CK_SLOT_ID slotID,
    JC_F2_LOGGING_INFO_PTR pLoggingInfo
);
#endif

/**
* Очистить журнал. Требуется аутентификация администратором
* @param hSession дескриптор сессии
* @param logID идентификатор журнала
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_ClearLog)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    JC_F2_LOG_ID logID
);
#endif

/**
* Прочитать записи из журнала NSD
* @param hSession дескриптор сессии
* @param ulStartIndex индекс записи в журнале с которой необходимо начать чтение (индекс начинаются с 0)
* @param pRecords буфер для чтения записей
* @param pulRecordCount при вызове - количество записей, которое необходимо прочитать, после вызова - количество записей которое было прочитано
* @return код ошибки. CKR_LOG_EOF показывает что достигнут конец файла журнала
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_ReadNSDLog)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_ULONG ulStartIndex,
    JC_F2_NSD_RECORD_PTR pRecords,
    CK_ULONG_PTR pulRecordCount
);
#endif

/**
* Прочитать записи из журнала CCID
* @param hSession дескриптор сессии
* @param ulStartIndex индекс записи в журнале с которой необходимо начать чтение (индекс начинаются с 0)
* @param pRecords буфер для чтения записей
* @param pulRecordCount при вызове - количество записей, которое необходимо прочитать, после вызова - количество записей которое было прочитано
* @return код ошибки. CKR_LOG_EOF показывает что достигнут конец файла журнала
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_ReadCCIDLog)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_ULONG ulStartIndex,
    JC_F2_CCID_RECORD_PTR pRecords,
    CK_ULONG_PTR pulRecordCount
);
#endif

/**
* Прочитать данные из журнала Secure
* @param hSession дескриптор сессии
* @param ulOffset смещение от начала файла в байтах
* @param pData буфер для данных
* @param pulDataSize при вызове - количество байт, которое необходимо прочитать, после вызова - количество количество прочитанных байт
* @return код ошибки. CKR_LOG_EOF показывает что достигнут конец файла журнала
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_ReadSecureLog)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_ULONG ulOffset,
    CK_BYTE_PTR pData,
    CK_ULONG_PTR pulDataSize
);
#endif

/**
* Запись данные в журнал Secure. Требуется аутентификация администратором. Запись всегда производится в конец файла
* @param hSession дескриптор сессии
* @param pData записываемые данные
* @param pulDataSize при вызове - количество байт, которое необходимо записать, после вызова - количество количество записанных байт
* @return код ошибки. CKR_LOG_EOF показывает что достигнут конец файла журнала (но данные записались), CKR_LOG_NO_FREE_SPACE показывает что данные записать нельзя и в pulDataSize возвращает сколько байт записать можно
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_WriteSecureLog)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    CK_BYTE_PTR pData,
    CK_ULONG_PTR pulDataSize
);
#endif

/**
* Получить текущие размеры файлов журналов. Требуется аутентификация администратором
* @param hSession дескриптор сессии
* @param pLogSizes текущие размеры файлов журналов
*/
CK_PKCS11_FUNCTION_INFO(JC_F2_GetLogSizes)
#ifdef CK_NEED_ARG_LIST
(
    CK_SESSION_HANDLE hSession,
    JC_F2_LOG_SIZES_PTR pLogSizes
);
#endif

/**
* Выполнить подпись с предварительным просмотром
* @param pParentWindowHandle дескриптор родительского окна. Для Windows - HWND. М.б. равен NULL
* @param hSession дескриптор сессии
* @param hPrivateKey дескриптор закрытого ключа
* @param pCertBody сертификат подписывающего. Может отсутствовать, но тогда требуется наличие сертификата на токене с тем же значением CKA_ID, что и у закрытого ключа
* @param ulCertBodySize размер сертификата в байтах
* @param pTransactionID ид транзакции в UTF-8
* @param ulTransactionIDSize размер ид транзакции в байтах
* @param pText произвольный текс в UTF-8. Может отсутствовать, но тогда должен присутствовать pdf
* @param ulTextSize размер текста в байтах
* @param pPdf pdf для просмотра в кодировке Base64. Может отсутствовать, но тогда должен присутствовать произвольный текст
* @param ulPdfSize размер pdf в байтах
* @param ppPkcs7 указатель на буфер для подписи. После использования д.б. освобожден при помощи функции freeBuffer
* @param pulPkcs7Size размер буфера в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_DSS_Sign)
#ifdef CK_NEED_ARG_LIST
(
    CK_VOID_PTR pParentWindowHandle,
    CK_SESSION_HANDLE hSession,
    CK_OBJECT_HANDLE  hPrivateKey,
    CK_BYTE_PTR pCertBody, CK_ULONG ulCertBodySize,
    CK_UTF8CHAR_PTR pTransactionID, CK_ULONG ulTransactionIDSize,
    CK_UTF8CHAR_PTR pText, CK_ULONG ulTextSize,
    CK_CHAR_PTR pPdf, CK_ULONG ulPdfSize,
    CK_BYTE_PTR_PTR ppPkcs7, CK_ULONG_PTR pulPkcs7Size
);
#endif

/**
* Получить расширенную информацию о считывателе
*
* @param pReaderName имя считывателя
* @param ulReaderNameSize размер имени считывателя в байтах. М.б. равен CK_UNAVAILABLE_INFORMATION если имя считывателя заканчивается 0
* @param pProperties расширенная информация о считывателе
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_GetReaderPropertiesEx)
#ifdef CK_NEED_ARG_LIST
(
    CK_UTF8CHAR_PTR pReaderName,
    CK_ULONG ulReaderNameSize,
    JC_TOKEN_PROPERTIES_EX_PTR pProperties
);
#endif

/**
* Установить функцию обратного вызова для дополнительного информирования о событиях библиотеки. Может быть только одна функция обратного вызова
* @param function функция обратного вызова. Если равна NULL, то текущая функция обратного вызова сбрасывается. Все данные переданные функции обратного вызова
* (за исключением pApplication) действительны только на время вызова
* @param pApplication указатель на произвольные данные, которые будут переданы в функцию
* @param callForOldEvents CK_TRUE - вызвать функцию для ранее зарегистрированных событий
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_SetNotificationCallback)
#ifdef CK_NEED_ARG_LIST
(
    JC_NOTIFICATION_CALLBACK function,
    CK_VOID_PTR pApplication,
    CK_BBOOL callForOldEvents
);
#endif

/**
* Проверить персонализирован ли Криптотокен-2.
* @param slotID идентификатор слота
* @param pPersonalized признак персонализации
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT2_IsPersonalized)
#ifdef CK_NEED_ARG_LIST
(
CK_SLOT_ID slotID,
CK_BBOOL_PTR pPersonalized
);
#endif

/**
* Получить дополнительную информацию о Криптотокен-2.
* @param slotID идентификатор слота
* @param pInfo дополнительная информацию о Криптотокен-2
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT2_ReadExtInfo)
#ifdef CK_NEED_ARG_LIST
(
CK_SLOT_ID slotID,
JC_KT2_EXTENDED_INFO_PTR pInfo
);
#endif

/**
* Рассчитать контрольную сумму Криптотокен-2.
* @param slotID идентификатор слота
* @param pCheckSum буфер для контрольной суммы
* @param pulCheckSumSize длина контрольной суммы в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT2_CalcCheckSum)
#ifdef CK_NEED_ARG_LIST
(
CK_SLOT_ID slotID,
CK_BYTE_PTR pCheckSum,
CK_ULONG_PTR pulCheckSumSize
);
#endif

/**
* Установить ПИН-код подписи для КТ2. Требуется аутентификация пользователем
* @param slotID идентификатор слота
* @param pPin ПИН-код подписи
* @param ulPinSize длина ПИН-кода подписи в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПИН-код подписи заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT2_SetSignaturePIN)
#ifdef CK_NEED_ARG_LIST
(
CK_SLOT_ID slotID,
CK_UTF8CHAR_PTR pPin,
CK_ULONG ulPinSize
);
#endif

/**
* Установить ПИН-код подписи для КТ2. Требуется аутентификация пользователем.
* @param slotID идентификатор слота
* @param pOldPin старый ПИН-код подписи
* @param ulOldPinSize длина старого ПИН-кода подписи в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПИН-код подписи заканчивается 0
* @param pNewPin новый ПИН-код подписи
* @param ulNewPinSize длина нового ПИН-кода подписи в байтах. М.б. CK_UNAVAILABLE_INFORMATION если ПИН-код подписи заканчивается 0
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CT2_ChangeSignaturePIN)
#ifdef CK_NEED_ARG_LIST
(
CK_SLOT_ID slotID,
CK_UTF8CHAR_PTR pOldPin,
CK_ULONG ulOldPinSize,
CK_UTF8CHAR_PTR pNewPin,
CK_ULONG ulNewPinSize
);
#endif

/**
* разобрать CMS сообщение
* @param cms буфер с CMS сообщением
* @param cmsSize длина CMS сообщения
* @param ppCMScontainer указатель на описатель разобранный CMS, его буфер создается внутри функции. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_Decompose_CMS)
#ifdef CK_NEED_ARG_LIST
(
CK_BYTE_PTR cms,
CK_ULONG cmsSize,
JC_CMS_CONTAINER_PTR* ppCMScontainer
);
#endif

/**
* сформировать CMS сообщение
* @param CMSmaterial определение составных частей CMS сообщения
* @param cmsMessage указатель куда будет помещен адрес CMS сформированного сообщения 
* @param cmsMessageSize указатель на длину получившегося CMS сообщения
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_Compose_CMS)
#ifdef CK_NEED_ARG_LIST
(
JC_CMS_MATERIAL_PTR CMSmaterial,
CK_BYTE_PTR_PTR cmsMessage,
CK_ULONG_PTR cmsMessageSize
);
#endif

/**
* получить публичный ключ и параметры из X509 сертификата
* @param certificate указатель на DER представление X509 сертификата, поддерживаються только ГОСТовые сертификаты
* @param certificateSize длина представления сертфиката
* @param certificateMaterial адрес указателя куда будет записан адрес описателя публичного ключа сертификата
* @param certificateMaterialSize указатель куда будет записана длина описателя публичного ключа сертификата
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_KeyParametersFromCert)
#ifdef CK_NEED_ARG_LIST
(
CK_BYTE_PTR certificate,
CK_ULONG certificateSize,
JC_CERTIFICATE_MATERIAL_PTR* certificateMaterial,
CK_ULONG_PTR certificateMaterialSize
);
#endif

/*
 * \brief Смена ПИН Пользователя по предъявлению PUK
 * \param slotID идентификатор слота
 * \param pPUK указатеь на PUK
 * \param ulPukSize длина PUK
 * \param pNewPin указатель на новый ПИН пользователя
 * \param ulNewPinSize длина ПИН
 */
CK_PKCS11_FUNCTION_INFO(JC_DS_ChangeUserPINByPUK)
#ifdef CK_NEED_ARG_LIST
(
CK_SLOT_ID slotID,
CK_UTF8CHAR_PTR pPUK,
CK_ULONG ulPukSize,
CK_UTF8CHAR_PTR pNewPin,
CK_ULONG ulNewPinSize
);
#endif

/**
* Разблокировать пин пользователя для Laser с использованием механизма Challenge-Response
* @param slotID идентификатор слота
* @return   код ошибки
* CKR_CANNOT_UNLOCK если разблокировка не возможна или код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_PKI_UnlockUserPinWithResponse)
#ifdef CK_NEED_ARG_LIST
(
CK_SLOT_ID slotID,
CK_BYTE_PTR pResponse,
CK_ULONG ulResponseLength,
CK_UTF8CHAR_PTR pNewUserPin,
CK_ULONG ulNewUserPinLen
);
#endif

/*
* Получение списка вендоров на лицензионном апплете
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @return признак присутствия лицензионного апплета
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_BOOL, lmCheckLicensingAppletPresence)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle
);
#endif

/*
* Получение списка вендоров на лицензионном апплете
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @param vendorList указатель на указатель на список вендоров
* @param vendorListLength указатель на значение числа вендоров
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmGetVendorList)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle,
LM_PWORD * vendorList, LM_PWORD vendorListLength
);
#endif

/*
* Получение списка продуктов в лицензионном апплете
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @param vendorId  идентификатор веднора 2 байта
* @param productList указатель на указатель на список продуктов
* @param ulDataLength указатель на значение числа продуктов
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmGetProductList)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle,
LM_WORD vendorId,
LM_PWORD * productList, LM_PWORD productListLength
);
#endif

/*
* Чтение лицензии из лицензионного апплета
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @param vendorId  идентификатор веднора 2 байта
* @param productId идентификатор продукта 2 байта
* @param pData     указатель на указатель на содердимое лицензии
* @param ulDataLength указатель на длину лицензии
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmReadLicense)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle,
LM_WORD vendorId,
LM_WORD productId,
LM_PBYTE * pData, LM_PWORD ulDataLength
);
#endif

/*
* Лицензионный апплет. Создание лицензии
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @param vendorId  идентификатор веднора 2 байта
* @param productId идентификатор продукта 2 байта
* @param key       значение ключа лицензии 8 байт
* @param pData     лицензия
* @param ulDataLength длина лицензии
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmCreateLicense)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle,
LM_WORD vendorId,
LM_WORD productId,
LM_PBYTE key,
LM_PBYTE pData, LM_WORD ulDataLength
);
#endif

/*
* Удаление лицензии из лицензионного апплета
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @param vendorId  идентификатор веднора 2 байта
* @param productId идентификатор продукта 2 байта
* @param key       значение ключа лицензии 8 байт
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmDeleteLicense)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle,
LM_WORD vendorId,
LM_WORD productId,
LM_PBYTE key
);
#endif

/*
* Создание ключа лицензии в лицензионном апплете
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @param vendorId  идентификатор веднора 2 байта
* @param key       значение ключа лицензии 8 байт
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmWriteKey)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle,
LM_WORD vendorId,
LM_PBYTE key
);
#endif

/*
* Изменение ключа лицензии в лицензионном апплете
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @param vendorId  идентификатор веднора 2 байта
* @param oldKey значение старого ключа 8 байт
* @param newKey значение нового ключа 8 байт
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmChangeKey)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle,
LM_WORD vendorId,
LM_PBYTE oldKey,
LM_PBYTE newKey
);
#endif

/*
* Блокирование операций в лицензионном апплете
* @param handle указатель на идентификатор слота (CK_SLOT_ID*) с лицензионным апплетом
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO_TYPED(LM_WORD, lmLock)
#ifdef CK_NEED_ARG_LIST
(
LM_HANDLE handle
);
#endif

CK_PKCS11_FUNCTION_INFO_TYPED(void, lmFreeBuffer)
#ifdef CK_NEED_ARG_LIST
(
void ** buffer
);
#endif


/**
* Создать запрос на переиздание сертификата в формате CMC. На токене должен присутствовать старый сертификат и новый открытый ключ
* @param hSession дескриптор сессии
* @param hOldPrivateKey дескриптор старого закрытого ключа
* @param hOldCertificate дескриптор старого сертификата. Если указано CK_INVALID_HANDLE, то старый сертификат ищется по CKA_ID от старого закрытого ключа
* @param hNewPrivateKey дескриптор нового закрытого ключа
* @param ppAttributes В параметр должен передаваться массив строк. В первой строке должен располагаться идентификатор атрибута в текстовой форме:
*                OID или его текстовый аналог из OpenSSL, например, "CN". Во второй строке должно располагаться значение атрибута в UTF8. Значение формируется по правилам asn1parse из OpenSSL
*                Последующие поля передаются в следующих строках. Количество строк должно быть четным.
* @param ulAttributesLen размер списка атрибутов.
* @param ppCMC указатель на буфер для запроса на переиздание. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulCMCSize размер буфер в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CreateCertificateRenewal)
#ifdef CK_NEED_ARG_LIST
(
CK_SESSION_HANDLE hSession,
CK_OBJECT_HANDLE hOldPrivateKey,
CK_OBJECT_HANDLE hOldCertificate,
CK_OBJECT_HANDLE hNewPrivateKey,
CK_UTF8CHAR_PTR_PTR ppAttributes,
CK_ULONG ulAttributesLen,
CK_BYTE_PTR_PTR ppCMC, CK_ULONG_PTR pulCMCSize
);
#endif

/**
* Создать запрос на переиздание сертификата в формате CMC. На токене должен присутствовать старый сертификат и новый открытый ключ
* @param hSession дескриптор сессии
* @param hOldPrivateKey дескриптор старого закрытого ключа
* @param pCertificateBody тело старого сертификата в DER кодировке. Если указано NULL, то старый сертификат ищется по CKA_ID от старого закрытого ключа
* @param ulCertificateBodySize размер тела старого сертификата в байтах. Если указано 0, то старый сертификат ищется по CKA_ID от старого закрытого ключа
* @param hNewPrivateKey дескриптор нового закрытого ключа
* @param ppAttributes В параметр должен передаваться массив строк. В первой строке должен располагаться идентификатор атрибута в текстовой форме:
*                OID или его текстовый аналог из OpenSSL, например, "CN". Во второй строке должно располагаться значение атрибута в UTF8. Значение формируется по правилам asn1parse из OpenSSL
*                Последующие поля передаются в следующих строках. Количество строк должно быть четным.
* @param ulAttributesLen размер списка атрибутов.
* @param ppCMC указатель на буфер для запроса на переиздание. После окончания работы с ним необходимо освободить его, вызвав функцию freeBuffer().
* @param pulCMCSize размер буфер в байтах
* @return код ошибки
*/
CK_PKCS11_FUNCTION_INFO(JC_CreateCertificateRenewal2)
#ifdef CK_NEED_ARG_LIST
(
CK_SESSION_HANDLE hSession,
CK_OBJECT_HANDLE hOldPrivateKey,
CK_BYTE_PTR pCertificateBody,
CK_ULONG ulCertificateBodySize,
CK_OBJECT_HANDLE hNewPrivateKey,
CK_UTF8CHAR_PTR_PTR ppAttributes,
CK_ULONG ulAttributesLen,
CK_BYTE_PTR_PTR ppCMC, CK_ULONG_PTR pulCMCSize
);
#endif