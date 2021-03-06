/******************************************************************************
*
* Copyright (C) 2012 Ittiam Systems Pvt Ltd, Bangalore
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at:
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
******************************************************************************/
/**
*******************************************************************************
* @file
*  ihevcd_parse_slice.h
*
* @brief
*  Parsing of slice level data
*
* @author
*  Harish
*
* @par List of Functions:
*
* @remarks
*  None
*
*******************************************************************************
*/

#ifndef _IHEVCD_PARSE_SLICE_H_
#define _IHEVCD_PARSE_SLICE_H_


IHEVCD_ERROR_T ihevcd_parse_mvd(codec_t *ps_codec, mv_t *ps_mv);
IHEVCD_ERROR_T ihevcd_parse_slice_data(codec_t *ps_codec);
#endif /* _IHEVCD_PARSE_SLICE_H_ */
