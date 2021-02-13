#ifndef JC_PKCS11_TYPES_H
#define JC_PKCS11_TYPES_H 1

/* константы TK26 */
#define NSSCK_VENDOR_PKCS11_RU_TEAM             0xD4321000 /* 0x80000000 | 0x54321000 */
#define CK_VENDOR_PKCS11_RU_TEAM_TC26           NSSCK_VENDOR_PKCS11_RU_TEAM

#define CKK_GOSTR3410_256                       CKK_GOSTR3410
#define CKK_GOSTR3410_512                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x003)
#define CKK_KUZNECHIK                           (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x004)

#define CKA_GOSTR3410_256PARAMS                 CKA_GOSTR3410_PARAMS
#define CKA_GOSTR3410_512PARAMS                 (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x004)

#define CKP_PKCS5_PBKD2_HMAC_GOSTR3411_2012_256 (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x002)
#define CKP_PKCS5_PBKD2_HMAC_GOSTR3411_2012_512 (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x003)

#define CKM_GOSTR3410_256_KEY_PAIR_GEN          CKM_GOSTR3410_KEY_PAIR_GEN
#define CKM_GOSTR3410_256                       CKM_GOSTR3410

#define CKM_GOSTR3410_512_KEY_PAIR_GEN          (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x005)
#define CKM_GOSTR3410_512                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x006)

#define CKM_GOSTR3410_2012_DERIVE               (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x007)
#define CKM_GOSTR3410_12_DERIVE                 CKM_GOSTR3410_2012_DERIVE

#define CKM_GOSTR3410_WITH_GOSTR3411_94         CKM_GOSTR3410_WITH_GOSTR3411
#define CKM_GOSTR3410_WITH_GOSTR3411_2012_256   (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x008)
#define CKM_GOSTR3410_WITH_GOSTR3411_12_256     CKM_GOSTR3410_WITH_GOSTR3411_2012_256
#define CKM_GOSTR3410_WITH_GOSTR3411_2012_512   (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x009)
#define CKM_GOSTR3410_WITH_GOSTR3411_12_512     CKM_GOSTR3410_WITH_GOSTR3411_2012_512

#define CKM_GOSTR3410_PUBLIC_KEY_DERIVE         (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x00A)

#define CKM_GOSTR3411_94                        CKM_GOSTR3411
#define CKM_GOSTR3411_2012_256                  (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x012)
#define CKM_GOSTR3411_12_256                    CKM_GOSTR3411_2012_256
#define CKM_GOSTR3411_2012_512                  (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x013)
#define CKM_GOSTR3411_12_512                    CKM_GOSTR3411_2012_512

#define CKM_GOSTR3411_94_HMAC                   CKM_GOSTR3411_HMAC
#define CKM_GOSTR3411_2012_256_HMAC             (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x014)
#define CKM_GOSTR3411_12_256_HMAC               CKM_GOSTR3411_2012_256_HMAC
#define CKM_GOSTR3411_2012_512_HMAC             (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x015)
#define CKM_GOSTR3411_12_512_HMAC               CKM_GOSTR3411_2012_512_HMAC

#define CKM_TLS_GOST_PRF_2012_256               (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x016)
#define CKM_TLS_GOST_PRF_2012_512               (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x017)

#define CKM_KUZNECHIK_KEY_GEN                   (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x019)
#define CKM_KUZNECHIK_ECB                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x01A)
#define CKM_KUZNECHIK_CTR                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x01B)
#define CKM_KUZNECHIK_CFB                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x01C)
#define CKM_KUZNECHIK_OFB                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x01D)
#define CKM_KUZNECHIK_CBC                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x01E)
#define CKM_KUZNECHIK_MAC                       (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x01F)

#define CKM_MAGMA_ECB                           CKM_GOST28147_ECB
#define CKM_MAGMA_CTR                           (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x020)
#define CKM_MAGMA_CFB                           (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x021)
#define CKM_MAGMA_OFB                           (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x022)
#define CKM_MAGMA_CBC                           (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x023)
#define CKM_MAGMA_MAC                           (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x024)

#define CKM_KDF_4357                            (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x025)
#define CKM_KDF_GOSTR3411_2012_256              (CK_VENDOR_PKCS11_RU_TEAM_TC26 | 0x026)

/* структуры и типы ГОСТ не определенные в файлах спецификации 2.3 */
#define CKM_TLS_GOST_PRF                        (NSSCK_VENDOR_PKCS11_RU_TEAM | 0x030)
#define CKM_TLS_GOST_PRE_MASTER_KEY_GEN         (NSSCK_VENDOR_PKCS11_RU_TEAM | 0x031)
#define CKM_TLS_GOST_MASTER_KEY_DERIVE          (NSSCK_VENDOR_PKCS11_RU_TEAM | 0x032)
#define CKM_TLS_GOST_KEY_AND_MAC_DERIVE         (NSSCK_VENDOR_PKCS11_RU_TEAM | 0x033)

#define CKD_CPDIVERSIFY_KDF     0x00000009

typedef struct CK_GOSTR3410_KEY_WRAP_PARAMS
{
    CK_BYTE_PTR      pWrapOID;
    CK_ULONG         ulWrapOIDLen;
    CK_BYTE_PTR      pUKM;
    CK_ULONG         ulUKMLen;
    CK_OBJECT_HANDLE hKey;
} CK_GOSTR3410_KEY_WRAP_PARAMS;

typedef CK_GOSTR3410_KEY_WRAP_PARAMS CK_PTR CK_GOSTR3410_KEY_WRAP_PARAMS_PTR;

typedef struct CK_GOSTR3410_DERIVE_PARAMS
{
    CK_EC_KDF_TYPE  kdf;
    CK_BYTE_PTR     pPublicData;
    CK_ULONG        ulPublicDataLen;
    CK_BYTE_PTR     pUKM;
    CK_ULONG        ulUKMLen;
} CK_GOSTR3410_DERIVE_PARAMS;

typedef CK_GOSTR3410_DERIVE_PARAMS CK_PTR CK_GOSTR3410_DERIVE_PARAMS_PTR;

typedef struct CK_TLS_GOST_PRF_PARAMS
{
    CK_TLS_PRF_PARAMS TlsPrfParams;
    CK_BYTE_PTR pHashParamsOID;
    CK_ULONG ulHashParamsOIDLen;
} CK_TLS_GOST_PRF_PARAMS;
typedef CK_TLS_GOST_PRF_PARAMS CK_PTR CK_TLS_GOST_PRF_PARAMS_PTR;

typedef struct CK_TLS_GOST_MASTER_KEY_DERIVE_PARAMS
{
    CK_SSL3_RANDOM_DATA RandomInfo;
    CK_BYTE_PTR pHashParamsOID;
    CK_ULONG ulHashParamsOIDLen;
} CK_TLS_GOST_MASTER_KEY_DERIVE_PARAMS;
typedef CK_TLS_GOST_MASTER_KEY_DERIVE_PARAMS CK_PTR CK_TLS_GOST_MASTER_KEY_DERIVE_PARAMS_PTR;

typedef struct CK_TLS_GOST_KEY_MAT_PARAMS
{
    CK_SSL3_KEY_MAT_PARAMS KeyMatParams;
    CK_BYTE_PTR pHashParamsOID;
    CK_ULONG ulHashParamsOIDLen;
} CK_TLS_GOST_KEY_MAT_PARAMS;
typedef CK_TLS_GOST_KEY_MAT_PARAMS CK_PTR CK_TLS_GOST_KEY_MAT_PARAMS_PTR;

/* потерянные типы - есть в документации, но нет в файле */
#ifndef CKA_NAME_HASH_ALGORITHM
#   define CKA_NAME_HASH_ALGORITHM     0x0000008C
#endif
#ifndef CKA_COPYABLE
#   define CKA_COPYABLE                0x00000171
#endif

/* дополнительные типы для наших нужд */
typedef struct JC_FUNCTION_LIST JC_FUNCTION_LIST;

typedef JC_FUNCTION_LIST CK_PTR JC_FUNCTION_LIST_PTR;

typedef JC_FUNCTION_LIST_PTR CK_PTR JC_FUNCTION_LIST_PTR_PTR;

typedef CK_BBOOL CK_PTR CK_BBOOL_PTR;

typedef CK_BYTE_PTR CK_PTR CK_BYTE_PTR_PTR;

typedef CK_UTF8CHAR_PTR CK_PTR CK_UTF8CHAR_PTR_PTR;

typedef CK_CHAR_PTR CK_PTR CK_CHAR_PTR_PTR;

/** Старшая версия библиотеки. */
#define JC_VERSION_MAJOR 0x02
/** Младшая версия библиотеки. */
#define JC_VERSION_MINOR 0x04

/** Старшая версия расширений библиотеки. */
#define JC_EXTENSION_VERSION_MAJOR 0x02
/** Младшая версия расширений библиотеки. */
#define JC_EXTENSION_VERSION_MINOR 0x0A

/** Идентификатор производителя */
#define JC_MANUFACTURER_ID "Aladdin R.D."

/**
* апплет DataStore (STORAGE)
*/
#define JC_MODEL_DATASTORE "JaCarta DS"

/**
* апплет Криптотокен1 (ГОСТ)
*/
#define JC_MODEL_CRYPTOTOKEN_1 "eToken GOST"

/**
* апплет Криптотокен2 (ГОСТ)
*/
#define JC_MODEL_CRYPTOTOKEN_2 "JaCarta GOST 2.0"

/**
* апплет Криптотокен1 (ГОСТ)
*/
#define JC_MODEL_LASER "JaCarta Laser"

/**
* Антифрод-терминал без карты
*/
#define JC_MODEL_ANTIFRAUD "Antifraud"

/**
* WebPass
*/
#define JC_MODEL_WEBPASS "JaCarta WebPass"

/**
* Flash 2
*/
#define JC_MODEL_FLASH2 "JaCarta Flash2"

/**
* FKH applet
*/
#define JC_MODEL_FKH "FKH"

/* 
* атрибут для PKI - использовать сжатие данные для значения атрибута CKA_VALUE - CK_BBOOL, по умолчанию CKA_FALSE
*/
#define CKA_COMPRESSED                  (0xC000)

/*
* PRO
*/
#define JC_MODEL_PRO "PRO"

/**
* атрибут виртуальных ключей типа CK_BBOOL - признак активности ключа
*/
#define CKA_KT2_KEY_ACTIVE              (CKA_VENDOR_DEFINED | 0x0001)
/**
* атрибут объекта WebPass типа CK_ULONG - жизненный цикл слота - одно из значений JC_WP_LIFECYCLE
*/
#define CKA_WP_LIFECYCLE                (CKA_VENDOR_DEFINED | 0x0002)
/**
* атрибут объекта WebPass типа CK_ULONG - тип слота - одно из значений JC_WP_TYPE
*/
#define CKA_WP_TYPE                     (CKA_VENDOR_DEFINED | 0x0003)
/**
* атрибут объекта WebPass типа CK_ULONG - алгоритм одноразового пароля - одно из значений JC_WP_OTP_ALGORITHM
*/
#define CKA_WP_OTP_ALGORITHM            (CKA_VENDOR_DEFINED | 0x0004)
/**
* атрибут объекта WebPass типа CK_ULONG - текущее значение счетчика генераций
*/
#define CKA_WP_OTP_COUNTER              (CKA_VENDOR_DEFINED | 0x0005)
/**
* атрибут объекта WebPass - название слота (в кодировке UTF-8) длиной не более 32 байт
*/
#define CKA_WP_NAME                     (CKA_VENDOR_DEFINED | 0x0006)
/**
* атрибут объекта WebPass  - префикс одноразового пароля длиной не более JC_WP_MAX_PREFIX_LENGTH байт.Допустимы английские буквы, цифры и следующие символы: !$%&'()*+,-./:;=?@@_~
*/
#define CKA_WP_OTP_PREFIX               (CKA_VENDOR_DEFINED | 0x0007)
/**
* атрибут объекта WebPass типа CK_ULONG - качество многоразового пароля - маска значений JC_WP_PASS_QUALITY
*/
#define CKA_WP_PASS_QUALITY             (CKA_VENDOR_DEFINED | 0x0008)
/**
* атрибут объекта WebPass типа CK_ULONG - длина многоразового пароля - значение от 1 до JC_WP_MAX_PASSWORD_LENGTH
*/
#define CKA_WP_PASS_LENGTH              (CKA_VENDOR_DEFINED | 0x0009)
/**
* атрибут объекта WebPass  - начальное значение для алгоритма OTP - длина 20 байт для алгоритма JC_WP_OTP_ALGORITHM_SHA1 или 32 байта для других алгоритмов
*/
#define CKA_WP_OTP_SEED                 (CKA_VENDOR_DEFINED | 0x000A)
/**
* атрибут объекта WebPass - значение многоразового пароля - не м.б. длиной больше JC_WP_MAX_PASSWORD_LENGTH
*/
#define CKA_WP_PASSWORD_VALUE           (CKA_VENDOR_DEFINED | 0x000B)
/**
* атрибут объекта WebPass - код платформы для URL тип CK_ULONG - значение - одно из JC_WP_URL_PLATFORM_CODE
*/
#define CKA_WP_URL_PLATFORM             (CKA_VENDOR_DEFINED | 0x000C)
/**
* атрибут объекта WebPass - значение URL - не м.б. длиной больше JC_WP_MAX_URL_LENGTH
*/
#define CKA_WP_URL                      (CKA_VENDOR_DEFINED | 0x000D)
/**
* атрибут объекта WebPass - Идентификатор объекта WebPass - типа JC_WP_ID
*/
#define CKA_WP_ID                       (CKA_VENDOR_DEFINED | 0x000E)
/**
* атрибут объекта профиля SecurLogon - имя пользователя - массив CK_UTF8_CHAR
*/
#define CKA_SL_USER_NAME                (CKA_VENDOR_DEFINED | 0x000F)
/**
* атрибут объекта профиля SecurLogon - имя домена - строка из CK_UTF8_CHAR
*/
#define CKA_SL_DOMAIN_NAME              (CKA_VENDOR_DEFINED | 0x0010)
/**
* атрибут объекта для PKI - флаг - CK_BBOOL
*/
#define CKA_PKI_ATHENA                  (CKA_VENDOR_DEFINED | 0x0010)
/**
* атрибут объекта профиля SecurLogon - признак профиля по умолчанию - CK_BBOOL
*/
#define CKA_SL_DEFAULT                  (CKA_VENDOR_DEFINED | 0x0011)
/**
* атрибут объекта профиля SecurLogon - тип пароля - JC_SL_PASSWORD_TYPE
*/
#define CKA_SL_PASSWORD_TYPE            (CKA_VENDOR_DEFINED | 0x0012)
/**
* атрибут объекта профиля SecurLogon - дата создания профиля - JC_SL_DATE
*/
#define CKA_SL_CREATED_DATE             (CKA_VENDOR_DEFINED | 0x0013)
/**
* атрибут сертификата для PKI - хэш SHA1 сертификата - CK_BYTE[20]
*/
#define CKA_PKI_CERT_HASH               (CKA_VENDOR_DEFINED | 0x0013)
/**
* атрибут объекта профиля SecurLogon - дата последнего изменения профиля - JC_SL_DATE
*/
#define CKA_SL_MODIFIED_DATE            (CKA_VENDOR_DEFINED | 0x0014)
/**
* атрибут объекта профиля SecurLogon - SID профиля - массив CK_BYTE
*/
#define CKA_SL_SID                      (CKA_VENDOR_DEFINED | 0x0015)
/**
* атрибут объекта профиля SecurLogon - признак присутствия пароля - CK_BBOOL
*/
#define CKA_SL_PASSWORD_EXISTS          (CKA_VENDOR_DEFINED | 0x0016)
/**
* атрибут объекта ключа - тип ключа - JC_F2_KEY_TYPE
*/
#define CKA_F2_KEY_TYPE                 (CKA_VENDOR_DEFINED | 0x0017)
/**
* атрибут объекта ключа токена - идентификатор мастер-ключа - CK_OBJECT_HANDLE
*/
#define CKA_F2_MASTER_KEY_ID            (CKA_VENDOR_DEFINED | 0x0018)
/**
* атрибут объекта ключа токена - серийный номер токена, для которого создается ключ
*/
#define CKA_F2_TOKEN_SERIAL             (CKA_VENDOR_DEFINED | 0x0019)
/**
* атрибут лицензии - ID производителя - CK_ULONG
*/
#define CKA_LIC_VENDOR_ID               (CKA_VENDOR_DEFINED | 0x0020)
/**
* атрибут лицензии - ID продукта - CK_ULONG
*/
#define CKA_LIC_PRODUCT_ID              (CKA_VENDOR_DEFINED | 0x0021)
/**
* атрибут сертификата для PKI - по умолчанию использовать сертификат для входа в систему - CK_BBOOL, по умолчанию CKA_FALSE
*/
#define CKA_PKI_DEFAULT_LOGON           (CKA_VENDOR_DEFINED | 0x0022)

/**
* атрибут закрытого ключа для ProJava - контейнер закрытого ключа
*/
#define CKA_PJ_CAPI_KEY_CONTAINER           (CKA_VENDOR_DEFINED | 0x0023)

// Пропраетарные атрибуты

// CK_BBOOL, алгоритм шифрования ключа содержимого по RFC 4357 п.6.1/6.2
// если атрибут равен CK_FALSE или не задан то используется алгоритм 
// шифрования ключа содержимого по RFC 4357 п.6.3/6.4
#define CKA_KT2_KEY_WRAP                  (CKA_VENDOR_DEFINED | 0x0024)

// CK_BBOOL, режим включения алгоритма усложнения ключей для ГОСТ28147 RFC 4357 п.2.3.2
// если не задан то используется указанный алгоритм усложнения ключей 
#define CKA_KT2_KEY_MESHING               (CKA_VENDOR_DEFINED | 0x0025)

// CK_BBOOL, если не используется секретный ключа на аплете ГОСТ 2
// и выполняется C_WrapKey, то этот атрибут предписывает 
// сгенерировать случайный секретный ключ задествуя ГСЧ аплета
// этот ключ удаляется в ходе C_EncryptInit, C_DecryptInit
#define CKA_KT2_AUTOGENERATE_KEY           (CKA_VENDOR_DEFINED | 0x0026)


/** Жизненный цикл объекта WebPass. */
typedef CK_ULONG JC_WP_LIFECYCLE;
/** объект WebPass не инициализирован. */
#define JC_WP_LIFECYCLE_EMPTY                       0x01
/** объект WebPass инициализирован. */
#define JC_WP_LIFECYCLE_INITIALIZED                 0x02
/** объект WebPass заблокирован. */
#define JC_WP_LIFECYCLE_LOCKED                      0x03

/** Тип объекта WebPass. */
typedef CK_ULONG JC_WP_TYPE;
/** объект WebPass типа одноразовый пароль (ОТР) . */
#define JC_WP_TYPE_OTP                         0x01
/** объект WebPass типа многоразовый пароль (PASS). */
#define JC_WP_TYPE_PASS                        0x02
/** объект WebPass типа ссылка (URL). */
#define JC_WP_TYPE_URL                         0x03

/** Алгоритм одноразового пароля. */
typedef CK_ULONG JC_WP_OTP_ALGORITHM;
/** RFC 4226 + HMAC-SHA1 (длина одноразового пароля – 6 символов). */
#define JC_WP_OTP_ALGORITHM_SHA1                    0x01
/** размер вектора инициализации в байтах для RFC 4226 + HMAC-SHA1 (длина одноразового пароля – 6 символов). */
#define JC_WP_OTP_ALGORITHM_SHA1_SEED_SIZE          20
/** RFC 4226 + HMAC-SHA256 (длина одноразового пароля – 6 символов). */
#define JC_WP_OTP_ALGORITHM_SHA256_6                0x02
/** размер вектора инициализации в байтах для RFC 4226 + HMAC-SHA256 (длина одноразового пароля – 6 символов). */
#define JC_WP_OTP_ALGORITHM_SHA256_6_SEED_SIZE      32
/** RFC 4226 + HMAC-SHA256 (длина одноразового пароля – 7 символов). */
#define JC_WP_OTP_ALGORITHM_SHA256_7                0x03
/** размер вектора инициализации в байтах для RFC 4226 + HMAC-SHA256 (длина одноразового пароля – 7 символов). */
#define JC_WP_OTP_ALGORITHM_SHA256_7_SEED_SIZE      32
/** RFC 4226 + HMAC-SHA256 (длина одноразового пароля – 8 символов). */
#define JC_WP_OTP_ALGORITHM_SHA256_8                0x04
/** размер вектора инициализации в байтах для RFC 4226 + HMAC-SHA256 (длина одноразового пароля – 8 символов). */
#define JC_WP_OTP_ALGORITHM_SHA256_8_SEED_SIZE      32

/** Максимальная длина названия объекта WebPass. */
#define JC_WP_MAX_NAME_LENGTH                       32

/** Максимальная длина префикса одноразового пароля. */
#define JC_WP_MAX_PREFIX_LENGTH                     32

/** Критерии качества многоразового пароля. */
typedef CK_ULONG JC_WP_PASS_QUALITY;
/** Использовать цифры в многоразовом пароле - только для генерируемого пароля. */
#define JC_WP_PASS_QUALITY_USE_DIGITS               0x01
/** Использовать английские буквы нижнего регистра в многоразовом пароле - только для генерируемого пароля. */
#define JC_WP_PASS_QUALITY_USE_LOWER_CASE           0x08
/** Использовать английские буквы верхнего регистра в многоразовом пароле - только для генерируемого пароля. */
#define JC_WP_PASS_QUALITY_USE_UPPER_CASE           0x10
/** Использовать спецсимволы в многоразовом пароле - только для генерируемого пароля. */
#define JC_WP_PASS_QUALITY_USE_SPECIAL              0x80
/** Добавлять код 0x0D в конец пароля */
#define JC_WP_PASS_QUALITY_ADD_CARRIAGE_RETURN      0x80000000
/** Все допустимые политики*/
#define JC_WP_PASS_QUALITY_ALL                      (JC_WP_PASS_QUALITY_USE_DIGITS | JC_WP_PASS_QUALITY_USE_LOWER_CASE | JC_WP_PASS_QUALITY_USE_UPPER_CASE | JC_WP_PASS_QUALITY_USE_SPECIAL | JC_WP_PASS_QUALITY_ADD_CARRIAGE_RETURN)

/** Максимальная длина одноразового пароля. */
#define JC_WP_MAX_PASSWORD_LENGTH                   160

typedef CK_ULONG JC_WP_URL_PLATFORM_CODE;
#define JC_WP_URL_PLATFORM_CODE_WINDOWS             0x02
#define JC_WP_URL_PLATFORM_CODE_MAC_OS              0x03
#define JC_WP_URL_PLATFORM_CODE_LINUX               0x04
#define JC_WP_URL_PLATFORM_CODE_SECRET_DISK         0x05
#define JC_WP_URL_PLATFORM_CODE_ANDROID_IOS         0x15

/** Максимальная длина URL. */
#define JC_WP_MAX_URL_LENGTH                        190

/** Идентификатор объекта WebPass */
typedef CK_ULONG JC_WP_ID;
#define JC_WP_ID_1                                  0x01
#define JC_WP_ID_2                                  0x02
#define JC_WP_ID_3                                  0x03

/** Тип пароля в профиле SecurLogon */
typedef CK_ULONG JC_SL_PASSWORD_TYPE;
#define JC_SL_PASSWORD_TYPE_MANUAL                  0x01
#define JC_SL_PASSWORD_TYPE_RANDOM                  0x02

/** Дата профиля */
typedef struct JC_SL_DATE
{
    CK_ULONG ulYear;
    CK_ULONG ulMonth;
    CK_ULONG ulDay;
    CK_ULONG ulHour;
    CK_ULONG ulMinute;
    CK_ULONG ulSecond;
} JC_SL_DATE;
typedef JC_SL_DATE CK_PTR JC_SL_DATE_PTR;

/**
* идентификатор виртуального секретного ключа
*/
#define KT2_VIRTUAL_SECRET_KEY_ID "VSKO_ID"
/**
* размер идентификатора виртуального секретного ключа в байтах
*/
#define KT2_VIRTUAL_SECRET_KEY_ID_SIZE 7

/**
* идентификатор виртуального открытого ключа
*/
#define KT2_VIRTUAL_PUBLIC_KEY_ID "VPKO_ID"
/**
* размер идентификатора виртуального открытого ключа в байтах
*/
#define KT2_VIRTUAL_PUBLIC_KEY_ID_SIZE 7

/**
* ПИН-код уже установлен (для КТ2 и Flash2)
*/
#define CKR_KT2_PIN_ALREADY_SET         (CKR_VENDOR_DEFINED | 0x011)
/**
 * BIO уже инициализирована.
 */
#define CKR_BIO_ALREADY_INITIALIZED     (CKR_VENDOR_DEFINED | 0x012)
/**
* BIO не инициализирована.
*/
#define CKR_BIO_NOT_INITIALIZED         (CKR_VENDOR_DEFINED | 0x013)
/**
* Указанная библиотека не является библиотекой BIO
*/
#define CKR_BIO_NOT_BIO                 (CKR_VENDOR_DEFINED | 0x014)
/**
* Неправильный ПУК-код
*/
#define CKR_PUK_INCORRECT               (CKR_VENDOR_DEFINED | 0x015)
/**
* Невозможно разблокировать ПИН-код
*/
#define CKR_CANNOT_UNLOCK               (CKR_VENDOR_DEFINED | 0x016)
/**
* Слот заблокирован
*/
#define CKR_WEBPASS_SLOT_LOCKED         (CKR_VENDOR_DEFINED | 0x017)
/**
* Неправильный текущий режим работы Flash2
*/
#define CKR_INCORRECT_LIFE_CYCLE        (CKR_VENDOR_DEFINED | 0x018)
/**
* На устройстве Flash2 имеются не завершенные операции записи дынных
*/
#define CKR_DEVICE_BUSY                 (CKR_VENDOR_DEFINED | 0x019)
/**
* Устройство Flash2 уже инициализировано как токен пользователя или администратора
*/
#define CKR_TOKEN_ALREADY_INITIALIZED   (CKR_VENDOR_DEFINED | 0x020)
/**
* На устройстве Flash2 скрытые разделы уже монтированы
*/
#define CKR_ALREADY_MOUNTED             (CKR_VENDOR_DEFINED | 0x021)
/**
* На устройстве Flash2 разделы не размечены
*/
#define CKR_NO_PARTITIONS               (CKR_VENDOR_DEFINED | 0x022)
/**
* Устройство Flash2 приведено в некорректное состояние. Необходимо вызывать функцию JC_F2_RestoreState
*/
#define CKR_BROKEN_STATE                (CKR_VENDOR_DEFINED | 0x023)
/**
* Устройство Flash2 еще не инициализировано как токен пользователя или администратора
*/
#define CKR_TOKEN_NOT_INITIALIZED       (CKR_VENDOR_DEFINED | 0x024)
/**
* Для устройстве Flash2. Предъявлен неправильный ключ шифрования разделов
*/
#define CKR_INVALID_PARTITION_KEY       (CKR_VENDOR_DEFINED | 0x025)
/**
* Недопустимы символы в значении PUK-кода
*/
#define CKR_PUK_INVALID                 (CKR_VENDOR_DEFINED | 0x026)
/**
* Недопустимая длина PUK-кода
*/
#define CKR_PUK_LEN_RANGE               (CKR_VENDOR_DEFINED | 0x027)
/**
* Функция не поддерживается в сертифицированном режиме
*/
#define CKR_CERTIFICATED_MODE           (CKR_VENDOR_DEFINED | 0x028)
/**
* Очистка Flash2 окончательно не завершена
*/
#define CKR_CLEAR_NOT_FINISHED          (CKR_VENDOR_DEFINED | 0x029)
/**
* Возникает если для выполнение команды требуется SecureMessaging
*/
#define CKR_SM_REQUIRED                 (CKR_VENDOR_DEFINED | 0x02A)
/**
* ошибка ProJava - ПИН содержится в истории
*/
#define CKR_PINPOLICY_HISTORY           (CKR_VENDOR_DEFINED | 0x02B)
/**
* При проверки подписи под PKCS#7 на КТ2 не был найден открытый ключ
*/
#define CKR_PKCS7_PUBLIC_KEY_NOT_FOUND  (CKR_VENDOR_DEFINED | 0x02C)
/**
* ИКБ не найдена
*/
#define CKR_ICL_LIBRARY_NOT_FOUND        (CKR_VENDOR_DEFINED | 0x02D)
/**
* ошибка ProJava - стартовый ключ апплета неверен
*/
#define CKR_APPLET_STARTKEY_INVALID     (CKR_VENDOR_DEFINED | 0x02E)
/**
* ошибка ProJava - минимальный возраст ПИН
*/
#define CKR_PINPOLICY_AGE               (CKR_VENDOR_DEFINED | 0x02F)
/**
* ошибка ProJava - превышено максимальное количество подряд идущих символов
*/
#define CKR_PINPOLICY_REPEAT            (CKR_VENDOR_DEFINED | 0x031)
/**
* ошибка ProJava - неверный регистр символов ПИН
*/
#define CKR_PINPOLICY_CASE              (CKR_VENDOR_DEFINED | 0x032)
/*
 * ошибка ProJava - содержание цифр в ПИН
 */
#define CKR_PINPOLICY_DIGIT             (CKR_VENDOR_DEFINED | 0x033)
/*
* ошибка ProJava - содержание спецсимволы в ПИН
*/
#define CKR_PINPOLICY_SPECCHAR          (CKR_VENDOR_DEFINED | 0x034)
/*
* ошибка ProJava - ПИН должен удовлетворять 2 или 3 условиям, например: верхний регистр + цифры ИЛИ нижний регистр + цифры + спецсимволы
*/
#define CKR_PINPOLICY_VIOLATION         (CKR_VENDOR_DEFINED | 0x035)
/**
* ошибка Flash2 - регистрация событий отключена
*/
#define CKR_LOGGING_NOT_STARTED         (CKR_VENDOR_DEFINED | 0x036)
/**
* ошибка Flash2 - запись в журнал уже выполняется
*/
#define CKR_LOG_ALREADY_RECORDED        (CKR_VENDOR_DEFINED | 0x037)
/**
* ошибка Flash2 - чтение/запись за пределами журнала
*/
#define CKR_LOG_EOF                     (CKR_VENDOR_DEFINED | 0x038)
/**
* ошибка Flash2 - регистрация событий уже включена
*/
#define CKR_LOGGING_ALREADY_STARTED     (CKR_VENDOR_DEFINED | 0x039)
/**
* ошибка Flash2 - попытка записать данные, которые не влезут в журнал
*/
#define CKR_LOG_NO_FREE_SPACE           (CKR_VENDOR_DEFINED | 0x03A)
/**
* ошибка Flash2 - файл с журналом не найден
*/
#define CKR_LOG_NOT_FOUND               (CKR_VENDOR_DEFINED | 0x03B)
/**
* Утилита проверки ИКБ не найдена
*/
#define CKR_ICL_JCVERIFY_NOT_FOUND          (CKR_VENDOR_DEFINED | 0x041)
/**
* Файл с контрольной суммой утилиты проверки ИКБ не найден
*/
#define CKR_ICL_JCVERIFY_CHECKSUM_NOT_FOUND (CKR_VENDOR_DEFINED | 0x042)
/**
* Файл с контрольной суммой ИКБ не найден
*/
#define CKR_ICL_CHECKSUM_NOT_FOUND          (CKR_VENDOR_DEFINED | 0x043)
/**
* Проверка утилиты проверки ИКБ на целостность завершилась с ошибкой
*/
#define CKR_ICL_JCVERIFY_CHECKSUM           (CKR_VENDOR_DEFINED | 0x044)
/**
* Проверка ИКБ на целостность завершилась с ошибкой
*/
#define CKR_ICL_CHECKSUM                    (CKR_VENDOR_DEFINED | 0x045)
/**
* ИКБ не содержит требуемых функций
*/
#define CKR_ICL_NOT_ICL                     (CKR_VENDOR_DEFINED | 0x046)

/** префикс для собственных механизмов */
#define NSSCK_VENDOR_ALADDIN                0xC4900000 /** 0x80000000 | 0x44900000 */
/** специальный механизм для UEK */
#define CKM_UEK_DERIVE                      (NSSCK_VENDOR_ALADDIN | 0x001)
/** проверка сертификата - только для КТ2 */
#define CKM_VERIFY_CERTIFICATE              (NSSCK_VENDOR_ALADDIN | 0x002)
/** ошибка TLS - необходимо передать больше данных для расшифровки сообщения */
#define CKR_NEED_MORE_DATA                  (NSSCK_VENDOR_ALADDIN | 0x003)

typedef struct CK_UEK_DERIVE_PARAMS
{
    CK_BYTE_PTR pR;
    CK_ULONG ulRLen;
    CK_BYTE_PTR pHashParams;
    CK_ULONG ulHashParamsLen;
} CK_UEK_DERIVE_PARAMS;

typedef CK_UEK_DERIVE_PARAMS CK_PTR CK_UEK_DERIVE_PARAMS_PTR;

/**
* Константа для ПИН-кода подписи
*/
#define CKU_SIGNATURE       (CKU_CONTEXT_SPECIFIC)
/**
* аутентификация по ПУК коду (только для Криптотокен-2)
*/
#define CKU_PUK             (0x80000001)
/**
* аутентификация по ответу на запрос внешней аутентификации(JC_CTRL_PKI_GET_CHALLENGE) (только для Laser)
*/
#define CKU_SO_RESPONSE     (0x80000002)
/**
* аутентификация администратором с установкой SecureMessaging (только для Криптотокен-2 и Flash2)
*/
#define CKU_SO_SM           (0x80000003)
/**
* аутентификация пользователем с установкой SecureMessaging (только для Криптотокен-2 и Flash2)
*/
#define CKU_USER_SM         (0x80000004)

/* специальные флаги инициализации */
#define CKF_DEVELOPER_MODE          0x80000000

#define CKF_DISABLE_CRYPTO_TOKEN    0x00000004
#define CKF_DISABLE_CRYPTO_TOKEN2   0x00000008
#define CKF_DISABLE_DATASTORE       0x00000010
#define CKF_DISABLE_LASER           0x00000020

#define CKF_SE_MODE                 0x00000040

/**
* специальный тип объекта для профилей SecurLogon
*/
#define CKO_SECUR_LOGON_PROFILE             (CKO_VENDOR_DEFINED | 0x00000001)
/**
* специальный тип объекта для слтов WebPass SecurLogon
*/
#define CKO_WEBPASS_OBJECT                  (CKO_VENDOR_DEFINED | 0x00000002)
/**
* Специальный объект - лицензия
*/
#define CKO_LICENSE                         (CKO_VENDOR_DEFINED | 0x00000003)

/**
* информация о модели устройства
*/
typedef struct JC_ISD_DATA
{
    /**
    * модель
    */
    CK_UTF8CHAR model[32];
    /**
    * дата производства в формате ГГГГММДД ( 1 мая 2010 = 20100501 )
    */
    CK_BYTE manufacturingDate[8];
} JC_ISD_DATA;
typedef JC_ISD_DATA CK_PTR JC_ISD_DATA_PTR;

/**
* Тип аутентификации пользователя для токенов типа Laser
*/
typedef CK_ULONG JC_PKI_AUTHTYPE;
typedef JC_PKI_AUTHTYPE CK_PTR JC_PKI_AUTHTYPE_PTR;
/**
* неизвестен
*/
#define JC_PKI_AUTHTYPE_UNDEFINED   0x00
/**
* По ПИН-коду
*/
#define JC_PKI_AUTHTYPE_PIN         0x01
/**
* По отпечатку пальца
*/
#define JC_PKI_AUTHTYPE_BIO         0x03
/**
* По ПИН-коду или отпечатку пальца
*/
#define JC_PKI_AUTHTYPE_PIN_OR_BIO  0x04
/**
* По ПИН-коду и отпечатку пальца
*/
#define JC_PKI_AUTHTYPE_PIN_AND_BIO 0x05

/**
* Качество отпечатка
*/
typedef CK_ULONG JC_PKI_BIO_PURPOSE;
#define JC_BIO_PURPOSE_100     (0x7fffffff / 100)
#define JC_BIO_PURPOSE_1000    (0x7fffffff / 1000)
#define JC_BIO_PURPOSE_10000   (0x7fffffff / 10000)
#define JC_BIO_PURPOSE_100000  (0x7fffffff / 100000)
#define JC_BIO_PURPOSE_1000000 (0x7fffffff / 1000000)

/**
* Режим защищенного канала
*/
typedef CK_ULONG JC_PKI_SECURE_MESSAGING_MODE;
/**
* Защищенный канал выключен
*/
#define JC_PKI_SECURE_MESSAGING_MODE_OFF 0x00
/**
* Защищенный канал на ключевых парах по алгоритму RSA
*/
#define  JC_PKI_SECURE_MESSAGING_MODE_RSA 0x01
/**
* Защищенный канал на ключевых парах по алгоритму EC
*/
#define  JC_PKI_SECURE_MESSAGING_MODE_EC 0x02

/**
* настройки апплета PKI при инициализации
*/
typedef struct JC_PKI_PERSONALIZATION_INFO
{
    CK_BYTE IsPersonalized;

    CK_ULONG MaxDFSize;
    CK_BYTE UserMaxAttempts;
    CK_BYTE UserMaxUnblock;
    CK_BYTE AdminMaxAttempts;
    CK_BYTE AdminIsChalResp;
    JC_PKI_AUTHTYPE UserPinType;

    CK_BYTE CardType;

    CK_BYTE UserMinChars;
    CK_BYTE UserMaxChars;
    CK_BYTE UserMinAlphaChars;
    CK_BYTE UserMinLowerChars;
    CK_BYTE UserMinUpperChars;

    CK_BYTE UserMinDigits;
    CK_BYTE UserMinNonAlphaChars;
    CK_BYTE UserPinHistorySize;

    /* Параметры ПИН кода администратора. Неприменимо для 3des */
    CK_BYTE AdminMinChars;
    CK_BYTE AdminMaxChars;
    CK_BYTE AdminMinAlphaChars;
    CK_BYTE AdminMinLowerChars;
    CK_BYTE AdminMinUpperChars;

    CK_BYTE AdminMinDigits;
    CK_BYTE AdminMinNonAlphaChars;

    CK_ULONG UserPINValidForSeconds;
    CK_ULONG UserPINExpiresAfterDays;
    CK_BYTE AllowCardWipe;
    CK_BYTE BioImageQuality;
    JC_PKI_BIO_PURPOSE BioPurpose;
    CK_BYTE BioMaxFingers;

    CK_BYTE X931Use;
    CK_BYTE BioMaxUnblock;
    CK_BYTE UserMustChangeAfterUnlock;

    CK_BYTE UserMaxRepeatingPin;
    CK_BYTE UserMaxSequencePin;

    CK_BYTE AdminMaxRepeatingPin;
    CK_BYTE AdminMaxSequencePin;

    /* digital signature specific - not used in this version*/
    CK_BYTE DSSupport;
    CK_BYTE MaxRSA1024Keys;
    CK_BYTE MaxRSA2048Keys;

    CK_BYTE DSPinMaxChars;
    CK_BYTE DSPinMinChars;
    CK_BYTE DSPinMinDigits;
    CK_BYTE DSPinMinAlphaChars;
    CK_BYTE DSPinMinNonAlphaChars;

    CK_BYTE DSPinMinLowerChars;
    CK_BYTE DSPinMinUpperChars;
    CK_BYTE DSPinMinAlphabeticChars;
    CK_BYTE DSPinMaxRepeatingPin;
    CK_BYTE DSPinMaxSequencePin;
    CK_BYTE DSPinMaxUnblock;
    CK_BYTE DSPinMaxAttempts;

    CK_BYTE DSPUKMaxChars;
    CK_BYTE DSPUKMinChars;
    CK_BYTE DSPUKMinDigits;
    CK_BYTE DSPUKMinAlphaChars;
    CK_BYTE DSPUKMinNonAlphaChars;

    CK_BYTE DSPUKMinLowerChars;
    CK_BYTE DSPUKMinUpperChars;
    CK_BYTE DSPUKMinAlphabeticChars;
    CK_BYTE DSPUKMaxRepeatingPin;
    CK_BYTE DSPUKMaxSequencePin;
    CK_BYTE DSPUKMaxUnblock;
    CK_BYTE DSPUKMaxAttempts;

    CK_BYTE DSSynchronizationOption;
    CK_BYTE DSVerificationPolicy;
    CK_BYTE DSActivationPINValue[16];
    CK_BYTE DSActivationPINLen;
    CK_BYTE DSDeactivationPINValue[16];
    CK_BYTE DSDeactivationPINLen;

    CK_BYTE UserPinAlways;

    CK_BYTE BioType;

    CK_BYTE UserMustChangeAfterFirstUse;
    CK_BYTE StartDate[8];

    CK_BYTE DefaultFinger;

    /**
    * режим обмена между токеном и компьютером
    */
    JC_PKI_SECURE_MESSAGING_MODE SecureMessagingMode;
    /**
    * длина нового ПИН-кода администратора. м.б. = 0
    */
    CK_BYTE NewAdminPinLength;
    /**
    * буфер нового ПИН-кода администратора
    */
    CK_BYTE NewAdminPin[16];
} JC_PKI_PERSONALIZATION_INFO;
typedef JC_PKI_PERSONALIZATION_INFO CK_PTR JC_PKI_PERSONALIZATION_INFO_PTR;

typedef CK_ULONG JC_PJ_PRIVATE_CACHE_POLICY;
#define JC_PJ_PRIVATE_CACHE_POLICY_OFF 0x00
#define JC_PJ_PRIVATE_CACHE_POLICY_LOGIN 0x01
#define JC_PJ_PRIVATE_CACHE_POLICY_ON 0x02

typedef CK_ULONG JC_PJ_AUTH2ND;
#define JC_PJ_AUTH2ND_NEVER 0x00
#define JC_PJ_AUTH2ND_CONDITIONAL 0x01
#define JC_PJ_AUTH2ND_ALWAYS 0x02
#define JC_PJ_AUTH2ND_MANDATORY 0x03
#define JC_PJ_AUTH2ND_APP 0x04

typedef CK_ULONG JC_PJ_COMPLEXITY_REQUIREMENTS;
#define JC_PJ_COMPLEXITY_REQUIREMENTS_NONE 0x00
#define JC_PJ_COMPLEXITY_REQUIREMENTS_LEAST2TYPES 0x03
#define JC_PJ_COMPLEXITY_REQUIREMENTS_LEAST3TYPES 0x01
#define JC_PJ_COMPLEXITY_REQUIREMENTS_MANUAL 0x00

typedef CK_ULONG JC_PJ_MANUAL_COMPLEXITY_VALUES;
#define JC_PJ_MANUAL_COMPLEXITY_PERMITTED 0x00
#define JC_PJ_MANUAL_COMPLEXITY_FORBIDDEN 0x01
#define JC_PJ_MANUAL_COMPLEXITY_MANDATORY 0x02

typedef struct JC_PJ_PINPOLICY
{
    CK_ULONG ulMinAge;
    CK_ULONG ulMaxAge;
    CK_ULONG ulWarningPeriod;
    CK_ULONG ulMinLen;
    CK_ULONG ulHistorySize;
    CK_ULONG ulMaxConsRepeat;

    JC_PJ_COMPLEXITY_REQUIREMENTS ComplexityReq;
    JC_PJ_MANUAL_COMPLEXITY_VALUES Uppercase;
    JC_PJ_MANUAL_COMPLEXITY_VALUES Lowercase;
    JC_PJ_MANUAL_COMPLEXITY_VALUES Numerals;
    JC_PJ_MANUAL_COMPLEXITY_VALUES SpecChar;

} JC_PJ_PINPOLICY;
typedef JC_PJ_PINPOLICY CK_PTR JC_PJ_PINPOLICY_PTR;

typedef struct JC_PJ_INITIALIZATION_INFO
{
    CK_UTF8CHAR label[32];

    CK_UTF8CHAR_PTR soPin;
    CK_ULONG ulSoPinLen;
    CK_ULONG ulSoMaxTriesCount;

    CK_UTF8CHAR_PTR userPin;
    CK_ULONG ulUserPinLen;
    CK_ULONG ulUserMaxTriesCount;
    CK_BBOOL toBeChanged;

    CK_BYTE_PTR askData;
    CK_ULONG askDataLen;

    JC_PJ_PINPOLICY pinPolicy;

    JC_PJ_PRIVATE_CACHE_POLICY cachePolicy;
    JC_PJ_AUTH2ND auth2nd;
} JC_PJ_INITIALIZATION_INFO;
typedef JC_PJ_INITIALIZATION_INFO CK_PTR JC_PJ_INITIALIZATION_INFO_PTR;

typedef struct JC_PJ_INIT_PARAMS
{
    JC_PJ_PINPOLICY pinPolicy;

    JC_PJ_PRIVATE_CACHE_POLICY cachePolicy;
    JC_PJ_AUTH2ND auth2nd;
} JC_PJ_INIT_PARAMS;
typedef JC_PJ_INIT_PARAMS CK_PTR JC_PJ_INIT_PARAMS_PTR;

/** Счетчики ПИН-кодов для ProJava */
typedef struct JC_PJ_PIN_COUNTERS
{
    /** Максимально допустимое количество попыток ввод ПИН-кода пользователя. */
    CK_ULONG ulMaxTries;
    /** Оставшееся количество попыток ввода ПИН-кода пользователя. */
    CK_ULONG ulTries;
} JC_PJ_PIN_COUNTERS;
typedef JC_PJ_PIN_COUNTERS CK_PTR JC_PJ_PIN_COUNTERS_PTR;

typedef struct JC_PJ_CAPABILITIES
{
    /*поддержка FIPS*/
    CK_BBOOL isFips;
    /*поддержка ключей RSA размером 2048 бит*/
    CK_BBOOL rsa2048support;
    /*наличие ПИН-кода администратора*/
    CK_BBOOL hasSo;
    /*Возраст ПИН пользователя*/
    CK_ULONG ulPinAge;
} JC_PJ_CAPABILITIES;
typedef JC_PJ_CAPABILITIES CK_PTR JC_PJ_CAPABILITIES_PTR;

/**
* информация о пине пользователя для Лазера
*/
typedef struct JC_PKI_PIN_INFO
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
} JC_PKI_PIN_INFO;
typedef JC_PKI_PIN_INFO CK_PTR JC_PKI_PIN_INFO_PTR;

/**
* тип поддерживаемой биометрии
*/
typedef CK_ULONG JC_PKI_BIO_BIOMETRY_TYPE;
#define JC_PKI_BIO_BIOMETRY_TYPE_PRECISE_BIOMATCH              0x81
#define JC_PKI_BIO_BIOMETRY_TYPE_PRECISE_ANSI                  0x82
#define JC_PKI_BIO_BIOMETRY_TYPE_NEUROTECHNOLOGY_MEGAMATCHER   0x83
#define JC_PKI_BIO_BIOMETRY_TYPE_PRECISE_ISO                   0x84
#define JC_PKI_BIO_BIOMETRY_TYPE_ID3_ISO                       0x85

/**
* информация о поддержке BIO
*/
typedef struct JC_PKI_BIO_SUPPORT_INFO
{
    /**
    * Поддерживается ли биометрия
    */
    CK_BBOOL Enabled;
    /**
    * Тип аутентификации
    */
    JC_PKI_AUTHTYPE AuthType;
} JC_PKI_BIO_SUPPORT_INFO;
typedef JC_PKI_BIO_SUPPORT_INFO CK_PTR JC_PKI_BIO_SUPPORT_INFO_PTR;

/**
* Информация о ПИН-коде Laser
*/
typedef struct JC_PKI_PIN_COUNTERS
{
    /** Оставшееся количество попыток неправильного ввода. */
    CK_ULONG ulRetryRemains;
    /** Максимально допустимое количество попыток неправильного ввода. */
    CK_ULONG ulMaxRetryCounter;
    /** Оставшееся количество разблокировок. */
    CK_ULONG ulUnlockRemains;
    /** Максимальное количество разблокировок. */
    CK_ULONG ulMaxUnlockCounter;
} JC_PKI_PIN_COUNTERS;
typedef JC_PKI_PIN_COUNTERS CK_PTR JC_PKI_PIN_COUNTERS_PTR;

/**
* состояние ПИН-кода для Криптотокен-2
*/
typedef struct JC_KT2_PIN_STATE
{
    /** признак установки PIN-кода */
    CK_BBOOL Exists;
    /** максимальное количество последовательно неправильно введенных ПИН-кодов */
    CK_ULONG ulMaxErrorCount;
    /** количество последовательно неправильно введенных ПИН-кодов */
    CK_ULONG ulErrorCount;
} JC_KT2_PIN_STATE;
typedef JC_KT2_PIN_STATE CK_PTR JC_KT2_PIN_STATE_PTR;

/**
* политика ПИН-кода для Криптотокен-2
*/
typedef struct JC_KT2_PIN_POLICY
{
    /** обязательное наличие в ПИН-коде прописных символов A-Z А-Я */
    CK_BBOOL UseUpperCaseLetters;
    /** обязательное наличие в ПИН-коде строчных символов a-z а-я */
    CK_BBOOL UseLowerCaseLetters;
    /** обязательное наличие в ПИН-коде цифр */
    CK_BBOOL UseDigits;
    /** обязательное наличие в ПИН-коде специальных символов находятся в диапазонах 20h–2Fh, 3Ah–40h, 5Bh–60h и 7Bh–7Eh */
    CK_BBOOL UseSpecial;
    /** признак необходимости смены ПИН-кода */
    CK_BBOOL PinMustBeChanged;
    /** приращение минимальной длины кода, т.е. минимальная для ПИН-кода = 6 + значение приращение. Значение приращения м.б. от 0 до 7 */
    CK_ULONG ulMinPinLengthAddition;
} JC_KT2_PIN_POLICY;
typedef JC_KT2_PIN_POLICY CK_PTR JC_KT2_PIN_POLICY_PTR;

typedef CK_ULONG JC_KT2_SECURE_MESSAGING_STATE;
/**
* Защищенный канал выключен
*/
#define JC_KT2_SECURE_MESSAGING_STATE_NONE 0
/**
* Защищенный канал в процессе установки
*/
#define JC_KT2_SECURE_MESSAGING_STATE_NOT_FINISHED 1
/**
* Защищенный канал включен
*/
#define JC_KT2_SECURE_MESSAGING_STATE_SIMPLE 2
/**
* Защищенный канал включен в эксклюзивном режиме
*/
#define JC_KT2_SECURE_MESSAGING_STATE_EXCLUSIVE 3


/**
* дополнительная информация о Криптотокен-2
*/
typedef struct JC_KT2_EXTENDED_INFO
{
    /**
    * Главная версия прошивки
    */
    CK_BYTE Major;
    /**
    * Дополнительная версия прошивки
    */
    CK_BYTE Minor;
    /**
    * Номер выпуска прошивки
    */
    CK_BYTE Release;
    /**
    * количество разблокировок
    */
    CK_ULONG ulUnlockCount;
    /**
    * информация о персонализации
    */
    CK_BYTE PersonalizationInfo[64];
    /**
    * контрольная сумма
    */
    CK_BYTE CheckSum[32];
    /**
    * состояние PIN-кода пользователя
    */
    JC_KT2_PIN_STATE UserPINState;
    /**
    * состояние PIN-кода подписи
    */
    JC_KT2_PIN_STATE SignPINState;
    /**
    * состояние PUK-кода
    */
    JC_KT2_PIN_STATE PUKState;
    /**
    * Признак необходимости ввода ПИН-кода администратора в закрытом виде
    */
    CK_BBOOL SULoginThrowSM;
    /**
    * Признак разрешения пользователю менять PUK-код
    */
    CK_BBOOL UserPUKEnabled;
    /**
    * политика ПИН-кода пользователя
    */
    JC_KT2_PIN_POLICY UserPinPolicy;
    /**
    * политика ПИН-кода подписи
    */
    JC_KT2_PIN_POLICY UserSignPinPolicy;
    /**
    * состояние защищенного канала
    */
    JC_KT2_SECURE_MESSAGING_STATE SecureMessagingState;
} JC_KT2_EXTENDED_INFO;
typedef JC_KT2_EXTENDED_INFO CK_PTR JC_KT2_EXTENDED_INFO_PTR;

/**
* типы ПИН-кодов для КТ2
*/
typedef CK_ULONG JC_KT2_PIN_TYPE;
/**
* ПИН-код пользователя
*/
#define JC_KT2_PIN_TYPE_USER 1
/**
* ПИН-код подписи
*/
#define JC_KT2_PIN_TYPE_SIGNATURE 2

/**
* PIN-код сброса к заводским настройкам
*/
#define JC_KT2_PIN_TYPE_FACTORY_RESET 5

/**
* Язык для отображения
*/
typedef CK_ULONG JC_AFT_LANGUAGE_TYPE;
#define JC_AFT_LANGUAGE_TYPE_ENGLISH    0x409
#define JC_AFT_LANGUAGE_TYPE_RUSSIAN    0x419

/**
* Свойства SWYX-считывателя
*/
typedef struct SWYX_PROPERTIES_RESPONSE
{
    /** Тип экрана. 0 - только текст, 1 - графический. */
    CK_BYTE DisplayType;
    /** Максимальное количество символов, помещающихся в одну строчку на экране. */
    CK_ULONG ulLcdMaxCharacters;
    /** Максимальное количество строк. */
    CK_ULONG ulLcdMaxLines;
    /** Ширина экрана в точках. */
    CK_ULONG ulGraphicMaxWidth;
    /** Высота экрана в точках. */
    CK_ULONG ulGraphicMaxHeight;
    /** Цветность экрана. 1 - черно-белый, 2 - градации серого (4 бита), 4 - цветной (4 бита) */
    CK_BYTE GraphicColorDepth;
    /** Максимальное количество буквенных символов, одновременно помещающихся на экране. */
    CK_ULONG ulMaxVirtualSize;
} SWYX_PROPERTIES_RESPONSE;
typedef SWYX_PROPERTIES_RESPONSE CK_PTR SWYX_PROPERTIES_RESPONSE_PTR;

typedef CK_ULONG JC_EX_X509_DATA_TYPE;
/** получить владельца сертификата. */
#define JC_EX_X509_DATA_TYPE_SUBJECT 1
/** получить издателя сертификата. */
#define JC_EX_X509_DATA_TYPE_ISSUER 2
/** получить серийный номер сертификата. */
#define JC_EX_X509_DATA_TYPE_SERIAL 3

/**
* тип апплета
*/
typedef CK_ULONG JC_APPLET_TYPE;
typedef JC_APPLET_TYPE CK_PTR JC_APPLET_TYPE_PTR;
#define JC_APPLET_TYPE_CRYPTO_TOKEN                 1
#define JC_APPLET_TYPE_CRYPTO_TOKEN_2               2
#define JC_APPLET_TYPE_LASER                        3
#define JC_APPLET_TYPE_DATA_STORE                   4
#define JC_APPLET_TYPE_FKH                          5
#define JC_APPLET_TYPE_PRO_JAVA                     6
#define JC_APPLET_TYPE_PRO                          7
#define JC_APPLET_TYPE_VASCO_CARDLESS               8
#define JC_APPLET_TYPE_WEBPASS                      9
#define JC_APPLET_TYPE_FLASH2                       10

/**
* Информация о считывателе
*/
typedef struct JC_TOKEN_PROPERTIES
{
    /**
    * массив атрибутов
    */
    CK_BYTE_PTR pAttr;
    /**
    * размер массива атрибутов в байтах
    */
    CK_ULONG ulAttrSize;
    /**
    * тег считывателя
    */
    CK_UTF8CHAR_PTR pJaCartaTag;
    /**
    * размер тега в байтах
    */
    CK_ULONG ulJaCartaTagSize;
    /**
    * серийный номер считывателя
    */
    CK_CHAR_PTR pSerialNumber;
    /**
    * размер серийного номера считывателя в байтах
    */
    CK_ULONG ulSerialNumberSize;
    /**
    * дата производства в секундах начиная с 01.01.1970
    */
    CK_ULONG ulManufactureDate;
    /**
    * Количество апплетов
    */
    CK_ULONG ulAppletCount;
    /**
    * Апплеты
    */
    JC_APPLET_TYPE_PTR pApplets;
} JC_TOKEN_PROPERTIES;
typedef JC_TOKEN_PROPERTIES CK_PTR JC_TOKEN_PROPERTIES_PTR;

typedef CK_FLAGS JC_PKCS7_FLAGS;
/** Не включать данные в сообщение PKCS#7 подписи. */
#define JC_PKCS7_FLAGS_DETACHED_SIGNATURE        0x01
/** Вычислять значение хеш-функции на устройстве. */
#define JC_PKCS7_FLAGS_HARDWARE_HASH             0x02
/** Выполнять проверку срока действия сертификата. */
#define JC_PKCS7_FLAGS_CHECK_CERT_VALIDITY       0x04
/** Не выполнять хеширование, подписывать сразу данные. */
#define JC_PKCS7_FLAGS_NOHASH                    0x08

/** Префикс для значений RDN, которые д.б. закодированы как ASN.1 NumericString. */
#define X509_NAME_NUMERICSTRING_PREFIX "NUMERICSTRING:"
/** Префикс для значений RDN, которые д.б. закодированы как ASN.1 UTF8String. */
#define X509_NAME_UTF8STRING_PREFIX "UTF8STRING:"

typedef CK_ULONG JC_CONFIRM_MODE;
/** Ввод без подтверждения */
#define JC_CONFIRM_MODE_ENTER_ONLY          1
/** Ввод с подтверждением */
#define JC_CONFIRM_MODE_ENTER_AND_REPEAT    2
/** Запрос только подтверждения */
#define JC_CONFIRM_MODE_REPEAT_ONLY         3

/** Счетчики ПИН-кодов для КТ1 */
typedef struct JC_CT1_PIN_COUNTERS
{
    /** Максимально допустимое количество ошибок ввод ПИН-кода. */
    CK_ULONG ulMaxPinErrors;
    /** Текущее количество ошибок ввод ПИН-кода пользователя. */
    CK_ULONG ulUserPinErrors;
    /** Текущее количество ошибок ввод ПИН-кода администратора. */
    CK_ULONG ulAdminPinErrors;
} JC_CT1_PIN_COUNTERS;
typedef JC_CT1_PIN_COUNTERS CK_PTR JC_CT1_PIN_COUNTERS_PTR;

/** Счетчики ПИН-кодов для DataStore */
typedef struct JC_DS_PIN_COUNTERS
{
    /** Максимально допустимое количество ошибок ввод ПИН-кода пользователя. */
    CK_ULONG ulUserMaxErrors;
    /** Текущее количество ошибок ввод ПИН-кода пользователя. */
    CK_ULONG ulUserPinErrors;
    /** Максимально допустимое количество ошибок ввод ПИН-кода администратора. */
    CK_ULONG ulAdminMaxErrors;
    /** Текущее количество ошибок ввод ПИН-кода администратора. */
    CK_ULONG ulAdminPinErrors;
} JC_DS_PIN_COUNTERS;
typedef JC_DS_PIN_COUNTERS CK_PTR JC_DS_PIN_COUNTERS_PTR;


/** Режим работы WebPass. */
typedef CK_ULONG JC_WP_MODE;
#define JC_WEBPASS_MODE_CCID        0x01
#define JC_WEBPASS_MODE_HID         0x02
#define JC_WEBPASS_MODE_HID_CCID    0x03

/** Дополнительная информация о WebPass */
typedef struct JC_WP_INFO
{
    /** Режим работы. */
    JC_WP_MODE Mode;
    /** Код последней ошибки. */
    CK_ULONG ulLastErrorCode;
    /** Количество нажатий на кнопку. */
    CK_ULONG ulButtonClickCount;
    /** Количество подключений к USB. */
    CK_ULONG ulUSBConnectionCount;
} JC_WP_INFO;
typedef JC_WP_INFO CK_PTR JC_WP_INFO_PTR;

/** Информация о WebPass, заданная на производстве  */
typedef struct JC_WP_PRODUCTION_INFO
{
    /** Версия прошивки major, minor*/
    CK_VERSION FirmwareVersionHigh;
    /** Версия прошивки build, release*/
    CK_VERSION FirmwareVersionLow;
    /** Дата производства */
    CK_DATE Date;
    /** Название модели*/
    CK_UTF8CHAR ModelName[32];
    /** Серийный номер */
    CK_UTF8CHAR SerialNumber[16];
} JC_WP_PRODUCTION_INFO;
typedef JC_WP_PRODUCTION_INFO CK_PTR JC_WP_PRODUCTION_INFO_PTR;

typedef CK_ULONG JC_LOG_MODE;
#define JC_LOG_MODE_OFF             0
#define JC_LOG_MODE_DEBUG           3
#define JC_LOG_MODE_DEBUG_APDU      4

/** Минимальный размер раздела в секторах */
#define JC_F2_MIN_PARTITION_SIZE 20480

/** Жизненные циклы Flash2 */
typedef CK_ULONG JC_F2_LIFE_CYCLE;
/** не инициализирован */
#define JC_F2_LIFE_CYCLE_EMPTY              0x01
/** инициализирован */
#define JC_F2_LIFE_CYCLE_INITIALIZED        0x02
/** рабочее состояние */
#define JC_F2_LIFE_CYCLE_READY              0x03
/** скрытый раздел подключен */
#define JC_F2_LIFE_CYCLE_READY_MOUNTED      0x04
/** готов к очистке */
#define JC_F2_LIFE_CYCLE_READY_TO_CLEAR     0x05

/**
* политика ПИН-кода для Flash2
*/
typedef struct JC_F2_PIN_POLICY
{
    /** обязательное наличие в ПИН-коде прописных символов A-Z А-Я */
    CK_BBOOL UseUpperCaseLetters;
    /** обязательное наличие в ПИН-коде строчных символов a-z а-я */
    CK_BBOOL UseLowerCaseLetters;
    /** обязательное наличие в ПИН-коде цифр */
    CK_BBOOL UseDigits;
    /** обязательное наличие в ПИН-коде специальных символов находятся в диапазонах 20h–2Fh, 3Ah–40h, 5Bh–60h и 7Bh–7Eh */
    CK_BBOOL UseSpecial;
    /** признак необходимости смены ПИН-кода */
    CK_BBOOL PinMustBeChanged;
    /** приращение минимальной длины кода, т.е. минимальная для ПИН-кода = 6 + значение приращение. Значение приращения м.б. от 0 до 7 */
    CK_ULONG ulMinPinLengthAddition;
} JC_F2_PIN_POLICY;
typedef JC_F2_PIN_POLICY CK_PTR JC_F2_PIN_POLICY_PTR;

/**
* состояние ПИН-кода для Flash2
*/
typedef struct JC_F2_PIN_STATE
{
    /** признак установки PIN-кода */
    CK_BBOOL Exists;
    /** максимальное количество последовательно неправильно введенных ПИН-кодов */
    CK_ULONG ulMaxErrorCount;
    /** количество последовательно неправильно введенных ПИН-кодов */
    CK_ULONG ulErrorCount;
} JC_F2_PIN_STATE;
typedef JC_F2_PIN_STATE CK_PTR JC_F2_PIN_STATE_PTR;

/** типы алгоритмов шифрования скрытых разделов*/
typedef CK_ULONG JC_F2_ALGORITHM_TYPE;
/** стандартный алгоритм ГОСТ 28147-89 */
#define JC_F2_ALGORITHM_TYPE_GOST28147          1
/** алгоритм ГОСТ 28147-89 с уменьшенным количеством раундов */
#define JC_F2_ALGORITHM_TYPE_GOST28147_FAST     2

/** Информация о Flash2 */
typedef struct JC_F2_EXTENDED_INFO
{
    /** Версия прошивки */
    CK_ULONG ulVersion;
    /** Количество доступной памяти */
    CK_ULONG ulTotalMemory;
    /** Размер открытого RW раздела. */
    CK_ULONG ulPublicRWSize;
    /** Размер открытого CD-ROM раздела */
    CK_ULONG ulPublicCDSize;
    /** Размер скрытого CD-ROM раздела */
    CK_ULONG ulPrivateCDSize;
    /** Размер ISO-образа, записанного в открытый CD-ROM раздел */
    CK_ULONG ulPublicISOSize;
    /** Размер ISO-образа, записанного в скрытый CD-ROM раздел */
    CK_ULONG ulPrivateISOSize;
    /** Жизненный цикл */
    JC_F2_LIFE_CYCLE LifeCycle;
    /** Общее количество успешных подключений скрытого раздела в доверенной среде */
    CK_ULONG ulSuccessMountCount;
    /** Общее количество неуспешных подключений скрытого раздела в доверенной среде */
    CK_ULONG ulErrorMountCount;
    /** Количество успешных отключений скрытого раздела */
    CK_ULONG ulSuccessUmountCount;
    /** Количество неуспешных отключений скрытого раздела */
    CK_ULONG ulErrorUmountCount;
    /** Количество выполненных команд "Очистить карту памяти" */
    CK_ULONG ulClearCount;
    /** Количество разблокировок */
    CK_ULONG ulUnlockCount;
    /** Состояние PIN-кода пользователя */
    JC_F2_PIN_STATE UserPINState;
    /** Состояние PUK-кода */
    JC_F2_PIN_STATE PUKState;
    /** Политика ПИН-кода пользователя */
    JC_F2_PIN_POLICY UserPinPolicy;
    /** Серийный номер токена для генерации ключа токена */
    CK_BYTE SerialNumber[16];
    /** Алгоритм шифрования скрытых разделов. Если не определен, то равен CK_UNAVAILABLE_INFORMATION */
    JC_F2_ALGORITHM_TYPE EncryptionAlgorithm;
    /** Признак наличия ключа шифрования скрытых разделов */
    CK_BBOOL HasPartitionKey;
    /** Количество подключений токена по USB */
    CK_ULONG ulUSBConnectionCount;
    /** Общее время работы токена в минутах */
    CK_ULONG ulTotalWorkTime;
    /** Количество прерванных APDU команд */
    CK_ULONG ulAPDUCancelCount;
} JC_F2_EXTENDED_INFO;
typedef JC_F2_EXTENDED_INFO CK_PTR JC_F2_EXTENDED_INFO_PTR;

/** Типы ключей */
typedef CK_ULONG JC_F2_KEY_TYPE;
/** мастер-ключ администратора */
#define JC_F2_KEY_TYPE_SO           1
/** ключ пользователя */
#define JC_F2_KEY_TYPE_USER         2
/** ключ шифрования журнала */
#define JC_F2_KEY_TYPE_S            3

/**
* типы ПИН-кодов для Flash2
*/
typedef CK_ULONG JC_F2_PIN_TYPE;
/** ПИН-код пользователя */
#define JC_F2_PIN_TYPE_USER 1

/** типы токенов */
typedef CK_ULONG JC_F2_TOKEN_TYPE;
typedef JC_F2_TOKEN_TYPE CK_PTR JC_F2_TOKEN_TYPE_PTR;
/** тип токена - токен администртора */
#define JC_F2_TOKEN_TYPE_SO      1
/** тип токена - токен пользователя */
#define JC_F2_TOKEN_TYPE_USER    2

/** параметры для вычисления ответа на запрос подключения скрытых разделов */
typedef struct JC_F2_MOUNT_CHALLENGE_INFO
{
    /** мастер ключ */
    CK_BYTE_PTR pMasterKey;
    /** размер мастер ключа в байтах */
    CK_ULONG ulMasterKeySize;
    /** ключ авторизации  */
    CK_BYTE_PTR pAuthorizationKey;
    /** размер ключа авторизации в байтах */
    CK_ULONG ulAuthorizationKeySize;
    /** запрос на подключение */
    CK_BYTE_PTR pChallenge;
    /** размер запроса на подключение в байтах */
    CK_ULONG ulChallengeSize;
} JC_F2_MOUNT_CHALLENGE_INFO;
typedef JC_F2_MOUNT_CHALLENGE_INFO CK_PTR JC_F2_MOUNT_CHALLENGE_INFO_PTR;

/** данные для инициализации токена пользователя */
typedef struct JC_F2_INIT_RESPONSE
{
    /** ключ автоизации */
    CK_BYTE AuthorizationKey[32];
    /** ключ шифрвания раздела */
    CK_BYTE PartitionKey[32];
} JC_F2_INIT_RESPONSE;
typedef JC_F2_INIT_RESPONSE CK_PTR JC_F2_INIT_RESPONSE_PTR;

/** минимально допустимый индекс ключа авторизации для Flash2 */
#define JC_MIN_AUTHORIZATION_KEY_INDEX      0x00
/** максимально допустимый индекс ключа авторизации для Flash2 */
#define JC_MAX_AUTHORIZATION_KEY_INDEX      0x0F

/**
* Типы шифрования/расшифрования без использования токена
*/
typedef CK_ULONG JC_SW_OPERATION_MODE;
/** тип операции - шифрование */
#define JC_SW_OPERATION_MODE_ENCRYPT        1
/** тип операции - расшифрование */
#define JC_SW_OPERATION_MODE_DECRYPT        2

/**
* Дескриптор софтверной операции
*/
typedef CK_ULONG JC_SW_OPERATION_HANDLE;
typedef JC_SW_OPERATION_HANDLE CK_PTR JC_SW_OPERATION_HANDLE_PTR;

/**
* Информация о полной версии библиотеки
*/
typedef struct JC_VERSION_INFO
{
    /** первая цифра версии */
    CK_ULONG ulMajor;
    /** вторая цифра версии */
    CK_ULONG ulMinor;
    /** третья цифра версии */
    CK_ULONG ulRelease;
    /** четвертая цифра версии */
    CK_ULONG ulBuild;
} JC_VERSION_INFO;
typedef JC_VERSION_INFO CK_PTR JC_VERSION_INFO_PTR;

typedef struct JC_KT2_GOSTR3410_DERIVE_PARAMS
{
    CK_EC_KDF_TYPE  kdf;
    CK_OBJECT_HANDLE hPublicKey;
    CK_BYTE_PTR     pUKM;
    CK_ULONG        ulUKMLen;
} JC_KT2_GOSTR3410_DERIVE_PARAMS;
typedef JC_KT2_GOSTR3410_DERIVE_PARAMS CK_PTR JC_KT2_GOSTR3410_DERIVE_PARAMS_PTR;

/**
* Информация о необходимом количестве команд для разблокировки
*/
typedef struct JC_KT2_TIMEOUT_UNLOCK_INFO
{
    /** количество команд для ПИН-кода пользователя */
    CK_ULONG ulUserPINCount;
    /** количество команд для ПИН-кода подписи */
    CK_ULONG ulSignPINCount;
    /** Минимально допустимое количество команд */
    CK_ULONG ulMinCount;
} JC_KT2_TIMEOUT_UNLOCKINFO;
typedef JC_KT2_TIMEOUT_UNLOCK_INFO CK_PTR JC_KT2_TIMEOUT_UNLOCK_INFO_PTR;

/** Действие при получении изделием JaCarta SF / ГОСТ команды Set_Configuration в процессе конфигурации USB - устройства терминалом */
typedef CK_ULONG JC_F2_SET_CONFIG_ACTION;
#define JC_F2_SET_CONFIG_ACTION_NONE    0
#define JC_F2_SET_CONFIG_ACTION_UMOUNT  1

/** Условия истечения сроков ожидания */
typedef CK_ULONG JC_F2_EXPIRATION_CONDITION;
#define JC_F2_EXPIRATION_CONDITION_ANY  0
#define JC_F2_EXPIRATION_CONDITION_ALL  1

/** параметры автоматического размонтирования скрытых разделов */
typedef struct JC_F2_AUTO_UMOUNT_SETTINGS
{
    JC_F2_SET_CONFIG_ACTION SetConfigAction;
    /** условия размонтирования разделов */
    JC_F2_EXPIRATION_CONDITION TimeoutCondition;
    /** время ожидания чтения или записи в секундах */
    CK_ULONG ulReadWriteTimeout;
    /** время с начала монтирования раздела в секундах */
    CK_ULONG ulMountTimeout;
} JC_F2_AUTO_UMOUNT_SETTINGS;

/** размеры журналов */
typedef CK_ULONG JC_F2_LOG_SIZE;
#define JC_F2_LOG_SIZE_100KB    0
#define JC_F2_LOG_SIZE_300KB    1
#define JC_F2_LOG_SIZE_900KB    2
#define JC_F2_LOG_SIZE_1800KB   3

/**
* Настройки журнала
*/
typedef struct JC_F2_LOG_SETTINGS
{
    /** максимальный размер журнала */
    JC_F2_LOG_SIZE MaxSize;
    /** блокировать скрытые разделы при заполнении */
    CK_BBOOL LockPrivatePartitions;
} JC_F2_LOG_SETTINGS;

/** возможность монтирования скрытых разделов при переполнении журнала */
typedef CK_ULONG JC_F2_MOUNT_ON_OVERFLOW;
#define JC_F2_MOUNT_ON_OVERFLOW_DISABLED    0
#define JC_F2_MOUNT_ON_OVERFLOW_ENABLED     1

/**
* Состояние регистрации событий
*/
typedef struct JC_F2_LOGGING_INFO
{
    /** CK_TRUE - регистрация событий включена, CK_FALSE - выключена (при этом значения всех остальных полей не определены) */
    CK_BBOOL Enabled;
    /** метка журнала */
    CK_BYTE Label[8];
    /** настройки журнала NSD */
    JC_F2_LOG_SETTINGS NSDSettings;
    /** настройки журнала CCID */
    JC_F2_LOG_SETTINGS CCIDSettings;
    /** настройки журнала SECURE */
    JC_F2_LOG_SETTINGS SecureSettings;
    /** возможность монтирования при переполнении */
    JC_F2_MOUNT_ON_OVERFLOW MountOnOverflow;
    /** настройки автоматического размонтирования */
    JC_F2_AUTO_UMOUNT_SETTINGS UMountSettings;
} JC_F2_LOGGING_INFO;
typedef JC_F2_LOGGING_INFO CK_PTR JC_F2_LOGGING_INFO_PTR;

/** идентификаторы журналов */
typedef CK_ULONG JC_F2_LOG_ID;
#define JC_F2_LOG_ID_NSD        1
#define JC_F2_LOG_ID_CCID       2
#define JC_F2_LOG_ID_SECURE     3

/** Запись журнала NSD */
typedef struct JC_F2_NSD_RECORD
{
    /** номер записи */
    CK_ULONG ulNumber;
    /** адрес USB устройства */
    CK_ULONG ulUSBAddress;
    /** время среды функционирования */
    CK_ULONG ulEnvironmentTime;
    /** идентификатор среды функционирования */
    CK_ULONG ulEnvironmentID;
    /** время работы изделия с начала эксплуатации, минуты */
    CK_ULONG ulTotalTime;
    /** время инициализации журнала */
    CK_ULONG ulInitLogTime;
    /** статус события */
    CK_ULONG ulEventStatus;
    /** количество записей удаленных при очистке */
    CK_ULONG ulDeletedRecordsCount;
    /** метка события */
    CK_BYTE EventLabel[16];
} JC_F2_NSD_RECORD;
typedef JC_F2_NSD_RECORD CK_PTR JC_F2_NSD_RECORD_PTR;

/** запись журнала CCID */
typedef struct JC_F2_CCID_RECORD
{
    /** номер записи */
    CK_ULONG ulNumber;
    /** адрес USB устройства */
    CK_ULONG ulUSBAddress;
    /** время среды функционирования */
    CK_ULONG ulEnvironmentTime;
    /** идентификатор среды функционирования */
    CK_ULONG ulEnvironmentID;
    /** время работы изделия с начала эксплуатации, минуты */
    CK_ULONG ulTotalTime;
    /** метка события */
    CK_BYTE EventLabel[16];
} JC_F2_CCID_RECORD;
typedef JC_F2_CCID_RECORD CK_PTR JC_F2_CCID_RECORD_PTR;

/** настройки регистрации событий */
typedef struct JC_F2_INIT_LOGGING_INFO
{
    /** метка журнала */
    CK_BYTE Label[8];
    /** время инициализации журналов */
    CK_ULONG ulInitLogTime;
    /** настройки журнала NSD */
    JC_F2_LOG_SETTINGS NSDSettings;
    /** настройки журнала CCID */
    JC_F2_LOG_SETTINGS CCIDSettings;
    /** настройки журнала SECURE */
    JC_F2_LOG_SETTINGS SecureSettings;
} JC_F2_INIT_LOGGING_INFO;
typedef JC_F2_INIT_LOGGING_INFO CK_PTR JC_F2_INIT_LOGGING_INFO_PTR;

/** информация о текущих размерах файлов журналов*/
typedef struct JC_F2_LOG_SIZES
{
    /** размер журнала NSD в байтах */
    CK_ULONG ulNSDSize;
    /** размер журнала CCID в байтах */
    CK_ULONG ulCCIDSize;
    /** размер журнала Secure в байтах */
    CK_ULONG ulSecureSize;
} JC_F2_LOG_SIZES;
typedef JC_F2_LOG_SIZES CK_PTR JC_F2_LOG_SIZES_PTR;

/**
* тип корпуса токена
*/
typedef CK_ULONG JC_CASE_TYPE;
#define JC_CASE_TYPE_UNDEFINED          0
#define JC_CASE_TYPE_JACARTA_NANO       1
#define JC_CASE_TYPE_JACARTA_MINI       2
#define JC_CASE_TYPE_JACARTA_XL         3
#define JC_CASE_TYPE_JACARTA_SCARD      4
#define JC_CASE_TYPE_JACARTA_MICROSD    5
#define JC_CASE_TYPE_JACARTA_WEBPASS    6
#define JC_CASE_TYPE_JACARTA_ANTIFRAUD  7
#define JC_CASE_TYPE_ETOKEN_CLASSIC     8
#define JC_CASE_TYPE_ETOKEN_NG1         9
#define JC_CASE_TYPE_ETOKEN_NG2         10
#define JC_CASE_TYPE_ETOKEN_NG2_NO_LCD  11

/**
* Информация о считывателе
*/
typedef struct JC_TOKEN_PROPERTIES_EX
{
    /**
    * Обычные свойства
    */
    JC_TOKEN_PROPERTIES Properties;
    /**
    * Общее количество памяти в байтах
    */
    CK_ULONG TotalMemory;
    /**
    * Тип корпуса
    */
    JC_CASE_TYPE CaseType;
    /**
    * Износ токена в процентах
    */
    CK_ULONG Wearout;
} JC_TOKEN_PROPERTIES_EX;
typedef JC_TOKEN_PROPERTIES_EX CK_PTR JC_TOKEN_PROPERTIES_EX_PTR;

typedef CK_ULONG JC_NOTIFICATION_EVENT;
/**
* Функция обратного вызова для уведомления о событиях библиотеки
* @param pApplication данные переданные при вызове JC_SetNotificationCallback
* @param event тип события
* @param pEventData данные события
*/
typedef CK_CALLBACK_FUNCTION(void, JC_NOTIFICATION_CALLBACK)
(
    CK_VOID_PTR pApplication,
    JC_NOTIFICATION_EVENT event,
    CK_VOID_PTR pEventData
);

/**
* Подключен старый не поддерживаемый токен. Тип данных - JC_UNSUPPORTED_MODEL_NAME
*/
#define JC_NOTIFICATION_EVENT_UNSUPPORTED_OLD_MODEL    1
/**
* Подключен новый не поддерживаемый токен. Тип данных - JC_UNSUPPORTED_MODEL_NAME
*/
#define JC_NOTIFICATION_EVENT_UNSUPPORTED_NEW_MODEL    2

typedef struct JC_UNSUPPORTED_MODEL_NAME
{
    /** название модели */
    CK_UTF8CHAR_PTR pModelName;
    /** размер названия модели в байтах */
    CK_ULONG ulModelNameSize;
} JC_UNSUPPORTED_MODEL_NAME;
typedef JC_UNSUPPORTED_MODEL_NAME CK_PTR JC_UNSUPPORTED_MODEL_NAME_PTR;

/**
* Разбор CMS сообщений
*/
/**
* Материал разбора сертификата
*/
typedef struct JC_CERTIFICATE_MATERIAL
{
    int             publicKeyAlgorithmNid;      // nid основного алгоритма 
    CK_BYTE_PTR     ellipticCurveParams;        // составляющая параметра публичного ключа соответствуюшая pkcs11 атрибуту CKA_GOSTR3410_PARAMS + длина
    CK_ULONG        ellipticCurveParamsLength;  
    CK_BYTE_PTR     hashParams;                 // составляющая параметра публичного ключа соответствуюшая pkcs11 атрибуту CKA_GOSTR3411_PARAMS + длина
    CK_ULONG        hashParamsLength;
    CK_BYTE_PTR     publicKey;                  // публичный ключ + длина
    CK_ULONG        publicKeyLength;
} JC_CERTIFICATE_MATERIAL;
typedef JC_CERTIFICATE_MATERIAL CK_PTR JC_CERTIFICATE_MATERIAL_PTR;

/**
* Описатель объектов: OID алгоритма, OID набора праметров или RDN субъекта
*/
typedef struct JC_NID_OBJECT
{
    CK_LONG             nid;            // идентификатор
    CK_CHAR_PTR         shortName;      // короткое имя объекта
    CK_CHAR_PTR         longName;       // длинное имя объекта
    CK_CHAR_PTR         value;          // DER представление значения
} JC_NID_OBJECT;
typedef JC_NID_OBJECT CK_PTR JC_NID_OBJECT_PTR;

/**
* Признаки сертификата получателя
*/
typedef struct JC_CERTIFICATE_TRAITS
{
    CK_BYTE_PTR         keyID;                  // идентификатор ключа субъекта
    CK_ULONG            keyIDlength;            // его длина
    CK_CHAR_PTR         serialNumber;           // серийный номер сертификата, null terminated 
    JC_NID_OBJECT*      issuerRecords;          // RDN значения субъекта
    CK_ULONG            issuerRecordCount;      // количество RDN значений субъекта
} JC_CERTIFICATE_TRAITS;
typedef JC_CERTIFICATE_TRAITS CK_PTR JC_CERTIFICATE_TRAITS_PTR;

/**
* Получатель CMS сообщения
*/
#define JC_CMS_KTRI_RECIPIENT_INFO      0   // объект ключевой информации получателя сформирован "по передаче" KTRI
#define JC_CMS_KARI_RECIPIENT_INFO      1	// "по согласованию" KARI
typedef struct JC_CMS_RECIPIENT
{
    CK_LONG			        recipientInfoType;          // объект ключевой информации получателя сформирован по передаче или по согласованию:
                                                        // JC_CMS_KTRI_RECIPIENT_INFO, JC_CMS_KARI_RECIPIENT_INFO 
    JC_CERTIFICATE_TRAITS   recipientCertTraits;        // признаки сертификта получателя
    JC_NID_OBJECT           keyWrapAlgorithm;           // алгоритм шифрования ключа
    CK_BYTE_PTR             secretKeyOID;               // OID алгоритма шифрования содержимого в DER представлении
    CK_ULONG                secretKeyOIDlength;         // его длина
    CK_BYTE_PTR             keyTransport;               // транспортное представление ключа шифрования содержимого
    CK_ULONG                keyTransportLength;         // его длина
    JC_CERTIFICATE_MATERIAL originator;                 // описатель публичного ключа отправителя CMS, присутствует только для формата 
                                                        // "по согласованию" Key Agreement Recipient Information, KARI
} JC_CMS_RECIPIENT;
typedef JC_CMS_RECIPIENT CK_PTR JC_CMS_RECIPIENT_PTR;

/**
* Разобраное CMS сообщение
*/
typedef struct JC_CMS_CONTAINER
{
    CK_ULONG                recipientCount;             // число объектов получателей CMS 
    JC_CMS_RECIPIENT*       recipients;                 // получатели CMS 
    JC_NID_OBJECT           contentEncryptionAlgorithm; // описатель OID алгоритма шифрования содержимого
    JC_NID_OBJECT           encryptionParamSet;         // описатель OID набора параметров этого алгоритма 
    CK_BYTE_PTR             iv;                         // инициализационный вектор
    CK_ULONG                ivLength;                   // его длина
    CK_BYTE_PTR             cipherText;                 // зашифрованное содержимого
    CK_ULONG                cipherTextLength;           // его длина
} JC_CMS_CONTAINER;
typedef JC_CMS_CONTAINER CK_PTR JC_CMS_CONTAINER_PTR;

/**
* Формирование CMS 
*/

/**
* Ключевой материал получателя
*/
#define JC_CMS_ISSUER_SERIAL_ID                 0	// получатель или отправитель идентифицируются по CN издателя и серийному номеру сертификата
#define JC_CMS_SUBJECT_KEY_ID                   1	// по идентификатору ключа субъекта
#define JC_CMS_GOST28147_89_NONE_KEYWRAP        0   // ASN_GOST28147_89_NONE_KEYWRAP
#define JC_CMS_GOST28147_89_CRYPTOPRO_KEYWRAP   1   // ASN_GOST28147_89_CRYPTOPRO_KEYWRAP
typedef struct JC_CMS_RECIPIENT_MATERIAL
{
    CK_LONG			recipientInfoType;      // JC_CMS_KTRI_RECIPIENT_INFO, JC_CMS_KARI_RECIPIENT_INFO по передаче или по согласованию
    CK_LONG			recipientIdentity;      // JC_CMS_ISSUER_SERIAL_ID или JC_CMS_SUBJECT_KEY_ID полечатель идентифицируется по 
                                            // CN издателя и серийному номеру сертификата или идентификатору ключа субъекта
    CK_ULONG        keyWrapAlgorithm;       // алгоритм шифрования ключа JC_CMS_GOST28147_89_NONE_KEYWRAP или JC_CMS_GOST28147_89_CRYPTOPRO_KEYWRAP
                                            // используется только для получателя "по согласованию" JC_CMS_KARI_RECIPIENT_INFO
    CK_BYTE_PTR     certificate;            // DER представление сертификата получателя
    CK_ULONG        certificateLength;
    CK_BYTE_PTR     keyTransport;           // транспортное представление ключа шифрования содержимого CEK
    CK_ULONG        keyTransportLength;     // полученное из метода C_WrapKey
} JC_CMS_RECIPIENT_MATERIAL;
typedef JC_CMS_RECIPIENT_MATERIAL CK_PTR JC_CMS_RECIPIENT_MATERIAL_PTR;

/**
* Материал формирования CMS контейнера
*/
typedef struct JC_CMS_MATERIAL
{
    CK_ULONG recipientCount;					// число получателей в CMS контейнере
    JC_CMS_RECIPIENT_MATERIAL_PTR recipients;	// ключевой материал получателей
	CK_BYTE_PTR     senderCertificate;			// сертификат отправителя используется если есть получатель "по согласованию"
	CK_ULONG        senderCertificateLength;	// не используется если все получатели "по передаче" 
    JC_NID_OBJECT	contentEncryptionParamSet;	// набор параметров шифрования содержимого по алгоритму ГОСТ 28147
    CK_ULONG        ivLength;                   // инициализационный вектор шифрования содержимого 
    CK_BYTE_PTR     iv;                         // 
    CK_BYTE_PTR     cipherText;                 // зашифрованное содержимое
    CK_ULONG        cipherTextLength;           //
} JC_CMS_MATERIAL;
typedef JC_CMS_MATERIAL CK_PTR JC_CMS_MATERIAL_PTR;

/* 
типы для методов 
lmCheckLicensingAppletPresence
lmGetVendorList
lmGetProductList
lmReadLicense
lmCreateLicense
lmDeleteLicense
lmWriteKey
lmChangeKey
lmLock
lmFreeBuffer
*/
typedef void* LM_HANDLE;
typedef LM_HANDLE* LM_PHANDLE;
typedef unsigned short LM_WORD;
typedef int LM_BOOL;
typedef unsigned char* LM_PBYTE;
typedef unsigned short* LM_PWORD;
typedef char* LM_PCHAR;

#endif /* JC_PKCS11_TYPES_H */
