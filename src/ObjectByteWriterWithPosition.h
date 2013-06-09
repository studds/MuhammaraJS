/*
 Source File : ObjectByteWriterWithPosition.h
 
 
 Copyright 2013 Gal Kahana HummusJS
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 */
#pragma once

#include <node.h>
#include "IByteWriterWithPosition.h"


class ObjectByteWriterWithPosition : public IByteWriterWithPosition
{
public:
    
    ObjectByteWriterWithPosition(v8::Handle<v8::Object> inObject);
    virtual ~ObjectByteWriterWithPosition();
    
    // IByteWriterWithPosition implementation
	virtual IOBasicTypes::LongBufferSizeType Write(const IOBasicTypes::Byte* inBuffer,IOBasicTypes::LongBufferSizeType inBufferSize);
	virtual IOBasicTypes::LongFilePositionType GetCurrentPosition();
    
private:
    v8::Persistent<v8::Object> mObject;
};
