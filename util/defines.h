/*
** Copyright (c) 2018 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#ifndef BRIMSTONE_UTIL_DEFINES_H
#define BRIMSTONE_UTIL_DEFINES_H

#define BRIMSTONE_BEGIN_NAMESPACE(x) namespace x {
#define BRIMSTONE_END_NAMESPACE(x) }

#define BRIMSTONE_UNREFERENCED_PARAMETER(x) ((void)x)

// Use two macros for the x is a macro case, to ensure macro expansion is applied to x prior to string conversion.
#define BRIMSTONE_STR_EXPAND(x) #x
#define BRIMSTONE_STR(x) BRIMSTONE_STR_EXPAND(x)

#define BRIMSTONE_MAKE_FOURCC(c0, c1, c2, c3) (static_cast<uint32_t>(c0) | (static_cast<uint32_t>(c1) << 8) | (static_cast<uint32_t>(c2) << 16) | (static_cast<uint32_t>(c3) << 24))

#define BRIMSTONE_FOURCC BRIMSTONE_MAKE_FOURCC('G', 'R', 'E', 'C')

#endif // BRIMSTONE_UTIL_DEFINES_H
