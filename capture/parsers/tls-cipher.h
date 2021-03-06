#ifndef MOLOCH_TLS_CIPHER_H
#define MOLOCH_TLS_CIPHER_H
static char *ciphers_00[256] = {
"TLS_NULL_WITH_NULL_NULL",
"TLS_RSA_WITH_NULL_MD5",
"TLS_RSA_WITH_NULL_SHA",
"TLS_RSA_EXPORT_WITH_RC4_40_MD5",
"TLS_RSA_WITH_RC4_128_MD5",
"TLS_RSA_WITH_RC4_128_SHA",
"TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5",
"TLS_RSA_WITH_IDEA_CBC_SHA",
"TLS_RSA_EXPORT_WITH_DES40_CBC_SHA",
"TLS_RSA_WITH_DES_CBC_SHA",
"TLS_RSA_WITH_3DES_EDE_CBC_SHA",
"TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA",
"TLS_DH_DSS_WITH_DES_CBC_SHA",
"TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA",
"TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA",
"TLS_DH_RSA_WITH_DES_CBC_SHA",
"TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA",
"TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA",
"TLS_DHE_DSS_WITH_DES_CBC_SHA",
"TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA",
"TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA",
"TLS_DHE_RSA_WITH_DES_CBC_SHA",
"TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA",
"TLS_DH_ANON_EXPORT_WITH_RC4_40_MD5",
"TLS_DH_ANON_WITH_RC4_128_MD5",
"TLS_DH_ANON_EXPORT_WITH_DES40_CBC_SHA",
"TLS_DH_ANON_WITH_DES_CBC_SHA",
"TLS_DH_ANON_WITH_3DES_EDE_CBC_SHA",
NULL,
NULL,
"TLS_KRB5_WITH_DES_CBC_SHA",
"TLS_KRB5_WITH_3DES_EDE_CBC_SHA",
"TLS_KRB5_WITH_RC4_128_SHA",
"TLS_KRB5_WITH_IDEA_CBC_SHA",
"TLS_KRB5_WITH_DES_CBC_MD5",
"TLS_KRB5_WITH_3DES_EDE_CBC_MD5",
"TLS_KRB5_WITH_RC4_128_MD5",
"TLS_KRB5_WITH_IDEA_CBC_MD5",
"TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA",
"TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA",
"TLS_KRB5_EXPORT_WITH_RC4_40_SHA",
"TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5",
"TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5",
"TLS_KRB5_EXPORT_WITH_RC4_40_MD5",
"TLS_PSK_WITH_NULL_SHA",
"TLS_DHE_PSK_WITH_NULL_SHA",
"TLS_RSA_PSK_WITH_NULL_SHA",
"TLS_RSA_WITH_AES_128_CBC_SHA",
"TLS_DH_DSS_WITH_AES_128_CBC_SHA",
"TLS_DH_RSA_WITH_AES_128_CBC_SHA",
"TLS_DHE_DSS_WITH_AES_128_CBC_SHA",
"TLS_DHE_RSA_WITH_AES_128_CBC_SHA",
"TLS_DH_ANON_WITH_AES_128_CBC_SHA",
"TLS_RSA_WITH_AES_256_CBC_SHA",
"TLS_DH_DSS_WITH_AES_256_CBC_SHA",
"TLS_DH_RSA_WITH_AES_256_CBC_SHA",
"TLS_DHE_DSS_WITH_AES_256_CBC_SHA",
"TLS_DHE_RSA_WITH_AES_256_CBC_SHA",
"TLS_DH_ANON_WITH_AES_256_CBC_SHA",
"TLS_RSA_WITH_NULL_SHA256",
"TLS_RSA_WITH_AES_128_CBC_SHA256",
"TLS_RSA_WITH_AES_256_CBC_SHA256",
"TLS_DH_DSS_WITH_AES_128_CBC_SHA256",
"TLS_DH_RSA_WITH_AES_128_CBC_SHA256",
"TLS_DHE_DSS_WITH_AES_128_CBC_SHA256",
"TLS_RSA_WITH_CAMELLIA_128_CBC_SHA",
"TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA",
"TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA",
"TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA",
"TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA",
"TLS_DH_ANON_WITH_CAMELLIA_128_CBC_SHA",
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
"TLS_DHE_RSA_WITH_AES_128_CBC_SHA256",
"TLS_DH_DSS_WITH_AES_256_CBC_SHA256",
"TLS_DH_RSA_WITH_AES_256_CBC_SHA256",
"TLS_DHE_DSS_WITH_AES_256_CBC_SHA256",
"TLS_DHE_RSA_WITH_AES_256_CBC_SHA256",
"TLS_DH_ANON_WITH_AES_128_CBC_SHA256",
"TLS_DH_ANON_WITH_AES_256_CBC_SHA256",
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
"TLS_RSA_WITH_CAMELLIA_256_CBC_SHA",
"TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA",
"TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA",
"TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA",
"TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA",
"TLS_DH_ANON_WITH_CAMELLIA_256_CBC_SHA",
"TLS_PSK_WITH_RC4_128_SHA",
"TLS_PSK_WITH_3DES_EDE_CBC_SHA",
"TLS_PSK_WITH_AES_128_CBC_SHA",
"TLS_PSK_WITH_AES_256_CBC_SHA",
"TLS_DHE_PSK_WITH_RC4_128_SHA",
"TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA",
"TLS_DHE_PSK_WITH_AES_128_CBC_SHA",
"TLS_DHE_PSK_WITH_AES_256_CBC_SHA",
"TLS_RSA_PSK_WITH_RC4_128_SHA",
"TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA",
"TLS_RSA_PSK_WITH_AES_128_CBC_SHA",
"TLS_RSA_PSK_WITH_AES_256_CBC_SHA",
"TLS_RSA_WITH_SEED_CBC_SHA",
"TLS_DH_DSS_WITH_SEED_CBC_SHA",
"TLS_DH_RSA_WITH_SEED_CBC_SHA",
"TLS_DHE_DSS_WITH_SEED_CBC_SHA",
"TLS_DHE_RSA_WITH_SEED_CBC_SHA",
"TLS_DH_ANON_WITH_SEED_CBC_SHA",
"TLS_RSA_WITH_AES_128_GCM_SHA256",
"TLS_RSA_WITH_AES_256_GCM_SHA384",
"TLS_DHE_RSA_WITH_AES_128_GCM_SHA256",
"TLS_DHE_RSA_WITH_AES_256_GCM_SHA384",
"TLS_DH_RSA_WITH_AES_128_GCM_SHA256",
"TLS_DH_RSA_WITH_AES_256_GCM_SHA384",
"TLS_DHE_DSS_WITH_AES_128_GCM_SHA256",
"TLS_DHE_DSS_WITH_AES_256_GCM_SHA384",
"TLS_DH_DSS_WITH_AES_128_GCM_SHA256",
"TLS_DH_DSS_WITH_AES_256_GCM_SHA384",
"TLS_DH_ANON_WITH_AES_128_GCM_SHA256",
"TLS_DH_ANON_WITH_AES_256_GCM_SHA384",
"TLS_PSK_WITH_AES_128_GCM_SHA256",
"TLS_PSK_WITH_AES_256_GCM_SHA384",
"TLS_DHE_PSK_WITH_AES_128_GCM_SHA256",
"TLS_DHE_PSK_WITH_AES_256_GCM_SHA384",
"TLS_RSA_PSK_WITH_AES_128_GCM_SHA256",
"TLS_RSA_PSK_WITH_AES_256_GCM_SHA384",
"TLS_PSK_WITH_AES_128_CBC_SHA256",
"TLS_PSK_WITH_AES_256_CBC_SHA384",
"TLS_PSK_WITH_NULL_SHA256",
"TLS_PSK_WITH_NULL_SHA384",
"TLS_DHE_PSK_WITH_AES_128_CBC_SHA256",
"TLS_DHE_PSK_WITH_AES_256_CBC_SHA384",
"TLS_DHE_PSK_WITH_NULL_SHA256",
"TLS_DHE_PSK_WITH_NULL_SHA384",
"TLS_RSA_PSK_WITH_AES_128_CBC_SHA256",
"TLS_RSA_PSK_WITH_AES_256_CBC_SHA384",
"TLS_RSA_PSK_WITH_NULL_SHA256",
"TLS_RSA_PSK_WITH_NULL_SHA384",
"TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_DH_ANON_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256",
"TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256",
"TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256",
"TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256",
"TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256",
"TLS_DH_ANON_WITH_CAMELLIA_256_CBC_SHA256",
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
"TLS_EMPTY_RENEGOTIATION_INFO_SCSV"};

static char *ciphers_c0[256] = {
NULL,
"TLS_ECDH_ECDSA_WITH_NULL_SHA",
"TLS_ECDH_ECDSA_WITH_RC4_128_SHA",
"TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA",
"TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA",
"TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA",
"TLS_ECDHE_ECDSA_WITH_NULL_SHA",
"TLS_ECDHE_ECDSA_WITH_RC4_128_SHA",
"TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA",
"TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA",
"TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA",
"TLS_ECDH_RSA_WITH_NULL_SHA",
"TLS_ECDH_RSA_WITH_RC4_128_SHA",
"TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA",
"TLS_ECDH_RSA_WITH_AES_128_CBC_SHA",
"TLS_ECDH_RSA_WITH_AES_256_CBC_SHA",
"TLS_ECDHE_RSA_WITH_NULL_SHA",
"TLS_ECDHE_RSA_WITH_RC4_128_SHA",
"TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA",
"TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA",
"TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA",
"TLS_ECDH_ANON_WITH_NULL_SHA",
"TLS_ECDH_ANON_WITH_RC4_128_SHA",
"TLS_ECDH_ANON_WITH_3DES_EDE_CBC_SHA",
"TLS_ECDH_ANON_WITH_AES_128_CBC_SHA",
"TLS_ECDH_ANON_WITH_AES_256_CBC_SHA",
"TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA",
"TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA",
"TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA",
"TLS_SRP_SHA_WITH_AES_128_CBC_SHA",
"TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA",
"TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA",
"TLS_SRP_SHA_WITH_AES_256_CBC_SHA",
"TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA",
"TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA",
"TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256",
"TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384",
"TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256",
"TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384",
"TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256",
"TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384",
"TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256",
"TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384",
"TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256",
"TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384",
"TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256",
"TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384",
"TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256",
"TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384",
"TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256",
"TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384",
"TLS_ECDHE_PSK_WITH_RC4_128_SHA",
"TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA",
"TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA",
"TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA",
"TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256",
"TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384",
"TLS_ECDHE_PSK_WITH_NULL_SHA",
"TLS_ECDHE_PSK_WITH_NULL_SHA256",
"TLS_ECDHE_PSK_WITH_NULL_SHA384",
"TLS_RSA_WITH_ARIA_128_CBC_SHA256",
"TLS_RSA_WITH_ARIA_256_CBC_SHA384",
"TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256",
"TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384",
"TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256",
"TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384",
"TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256",
"TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384",
"TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256",
"TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384",
"TLS_DH_ANON_WITH_ARIA_128_CBC_SHA256",
"TLS_DH_ANON_WITH_ARIA_256_CBC_SHA384",
"TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256",
"TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384",
"TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256",
"TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384",
"TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256",
"TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384",
"TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256",
"TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384",
"TLS_RSA_WITH_ARIA_128_GCM_SHA256",
"TLS_RSA_WITH_ARIA_256_GCM_SHA384",
"TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256",
"TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384",
"TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256",
"TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384",
"TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256",
"TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384",
"TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256",
"TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384",
"TLS_DH_ANON_WITH_ARIA_128_GCM_SHA256",
"TLS_DH_ANON_WITH_ARIA_256_GCM_SHA384",
"TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256",
"TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384",
"TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256",
"TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384",
"TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256",
"TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384",
"TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256",
"TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384",
"TLS_PSK_WITH_ARIA_128_CBC_SHA256",
"TLS_PSK_WITH_ARIA_256_CBC_SHA384",
"TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256",
"TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384",
"TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256",
"TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384",
"TLS_PSK_WITH_ARIA_128_GCM_SHA256",
"TLS_PSK_WITH_ARIA_256_GCM_SHA384",
"TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256",
"TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384",
"TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256",
"TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384",
"TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256",
"TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384",
"TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_DH_ANON_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_DH_ANON_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256",
"TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384",
"TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256",
"TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384",
"TLS_RSA_WITH_AES_128_CCM",
"TLS_RSA_WITH_AES_256_CCM",
"TLS_DHE_RSA_WITH_AES_128_CCM",
"TLS_DHE_RSA_WITH_AES_256_CCM",
"TLS_RSA_WITH_AES_128_CCM_8",
"TLS_RSA_WITH_AES_256_CCM_8",
"TLS_DHE_RSA_WITH_AES_128_CCM_8",
"TLS_DHE_RSA_WITH_AES_256_CCM_8",
"TLS_PSK_WITH_AES_128_CCM",
"TLS_PSK_WITH_AES_256_CCM",
"TLS_DHE_PSK_WITH_AES_128_CCM",
"TLS_DHE_PSK_WITH_AES_256_CCM",
"TLS_PSK_WITH_AES_128_CCM_8",
"TLS_PSK_WITH_AES_256_CCM_8",
"TLS_PSK_DHE_WITH_AES_128_CCM_8",
"TLS_PSK_DHE_WITH_AES_256_CCM_8",
"TLS_ECDHE_ECDSA_WITH_AES_128_CCM",
"TLS_ECDHE_ECDSA_WITH_AES_256_CCM",
"TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8",
"TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8",
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL};

static char *ciphers_cc[256] = {
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
"TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256",
"TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256",
"TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256",
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL};

static char *ciphers_e4[256] = {
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
"TLS_RSA_WITH_ESTREAM_SALSA20_SHA1",
"TLS_RSA_WITH_SALSA20_SHA1",
"TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1",
"TLS_ECDHE_RSA_WITH_SALSA20_SHA1",
"TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1",
"TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1",
"TLS_PSK_WITH_ESTREAM_SALSA20_SHA1",
"TLS_PSK_WITH_SALSA20_SHA1",
"TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1",
"TLS_ECDHE_PSK_WITH_SALSA20_SHA1",
"TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1",
"TLS_RSA_PSK_WITH_SALSA20_SHA1",
"TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1",
"TLS_DHE_PSK_WITH_SALSA20_SHA1",
"TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1",
"TLS_DHE_RSA_WITH_SALSA20_SHA1",
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL};

static char *ciphers_null[256] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};

static char **ciphers[256] = {
ciphers_00,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_c0,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_cc,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_e4,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null,
ciphers_null};

#endif
