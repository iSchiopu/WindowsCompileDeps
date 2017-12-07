/*
 * Copyright (C) 2010 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef WebContextMenuItem_h
#define WebContextMenuItem_h

#include "APIObject.h"
#include "WebContextMenuItemData.h"

namespace WebKit {

class ImmutableArray;

class WebContextMenuItem : public APIObject {
public:
    static const Type APIType = TypeContextMenuItem;

    static PassRefPtr<WebContextMenuItem> create(const WebContextMenuItemData& data)
    {
        return adoptRef(new WebContextMenuItem(data));
    }
    static PassRefPtr<WebContextMenuItem> create(const String& title, bool enabled, ImmutableArray* submenuItems);
    static WebContextMenuItem* separatorItem();
    
    PassRefPtr<ImmutableArray> submenuItemsAsImmutableArray() const;
    
    APIObject* userData() const;
    void setUserData(APIObject*);
    
    WebContextMenuItemData* data() { return &m_webContextMenuItemData; }

private:
    WebContextMenuItem(const WebContextMenuItemData&);
    
    virtual Type type() const { return APIType; }
    
    WebContextMenuItemData m_webContextMenuItemData;
};

} // namespace WebKit

#endif // WebContextMenuItem_h
