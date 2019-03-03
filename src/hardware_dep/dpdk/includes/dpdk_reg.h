// Copyright 2016 Eotvos Lorand University, Budapest, Hungary
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef __REG_H_
#define __REG_H_

typedef struct reg_int8_s {
    int8_t value;
} reg_int8_t;
typedef struct reg_int16_s {
    int16_t value;
} reg_int16_t;
typedef struct reg_int32_s {
    int32_t value;
} reg_int32_t;
typedef struct reg_int64_s {
    int64_t value;
} reg_int64_t;
typedef struct reg_uint8_s {
    uint8_t value;
} reg_uint8_t;
typedef struct reg_uint16_s {
    uint16_t value;
} reg_uint16_t;
typedef struct reg_uint32_s {
    uint32_t value;
} reg_uint32_t;
typedef struct reg_uint64_s {
    uint64_t value;
} reg_uint64_t;

#endif // __REG_H_

