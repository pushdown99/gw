/*
 * Copyright 2014-2016 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

# ifndef KAA_DEFAULTS_H_
# define KAA_DEFAULTS_H_

/**
 *
 * DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED.
 *
 */

# include "kaa_common.h"

# ifdef __cplusplus
extern "C" {
# endif

# define KAA_BUILD_VERSION             "0.10.0"
# define KAA_BUILD_COMMIT_HASH         ""

# define KAA_SDK_TOKEN                 "Ik72lyuZez-SN9kj27tOAn9qsBc"

# define KAA_PROFILE_SCHEMA_VERSION    0

# define DEFAULT_USER_VERIFIER_TOKEN    "75573328582256784833"

# define KAA_SYNC_TIMEOUT               60000L


/**
 * @brief Uses to represent transport-specific connection data to establish
 * connection to Bootstrap servers.
 *
 * @see kaa_transport_protocol_id_t
 * @see kaa_access_point_t
 */
typedef struct {
    kaa_transport_protocol_id_t    protocol_id;
    kaa_access_point_t             access_point;
} kaa_bootstrap_server_connection_data_t;

# define KAA_BOOTSTRAP_ACCESS_POINT_COUNT    2

static const kaa_bootstrap_server_connection_data_t KAA_BOOTSTRAP_ACCESS_POINTS[KAA_BOOTSTRAP_ACCESS_POINT_COUNT] =
{
    {
        { 0x56c8ff92, 1 },
        {
            0x929a2016,
            315,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -109 , 78 , 83 , 111 , -15 , -65 , 27 , -56 , -74 , -97 , -104 , -82 , -84 , 48 , -47 , 35 , 17 , 19 , -73 , -125 , 48 , 90 , -2 , 23 , 125 , 4 , 79 , 25 , -74 , 16 , -93 , 127 , 30 , 15 , 69 , -51 , -87 , 17 , -31 , 110 , -7 , -106 , 58 , -14 , 105 , -3 , -30 , -2 , -119 , 116 , -107 , -103 , -115 , -95 , -55 , -17 , 99 , 88 , 113 , 31 , -104 , -21 , -98 , 119 , -80 , -11 , -26 , 9 , 92 , -89 , -62 , 83 , -115 , 92 , 14 , -65 , -85 , 6 , 30 , 75 , -2 , -119 , -60 , -69 , -12 , 66 , 32 , -109 , 91 , -105 , -21 , 17 , 59 , -95 , -80 , 33 , 20 , -70 , -118 , -105 , -1 , -50 , -99 , -7 , -56 , -107 , 68 , -12 , 63 , -4 , -32 , 101 , -14 , 24 , 80 , -29 , -51 , 55 , -44 , 29 , -60 , -13 , -3 , 111 , 79 , -34 , 115 , 41 , 126 , 32 , 41 , 47 , -15 , 34 , -24 , 40 , 85 , -13 , -94 , 78 , 121 , 28 , -108 , 109 , 39 , 47 , 72 , 78 , -90 , 29 , 123 , 10 , -72 , -32 , -58 , 51 , 87 , 127 , -122 , 9 , 75 , 107 , -1 , 52 , -102 , -48 , 126 , -32 , -33 , -8 , 101 , 115 , -70 , 3 , -110 , -61 , 82 , 11 , 104 , 25 , 10 , 85 , -60 , 56 , 100 , 6 , 120 , 123 , 119 , 76 , 113 , -83 , 92 , 8 , 101 , -77 , 14 , -28 , 37 , -48 , 122 , -21 , -50 , -119 , -118 , -47 , -75 , 3 , -31 , -97 , 7 , -98 , -14 , -30 , -75 , -107 , -30 , 35 , -47 , 114 , 120 , -69 , -128 , -26 , 83 , 19 , 14 , 46 , 79 , 105 , -25 , 58 , -28 , -36 , -108 , -70 , -115 , 104 , -126 , -47 , -34 , 38 , 123 , -93 , 64 , -44 , 99 , -110 , -98 , -87 , 40 , 8 , 18 , 39 , 78 , -107 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 9 , 49 , 50 , 55 , 46 , 48 , 46 , 48 , 46 , 49 , 0 , 0 , 38 , -96             }
        }
    },
    {
        { 0xfb9a3cf0, 1 },
        {
            0x929a2016,
            315,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -109 , 78 , 83 , 111 , -15 , -65 , 27 , -56 , -74 , -97 , -104 , -82 , -84 , 48 , -47 , 35 , 17 , 19 , -73 , -125 , 48 , 90 , -2 , 23 , 125 , 4 , 79 , 25 , -74 , 16 , -93 , 127 , 30 , 15 , 69 , -51 , -87 , 17 , -31 , 110 , -7 , -106 , 58 , -14 , 105 , -3 , -30 , -2 , -119 , 116 , -107 , -103 , -115 , -95 , -55 , -17 , 99 , 88 , 113 , 31 , -104 , -21 , -98 , 119 , -80 , -11 , -26 , 9 , 92 , -89 , -62 , 83 , -115 , 92 , 14 , -65 , -85 , 6 , 30 , 75 , -2 , -119 , -60 , -69 , -12 , 66 , 32 , -109 , 91 , -105 , -21 , 17 , 59 , -95 , -80 , 33 , 20 , -70 , -118 , -105 , -1 , -50 , -99 , -7 , -56 , -107 , 68 , -12 , 63 , -4 , -32 , 101 , -14 , 24 , 80 , -29 , -51 , 55 , -44 , 29 , -60 , -13 , -3 , 111 , 79 , -34 , 115 , 41 , 126 , 32 , 41 , 47 , -15 , 34 , -24 , 40 , 85 , -13 , -94 , 78 , 121 , 28 , -108 , 109 , 39 , 47 , 72 , 78 , -90 , 29 , 123 , 10 , -72 , -32 , -58 , 51 , 87 , 127 , -122 , 9 , 75 , 107 , -1 , 52 , -102 , -48 , 126 , -32 , -33 , -8 , 101 , 115 , -70 , 3 , -110 , -61 , 82 , 11 , 104 , 25 , 10 , 85 , -60 , 56 , 100 , 6 , 120 , 123 , 119 , 76 , 113 , -83 , 92 , 8 , 101 , -77 , 14 , -28 , 37 , -48 , 122 , -21 , -50 , -119 , -118 , -47 , -75 , 3 , -31 , -97 , 7 , -98 , -14 , -30 , -75 , -107 , -30 , 35 , -47 , 114 , 120 , -69 , -128 , -26 , 83 , 19 , 14 , 46 , 79 , 105 , -25 , 58 , -28 , -36 , -108 , -70 , -115 , 104 , -126 , -47 , -34 , 38 , 123 , -93 , 64 , -44 , 99 , -110 , -98 , -87 , 40 , 8 , 18 , 39 , 78 , -107 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 9 , 49 , 50 , 55 , 46 , 48 , 46 , 48 , 46 , 49 , 0 , 0 , 38 , -95             }
        }
    }};



# define KAA_CONFIGURATION_DATA_LENGTH    1

static const char KAA_CONFIGURATION_DATA[KAA_CONFIGURATION_DATA_LENGTH] =
{
2 };

# ifdef __cplusplus
} // extern "C"
# endif

# endif /* KAA_DEFAULTS_H_ */

