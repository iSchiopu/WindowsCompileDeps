/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSVGElementInstance_h
#define JSSVGElementInstance_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "SVGElement.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class SVGElementInstance;

class JSSVGElementInstance : public JSDOMWrapper {
    typedef JSDOMWrapper Base;
public:
    JSSVGElementInstance(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGElementInstance>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    virtual void visitChildren(JSC::SlotVisitor&);

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    SVGElementInstance* impl() const { return m_impl.get(); }

private:
    RefPtr<SVGElementInstance> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SVGElementInstance*);
SVGElementInstance* toSVGElementInstance(JSC::JSValue);

class JSSVGElementInstancePrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSSVGElementInstancePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGElementInstancePrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGElementInstancePrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGElementInstancePrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGElementInstanceCorrespondingElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstanceCorrespondingUseElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstanceParentNode(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstanceChildNodes(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstanceFirstChild(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstanceLastChild(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstancePreviousSibling(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstanceNextSibling(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGElementInstanceOnabort(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnblur(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnblur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnchange(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnclick(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOncontextmenu(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOncontextmenu(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndblclick(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndblclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnerror(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnfocus(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnfocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOninput(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOninput(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnkeydown(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnkeydown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnkeypress(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnkeypress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnkeyup(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnkeyup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnload(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmousedown(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnmousedown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmousemove(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnmousemove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseout(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnmouseout(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseover(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnmouseover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseup(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnmouseup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmousewheel(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnmousewheel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnbeforecut(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnbeforecut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOncut(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOncut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnbeforecopy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnbeforecopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOncopy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOncopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnbeforepaste(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnbeforepaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnpaste(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnpaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragenter(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndragenter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragover(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndragover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragleave(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndragleave(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndrop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndrop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndragstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndrag(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndrag(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragend(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOndragend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnreset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnreset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnresize(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnresize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnscroll(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnscroll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnsearch(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnsearch(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnselect(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnselect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnselectstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnselectstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnsubmit(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnsubmit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnunload(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGElementInstanceOnunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
