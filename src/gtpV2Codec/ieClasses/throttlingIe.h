/*
 * Copyright (c) 2020, Infosys Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 /******************************************************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/GtpV2StackCodeGen/tts/ietemplate.h.tt>
 ******************************************************************************/
#ifndef THROTTLINGIE_H_
#define THROTTLINGIE_H_

#include "manual/gtpV2Ie.h"



class ThrottlingIe: public GtpV2Ie {
public:
    ThrottlingIe();
    virtual ~ThrottlingIe();

    bool encodeThrottlingIe(MsgBuffer &buffer,
                 ThrottlingIeData const &data);
    bool decodeThrottlingIe(MsgBuffer &buffer,
                 ThrottlingIeData &data, Uint16 length);
    void displayThrottlingIe_v(ThrottlingIeData const &data,
                 Debug &stream);
};

#endif /* THROTTLINGIE_H_ */
