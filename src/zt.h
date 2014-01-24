

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Fri Sep 06 10:20:35 2013
 */
/* Compiler settings for ..\..\Zt.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __Zt_h_h__
#define __Zt_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IZTCommand_FWD_DEFINED__
#define __IZTCommand_FWD_DEFINED__
typedef interface IZTCommand IZTCommand;

#endif 	/* __IZTCommand_FWD_DEFINED__ */


#ifndef __IZoomText_FWD_DEFINED__
#define __IZoomText_FWD_DEFINED__
typedef interface IZoomText IZoomText;

#endif 	/* __IZoomText_FWD_DEFINED__ */


#ifndef __IAhoiManager_FWD_DEFINED__
#define __IAhoiManager_FWD_DEFINED__
typedef interface IAhoiManager IAhoiManager;

#endif 	/* __IAhoiManager_FWD_DEFINED__ */


#ifndef __IAhoiManager2_FWD_DEFINED__
#define __IAhoiManager2_FWD_DEFINED__
typedef interface IAhoiManager2 IAhoiManager2;

#endif 	/* __IAhoiManager2_FWD_DEFINED__ */


#ifndef __IEventManager_FWD_DEFINED__
#define __IEventManager_FWD_DEFINED__
typedef interface IEventManager IEventManager;

#endif 	/* __IEventManager_FWD_DEFINED__ */


#ifndef __IEventManager2_FWD_DEFINED__
#define __IEventManager2_FWD_DEFINED__
typedef interface IEventManager2 IEventManager2;

#endif 	/* __IEventManager2_FWD_DEFINED__ */


#ifndef __IEventDefinition_FWD_DEFINED__
#define __IEventDefinition_FWD_DEFINED__
typedef interface IEventDefinition IEventDefinition;

#endif 	/* __IEventDefinition_FWD_DEFINED__ */


#ifndef __IHotkeys_FWD_DEFINED__
#define __IHotkeys_FWD_DEFINED__
typedef interface IHotkeys IHotkeys;

#endif 	/* __IHotkeys_FWD_DEFINED__ */


#ifndef __IKeyboard_FWD_DEFINED__
#define __IKeyboard_FWD_DEFINED__
typedef interface IKeyboard IKeyboard;

#endif 	/* __IKeyboard_FWD_DEFINED__ */


#ifndef __IMagnification_FWD_DEFINED__
#define __IMagnification_FWD_DEFINED__
typedef interface IMagnification IMagnification;

#endif 	/* __IMagnification_FWD_DEFINED__ */


#ifndef __IMagnification2_FWD_DEFINED__
#define __IMagnification2_FWD_DEFINED__
typedef interface IMagnification2 IMagnification2;

#endif 	/* __IMagnification2_FWD_DEFINED__ */


#ifndef __IMagnification3_FWD_DEFINED__
#define __IMagnification3_FWD_DEFINED__
typedef interface IMagnification3 IMagnification3;

#endif 	/* __IMagnification3_FWD_DEFINED__ */


#ifndef __ICaretEnhancements_FWD_DEFINED__
#define __ICaretEnhancements_FWD_DEFINED__
typedef interface ICaretEnhancements ICaretEnhancements;

#endif 	/* __ICaretEnhancements_FWD_DEFINED__ */


#ifndef __ICaretEnhancements2_FWD_DEFINED__
#define __ICaretEnhancements2_FWD_DEFINED__
typedef interface ICaretEnhancements2 ICaretEnhancements2;

#endif 	/* __ICaretEnhancements2_FWD_DEFINED__ */


#ifndef __IRectangle_FWD_DEFINED__
#define __IRectangle_FWD_DEFINED__
typedef interface IRectangle IRectangle;

#endif 	/* __IRectangle_FWD_DEFINED__ */


#ifndef __IColorEnhancements_FWD_DEFINED__
#define __IColorEnhancements_FWD_DEFINED__
typedef interface IColorEnhancements IColorEnhancements;

#endif 	/* __IColorEnhancements_FWD_DEFINED__ */


#ifndef __IDualMonitor_FWD_DEFINED__
#define __IDualMonitor_FWD_DEFINED__
typedef interface IDualMonitor IDualMonitor;

#endif 	/* __IDualMonitor_FWD_DEFINED__ */


#ifndef __IFocusEnhancements_FWD_DEFINED__
#define __IFocusEnhancements_FWD_DEFINED__
typedef interface IFocusEnhancements IFocusEnhancements;

#endif 	/* __IFocusEnhancements_FWD_DEFINED__ */


#ifndef __IFocusEnhancements2_FWD_DEFINED__
#define __IFocusEnhancements2_FWD_DEFINED__
typedef interface IFocusEnhancements2 IFocusEnhancements2;

#endif 	/* __IFocusEnhancements2_FWD_DEFINED__ */


#ifndef __IFontEnhancements_FWD_DEFINED__
#define __IFontEnhancements_FWD_DEFINED__
typedef interface IFontEnhancements IFontEnhancements;

#endif 	/* __IFontEnhancements_FWD_DEFINED__ */


#ifndef __IZoomWindow_FWD_DEFINED__
#define __IZoomWindow_FWD_DEFINED__
typedef interface IZoomWindow IZoomWindow;

#endif 	/* __IZoomWindow_FWD_DEFINED__ */


#ifndef __IPower_FWD_DEFINED__
#define __IPower_FWD_DEFINED__
typedef interface IPower IPower;

#endif 	/* __IPower_FWD_DEFINED__ */


#ifndef __IPointerEnhancements_FWD_DEFINED__
#define __IPointerEnhancements_FWD_DEFINED__
typedef interface IPointerEnhancements IPointerEnhancements;

#endif 	/* __IPointerEnhancements_FWD_DEFINED__ */


#ifndef __ITracking_FWD_DEFINED__
#define __ITracking_FWD_DEFINED__
typedef interface ITracking ITracking;

#endif 	/* __ITracking_FWD_DEFINED__ */


#ifndef __ITracking2_FWD_DEFINED__
#define __ITracking2_FWD_DEFINED__
typedef interface ITracking2 ITracking2;

#endif 	/* __ITracking2_FWD_DEFINED__ */


#ifndef __IViewLocator_FWD_DEFINED__
#define __IViewLocator_FWD_DEFINED__
typedef interface IViewLocator IViewLocator;

#endif 	/* __IViewLocator_FWD_DEFINED__ */


#ifndef __IScreenHighlight_FWD_DEFINED__
#define __IScreenHighlight_FWD_DEFINED__
typedef interface IScreenHighlight IScreenHighlight;

#endif 	/* __IScreenHighlight_FWD_DEFINED__ */


#ifndef __IScreenHighlight2_FWD_DEFINED__
#define __IScreenHighlight2_FWD_DEFINED__
typedef interface IScreenHighlight2 IScreenHighlight2;

#endif 	/* __IScreenHighlight2_FWD_DEFINED__ */


#ifndef __ICCTV_FWD_DEFINED__
#define __ICCTV_FWD_DEFINED__
typedef interface ICCTV ICCTV;

#endif 	/* __ICCTV_FWD_DEFINED__ */


#ifndef __IMouse_FWD_DEFINED__
#define __IMouse_FWD_DEFINED__
typedef interface IMouse IMouse;

#endif 	/* __IMouse_FWD_DEFINED__ */


#ifndef __IPoint_FWD_DEFINED__
#define __IPoint_FWD_DEFINED__
typedef interface IPoint IPoint;

#endif 	/* __IPoint_FWD_DEFINED__ */


#ifndef __IReader_FWD_DEFINED__
#define __IReader_FWD_DEFINED__
typedef interface IReader IReader;

#endif 	/* __IReader_FWD_DEFINED__ */


#ifndef __IReader2_FWD_DEFINED__
#define __IReader2_FWD_DEFINED__
typedef interface IReader2 IReader2;

#endif 	/* __IReader2_FWD_DEFINED__ */


#ifndef __IReader3_FWD_DEFINED__
#define __IReader3_FWD_DEFINED__
typedef interface IReader3 IReader3;

#endif 	/* __IReader3_FWD_DEFINED__ */


#ifndef __IAppReader_FWD_DEFINED__
#define __IAppReader_FWD_DEFINED__
typedef interface IAppReader IAppReader;

#endif 	/* __IAppReader_FWD_DEFINED__ */


#ifndef __IMouseEcho_FWD_DEFINED__
#define __IMouseEcho_FWD_DEFINED__
typedef interface IMouseEcho IMouseEcho;

#endif 	/* __IMouseEcho_FWD_DEFINED__ */


#ifndef __IReadingZones_FWD_DEFINED__
#define __IReadingZones_FWD_DEFINED__
typedef interface IReadingZones IReadingZones;

#endif 	/* __IReadingZones_FWD_DEFINED__ */


#ifndef __IReadingZoneObject_FWD_DEFINED__
#define __IReadingZoneObject_FWD_DEFINED__
typedef interface IReadingZoneObject IReadingZoneObject;

#endif 	/* __IReadingZoneObject_FWD_DEFINED__ */


#ifndef __ITypingEcho_FWD_DEFINED__
#define __ITypingEcho_FWD_DEFINED__
typedef interface ITypingEcho ITypingEcho;

#endif 	/* __ITypingEcho_FWD_DEFINED__ */


#ifndef __IVerbosity_FWD_DEFINED__
#define __IVerbosity_FWD_DEFINED__
typedef interface IVerbosity IVerbosity;

#endif 	/* __IVerbosity_FWD_DEFINED__ */


#ifndef __IProgramEcho_FWD_DEFINED__
#define __IProgramEcho_FWD_DEFINED__
typedef interface IProgramEcho IProgramEcho;

#endif 	/* __IProgramEcho_FWD_DEFINED__ */


#ifndef __IDocReader_FWD_DEFINED__
#define __IDocReader_FWD_DEFINED__
typedef interface IDocReader IDocReader;

#endif 	/* __IDocReader_FWD_DEFINED__ */


#ifndef __IRecorder_FWD_DEFINED__
#define __IRecorder_FWD_DEFINED__
typedef interface IRecorder IRecorder;

#endif 	/* __IRecorder_FWD_DEFINED__ */


#ifndef __IScriptConfiguration_FWD_DEFINED__
#define __IScriptConfiguration_FWD_DEFINED__
typedef interface IScriptConfiguration IScriptConfiguration;

#endif 	/* __IScriptConfiguration_FWD_DEFINED__ */


#ifndef __IScriptInformation_FWD_DEFINED__
#define __IScriptInformation_FWD_DEFINED__
typedef interface IScriptInformation IScriptInformation;

#endif 	/* __IScriptInformation_FWD_DEFINED__ */


#ifndef __IZoomTextSettings_FWD_DEFINED__
#define __IZoomTextSettings_FWD_DEFINED__
typedef interface IZoomTextSettings IZoomTextSettings;

#endif 	/* __IZoomTextSettings_FWD_DEFINED__ */


#ifndef __IZoomTextSettings2_FWD_DEFINED__
#define __IZoomTextSettings2_FWD_DEFINED__
typedef interface IZoomTextSettings2 IZoomTextSettings2;

#endif 	/* __IZoomTextSettings2_FWD_DEFINED__ */


#ifndef __IZoomTextSettings3_FWD_DEFINED__
#define __IZoomTextSettings3_FWD_DEFINED__
typedef interface IZoomTextSettings3 IZoomTextSettings3;

#endif 	/* __IZoomTextSettings3_FWD_DEFINED__ */


#ifndef __IZoomTextSettings4_FWD_DEFINED__
#define __IZoomTextSettings4_FWD_DEFINED__
typedef interface IZoomTextSettings4 IZoomTextSettings4;

#endif 	/* __IZoomTextSettings4_FWD_DEFINED__ */


#ifndef __ISpeech_FWD_DEFINED__
#define __ISpeech_FWD_DEFINED__
typedef interface ISpeech ISpeech;

#endif 	/* __ISpeech_FWD_DEFINED__ */


#ifndef __ISpeech2_FWD_DEFINED__
#define __ISpeech2_FWD_DEFINED__
typedef interface ISpeech2 ISpeech2;

#endif 	/* __ISpeech2_FWD_DEFINED__ */


#ifndef __IVoice_FWD_DEFINED__
#define __IVoice_FWD_DEFINED__
typedef interface IVoice IVoice;

#endif 	/* __IVoice_FWD_DEFINED__ */


#ifndef __IObjectCollection_FWD_DEFINED__
#define __IObjectCollection_FWD_DEFINED__
typedef interface IObjectCollection IObjectCollection;

#endif 	/* __IObjectCollection_FWD_DEFINED__ */


#ifndef __ISpeaker_FWD_DEFINED__
#define __ISpeaker_FWD_DEFINED__
typedef interface ISpeaker ISpeaker;

#endif 	/* __ISpeaker_FWD_DEFINED__ */


#ifndef __IScriptManager_FWD_DEFINED__
#define __IScriptManager_FWD_DEFINED__
typedef interface IScriptManager IScriptManager;

#endif 	/* __IScriptManager_FWD_DEFINED__ */


#ifndef __ITextSearch_FWD_DEFINED__
#define __ITextSearch_FWD_DEFINED__
typedef interface ITextSearch ITextSearch;

#endif 	/* __ITextSearch_FWD_DEFINED__ */


#ifndef __ITextSearchOption_FWD_DEFINED__
#define __ITextSearchOption_FWD_DEFINED__
typedef interface ITextSearchOption ITextSearchOption;

#endif 	/* __ITextSearchOption_FWD_DEFINED__ */


#ifndef __ITextObject_FWD_DEFINED__
#define __ITextObject_FWD_DEFINED__
typedef interface ITextObject ITextObject;

#endif 	/* __ITextObject_FWD_DEFINED__ */


#ifndef __IApplicationObject_FWD_DEFINED__
#define __IApplicationObject_FWD_DEFINED__
typedef interface IApplicationObject IApplicationObject;

#endif 	/* __IApplicationObject_FWD_DEFINED__ */


#ifndef __IFontObject_FWD_DEFINED__
#define __IFontObject_FWD_DEFINED__
typedef interface IFontObject IFontObject;

#endif 	/* __IFontObject_FWD_DEFINED__ */


#ifndef __ITextCursor_FWD_DEFINED__
#define __ITextCursor_FWD_DEFINED__
typedef interface ITextCursor ITextCursor;

#endif 	/* __ITextCursor_FWD_DEFINED__ */


#ifndef __IApplicationSearch_FWD_DEFINED__
#define __IApplicationSearch_FWD_DEFINED__
typedef interface IApplicationSearch IApplicationSearch;

#endif 	/* __IApplicationSearch_FWD_DEFINED__ */


#ifndef __IWindowSearch_FWD_DEFINED__
#define __IWindowSearch_FWD_DEFINED__
typedef interface IWindowSearch IWindowSearch;

#endif 	/* __IWindowSearch_FWD_DEFINED__ */


#ifndef __IWindowObject_FWD_DEFINED__
#define __IWindowObject_FWD_DEFINED__
typedef interface IWindowObject IWindowObject;

#endif 	/* __IWindowObject_FWD_DEFINED__ */


#ifndef __ICheckBox_FWD_DEFINED__
#define __ICheckBox_FWD_DEFINED__
typedef interface ICheckBox ICheckBox;

#endif 	/* __ICheckBox_FWD_DEFINED__ */


#ifndef __IComboBox_FWD_DEFINED__
#define __IComboBox_FWD_DEFINED__
typedef interface IComboBox IComboBox;

#endif 	/* __IComboBox_FWD_DEFINED__ */


#ifndef __IItemObject_FWD_DEFINED__
#define __IItemObject_FWD_DEFINED__
typedef interface IItemObject IItemObject;

#endif 	/* __IItemObject_FWD_DEFINED__ */


#ifndef __IEditBox_FWD_DEFINED__
#define __IEditBox_FWD_DEFINED__
typedef interface IEditBox IEditBox;

#endif 	/* __IEditBox_FWD_DEFINED__ */


#ifndef __ILink_FWD_DEFINED__
#define __ILink_FWD_DEFINED__
typedef interface ILink ILink;

#endif 	/* __ILink_FWD_DEFINED__ */


#ifndef __IListView_FWD_DEFINED__
#define __IListView_FWD_DEFINED__
typedef interface IListView IListView;

#endif 	/* __IListView_FWD_DEFINED__ */


#ifndef __IMenuItem_FWD_DEFINED__
#define __IMenuItem_FWD_DEFINED__
typedef interface IMenuItem IMenuItem;

#endif 	/* __IMenuItem_FWD_DEFINED__ */


#ifndef __IRadioButton_FWD_DEFINED__
#define __IRadioButton_FWD_DEFINED__
typedef interface IRadioButton IRadioButton;

#endif 	/* __IRadioButton_FWD_DEFINED__ */


#ifndef __IScrollBar_FWD_DEFINED__
#define __IScrollBar_FWD_DEFINED__
typedef interface IScrollBar IScrollBar;

#endif 	/* __IScrollBar_FWD_DEFINED__ */


#ifndef __ITrackBar_FWD_DEFINED__
#define __ITrackBar_FWD_DEFINED__
typedef interface ITrackBar ITrackBar;

#endif 	/* __ITrackBar_FWD_DEFINED__ */


#ifndef __ITreeView_FWD_DEFINED__
#define __ITreeView_FWD_DEFINED__
typedef interface ITreeView ITreeView;

#endif 	/* __ITreeView_FWD_DEFINED__ */


#ifndef __ISpeechEventObject_FWD_DEFINED__
#define __ISpeechEventObject_FWD_DEFINED__
typedef interface ISpeechEventObject ISpeechEventObject;

#endif 	/* __ISpeechEventObject_FWD_DEFINED__ */


#ifndef __IEnvironment_FWD_DEFINED__
#define __IEnvironment_FWD_DEFINED__
typedef interface IEnvironment IEnvironment;

#endif 	/* __IEnvironment_FWD_DEFINED__ */


#ifndef __IWindowObject2_FWD_DEFINED__
#define __IWindowObject2_FWD_DEFINED__
typedef interface IWindowObject2 IWindowObject2;

#endif 	/* __IWindowObject2_FWD_DEFINED__ */


#ifndef __IWindowObjectOption_FWD_DEFINED__
#define __IWindowObjectOption_FWD_DEFINED__
typedef interface IWindowObjectOption IWindowObjectOption;

#endif 	/* __IWindowObjectOption_FWD_DEFINED__ */


#ifndef __IHeaderControl_FWD_DEFINED__
#define __IHeaderControl_FWD_DEFINED__
typedef interface IHeaderControl IHeaderControl;

#endif 	/* __IHeaderControl_FWD_DEFINED__ */


#ifndef __ICheckBox2_FWD_DEFINED__
#define __ICheckBox2_FWD_DEFINED__
typedef interface ICheckBox2 ICheckBox2;

#endif 	/* __ICheckBox2_FWD_DEFINED__ */


#ifndef __IComboBox2_FWD_DEFINED__
#define __IComboBox2_FWD_DEFINED__
typedef interface IComboBox2 IComboBox2;

#endif 	/* __IComboBox2_FWD_DEFINED__ */


#ifndef __IItemObject2_FWD_DEFINED__
#define __IItemObject2_FWD_DEFINED__
typedef interface IItemObject2 IItemObject2;

#endif 	/* __IItemObject2_FWD_DEFINED__ */


#ifndef __IEditBox2_FWD_DEFINED__
#define __IEditBox2_FWD_DEFINED__
typedef interface IEditBox2 IEditBox2;

#endif 	/* __IEditBox2_FWD_DEFINED__ */


#ifndef __ILink2_FWD_DEFINED__
#define __ILink2_FWD_DEFINED__
typedef interface ILink2 ILink2;

#endif 	/* __ILink2_FWD_DEFINED__ */


#ifndef __IListView2_FWD_DEFINED__
#define __IListView2_FWD_DEFINED__
typedef interface IListView2 IListView2;

#endif 	/* __IListView2_FWD_DEFINED__ */


#ifndef __IMenuItem2_FWD_DEFINED__
#define __IMenuItem2_FWD_DEFINED__
typedef interface IMenuItem2 IMenuItem2;

#endif 	/* __IMenuItem2_FWD_DEFINED__ */


#ifndef __IObjectStore_FWD_DEFINED__
#define __IObjectStore_FWD_DEFINED__
typedef interface IObjectStore IObjectStore;

#endif 	/* __IObjectStore_FWD_DEFINED__ */


#ifndef __IRadioButton2_FWD_DEFINED__
#define __IRadioButton2_FWD_DEFINED__
typedef interface IRadioButton2 IRadioButton2;

#endif 	/* __IRadioButton2_FWD_DEFINED__ */


#ifndef __IScrollBar2_FWD_DEFINED__
#define __IScrollBar2_FWD_DEFINED__
typedef interface IScrollBar2 IScrollBar2;

#endif 	/* __IScrollBar2_FWD_DEFINED__ */


#ifndef __ITrackBar2_FWD_DEFINED__
#define __ITrackBar2_FWD_DEFINED__
typedef interface ITrackBar2 ITrackBar2;

#endif 	/* __ITrackBar2_FWD_DEFINED__ */


#ifndef __ITreeView2_FWD_DEFINED__
#define __ITreeView2_FWD_DEFINED__
typedef interface ITreeView2 ITreeView2;

#endif 	/* __ITreeView2_FWD_DEFINED__ */


#ifndef __IWindowSearch2_FWD_DEFINED__
#define __IWindowSearch2_FWD_DEFINED__
typedef interface IWindowSearch2 IWindowSearch2;

#endif 	/* __IWindowSearch2_FWD_DEFINED__ */


#ifndef __IWindowSearchOption_FWD_DEFINED__
#define __IWindowSearchOption_FWD_DEFINED__
typedef interface IWindowSearchOption IWindowSearchOption;

#endif 	/* __IWindowSearchOption_FWD_DEFINED__ */


#ifndef __IWebPage_FWD_DEFINED__
#define __IWebPage_FWD_DEFINED__
typedef interface IWebPage IWebPage;

#endif 	/* __IWebPage_FWD_DEFINED__ */


#ifndef __IZoomText2_FWD_DEFINED__
#define __IZoomText2_FWD_DEFINED__
typedef interface IZoomText2 IZoomText2;

#endif 	/* __IZoomText2_FWD_DEFINED__ */


#ifndef __ZoomText_FWD_DEFINED__
#define __ZoomText_FWD_DEFINED__

#ifdef __cplusplus
typedef class ZoomText ZoomText;
#else
typedef struct ZoomText ZoomText;
#endif /* __cplusplus */

#endif 	/* __ZoomText_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __AiSquared_LIBRARY_DEFINED__
#define __AiSquared_LIBRARY_DEFINED__

/* library AiSquared */
/* [custom][custom][custom][helpstring][version][uuid] */ 

































































































typedef /* [public] */ 
enum __MIDL___MIDL_itf_Zt_0000_0000_0001
    {
        TypeLibMajorVersion	= 1,
        TypeLibMinorVersion	= 2
    } 	AiSquaredLibraryVersion;

typedef struct tagtagAHOIOBJECTID
    {
    short Provider;
    short Type;
    long Id;
    } 	tagAHOIOBJECTID;


EXTERN_C const IID LIBID_AiSquared;

#ifndef __IZTCommand_INTERFACE_DEFINED__
#define __IZTCommand_INTERFACE_DEFINED__

/* interface IZTCommand */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZTCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC675E9B-D54B-4752-AEBE-20F1B6496201")
    IZTCommand : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Command( 
            /* [in] */ int iCommand,
            /* [in] */ long lParam) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CommandString( 
            /* [in] */ int iCommand,
            /* [in] */ BSTR strParam) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZTCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZTCommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZTCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZTCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZTCommand * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZTCommand * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZTCommand * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZTCommand * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Command )( 
            IZTCommand * This,
            /* [in] */ int iCommand,
            /* [in] */ long lParam);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CommandString )( 
            IZTCommand * This,
            /* [in] */ int iCommand,
            /* [in] */ BSTR strParam);
        
        END_INTERFACE
    } IZTCommandVtbl;

    interface IZTCommand
    {
        CONST_VTBL struct IZTCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZTCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZTCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZTCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZTCommand_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZTCommand_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZTCommand_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZTCommand_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZTCommand_Command(This,iCommand,lParam)	\
    ( (This)->lpVtbl -> Command(This,iCommand,lParam) ) 

#define IZTCommand_CommandString(This,iCommand,strParam)	\
    ( (This)->lpVtbl -> CommandString(This,iCommand,strParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZTCommand_INTERFACE_DEFINED__ */


#ifndef __IZoomText_INTERFACE_DEFINED__
#define __IZoomText_INTERFACE_DEFINED__

/* interface IZoomText */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZoomText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE188A1C-7426-46F4-95E2-4004A5F664D9")
    IZoomText : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveToolMode( 
            /* [retval][out] */ BSTR *pstrToolMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AhoiManager( 
            /* [retval][out] */ IAhoiManager2 **ppObj) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ BSTR bstrObjName,
            /* [retval][out] */ IUnknown **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EventManager( 
            /* [retval][out] */ IEventManager2 **ppObj) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetEventData( 
            /* [in] */ BSTR bstrDataHandle,
            /* [retval][out] */ IUnknown **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Hotkeys( 
            /* [retval][out] */ IHotkeys **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Keyboard( 
            /* [retval][out] */ IKeyboard **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Magnification( 
            /* [retval][out] */ IMagnification3 **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mouse( 
            /* [retval][out] */ IMouse **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Reader( 
            /* [retval][out] */ IReader3 **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScriptConfiguration( 
            /* [retval][out] */ IScriptConfiguration **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Settings( 
            /* [retval][out] */ IZoomTextSettings4 **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Speech( 
            /* [retval][out] */ ISpeech2 **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVersion) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ZTCommand( 
            /* [retval][out] */ IZTCommand **ppObj) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateObjectFromAhoiId( 
            /* [in] */ BSTR bstrObjName,
            /* [in] */ tagAHOIOBJECTID AhoiId,
            /* [retval][out] */ IUnknown **ppObj) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateSpeechEventObject( 
            /* [in] */ BSTR bstrClient,
            /* [in] */ BSTR bstrText,
            /* [in] */ unsigned long dwFlags,
            /* [retval][out] */ IUnknown **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScriptManager( 
            /* [retval][out] */ IScriptManager **ppObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZoomTextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZoomText * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZoomText * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZoomText * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZoomText * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZoomText * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZoomText * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZoomText * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveToolMode )( 
            IZoomText * This,
            /* [retval][out] */ BSTR *pstrToolMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AhoiManager )( 
            IZoomText * This,
            /* [retval][out] */ IAhoiManager2 **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            IZoomText * This,
            /* [in] */ BSTR bstrObjName,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IZoomText * This,
            /* [retval][out] */ VARIANT_BOOL *pEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IZoomText * This,
            /* [in] */ VARIANT_BOOL pEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EventManager )( 
            IZoomText * This,
            /* [retval][out] */ IEventManager2 **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetEventData )( 
            IZoomText * This,
            /* [in] */ BSTR bstrDataHandle,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkeys )( 
            IZoomText * This,
            /* [retval][out] */ IHotkeys **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Keyboard )( 
            IZoomText * This,
            /* [retval][out] */ IKeyboard **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Magnification )( 
            IZoomText * This,
            /* [retval][out] */ IMagnification3 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mouse )( 
            IZoomText * This,
            /* [retval][out] */ IMouse **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Reader )( 
            IZoomText * This,
            /* [retval][out] */ IReader3 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptConfiguration )( 
            IZoomText * This,
            /* [retval][out] */ IScriptConfiguration **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Settings )( 
            IZoomText * This,
            /* [retval][out] */ IZoomTextSettings4 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Speech )( 
            IZoomText * This,
            /* [retval][out] */ ISpeech2 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IZoomText * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ZTCommand )( 
            IZoomText * This,
            /* [retval][out] */ IZTCommand **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateObjectFromAhoiId )( 
            IZoomText * This,
            /* [in] */ BSTR bstrObjName,
            /* [in] */ tagAHOIOBJECTID AhoiId,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateSpeechEventObject )( 
            IZoomText * This,
            /* [in] */ BSTR bstrClient,
            /* [in] */ BSTR bstrText,
            /* [in] */ unsigned long dwFlags,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptManager )( 
            IZoomText * This,
            /* [retval][out] */ IScriptManager **ppObj);
        
        END_INTERFACE
    } IZoomTextVtbl;

    interface IZoomText
    {
        CONST_VTBL struct IZoomTextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZoomText_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZoomText_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZoomText_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZoomText_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZoomText_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZoomText_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZoomText_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZoomText_get_ActiveToolMode(This,pstrToolMode)	\
    ( (This)->lpVtbl -> get_ActiveToolMode(This,pstrToolMode) ) 

#define IZoomText_get_AhoiManager(This,ppObj)	\
    ( (This)->lpVtbl -> get_AhoiManager(This,ppObj) ) 

#define IZoomText_CreateObject(This,bstrObjName,ppObj)	\
    ( (This)->lpVtbl -> CreateObject(This,bstrObjName,ppObj) ) 

#define IZoomText_get_Enabled(This,pEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) ) 

#define IZoomText_put_Enabled(This,pEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pEnabled) ) 

#define IZoomText_get_EventManager(This,ppObj)	\
    ( (This)->lpVtbl -> get_EventManager(This,ppObj) ) 

#define IZoomText_GetEventData(This,bstrDataHandle,ppObj)	\
    ( (This)->lpVtbl -> GetEventData(This,bstrDataHandle,ppObj) ) 

#define IZoomText_get_Hotkeys(This,ppObj)	\
    ( (This)->lpVtbl -> get_Hotkeys(This,ppObj) ) 

#define IZoomText_get_Keyboard(This,ppObj)	\
    ( (This)->lpVtbl -> get_Keyboard(This,ppObj) ) 

#define IZoomText_get_Magnification(This,ppObj)	\
    ( (This)->lpVtbl -> get_Magnification(This,ppObj) ) 

#define IZoomText_get_Mouse(This,ppObj)	\
    ( (This)->lpVtbl -> get_Mouse(This,ppObj) ) 

#define IZoomText_get_Reader(This,ppObj)	\
    ( (This)->lpVtbl -> get_Reader(This,ppObj) ) 

#define IZoomText_get_ScriptConfiguration(This,ppObj)	\
    ( (This)->lpVtbl -> get_ScriptConfiguration(This,ppObj) ) 

#define IZoomText_get_Settings(This,ppObj)	\
    ( (This)->lpVtbl -> get_Settings(This,ppObj) ) 

#define IZoomText_get_Speech(This,ppObj)	\
    ( (This)->lpVtbl -> get_Speech(This,ppObj) ) 

#define IZoomText_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IZoomText_get_ZTCommand(This,ppObj)	\
    ( (This)->lpVtbl -> get_ZTCommand(This,ppObj) ) 

#define IZoomText_CreateObjectFromAhoiId(This,bstrObjName,AhoiId,ppObj)	\
    ( (This)->lpVtbl -> CreateObjectFromAhoiId(This,bstrObjName,AhoiId,ppObj) ) 

#define IZoomText_CreateSpeechEventObject(This,bstrClient,bstrText,dwFlags,ppObj)	\
    ( (This)->lpVtbl -> CreateSpeechEventObject(This,bstrClient,bstrText,dwFlags,ppObj) ) 

#define IZoomText_get_ScriptManager(This,ppObj)	\
    ( (This)->lpVtbl -> get_ScriptManager(This,ppObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZoomText_INTERFACE_DEFINED__ */


#ifndef __IAhoiManager_INTERFACE_DEFINED__
#define __IAhoiManager_INTERFACE_DEFINED__

/* interface IAhoiManager */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAhoiManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CCB88338-5D06-4D72-8E08-526EABED4458")
    IAhoiManager : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableModule( 
            /* [in] */ BSTR bstrAhoiModuleName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableModule( 
            /* [in] */ BSTR bstrAhoiModuleName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsModuleEnabled( 
            /* [in] */ BSTR bstrAhoiModuleName,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsModuleRegistered( 
            /* [in] */ BSTR bstrAhoiModuleName,
            /* [retval][out] */ VARIANT_BOOL *pbRegistered) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAhoiManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAhoiManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAhoiManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAhoiManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAhoiManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAhoiManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAhoiManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAhoiManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IAhoiManager * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IAhoiManager * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableModule )( 
            IAhoiManager * This,
            /* [in] */ BSTR bstrAhoiModuleName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableModule )( 
            IAhoiManager * This,
            /* [in] */ BSTR bstrAhoiModuleName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsModuleEnabled )( 
            IAhoiManager * This,
            /* [in] */ BSTR bstrAhoiModuleName,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsModuleRegistered )( 
            IAhoiManager * This,
            /* [in] */ BSTR bstrAhoiModuleName,
            /* [retval][out] */ VARIANT_BOOL *pbRegistered);
        
        END_INTERFACE
    } IAhoiManagerVtbl;

    interface IAhoiManager
    {
        CONST_VTBL struct IAhoiManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAhoiManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAhoiManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAhoiManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAhoiManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAhoiManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAhoiManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAhoiManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAhoiManager_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IAhoiManager_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#define IAhoiManager_EnableModule(This,bstrAhoiModuleName)	\
    ( (This)->lpVtbl -> EnableModule(This,bstrAhoiModuleName) ) 

#define IAhoiManager_DisableModule(This,bstrAhoiModuleName)	\
    ( (This)->lpVtbl -> DisableModule(This,bstrAhoiModuleName) ) 

#define IAhoiManager_IsModuleEnabled(This,bstrAhoiModuleName,pbEnabled)	\
    ( (This)->lpVtbl -> IsModuleEnabled(This,bstrAhoiModuleName,pbEnabled) ) 

#define IAhoiManager_IsModuleRegistered(This,bstrAhoiModuleName,pbRegistered)	\
    ( (This)->lpVtbl -> IsModuleRegistered(This,bstrAhoiModuleName,pbRegistered) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAhoiManager_INTERFACE_DEFINED__ */


#ifndef __IAhoiManager2_INTERFACE_DEFINED__
#define __IAhoiManager2_INTERFACE_DEFINED__

/* interface IAhoiManager2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAhoiManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA722D2B-4323-495D-84FF-39D694D170BB")
    IAhoiManager2 : public IAhoiManager
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FocusEventsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FocusEventsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CursorEventsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CursorEventsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAhoiManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAhoiManager2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAhoiManager2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAhoiManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAhoiManager2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAhoiManager2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAhoiManager2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAhoiManager2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IAhoiManager2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IAhoiManager2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableModule )( 
            IAhoiManager2 * This,
            /* [in] */ BSTR bstrAhoiModuleName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableModule )( 
            IAhoiManager2 * This,
            /* [in] */ BSTR bstrAhoiModuleName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsModuleEnabled )( 
            IAhoiManager2 * This,
            /* [in] */ BSTR bstrAhoiModuleName,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsModuleRegistered )( 
            IAhoiManager2 * This,
            /* [in] */ BSTR bstrAhoiModuleName,
            /* [retval][out] */ VARIANT_BOOL *pbRegistered);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FocusEventsEnabled )( 
            IAhoiManager2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FocusEventsEnabled )( 
            IAhoiManager2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CursorEventsEnabled )( 
            IAhoiManager2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CursorEventsEnabled )( 
            IAhoiManager2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } IAhoiManager2Vtbl;

    interface IAhoiManager2
    {
        CONST_VTBL struct IAhoiManager2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAhoiManager2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAhoiManager2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAhoiManager2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAhoiManager2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAhoiManager2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAhoiManager2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAhoiManager2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAhoiManager2_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IAhoiManager2_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#define IAhoiManager2_EnableModule(This,bstrAhoiModuleName)	\
    ( (This)->lpVtbl -> EnableModule(This,bstrAhoiModuleName) ) 

#define IAhoiManager2_DisableModule(This,bstrAhoiModuleName)	\
    ( (This)->lpVtbl -> DisableModule(This,bstrAhoiModuleName) ) 

#define IAhoiManager2_IsModuleEnabled(This,bstrAhoiModuleName,pbEnabled)	\
    ( (This)->lpVtbl -> IsModuleEnabled(This,bstrAhoiModuleName,pbEnabled) ) 

#define IAhoiManager2_IsModuleRegistered(This,bstrAhoiModuleName,pbRegistered)	\
    ( (This)->lpVtbl -> IsModuleRegistered(This,bstrAhoiModuleName,pbRegistered) ) 


#define IAhoiManager2_get_FocusEventsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_FocusEventsEnabled(This,pbEnabled) ) 

#define IAhoiManager2_put_FocusEventsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_FocusEventsEnabled(This,pbEnabled) ) 

#define IAhoiManager2_get_CursorEventsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_CursorEventsEnabled(This,pbEnabled) ) 

#define IAhoiManager2_put_CursorEventsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_CursorEventsEnabled(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAhoiManager2_INTERFACE_DEFINED__ */


#ifndef __IEventManager_INTERFACE_DEFINED__
#define __IEventManager_INTERFACE_DEFINED__

/* interface IEventManager */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEventManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5D2381CF-0B7D-4554-B3A6-E67F6E98DFB3")
    IEventManager : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterForEvent( 
            /* [in] */ IEventDefinition *pEventDef) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterFromEvent( 
            /* [in] */ IEventDefinition *pEventDef) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEventManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterForEvent )( 
            IEventManager * This,
            /* [in] */ IEventDefinition *pEventDef);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterFromEvent )( 
            IEventManager * This,
            /* [in] */ IEventDefinition *pEventDef);
        
        END_INTERFACE
    } IEventManagerVtbl;

    interface IEventManager
    {
        CONST_VTBL struct IEventManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEventManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEventManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEventManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEventManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEventManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEventManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEventManager_RegisterForEvent(This,pEventDef)	\
    ( (This)->lpVtbl -> RegisterForEvent(This,pEventDef) ) 

#define IEventManager_UnregisterFromEvent(This,pEventDef)	\
    ( (This)->lpVtbl -> UnregisterFromEvent(This,pEventDef) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEventManager_INTERFACE_DEFINED__ */


#ifndef __IEventManager2_INTERFACE_DEFINED__
#define __IEventManager2_INTERFACE_DEFINED__

/* interface IEventManager2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEventManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E0140240-FBA2-4E2B-A4ED-E7AD176E7BC6")
    IEventManager2 : public IEventManager
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CancelEvent( 
            /* [in] */ IEventDefinition *pEventDef) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEventManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventManager2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventManager2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventManager2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventManager2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventManager2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventManager2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterForEvent )( 
            IEventManager2 * This,
            /* [in] */ IEventDefinition *pEventDef);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterFromEvent )( 
            IEventManager2 * This,
            /* [in] */ IEventDefinition *pEventDef);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CancelEvent )( 
            IEventManager2 * This,
            /* [in] */ IEventDefinition *pEventDef);
        
        END_INTERFACE
    } IEventManager2Vtbl;

    interface IEventManager2
    {
        CONST_VTBL struct IEventManager2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventManager2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEventManager2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEventManager2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEventManager2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEventManager2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEventManager2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEventManager2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEventManager2_RegisterForEvent(This,pEventDef)	\
    ( (This)->lpVtbl -> RegisterForEvent(This,pEventDef) ) 

#define IEventManager2_UnregisterFromEvent(This,pEventDef)	\
    ( (This)->lpVtbl -> UnregisterFromEvent(This,pEventDef) ) 


#define IEventManager2_CancelEvent(This,pEventDef)	\
    ( (This)->lpVtbl -> CancelEvent(This,pEventDef) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEventManager2_INTERFACE_DEFINED__ */


#ifndef __IEventDefinition_INTERFACE_DEFINED__
#define __IEventDefinition_INTERFACE_DEFINED__

/* interface IEventDefinition */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEventDefinition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83012579-FEC8-4B8A-A6B6-9E9144A7E47F")
    IEventDefinition : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Event( 
            /* [retval][out] */ BSTR *pbstrEvent) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Event( 
            /* [in] */ BSTR pbstrEvent) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pbstrScriptPath) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ScriptPath( 
            /* [in] */ BSTR pbstrScriptPath) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgramID( 
            /* [retval][out] */ BSTR *pbstrProgramID) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ProgramID( 
            /* [in] */ BSTR pbstrProgramID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AlternateMethod( 
            /* [retval][out] */ BSTR *pbstrMethod) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AlternateMethod( 
            /* [in] */ BSTR pbstrMethod) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CancelEventOnAlert( 
            /* [retval][out] */ VARIANT_BOOL *pbCancel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CancelEventOnAlert( 
            /* [in] */ VARIANT_BOOL pbCancel) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddFilterItem( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT comparisonType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEventDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventDefinition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventDefinition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventDefinition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventDefinition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventDefinition * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Event )( 
            IEventDefinition * This,
            /* [retval][out] */ BSTR *pbstrEvent);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Event )( 
            IEventDefinition * This,
            /* [in] */ BSTR pbstrEvent);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            IEventDefinition * This,
            /* [retval][out] */ BSTR *pbstrScriptPath);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptPath )( 
            IEventDefinition * This,
            /* [in] */ BSTR pbstrScriptPath);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramID )( 
            IEventDefinition * This,
            /* [retval][out] */ BSTR *pbstrProgramID);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ProgramID )( 
            IEventDefinition * This,
            /* [in] */ BSTR pbstrProgramID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateMethod )( 
            IEventDefinition * This,
            /* [retval][out] */ BSTR *pbstrMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateMethod )( 
            IEventDefinition * This,
            /* [in] */ BSTR pbstrMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CancelEventOnAlert )( 
            IEventDefinition * This,
            /* [retval][out] */ VARIANT_BOOL *pbCancel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CancelEventOnAlert )( 
            IEventDefinition * This,
            /* [in] */ VARIANT_BOOL pbCancel);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddFilterItem )( 
            IEventDefinition * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT value,
            /* [optional][in] */ VARIANT comparisonType);
        
        END_INTERFACE
    } IEventDefinitionVtbl;

    interface IEventDefinition
    {
        CONST_VTBL struct IEventDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEventDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEventDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEventDefinition_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEventDefinition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEventDefinition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEventDefinition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEventDefinition_get_Event(This,pbstrEvent)	\
    ( (This)->lpVtbl -> get_Event(This,pbstrEvent) ) 

#define IEventDefinition_put_Event(This,pbstrEvent)	\
    ( (This)->lpVtbl -> put_Event(This,pbstrEvent) ) 

#define IEventDefinition_get_ScriptPath(This,pbstrScriptPath)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pbstrScriptPath) ) 

#define IEventDefinition_put_ScriptPath(This,pbstrScriptPath)	\
    ( (This)->lpVtbl -> put_ScriptPath(This,pbstrScriptPath) ) 

#define IEventDefinition_get_ProgramID(This,pbstrProgramID)	\
    ( (This)->lpVtbl -> get_ProgramID(This,pbstrProgramID) ) 

#define IEventDefinition_put_ProgramID(This,pbstrProgramID)	\
    ( (This)->lpVtbl -> put_ProgramID(This,pbstrProgramID) ) 

#define IEventDefinition_get_AlternateMethod(This,pbstrMethod)	\
    ( (This)->lpVtbl -> get_AlternateMethod(This,pbstrMethod) ) 

#define IEventDefinition_put_AlternateMethod(This,pbstrMethod)	\
    ( (This)->lpVtbl -> put_AlternateMethod(This,pbstrMethod) ) 

#define IEventDefinition_get_CancelEventOnAlert(This,pbCancel)	\
    ( (This)->lpVtbl -> get_CancelEventOnAlert(This,pbCancel) ) 

#define IEventDefinition_put_CancelEventOnAlert(This,pbCancel)	\
    ( (This)->lpVtbl -> put_CancelEventOnAlert(This,pbCancel) ) 

#define IEventDefinition_AddFilterItem(This,bstrName,value,comparisonType)	\
    ( (This)->lpVtbl -> AddFilterItem(This,bstrName,value,comparisonType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEventDefinition_INTERFACE_DEFINED__ */


#ifndef __IHotkeys_INTERFACE_DEFINED__
#define __IHotkeys_INTERFACE_DEFINED__

/* interface IHotkeys */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IHotkeys;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F8D5580B-BB40-4FBC-A88D-D4EE782BEE0E")
    IHotkeys : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateHotkey( 
            /* [in] */ BSTR bstrCommandName,
            /* [in] */ BSTR bstrDescription,
            /* [in] */ BSTR bstrDefaultKeyCombination) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteHotkey( 
            /* [in] */ BSTR bstrCommandName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ BSTR bstrCommandName,
            /* [optional][in] */ VARIANT bSilent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHotkeysVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHotkeys * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHotkeys * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHotkeys * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHotkeys * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHotkeys * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHotkeys * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHotkeys * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateHotkey )( 
            IHotkeys * This,
            /* [in] */ BSTR bstrCommandName,
            /* [in] */ BSTR bstrDescription,
            /* [in] */ BSTR bstrDefaultKeyCombination);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteHotkey )( 
            IHotkeys * This,
            /* [in] */ BSTR bstrCommandName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IHotkeys * This,
            /* [in] */ BSTR bstrCommandName,
            /* [optional][in] */ VARIANT bSilent);
        
        END_INTERFACE
    } IHotkeysVtbl;

    interface IHotkeys
    {
        CONST_VTBL struct IHotkeysVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHotkeys_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHotkeys_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHotkeys_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHotkeys_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHotkeys_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHotkeys_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHotkeys_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHotkeys_CreateHotkey(This,bstrCommandName,bstrDescription,bstrDefaultKeyCombination)	\
    ( (This)->lpVtbl -> CreateHotkey(This,bstrCommandName,bstrDescription,bstrDefaultKeyCombination) ) 

#define IHotkeys_DeleteHotkey(This,bstrCommandName)	\
    ( (This)->lpVtbl -> DeleteHotkey(This,bstrCommandName) ) 

#define IHotkeys_Execute(This,bstrCommandName,bSilent)	\
    ( (This)->lpVtbl -> Execute(This,bstrCommandName,bSilent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHotkeys_INTERFACE_DEFINED__ */


#ifndef __IKeyboard_INTERFACE_DEFINED__
#define __IKeyboard_INTERFACE_DEFINED__

/* interface IKeyboard */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IKeyboard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04972FBC-5254-11DC-8314-0800200C9A66")
    IKeyboard : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_KeysPressed( 
            /* [retval][out] */ BSTR *bstr) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PressKeys( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetKeyCode( 
            /* [in] */ BSTR bstr,
            /* [retval][out] */ unsigned long *pdwKeyCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetKeyName( 
            /* [in] */ unsigned short wModifier,
            /* [in] */ unsigned short wVkCode,
            /* [in] */ unsigned short wUC,
            /* [retval][out] */ BSTR *keyString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKeyboardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKeyboard * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKeyboard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKeyboard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IKeyboard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IKeyboard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IKeyboard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IKeyboard * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeysPressed )( 
            IKeyboard * This,
            /* [retval][out] */ BSTR *bstr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PressKeys )( 
            IKeyboard * This,
            /* [in] */ BSTR bstr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetKeyCode )( 
            IKeyboard * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ unsigned long *pdwKeyCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetKeyName )( 
            IKeyboard * This,
            /* [in] */ unsigned short wModifier,
            /* [in] */ unsigned short wVkCode,
            /* [in] */ unsigned short wUC,
            /* [retval][out] */ BSTR *keyString);
        
        END_INTERFACE
    } IKeyboardVtbl;

    interface IKeyboard
    {
        CONST_VTBL struct IKeyboardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKeyboard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKeyboard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKeyboard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKeyboard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IKeyboard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IKeyboard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IKeyboard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IKeyboard_get_KeysPressed(This,bstr)	\
    ( (This)->lpVtbl -> get_KeysPressed(This,bstr) ) 

#define IKeyboard_PressKeys(This,bstr)	\
    ( (This)->lpVtbl -> PressKeys(This,bstr) ) 

#define IKeyboard_GetKeyCode(This,bstr,pdwKeyCode)	\
    ( (This)->lpVtbl -> GetKeyCode(This,bstr,pdwKeyCode) ) 

#define IKeyboard_GetKeyName(This,wModifier,wVkCode,wUC,keyString)	\
    ( (This)->lpVtbl -> GetKeyName(This,wModifier,wVkCode,wUC,keyString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKeyboard_INTERFACE_DEFINED__ */


#ifndef __IMagnification_INTERFACE_DEFINED__
#define __IMagnification_INTERFACE_DEFINED__

/* interface IMagnification */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMagnification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33FBE571-A41D-49CF-84C7-5E2207E37E98")
    IMagnification : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CaptureScreen( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CaretEnhancements( 
            /* [retval][out] */ ICaretEnhancements2 **ppCaretEnhancements) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ColorEnhancements( 
            /* [retval][out] */ IColorEnhancements **ppColorEnhancements) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DualMonitor( 
            /* [retval][out] */ IDualMonitor **ppDualMonitor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FocusEnhancements( 
            /* [retval][out] */ IFocusEnhancements2 **ppFocusEnhancements) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FontEnhancements( 
            /* [retval][out] */ IFontEnhancements **ppFontEnhancements) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FreezeUsesPrimaryPower( 
            /* [retval][out] */ VARIANT_BOOL *pVariantBool) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FreezeUsesPrimaryPower( 
            /* [in] */ VARIANT_BOOL pVariantBool) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FreezeWindow( 
            /* [retval][out] */ IZoomWindow **ppFreezeWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PointerEnhancements( 
            /* [retval][out] */ IPointerEnhancements **ppPointerEnhancements) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrimaryWindow( 
            /* [retval][out] */ IZoomWindow **ppPrimaryWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Tracking( 
            /* [retval][out] */ ITracking2 **ppTracking) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ViewLocator( 
            /* [retval][out] */ IViewLocator **ppViewLocator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMagnificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMagnification * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMagnification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMagnification * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMagnification * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMagnification * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMagnification * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMagnification * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CaptureScreen )( 
            IMagnification * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CaretEnhancements )( 
            IMagnification * This,
            /* [retval][out] */ ICaretEnhancements2 **ppCaretEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorEnhancements )( 
            IMagnification * This,
            /* [retval][out] */ IColorEnhancements **ppColorEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DualMonitor )( 
            IMagnification * This,
            /* [retval][out] */ IDualMonitor **ppDualMonitor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FocusEnhancements )( 
            IMagnification * This,
            /* [retval][out] */ IFocusEnhancements2 **ppFocusEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontEnhancements )( 
            IMagnification * This,
            /* [retval][out] */ IFontEnhancements **ppFontEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FreezeUsesPrimaryPower )( 
            IMagnification * This,
            /* [retval][out] */ VARIANT_BOOL *pVariantBool);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FreezeUsesPrimaryPower )( 
            IMagnification * This,
            /* [in] */ VARIANT_BOOL pVariantBool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FreezeWindow )( 
            IMagnification * This,
            /* [retval][out] */ IZoomWindow **ppFreezeWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PointerEnhancements )( 
            IMagnification * This,
            /* [retval][out] */ IPointerEnhancements **ppPointerEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrimaryWindow )( 
            IMagnification * This,
            /* [retval][out] */ IZoomWindow **ppPrimaryWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Tracking )( 
            IMagnification * This,
            /* [retval][out] */ ITracking2 **ppTracking);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ViewLocator )( 
            IMagnification * This,
            /* [retval][out] */ IViewLocator **ppViewLocator);
        
        END_INTERFACE
    } IMagnificationVtbl;

    interface IMagnification
    {
        CONST_VTBL struct IMagnificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMagnification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMagnification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMagnification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMagnification_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMagnification_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMagnification_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMagnification_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMagnification_CaptureScreen(This)	\
    ( (This)->lpVtbl -> CaptureScreen(This) ) 

#define IMagnification_get_CaretEnhancements(This,ppCaretEnhancements)	\
    ( (This)->lpVtbl -> get_CaretEnhancements(This,ppCaretEnhancements) ) 

#define IMagnification_get_ColorEnhancements(This,ppColorEnhancements)	\
    ( (This)->lpVtbl -> get_ColorEnhancements(This,ppColorEnhancements) ) 

#define IMagnification_get_DualMonitor(This,ppDualMonitor)	\
    ( (This)->lpVtbl -> get_DualMonitor(This,ppDualMonitor) ) 

#define IMagnification_get_FocusEnhancements(This,ppFocusEnhancements)	\
    ( (This)->lpVtbl -> get_FocusEnhancements(This,ppFocusEnhancements) ) 

#define IMagnification_get_FontEnhancements(This,ppFontEnhancements)	\
    ( (This)->lpVtbl -> get_FontEnhancements(This,ppFontEnhancements) ) 

#define IMagnification_get_FreezeUsesPrimaryPower(This,pVariantBool)	\
    ( (This)->lpVtbl -> get_FreezeUsesPrimaryPower(This,pVariantBool) ) 

#define IMagnification_put_FreezeUsesPrimaryPower(This,pVariantBool)	\
    ( (This)->lpVtbl -> put_FreezeUsesPrimaryPower(This,pVariantBool) ) 

#define IMagnification_get_FreezeWindow(This,ppFreezeWindow)	\
    ( (This)->lpVtbl -> get_FreezeWindow(This,ppFreezeWindow) ) 

#define IMagnification_get_PointerEnhancements(This,ppPointerEnhancements)	\
    ( (This)->lpVtbl -> get_PointerEnhancements(This,ppPointerEnhancements) ) 

#define IMagnification_get_PrimaryWindow(This,ppPrimaryWindow)	\
    ( (This)->lpVtbl -> get_PrimaryWindow(This,ppPrimaryWindow) ) 

#define IMagnification_get_Tracking(This,ppTracking)	\
    ( (This)->lpVtbl -> get_Tracking(This,ppTracking) ) 

#define IMagnification_get_ViewLocator(This,ppViewLocator)	\
    ( (This)->lpVtbl -> get_ViewLocator(This,ppViewLocator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMagnification_INTERFACE_DEFINED__ */


#ifndef __IMagnification2_INTERFACE_DEFINED__
#define __IMagnification2_INTERFACE_DEFINED__

/* interface IMagnification2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMagnification2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8EE8CBB-6357-44EF-A024-0B756D0D7730")
    IMagnification2 : public IMagnification
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScreenHighlight( 
            /* [retval][out] */ IScreenHighlight2 **ppScreenHighlight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMagnification2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMagnification2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMagnification2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMagnification2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMagnification2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMagnification2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMagnification2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMagnification2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CaptureScreen )( 
            IMagnification2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CaretEnhancements )( 
            IMagnification2 * This,
            /* [retval][out] */ ICaretEnhancements2 **ppCaretEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorEnhancements )( 
            IMagnification2 * This,
            /* [retval][out] */ IColorEnhancements **ppColorEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DualMonitor )( 
            IMagnification2 * This,
            /* [retval][out] */ IDualMonitor **ppDualMonitor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FocusEnhancements )( 
            IMagnification2 * This,
            /* [retval][out] */ IFocusEnhancements2 **ppFocusEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontEnhancements )( 
            IMagnification2 * This,
            /* [retval][out] */ IFontEnhancements **ppFontEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FreezeUsesPrimaryPower )( 
            IMagnification2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVariantBool);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FreezeUsesPrimaryPower )( 
            IMagnification2 * This,
            /* [in] */ VARIANT_BOOL pVariantBool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FreezeWindow )( 
            IMagnification2 * This,
            /* [retval][out] */ IZoomWindow **ppFreezeWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PointerEnhancements )( 
            IMagnification2 * This,
            /* [retval][out] */ IPointerEnhancements **ppPointerEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrimaryWindow )( 
            IMagnification2 * This,
            /* [retval][out] */ IZoomWindow **ppPrimaryWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Tracking )( 
            IMagnification2 * This,
            /* [retval][out] */ ITracking2 **ppTracking);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ViewLocator )( 
            IMagnification2 * This,
            /* [retval][out] */ IViewLocator **ppViewLocator);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScreenHighlight )( 
            IMagnification2 * This,
            /* [retval][out] */ IScreenHighlight2 **ppScreenHighlight);
        
        END_INTERFACE
    } IMagnification2Vtbl;

    interface IMagnification2
    {
        CONST_VTBL struct IMagnification2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMagnification2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMagnification2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMagnification2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMagnification2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMagnification2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMagnification2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMagnification2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMagnification2_CaptureScreen(This)	\
    ( (This)->lpVtbl -> CaptureScreen(This) ) 

#define IMagnification2_get_CaretEnhancements(This,ppCaretEnhancements)	\
    ( (This)->lpVtbl -> get_CaretEnhancements(This,ppCaretEnhancements) ) 

#define IMagnification2_get_ColorEnhancements(This,ppColorEnhancements)	\
    ( (This)->lpVtbl -> get_ColorEnhancements(This,ppColorEnhancements) ) 

#define IMagnification2_get_DualMonitor(This,ppDualMonitor)	\
    ( (This)->lpVtbl -> get_DualMonitor(This,ppDualMonitor) ) 

#define IMagnification2_get_FocusEnhancements(This,ppFocusEnhancements)	\
    ( (This)->lpVtbl -> get_FocusEnhancements(This,ppFocusEnhancements) ) 

#define IMagnification2_get_FontEnhancements(This,ppFontEnhancements)	\
    ( (This)->lpVtbl -> get_FontEnhancements(This,ppFontEnhancements) ) 

#define IMagnification2_get_FreezeUsesPrimaryPower(This,pVariantBool)	\
    ( (This)->lpVtbl -> get_FreezeUsesPrimaryPower(This,pVariantBool) ) 

#define IMagnification2_put_FreezeUsesPrimaryPower(This,pVariantBool)	\
    ( (This)->lpVtbl -> put_FreezeUsesPrimaryPower(This,pVariantBool) ) 

#define IMagnification2_get_FreezeWindow(This,ppFreezeWindow)	\
    ( (This)->lpVtbl -> get_FreezeWindow(This,ppFreezeWindow) ) 

#define IMagnification2_get_PointerEnhancements(This,ppPointerEnhancements)	\
    ( (This)->lpVtbl -> get_PointerEnhancements(This,ppPointerEnhancements) ) 

#define IMagnification2_get_PrimaryWindow(This,ppPrimaryWindow)	\
    ( (This)->lpVtbl -> get_PrimaryWindow(This,ppPrimaryWindow) ) 

#define IMagnification2_get_Tracking(This,ppTracking)	\
    ( (This)->lpVtbl -> get_Tracking(This,ppTracking) ) 

#define IMagnification2_get_ViewLocator(This,ppViewLocator)	\
    ( (This)->lpVtbl -> get_ViewLocator(This,ppViewLocator) ) 


#define IMagnification2_get_ScreenHighlight(This,ppScreenHighlight)	\
    ( (This)->lpVtbl -> get_ScreenHighlight(This,ppScreenHighlight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMagnification2_INTERFACE_DEFINED__ */


#ifndef __IMagnification3_INTERFACE_DEFINED__
#define __IMagnification3_INTERFACE_DEFINED__

/* interface IMagnification3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMagnification3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7FECB1F1-C6D4-4F80-87B4-06DCAABEBF57")
    IMagnification3 : public IMagnification2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CCTV( 
            /* [retval][out] */ ICCTV **ppCCTV) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMagnification3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMagnification3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMagnification3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMagnification3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMagnification3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMagnification3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMagnification3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMagnification3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CaptureScreen )( 
            IMagnification3 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CaretEnhancements )( 
            IMagnification3 * This,
            /* [retval][out] */ ICaretEnhancements2 **ppCaretEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorEnhancements )( 
            IMagnification3 * This,
            /* [retval][out] */ IColorEnhancements **ppColorEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DualMonitor )( 
            IMagnification3 * This,
            /* [retval][out] */ IDualMonitor **ppDualMonitor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FocusEnhancements )( 
            IMagnification3 * This,
            /* [retval][out] */ IFocusEnhancements2 **ppFocusEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontEnhancements )( 
            IMagnification3 * This,
            /* [retval][out] */ IFontEnhancements **ppFontEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FreezeUsesPrimaryPower )( 
            IMagnification3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVariantBool);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FreezeUsesPrimaryPower )( 
            IMagnification3 * This,
            /* [in] */ VARIANT_BOOL pVariantBool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FreezeWindow )( 
            IMagnification3 * This,
            /* [retval][out] */ IZoomWindow **ppFreezeWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PointerEnhancements )( 
            IMagnification3 * This,
            /* [retval][out] */ IPointerEnhancements **ppPointerEnhancements);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrimaryWindow )( 
            IMagnification3 * This,
            /* [retval][out] */ IZoomWindow **ppPrimaryWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Tracking )( 
            IMagnification3 * This,
            /* [retval][out] */ ITracking2 **ppTracking);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ViewLocator )( 
            IMagnification3 * This,
            /* [retval][out] */ IViewLocator **ppViewLocator);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScreenHighlight )( 
            IMagnification3 * This,
            /* [retval][out] */ IScreenHighlight2 **ppScreenHighlight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CCTV )( 
            IMagnification3 * This,
            /* [retval][out] */ ICCTV **ppCCTV);
        
        END_INTERFACE
    } IMagnification3Vtbl;

    interface IMagnification3
    {
        CONST_VTBL struct IMagnification3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMagnification3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMagnification3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMagnification3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMagnification3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMagnification3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMagnification3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMagnification3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMagnification3_CaptureScreen(This)	\
    ( (This)->lpVtbl -> CaptureScreen(This) ) 

#define IMagnification3_get_CaretEnhancements(This,ppCaretEnhancements)	\
    ( (This)->lpVtbl -> get_CaretEnhancements(This,ppCaretEnhancements) ) 

#define IMagnification3_get_ColorEnhancements(This,ppColorEnhancements)	\
    ( (This)->lpVtbl -> get_ColorEnhancements(This,ppColorEnhancements) ) 

#define IMagnification3_get_DualMonitor(This,ppDualMonitor)	\
    ( (This)->lpVtbl -> get_DualMonitor(This,ppDualMonitor) ) 

#define IMagnification3_get_FocusEnhancements(This,ppFocusEnhancements)	\
    ( (This)->lpVtbl -> get_FocusEnhancements(This,ppFocusEnhancements) ) 

#define IMagnification3_get_FontEnhancements(This,ppFontEnhancements)	\
    ( (This)->lpVtbl -> get_FontEnhancements(This,ppFontEnhancements) ) 

#define IMagnification3_get_FreezeUsesPrimaryPower(This,pVariantBool)	\
    ( (This)->lpVtbl -> get_FreezeUsesPrimaryPower(This,pVariantBool) ) 

#define IMagnification3_put_FreezeUsesPrimaryPower(This,pVariantBool)	\
    ( (This)->lpVtbl -> put_FreezeUsesPrimaryPower(This,pVariantBool) ) 

#define IMagnification3_get_FreezeWindow(This,ppFreezeWindow)	\
    ( (This)->lpVtbl -> get_FreezeWindow(This,ppFreezeWindow) ) 

#define IMagnification3_get_PointerEnhancements(This,ppPointerEnhancements)	\
    ( (This)->lpVtbl -> get_PointerEnhancements(This,ppPointerEnhancements) ) 

#define IMagnification3_get_PrimaryWindow(This,ppPrimaryWindow)	\
    ( (This)->lpVtbl -> get_PrimaryWindow(This,ppPrimaryWindow) ) 

#define IMagnification3_get_Tracking(This,ppTracking)	\
    ( (This)->lpVtbl -> get_Tracking(This,ppTracking) ) 

#define IMagnification3_get_ViewLocator(This,ppViewLocator)	\
    ( (This)->lpVtbl -> get_ViewLocator(This,ppViewLocator) ) 


#define IMagnification3_get_ScreenHighlight(This,ppScreenHighlight)	\
    ( (This)->lpVtbl -> get_ScreenHighlight(This,ppScreenHighlight) ) 


#define IMagnification3_get_CCTV(This,ppCCTV)	\
    ( (This)->lpVtbl -> get_CCTV(This,ppCCTV) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMagnification3_INTERFACE_DEFINED__ */


#ifndef __ICaretEnhancements_INTERFACE_DEFINED__
#define __ICaretEnhancements_INTERFACE_DEFINED__

/* interface ICaretEnhancements */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICaretEnhancements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D0433F69-0D8C-4775-83F9-1F04F97C3A72")
    ICaretEnhancements : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICaretEnhancementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICaretEnhancements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICaretEnhancements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICaretEnhancements * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICaretEnhancements * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICaretEnhancements * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICaretEnhancements * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICaretEnhancements * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ICaretEnhancements * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ICaretEnhancements * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } ICaretEnhancementsVtbl;

    interface ICaretEnhancements
    {
        CONST_VTBL struct ICaretEnhancementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICaretEnhancements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICaretEnhancements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICaretEnhancements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICaretEnhancements_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICaretEnhancements_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICaretEnhancements_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICaretEnhancements_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICaretEnhancements_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define ICaretEnhancements_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICaretEnhancements_INTERFACE_DEFINED__ */


#ifndef __ICaretEnhancements2_INTERFACE_DEFINED__
#define __ICaretEnhancements2_INTERFACE_DEFINED__

/* interface ICaretEnhancements2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICaretEnhancements2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92EFD367-80CC-4DDC-A841-EA000C531D39")
    ICaretEnhancements2 : public ICaretEnhancements
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IRectangle **pLocation) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ IRectangle *pLocation) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICaretEnhancements2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICaretEnhancements2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICaretEnhancements2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICaretEnhancements2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICaretEnhancements2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICaretEnhancements2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICaretEnhancements2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICaretEnhancements2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ICaretEnhancements2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ICaretEnhancements2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ICaretEnhancements2 * This,
            /* [retval][out] */ IRectangle **pLocation);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            ICaretEnhancements2 * This,
            /* [in] */ IRectangle *pLocation);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ICaretEnhancements2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            ICaretEnhancements2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } ICaretEnhancements2Vtbl;

    interface ICaretEnhancements2
    {
        CONST_VTBL struct ICaretEnhancements2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICaretEnhancements2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICaretEnhancements2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICaretEnhancements2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICaretEnhancements2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICaretEnhancements2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICaretEnhancements2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICaretEnhancements2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICaretEnhancements2_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define ICaretEnhancements2_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 


#define ICaretEnhancements2_get_Location(This,pLocation)	\
    ( (This)->lpVtbl -> get_Location(This,pLocation) ) 

#define ICaretEnhancements2_put_Location(This,pLocation)	\
    ( (This)->lpVtbl -> put_Location(This,pLocation) ) 

#define ICaretEnhancements2_get_Visible(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Visible(This,pbEnabled) ) 

#define ICaretEnhancements2_put_Visible(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Visible(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICaretEnhancements2_INTERFACE_DEFINED__ */


#ifndef __IRectangle_INTERFACE_DEFINED__
#define __IRectangle_INTERFACE_DEFINED__

/* interface IRectangle */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IRectangle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22AB4F67-91C3-4DD9-9BC0-5BD1D5AB9B90")
    IRectangle : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Empty( 
            /* [retval][out] */ VARIANT_BOOL *pRetVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ IRectangle *copyRect) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Equals( 
            /* [in] */ IRectangle *rhsRect,
            /* [retval][out] */ VARIANT_BOOL *pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_left( 
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_left( 
            /* [in] */ long pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_top( 
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_top( 
            /* [in] */ long pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_right( 
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_right( 
            /* [in] */ long pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_bottom( 
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_bottom( 
            /* [in] */ long pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRectangleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRectangle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRectangle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRectangle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRectangle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRectangle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRectangle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRectangle * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Empty )( 
            IRectangle * This,
            /* [retval][out] */ VARIANT_BOOL *pRetVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IRectangle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            IRectangle * This,
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IRectangle * This,
            /* [in] */ IRectangle *copyRect);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Equals )( 
            IRectangle * This,
            /* [in] */ IRectangle *rhsRect,
            /* [retval][out] */ VARIANT_BOOL *pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_left )( 
            IRectangle * This,
            /* [retval][out] */ long *pRetVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_left )( 
            IRectangle * This,
            /* [in] */ long pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_top )( 
            IRectangle * This,
            /* [retval][out] */ long *pRetVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_top )( 
            IRectangle * This,
            /* [in] */ long pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_right )( 
            IRectangle * This,
            /* [retval][out] */ long *pRetVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_right )( 
            IRectangle * This,
            /* [in] */ long pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bottom )( 
            IRectangle * This,
            /* [retval][out] */ long *pRetVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_bottom )( 
            IRectangle * This,
            /* [in] */ long pRetVal);
        
        END_INTERFACE
    } IRectangleVtbl;

    interface IRectangle
    {
        CONST_VTBL struct IRectangleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRectangle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRectangle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRectangle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRectangle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRectangle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRectangle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRectangle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRectangle_Empty(This,pRetVal)	\
    ( (This)->lpVtbl -> Empty(This,pRetVal) ) 

#define IRectangle_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IRectangle_Set(This,left,top,right,bottom)	\
    ( (This)->lpVtbl -> Set(This,left,top,right,bottom) ) 

#define IRectangle_Copy(This,copyRect)	\
    ( (This)->lpVtbl -> Copy(This,copyRect) ) 

#define IRectangle_Equals(This,rhsRect,pRetVal)	\
    ( (This)->lpVtbl -> Equals(This,rhsRect,pRetVal) ) 

#define IRectangle_get_left(This,pRetVal)	\
    ( (This)->lpVtbl -> get_left(This,pRetVal) ) 

#define IRectangle_put_left(This,pRetVal)	\
    ( (This)->lpVtbl -> put_left(This,pRetVal) ) 

#define IRectangle_get_top(This,pRetVal)	\
    ( (This)->lpVtbl -> get_top(This,pRetVal) ) 

#define IRectangle_put_top(This,pRetVal)	\
    ( (This)->lpVtbl -> put_top(This,pRetVal) ) 

#define IRectangle_get_right(This,pRetVal)	\
    ( (This)->lpVtbl -> get_right(This,pRetVal) ) 

#define IRectangle_put_right(This,pRetVal)	\
    ( (This)->lpVtbl -> put_right(This,pRetVal) ) 

#define IRectangle_get_bottom(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bottom(This,pRetVal) ) 

#define IRectangle_put_bottom(This,pRetVal)	\
    ( (This)->lpVtbl -> put_bottom(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRectangle_INTERFACE_DEFINED__ */


#ifndef __IColorEnhancements_INTERFACE_DEFINED__
#define __IColorEnhancements_INTERFACE_DEFINED__

/* interface IColorEnhancements */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IColorEnhancements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0370FAD7-0E6B-46F1-A008-C6D689493FCE")
    IColorEnhancements : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pbstrType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR pbstrType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_InvertBrightness( 
            /* [retval][out] */ VARIANT_BOOL *pbInvertBrightness) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_InvertBrightness( 
            /* [in] */ VARIANT_BOOL pbInvertBrightness) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Brightness( 
            /* [retval][out] */ long *plBrightness) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Brightness( 
            /* [in] */ long plBrightness) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Contrast( 
            /* [retval][out] */ long *plContrast) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Contrast( 
            /* [in] */ long plContrast) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DyeColor( 
            /* [retval][out] */ long *plDyeColor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DyeColor( 
            /* [in] */ long plDyeColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ForegroundColor( 
            /* [retval][out] */ long *plForegroundColor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ForegroundColor( 
            /* [in] */ long plForegroundColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
            /* [retval][out] */ long *plBackgroundColor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BackgroundColor( 
            /* [in] */ long plBackgroundColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ColorToReplace( 
            /* [retval][out] */ long *plColorToReplace) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ColorToReplace( 
            /* [in] */ long plColorToReplace) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReplaceWithColor( 
            /* [retval][out] */ long *plReplaceWithColor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ReplaceWithColor( 
            /* [in] */ long plReplaceWithColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Bandwidth( 
            /* [retval][out] */ long *plBandwidth) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Bandwidth( 
            /* [in] */ long plBandwidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ColorToRemove( 
            /* [retval][out] */ long *plColorToRemove) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ColorToRemove( 
            /* [in] */ long plColorToRemove) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IColorEnhancementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IColorEnhancements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IColorEnhancements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IColorEnhancements * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IColorEnhancements * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IColorEnhancements * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IColorEnhancements * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IColorEnhancements * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IColorEnhancements * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IColorEnhancements * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IColorEnhancements * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IColorEnhancements * This,
            /* [in] */ BSTR pbstrType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InvertBrightness )( 
            IColorEnhancements * This,
            /* [retval][out] */ VARIANT_BOOL *pbInvertBrightness);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InvertBrightness )( 
            IColorEnhancements * This,
            /* [in] */ VARIANT_BOOL pbInvertBrightness);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Brightness )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plBrightness);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Brightness )( 
            IColorEnhancements * This,
            /* [in] */ long plBrightness);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Contrast )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plContrast);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Contrast )( 
            IColorEnhancements * This,
            /* [in] */ long plContrast);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DyeColor )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plDyeColor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DyeColor )( 
            IColorEnhancements * This,
            /* [in] */ long plDyeColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plForegroundColor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )( 
            IColorEnhancements * This,
            /* [in] */ long plForegroundColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plBackgroundColor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )( 
            IColorEnhancements * This,
            /* [in] */ long plBackgroundColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorToReplace )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plColorToReplace);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorToReplace )( 
            IColorEnhancements * This,
            /* [in] */ long plColorToReplace);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReplaceWithColor )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plReplaceWithColor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ReplaceWithColor )( 
            IColorEnhancements * This,
            /* [in] */ long plReplaceWithColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plBandwidth);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )( 
            IColorEnhancements * This,
            /* [in] */ long plBandwidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorToRemove )( 
            IColorEnhancements * This,
            /* [retval][out] */ long *plColorToRemove);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorToRemove )( 
            IColorEnhancements * This,
            /* [in] */ long plColorToRemove);
        
        END_INTERFACE
    } IColorEnhancementsVtbl;

    interface IColorEnhancements
    {
        CONST_VTBL struct IColorEnhancementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IColorEnhancements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IColorEnhancements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IColorEnhancements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IColorEnhancements_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IColorEnhancements_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IColorEnhancements_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IColorEnhancements_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IColorEnhancements_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IColorEnhancements_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#define IColorEnhancements_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 

#define IColorEnhancements_put_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> put_Type(This,pbstrType) ) 

#define IColorEnhancements_get_InvertBrightness(This,pbInvertBrightness)	\
    ( (This)->lpVtbl -> get_InvertBrightness(This,pbInvertBrightness) ) 

#define IColorEnhancements_put_InvertBrightness(This,pbInvertBrightness)	\
    ( (This)->lpVtbl -> put_InvertBrightness(This,pbInvertBrightness) ) 

#define IColorEnhancements_get_Brightness(This,plBrightness)	\
    ( (This)->lpVtbl -> get_Brightness(This,plBrightness) ) 

#define IColorEnhancements_put_Brightness(This,plBrightness)	\
    ( (This)->lpVtbl -> put_Brightness(This,plBrightness) ) 

#define IColorEnhancements_get_Contrast(This,plContrast)	\
    ( (This)->lpVtbl -> get_Contrast(This,plContrast) ) 

#define IColorEnhancements_put_Contrast(This,plContrast)	\
    ( (This)->lpVtbl -> put_Contrast(This,plContrast) ) 

#define IColorEnhancements_get_DyeColor(This,plDyeColor)	\
    ( (This)->lpVtbl -> get_DyeColor(This,plDyeColor) ) 

#define IColorEnhancements_put_DyeColor(This,plDyeColor)	\
    ( (This)->lpVtbl -> put_DyeColor(This,plDyeColor) ) 

#define IColorEnhancements_get_ForegroundColor(This,plForegroundColor)	\
    ( (This)->lpVtbl -> get_ForegroundColor(This,plForegroundColor) ) 

#define IColorEnhancements_put_ForegroundColor(This,plForegroundColor)	\
    ( (This)->lpVtbl -> put_ForegroundColor(This,plForegroundColor) ) 

#define IColorEnhancements_get_BackgroundColor(This,plBackgroundColor)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,plBackgroundColor) ) 

#define IColorEnhancements_put_BackgroundColor(This,plBackgroundColor)	\
    ( (This)->lpVtbl -> put_BackgroundColor(This,plBackgroundColor) ) 

#define IColorEnhancements_get_ColorToReplace(This,plColorToReplace)	\
    ( (This)->lpVtbl -> get_ColorToReplace(This,plColorToReplace) ) 

#define IColorEnhancements_put_ColorToReplace(This,plColorToReplace)	\
    ( (This)->lpVtbl -> put_ColorToReplace(This,plColorToReplace) ) 

#define IColorEnhancements_get_ReplaceWithColor(This,plReplaceWithColor)	\
    ( (This)->lpVtbl -> get_ReplaceWithColor(This,plReplaceWithColor) ) 

#define IColorEnhancements_put_ReplaceWithColor(This,plReplaceWithColor)	\
    ( (This)->lpVtbl -> put_ReplaceWithColor(This,plReplaceWithColor) ) 

#define IColorEnhancements_get_Bandwidth(This,plBandwidth)	\
    ( (This)->lpVtbl -> get_Bandwidth(This,plBandwidth) ) 

#define IColorEnhancements_put_Bandwidth(This,plBandwidth)	\
    ( (This)->lpVtbl -> put_Bandwidth(This,plBandwidth) ) 

#define IColorEnhancements_get_ColorToRemove(This,plColorToRemove)	\
    ( (This)->lpVtbl -> get_ColorToRemove(This,plColorToRemove) ) 

#define IColorEnhancements_put_ColorToRemove(This,plColorToRemove)	\
    ( (This)->lpVtbl -> put_ColorToRemove(This,plColorToRemove) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IColorEnhancements_INTERFACE_DEFINED__ */


#ifndef __IDualMonitor_INTERFACE_DEFINED__
#define __IDualMonitor_INTERFACE_DEFINED__

/* interface IDualMonitor */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDualMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71C6BC10-CA7B-4812-8B1F-B64CB7A509E7")
    IDualMonitor : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ BSTR *pstrMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ BSTR pstrMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDualMonitorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDualMonitor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDualMonitor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDualMonitor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDualMonitor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDualMonitor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDualMonitor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDualMonitor * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IDualMonitor * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IDualMonitor * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IDualMonitor * This,
            /* [retval][out] */ BSTR *pstrMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IDualMonitor * This,
            /* [in] */ BSTR pstrMode);
        
        END_INTERFACE
    } IDualMonitorVtbl;

    interface IDualMonitor
    {
        CONST_VTBL struct IDualMonitorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDualMonitor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDualMonitor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDualMonitor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDualMonitor_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDualMonitor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDualMonitor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDualMonitor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDualMonitor_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IDualMonitor_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#define IDualMonitor_get_Mode(This,pstrMode)	\
    ( (This)->lpVtbl -> get_Mode(This,pstrMode) ) 

#define IDualMonitor_put_Mode(This,pstrMode)	\
    ( (This)->lpVtbl -> put_Mode(This,pstrMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDualMonitor_INTERFACE_DEFINED__ */


#ifndef __IFocusEnhancements_INTERFACE_DEFINED__
#define __IFocusEnhancements_INTERFACE_DEFINED__

/* interface IFocusEnhancements */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IFocusEnhancements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E51ED2F-589A-4C74-B955-273FF8A04177")
    IFocusEnhancements : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFocusEnhancementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFocusEnhancements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFocusEnhancements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFocusEnhancements * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFocusEnhancements * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFocusEnhancements * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFocusEnhancements * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFocusEnhancements * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IFocusEnhancements * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IFocusEnhancements * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } IFocusEnhancementsVtbl;

    interface IFocusEnhancements
    {
        CONST_VTBL struct IFocusEnhancementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFocusEnhancements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFocusEnhancements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFocusEnhancements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFocusEnhancements_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFocusEnhancements_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFocusEnhancements_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFocusEnhancements_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFocusEnhancements_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IFocusEnhancements_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFocusEnhancements_INTERFACE_DEFINED__ */


#ifndef __IFocusEnhancements2_INTERFACE_DEFINED__
#define __IFocusEnhancements2_INTERFACE_DEFINED__

/* interface IFocusEnhancements2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IFocusEnhancements2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58041971-3A0B-4821-A436-6B9471FDFDC4")
    IFocusEnhancements2 : public IFocusEnhancements
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UpdateLocation( 
            IRectangle *pRect) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFocusEnhancements2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFocusEnhancements2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFocusEnhancements2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFocusEnhancements2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFocusEnhancements2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFocusEnhancements2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFocusEnhancements2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFocusEnhancements2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IFocusEnhancements2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IFocusEnhancements2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UpdateLocation )( 
            IFocusEnhancements2 * This,
            IRectangle *pRect);
        
        END_INTERFACE
    } IFocusEnhancements2Vtbl;

    interface IFocusEnhancements2
    {
        CONST_VTBL struct IFocusEnhancements2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFocusEnhancements2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFocusEnhancements2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFocusEnhancements2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFocusEnhancements2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFocusEnhancements2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFocusEnhancements2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFocusEnhancements2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFocusEnhancements2_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IFocusEnhancements2_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 


#define IFocusEnhancements2_UpdateLocation(This,pRect)	\
    ( (This)->lpVtbl -> UpdateLocation(This,pRect) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFocusEnhancements2_INTERFACE_DEFINED__ */


#ifndef __IFontEnhancements_INTERFACE_DEFINED__
#define __IFontEnhancements_INTERFACE_DEFINED__

/* interface IFontEnhancements */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IFontEnhancements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EE21611-D296-4C6D-8D28-87D7BFC626FA")
    IFontEnhancements : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR pType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFontEnhancementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFontEnhancements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFontEnhancements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFontEnhancements * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFontEnhancements * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFontEnhancements * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFontEnhancements * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFontEnhancements * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IFontEnhancements * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IFontEnhancements * This,
            /* [in] */ BSTR pType);
        
        END_INTERFACE
    } IFontEnhancementsVtbl;

    interface IFontEnhancements
    {
        CONST_VTBL struct IFontEnhancementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFontEnhancements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFontEnhancements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFontEnhancements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFontEnhancements_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFontEnhancements_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFontEnhancements_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFontEnhancements_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFontEnhancements_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IFontEnhancements_put_Type(This,pType)	\
    ( (This)->lpVtbl -> put_Type(This,pType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFontEnhancements_INTERFACE_DEFINED__ */


#ifndef __IZoomWindow_INTERFACE_DEFINED__
#define __IZoomWindow_INTERFACE_DEFINED__

/* interface IZoomWindow */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZoomWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B9966BD6-5A59-4A20-B4D5-C97E70807527")
    IZoomWindow : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pbstrType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR pbstrType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IRectangle **ppRect) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ IRectangle *ppRect) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_View( 
            /* [retval][out] */ IRectangle **ppRect) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_View( 
            /* [in] */ IRectangle *ppRect) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Power( 
            /* [retval][out] */ IPower **ppPower) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ViewToMouse( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZoomWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZoomWindow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZoomWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZoomWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZoomWindow * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZoomWindow * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZoomWindow * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZoomWindow * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IZoomWindow * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IZoomWindow * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IZoomWindow * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IZoomWindow * This,
            /* [in] */ BSTR pbstrType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IZoomWindow * This,
            /* [retval][out] */ IRectangle **ppRect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IZoomWindow * This,
            /* [in] */ IRectangle *ppRect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_View )( 
            IZoomWindow * This,
            /* [retval][out] */ IRectangle **ppRect);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_View )( 
            IZoomWindow * This,
            /* [in] */ IRectangle *ppRect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Power )( 
            IZoomWindow * This,
            /* [retval][out] */ IPower **ppPower);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ViewToMouse )( 
            IZoomWindow * This);
        
        END_INTERFACE
    } IZoomWindowVtbl;

    interface IZoomWindow
    {
        CONST_VTBL struct IZoomWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZoomWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZoomWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZoomWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZoomWindow_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZoomWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZoomWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZoomWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZoomWindow_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IZoomWindow_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#define IZoomWindow_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 

#define IZoomWindow_put_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> put_Type(This,pbstrType) ) 

#define IZoomWindow_get_Location(This,ppRect)	\
    ( (This)->lpVtbl -> get_Location(This,ppRect) ) 

#define IZoomWindow_put_Location(This,ppRect)	\
    ( (This)->lpVtbl -> put_Location(This,ppRect) ) 

#define IZoomWindow_get_View(This,ppRect)	\
    ( (This)->lpVtbl -> get_View(This,ppRect) ) 

#define IZoomWindow_put_View(This,ppRect)	\
    ( (This)->lpVtbl -> put_View(This,ppRect) ) 

#define IZoomWindow_get_Power(This,ppPower)	\
    ( (This)->lpVtbl -> get_Power(This,ppPower) ) 

#define IZoomWindow_ViewToMouse(This)	\
    ( (This)->lpVtbl -> ViewToMouse(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZoomWindow_INTERFACE_DEFINED__ */


#ifndef __IPower_INTERFACE_DEFINED__
#define __IPower_INTERFACE_DEFINED__

/* interface IPower */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPower;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFBA1585-96AA-4BE7-BF8E-7996BE405683")
    IPower : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ float *pfLevel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ float pfLevel) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Increase( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Decrease( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPowerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPower * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPower * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPower * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPower * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPower * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPower * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPower * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IPower * This,
            /* [retval][out] */ float *pfLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IPower * This,
            /* [in] */ float pfLevel);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Increase )( 
            IPower * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Decrease )( 
            IPower * This);
        
        END_INTERFACE
    } IPowerVtbl;

    interface IPower
    {
        CONST_VTBL struct IPowerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPower_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPower_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPower_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPower_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPower_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPower_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPower_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPower_get_Level(This,pfLevel)	\
    ( (This)->lpVtbl -> get_Level(This,pfLevel) ) 

#define IPower_put_Level(This,pfLevel)	\
    ( (This)->lpVtbl -> put_Level(This,pfLevel) ) 

#define IPower_Increase(This)	\
    ( (This)->lpVtbl -> Increase(This) ) 

#define IPower_Decrease(This)	\
    ( (This)->lpVtbl -> Decrease(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPower_INTERFACE_DEFINED__ */


#ifndef __IPointerEnhancements_INTERFACE_DEFINED__
#define __IPointerEnhancements_INTERFACE_DEFINED__

/* interface IPointerEnhancements */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPointerEnhancements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41C19AC7-4D28-4D3B-A17F-704D0F1B3872")
    IPointerEnhancements : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPointerEnhancementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPointerEnhancements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPointerEnhancements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPointerEnhancements * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPointerEnhancements * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPointerEnhancements * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPointerEnhancements * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPointerEnhancements * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IPointerEnhancements * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IPointerEnhancements * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } IPointerEnhancementsVtbl;

    interface IPointerEnhancements
    {
        CONST_VTBL struct IPointerEnhancementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPointerEnhancements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPointerEnhancements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPointerEnhancements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPointerEnhancements_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPointerEnhancements_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPointerEnhancements_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPointerEnhancements_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPointerEnhancements_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IPointerEnhancements_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPointerEnhancements_INTERFACE_DEFINED__ */


#ifndef __ITracking_INTERFACE_DEFINED__
#define __ITracking_INTERFACE_DEFINED__

/* interface ITracking */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITracking;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A59B310-74F6-4D43-B0AB-1F44DA8268E0")
    ITracking : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE JumpTo( 
            BSTR strWhere) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TrackTo( 
            IRectangle *pRect) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITrackingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITracking * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITracking * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITracking * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITracking * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITracking * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITracking * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITracking * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ITracking * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ITracking * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *JumpTo )( 
            ITracking * This,
            BSTR strWhere);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TrackTo )( 
            ITracking * This,
            IRectangle *pRect);
        
        END_INTERFACE
    } ITrackingVtbl;

    interface ITracking
    {
        CONST_VTBL struct ITrackingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITracking_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITracking_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITracking_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITracking_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITracking_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITracking_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITracking_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITracking_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define ITracking_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#define ITracking_JumpTo(This,strWhere)	\
    ( (This)->lpVtbl -> JumpTo(This,strWhere) ) 

#define ITracking_TrackTo(This,pRect)	\
    ( (This)->lpVtbl -> TrackTo(This,pRect) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITracking_INTERFACE_DEFINED__ */


#ifndef __ITracking2_INTERFACE_DEFINED__
#define __ITracking2_INTERFACE_DEFINED__

/* interface ITracking2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITracking2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E890643-4D5B-4E20-8A72-80C8AD2511F9")
    ITracking2 : public ITracking
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AlertsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AlertsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ControlsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ControlsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MenusEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MenusEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MousePointerEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MousePointerEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TextCursorEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TextCursorEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ToolTipsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ToolTipsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITracking2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITracking2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITracking2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITracking2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITracking2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITracking2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITracking2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITracking2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *JumpTo )( 
            ITracking2 * This,
            BSTR strWhere);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TrackTo )( 
            ITracking2 * This,
            IRectangle *pRect);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AlertsEnabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AlertsEnabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlsEnabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ControlsEnabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenusEnabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MenusEnabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MousePointerEnabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MousePointerEnabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextCursorEnabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextCursorEnabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ToolTipsEnabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ToolTipsEnabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowsEnabled )( 
            ITracking2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowsEnabled )( 
            ITracking2 * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } ITracking2Vtbl;

    interface ITracking2
    {
        CONST_VTBL struct ITracking2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITracking2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITracking2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITracking2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITracking2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITracking2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITracking2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITracking2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITracking2_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define ITracking2_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#define ITracking2_JumpTo(This,strWhere)	\
    ( (This)->lpVtbl -> JumpTo(This,strWhere) ) 

#define ITracking2_TrackTo(This,pRect)	\
    ( (This)->lpVtbl -> TrackTo(This,pRect) ) 


#define ITracking2_get_AlertsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_AlertsEnabled(This,pbEnabled) ) 

#define ITracking2_put_AlertsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_AlertsEnabled(This,pbEnabled) ) 

#define ITracking2_get_ControlsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_ControlsEnabled(This,pbEnabled) ) 

#define ITracking2_put_ControlsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_ControlsEnabled(This,pbEnabled) ) 

#define ITracking2_get_MenusEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_MenusEnabled(This,pbEnabled) ) 

#define ITracking2_put_MenusEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_MenusEnabled(This,pbEnabled) ) 

#define ITracking2_get_MousePointerEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_MousePointerEnabled(This,pbEnabled) ) 

#define ITracking2_put_MousePointerEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_MousePointerEnabled(This,pbEnabled) ) 

#define ITracking2_get_TextCursorEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_TextCursorEnabled(This,pbEnabled) ) 

#define ITracking2_put_TextCursorEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_TextCursorEnabled(This,pbEnabled) ) 

#define ITracking2_get_ToolTipsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_ToolTipsEnabled(This,pbEnabled) ) 

#define ITracking2_put_ToolTipsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_ToolTipsEnabled(This,pbEnabled) ) 

#define ITracking2_get_WindowsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_WindowsEnabled(This,pbEnabled) ) 

#define ITracking2_put_WindowsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_WindowsEnabled(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITracking2_INTERFACE_DEFINED__ */


#ifndef __IViewLocator_INTERFACE_DEFINED__
#define __IViewLocator_INTERFACE_DEFINED__

/* interface IViewLocator */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IViewLocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91B8C0CD-93CF-46F3-ABBA-04C61A13BA0C")
    IViewLocator : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IViewLocatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IViewLocator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IViewLocator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IViewLocator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IViewLocator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IViewLocator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IViewLocator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IViewLocator * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IViewLocator * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IViewLocator * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } IViewLocatorVtbl;

    interface IViewLocator
    {
        CONST_VTBL struct IViewLocatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewLocator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IViewLocator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IViewLocator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IViewLocator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IViewLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IViewLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IViewLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IViewLocator_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define IViewLocator_put_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IViewLocator_INTERFACE_DEFINED__ */


#ifndef __IScreenHighlight_INTERFACE_DEFINED__
#define __IScreenHighlight_INTERFACE_DEFINED__

/* interface IScreenHighlight */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IScreenHighlight;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1A1F44C1-83B2-4D12-B6FE-629751C134EC")
    IScreenHighlight : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ long *plColor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ long plColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnable) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnable) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Invert( 
            /* [retval][out] */ VARIANT_BOOL *pbInvert) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Invert( 
            /* [in] */ VARIANT_BOOL pbInvert) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IRectangle **pLocation) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ IRectangle *pLocation) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ long *plMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ long plMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Padding( 
            /* [retval][out] */ long *plPadding) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Padding( 
            /* [in] */ long plPadding) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Shape( 
            /* [retval][out] */ long *plShape) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Shape( 
            /* [in] */ long plShape) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Thickness( 
            /* [retval][out] */ long *plThickness) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Thickness( 
            /* [in] */ long plThickness) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ long *plTimeout) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ long plTimeout) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Transparency( 
            /* [retval][out] */ long *plTransparency) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Transparency( 
            /* [in] */ long plTransparency) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScreenHighlightVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScreenHighlight * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScreenHighlight * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScreenHighlight * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScreenHighlight * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScreenHighlight * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScreenHighlight * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScreenHighlight * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IScreenHighlight * This,
            /* [retval][out] */ long *plColor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IScreenHighlight * This,
            /* [in] */ long plColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IScreenHighlight * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnable);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IScreenHighlight * This,
            /* [in] */ VARIANT_BOOL pbEnable);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Invert )( 
            IScreenHighlight * This,
            /* [retval][out] */ VARIANT_BOOL *pbInvert);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Invert )( 
            IScreenHighlight * This,
            /* [in] */ VARIANT_BOOL pbInvert);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IScreenHighlight * This,
            /* [retval][out] */ IRectangle **pLocation);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IScreenHighlight * This,
            /* [in] */ IRectangle *pLocation);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IScreenHighlight * This,
            /* [retval][out] */ long *plMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IScreenHighlight * This,
            /* [in] */ long plMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Padding )( 
            IScreenHighlight * This,
            /* [retval][out] */ long *plPadding);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Padding )( 
            IScreenHighlight * This,
            /* [in] */ long plPadding);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Shape )( 
            IScreenHighlight * This,
            /* [retval][out] */ long *plShape);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Shape )( 
            IScreenHighlight * This,
            /* [in] */ long plShape);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Thickness )( 
            IScreenHighlight * This,
            /* [retval][out] */ long *plThickness);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Thickness )( 
            IScreenHighlight * This,
            /* [in] */ long plThickness);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            IScreenHighlight * This,
            /* [retval][out] */ long *plTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IScreenHighlight * This,
            /* [in] */ long plTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Transparency )( 
            IScreenHighlight * This,
            /* [retval][out] */ long *plTransparency);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Transparency )( 
            IScreenHighlight * This,
            /* [in] */ long plTransparency);
        
        END_INTERFACE
    } IScreenHighlightVtbl;

    interface IScreenHighlight
    {
        CONST_VTBL struct IScreenHighlightVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScreenHighlight_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScreenHighlight_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScreenHighlight_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScreenHighlight_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScreenHighlight_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScreenHighlight_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScreenHighlight_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScreenHighlight_get_Color(This,plColor)	\
    ( (This)->lpVtbl -> get_Color(This,plColor) ) 

#define IScreenHighlight_put_Color(This,plColor)	\
    ( (This)->lpVtbl -> put_Color(This,plColor) ) 

#define IScreenHighlight_get_Enabled(This,pbEnable)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnable) ) 

#define IScreenHighlight_put_Enabled(This,pbEnable)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnable) ) 

#define IScreenHighlight_get_Invert(This,pbInvert)	\
    ( (This)->lpVtbl -> get_Invert(This,pbInvert) ) 

#define IScreenHighlight_put_Invert(This,pbInvert)	\
    ( (This)->lpVtbl -> put_Invert(This,pbInvert) ) 

#define IScreenHighlight_get_Location(This,pLocation)	\
    ( (This)->lpVtbl -> get_Location(This,pLocation) ) 

#define IScreenHighlight_put_Location(This,pLocation)	\
    ( (This)->lpVtbl -> put_Location(This,pLocation) ) 

#define IScreenHighlight_get_Mode(This,plMode)	\
    ( (This)->lpVtbl -> get_Mode(This,plMode) ) 

#define IScreenHighlight_put_Mode(This,plMode)	\
    ( (This)->lpVtbl -> put_Mode(This,plMode) ) 

#define IScreenHighlight_get_Padding(This,plPadding)	\
    ( (This)->lpVtbl -> get_Padding(This,plPadding) ) 

#define IScreenHighlight_put_Padding(This,plPadding)	\
    ( (This)->lpVtbl -> put_Padding(This,plPadding) ) 

#define IScreenHighlight_get_Shape(This,plShape)	\
    ( (This)->lpVtbl -> get_Shape(This,plShape) ) 

#define IScreenHighlight_put_Shape(This,plShape)	\
    ( (This)->lpVtbl -> put_Shape(This,plShape) ) 

#define IScreenHighlight_get_Thickness(This,plThickness)	\
    ( (This)->lpVtbl -> get_Thickness(This,plThickness) ) 

#define IScreenHighlight_put_Thickness(This,plThickness)	\
    ( (This)->lpVtbl -> put_Thickness(This,plThickness) ) 

#define IScreenHighlight_get_Timeout(This,plTimeout)	\
    ( (This)->lpVtbl -> get_Timeout(This,plTimeout) ) 

#define IScreenHighlight_put_Timeout(This,plTimeout)	\
    ( (This)->lpVtbl -> put_Timeout(This,plTimeout) ) 

#define IScreenHighlight_get_Transparency(This,plTransparency)	\
    ( (This)->lpVtbl -> get_Transparency(This,plTransparency) ) 

#define IScreenHighlight_put_Transparency(This,plTransparency)	\
    ( (This)->lpVtbl -> put_Transparency(This,plTransparency) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScreenHighlight_INTERFACE_DEFINED__ */


#ifndef __IScreenHighlight2_INTERFACE_DEFINED__
#define __IScreenHighlight2_INTERFACE_DEFINED__

/* interface IScreenHighlight2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IScreenHighlight2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB53CA25-96D6-4978-BC65-4C3B2118CEE5")
    IScreenHighlight2 : public IScreenHighlight
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UseFocusEnhancementSettings( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScreenHighlight2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScreenHighlight2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScreenHighlight2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScreenHighlight2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScreenHighlight2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScreenHighlight2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScreenHighlight2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScreenHighlight2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ long *plColor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IScreenHighlight2 * This,
            /* [in] */ long plColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnable);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IScreenHighlight2 * This,
            /* [in] */ VARIANT_BOOL pbEnable);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Invert )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbInvert);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Invert )( 
            IScreenHighlight2 * This,
            /* [in] */ VARIANT_BOOL pbInvert);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ IRectangle **pLocation);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IScreenHighlight2 * This,
            /* [in] */ IRectangle *pLocation);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ long *plMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IScreenHighlight2 * This,
            /* [in] */ long plMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Padding )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ long *plPadding);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Padding )( 
            IScreenHighlight2 * This,
            /* [in] */ long plPadding);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Shape )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ long *plShape);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Shape )( 
            IScreenHighlight2 * This,
            /* [in] */ long plShape);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Thickness )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ long *plThickness);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Thickness )( 
            IScreenHighlight2 * This,
            /* [in] */ long plThickness);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ long *plTimeout);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IScreenHighlight2 * This,
            /* [in] */ long plTimeout);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Transparency )( 
            IScreenHighlight2 * This,
            /* [retval][out] */ long *plTransparency);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Transparency )( 
            IScreenHighlight2 * This,
            /* [in] */ long plTransparency);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UseFocusEnhancementSettings )( 
            IScreenHighlight2 * This);
        
        END_INTERFACE
    } IScreenHighlight2Vtbl;

    interface IScreenHighlight2
    {
        CONST_VTBL struct IScreenHighlight2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScreenHighlight2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScreenHighlight2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScreenHighlight2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScreenHighlight2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScreenHighlight2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScreenHighlight2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScreenHighlight2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScreenHighlight2_get_Color(This,plColor)	\
    ( (This)->lpVtbl -> get_Color(This,plColor) ) 

#define IScreenHighlight2_put_Color(This,plColor)	\
    ( (This)->lpVtbl -> put_Color(This,plColor) ) 

#define IScreenHighlight2_get_Enabled(This,pbEnable)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnable) ) 

#define IScreenHighlight2_put_Enabled(This,pbEnable)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnable) ) 

#define IScreenHighlight2_get_Invert(This,pbInvert)	\
    ( (This)->lpVtbl -> get_Invert(This,pbInvert) ) 

#define IScreenHighlight2_put_Invert(This,pbInvert)	\
    ( (This)->lpVtbl -> put_Invert(This,pbInvert) ) 

#define IScreenHighlight2_get_Location(This,pLocation)	\
    ( (This)->lpVtbl -> get_Location(This,pLocation) ) 

#define IScreenHighlight2_put_Location(This,pLocation)	\
    ( (This)->lpVtbl -> put_Location(This,pLocation) ) 

#define IScreenHighlight2_get_Mode(This,plMode)	\
    ( (This)->lpVtbl -> get_Mode(This,plMode) ) 

#define IScreenHighlight2_put_Mode(This,plMode)	\
    ( (This)->lpVtbl -> put_Mode(This,plMode) ) 

#define IScreenHighlight2_get_Padding(This,plPadding)	\
    ( (This)->lpVtbl -> get_Padding(This,plPadding) ) 

#define IScreenHighlight2_put_Padding(This,plPadding)	\
    ( (This)->lpVtbl -> put_Padding(This,plPadding) ) 

#define IScreenHighlight2_get_Shape(This,plShape)	\
    ( (This)->lpVtbl -> get_Shape(This,plShape) ) 

#define IScreenHighlight2_put_Shape(This,plShape)	\
    ( (This)->lpVtbl -> put_Shape(This,plShape) ) 

#define IScreenHighlight2_get_Thickness(This,plThickness)	\
    ( (This)->lpVtbl -> get_Thickness(This,plThickness) ) 

#define IScreenHighlight2_put_Thickness(This,plThickness)	\
    ( (This)->lpVtbl -> put_Thickness(This,plThickness) ) 

#define IScreenHighlight2_get_Timeout(This,plTimeout)	\
    ( (This)->lpVtbl -> get_Timeout(This,plTimeout) ) 

#define IScreenHighlight2_put_Timeout(This,plTimeout)	\
    ( (This)->lpVtbl -> put_Timeout(This,plTimeout) ) 

#define IScreenHighlight2_get_Transparency(This,plTransparency)	\
    ( (This)->lpVtbl -> get_Transparency(This,plTransparency) ) 

#define IScreenHighlight2_put_Transparency(This,plTransparency)	\
    ( (This)->lpVtbl -> put_Transparency(This,plTransparency) ) 


#define IScreenHighlight2_UseFocusEnhancementSettings(This)	\
    ( (This)->lpVtbl -> UseFocusEnhancementSettings(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScreenHighlight2_INTERFACE_DEFINED__ */


#ifndef __ICCTV_INTERFACE_DEFINED__
#define __ICCTV_INTERFACE_DEFINED__

/* interface ICCTV */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICCTV;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("050E0E11-3D0A-4F6E-A634-C2270E30DC1B")
    ICCTV : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnable) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL pbEnable) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetResolution( 
            /* [in] */ long width,
            /* [in] */ long height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetLocation( 
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetStreamsOffset( 
            /* [in] */ long x,
            /* [in] */ long y) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CenterStream( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICCTVVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICCTV * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICCTV * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICCTV * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICCTV * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICCTV * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICCTV * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICCTV * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ICCTV * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnable);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            ICCTV * This,
            /* [in] */ VARIANT_BOOL pbEnable);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetResolution )( 
            ICCTV * This,
            /* [in] */ long width,
            /* [in] */ long height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetLocation )( 
            ICCTV * This,
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetStreamsOffset )( 
            ICCTV * This,
            /* [in] */ long x,
            /* [in] */ long y);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CenterStream )( 
            ICCTV * This);
        
        END_INTERFACE
    } ICCTVVtbl;

    interface ICCTV
    {
        CONST_VTBL struct ICCTVVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICCTV_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICCTV_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICCTV_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICCTV_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICCTV_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICCTV_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICCTV_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICCTV_get_Enabled(This,pbEnable)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnable) ) 

#define ICCTV_put_Enabled(This,pbEnable)	\
    ( (This)->lpVtbl -> put_Enabled(This,pbEnable) ) 

#define ICCTV_SetResolution(This,width,height)	\
    ( (This)->lpVtbl -> SetResolution(This,width,height) ) 

#define ICCTV_SetLocation(This,left,top,right,bottom)	\
    ( (This)->lpVtbl -> SetLocation(This,left,top,right,bottom) ) 

#define ICCTV_SetStreamsOffset(This,x,y)	\
    ( (This)->lpVtbl -> SetStreamsOffset(This,x,y) ) 

#define ICCTV_CenterStream(This)	\
    ( (This)->lpVtbl -> CenterStream(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICCTV_INTERFACE_DEFINED__ */


#ifndef __IMouse_INTERFACE_DEFINED__
#define __IMouse_INTERFACE_DEFINED__

/* interface IMouse */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMouse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C2662B3-4CF7-4B05-B0B0-53AE74EE8D5D")
    IMouse : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IPoint **pPoint) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ IPoint *pPoint) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Click( 
            /* [in] */ BSTR pButton) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DoubleClick( 
            /* [in] */ BSTR pButton) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MoveToView( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMouseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMouse * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMouse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMouse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMouse * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMouse * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMouse * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMouse * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IMouse * This,
            /* [retval][out] */ IPoint **pPoint);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IMouse * This,
            /* [in] */ IPoint *pPoint);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Click )( 
            IMouse * This,
            /* [in] */ BSTR pButton);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DoubleClick )( 
            IMouse * This,
            /* [in] */ BSTR pButton);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MoveToView )( 
            IMouse * This);
        
        END_INTERFACE
    } IMouseVtbl;

    interface IMouse
    {
        CONST_VTBL struct IMouseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMouse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMouse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMouse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMouse_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMouse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMouse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMouse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMouse_get_Location(This,pPoint)	\
    ( (This)->lpVtbl -> get_Location(This,pPoint) ) 

#define IMouse_put_Location(This,pPoint)	\
    ( (This)->lpVtbl -> put_Location(This,pPoint) ) 

#define IMouse_Click(This,pButton)	\
    ( (This)->lpVtbl -> Click(This,pButton) ) 

#define IMouse_DoubleClick(This,pButton)	\
    ( (This)->lpVtbl -> DoubleClick(This,pButton) ) 

#define IMouse_MoveToView(This)	\
    ( (This)->lpVtbl -> MoveToView(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMouse_INTERFACE_DEFINED__ */


#ifndef __IPoint_INTERFACE_DEFINED__
#define __IPoint_INTERFACE_DEFINED__

/* interface IPoint */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E9BED2BF-8834-49F9-AD4C-12C3CF7373AD")
    IPoint : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ long x,
            /* [in] */ long y) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ IPoint *copyPoint) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Equals( 
            /* [in] */ IPoint *rhsPoint,
            /* [retval][out] */ VARIANT_BOOL *pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_x( 
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_x( 
            /* [in] */ long pRetVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_y( 
            /* [retval][out] */ long *pRetVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_y( 
            /* [in] */ long pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPoint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPoint * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IPoint * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            IPoint * This,
            /* [in] */ long x,
            /* [in] */ long y);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IPoint * This,
            /* [in] */ IPoint *copyPoint);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Equals )( 
            IPoint * This,
            /* [in] */ IPoint *rhsPoint,
            /* [retval][out] */ VARIANT_BOOL *pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_x )( 
            IPoint * This,
            /* [retval][out] */ long *pRetVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_x )( 
            IPoint * This,
            /* [in] */ long pRetVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_y )( 
            IPoint * This,
            /* [retval][out] */ long *pRetVal);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_y )( 
            IPoint * This,
            /* [in] */ long pRetVal);
        
        END_INTERFACE
    } IPointVtbl;

    interface IPoint
    {
        CONST_VTBL struct IPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPoint_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IPoint_Set(This,x,y)	\
    ( (This)->lpVtbl -> Set(This,x,y) ) 

#define IPoint_Copy(This,copyPoint)	\
    ( (This)->lpVtbl -> Copy(This,copyPoint) ) 

#define IPoint_Equals(This,rhsPoint,pRetVal)	\
    ( (This)->lpVtbl -> Equals(This,rhsPoint,pRetVal) ) 

#define IPoint_get_x(This,pRetVal)	\
    ( (This)->lpVtbl -> get_x(This,pRetVal) ) 

#define IPoint_put_x(This,pRetVal)	\
    ( (This)->lpVtbl -> put_x(This,pRetVal) ) 

#define IPoint_get_y(This,pRetVal)	\
    ( (This)->lpVtbl -> get_y(This,pRetVal) ) 

#define IPoint_put_y(This,pRetVal)	\
    ( (This)->lpVtbl -> put_y(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPoint_INTERFACE_DEFINED__ */


#ifndef __IReader_INTERFACE_DEFINED__
#define __IReader_INTERFACE_DEFINED__

/* interface IReader */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CDE9E8A8-03A7-4413-86A3-ACA30F305AC1")
    IReader : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AppReader( 
            /* [retval][out] */ IAppReader **ppAppReader) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MouseEcho( 
            /* [retval][out] */ IMouseEcho **ppMouseEcho) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadingZones( 
            /* [retval][out] */ IReadingZones **ppReadingZones) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TypingEcho( 
            /* [retval][out] */ ITypingEcho **ppTypingEcho) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Verbosity( 
            /* [retval][out] */ IVerbosity **ppVerbosity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReader * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AppReader )( 
            IReader * This,
            /* [retval][out] */ IAppReader **ppAppReader);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MouseEcho )( 
            IReader * This,
            /* [retval][out] */ IMouseEcho **ppMouseEcho);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadingZones )( 
            IReader * This,
            /* [retval][out] */ IReadingZones **ppReadingZones);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TypingEcho )( 
            IReader * This,
            /* [retval][out] */ ITypingEcho **ppTypingEcho);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Verbosity )( 
            IReader * This,
            /* [retval][out] */ IVerbosity **ppVerbosity);
        
        END_INTERFACE
    } IReaderVtbl;

    interface IReader
    {
        CONST_VTBL struct IReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReader_get_AppReader(This,ppAppReader)	\
    ( (This)->lpVtbl -> get_AppReader(This,ppAppReader) ) 

#define IReader_get_MouseEcho(This,ppMouseEcho)	\
    ( (This)->lpVtbl -> get_MouseEcho(This,ppMouseEcho) ) 

#define IReader_get_ReadingZones(This,ppReadingZones)	\
    ( (This)->lpVtbl -> get_ReadingZones(This,ppReadingZones) ) 

#define IReader_get_TypingEcho(This,ppTypingEcho)	\
    ( (This)->lpVtbl -> get_TypingEcho(This,ppTypingEcho) ) 

#define IReader_get_Verbosity(This,ppVerbosity)	\
    ( (This)->lpVtbl -> get_Verbosity(This,ppVerbosity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReader_INTERFACE_DEFINED__ */


#ifndef __IReader2_INTERFACE_DEFINED__
#define __IReader2_INTERFACE_DEFINED__

/* interface IReader2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IReader2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F41AADC-84DC-445D-BB22-0FDE09B95E91")
    IReader2 : public IReader
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgramEcho( 
            /* [retval][out] */ IProgramEcho **ppProgramEcho) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReader2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReader2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReader2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReader2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReader2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReader2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReader2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReader2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AppReader )( 
            IReader2 * This,
            /* [retval][out] */ IAppReader **ppAppReader);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MouseEcho )( 
            IReader2 * This,
            /* [retval][out] */ IMouseEcho **ppMouseEcho);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadingZones )( 
            IReader2 * This,
            /* [retval][out] */ IReadingZones **ppReadingZones);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TypingEcho )( 
            IReader2 * This,
            /* [retval][out] */ ITypingEcho **ppTypingEcho);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Verbosity )( 
            IReader2 * This,
            /* [retval][out] */ IVerbosity **ppVerbosity);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramEcho )( 
            IReader2 * This,
            /* [retval][out] */ IProgramEcho **ppProgramEcho);
        
        END_INTERFACE
    } IReader2Vtbl;

    interface IReader2
    {
        CONST_VTBL struct IReader2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReader2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReader2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReader2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReader2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReader2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReader2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReader2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReader2_get_AppReader(This,ppAppReader)	\
    ( (This)->lpVtbl -> get_AppReader(This,ppAppReader) ) 

#define IReader2_get_MouseEcho(This,ppMouseEcho)	\
    ( (This)->lpVtbl -> get_MouseEcho(This,ppMouseEcho) ) 

#define IReader2_get_ReadingZones(This,ppReadingZones)	\
    ( (This)->lpVtbl -> get_ReadingZones(This,ppReadingZones) ) 

#define IReader2_get_TypingEcho(This,ppTypingEcho)	\
    ( (This)->lpVtbl -> get_TypingEcho(This,ppTypingEcho) ) 

#define IReader2_get_Verbosity(This,ppVerbosity)	\
    ( (This)->lpVtbl -> get_Verbosity(This,ppVerbosity) ) 


#define IReader2_get_ProgramEcho(This,ppProgramEcho)	\
    ( (This)->lpVtbl -> get_ProgramEcho(This,ppProgramEcho) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReader2_INTERFACE_DEFINED__ */


#ifndef __IReader3_INTERFACE_DEFINED__
#define __IReader3_INTERFACE_DEFINED__

/* interface IReader3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IReader3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("129E7A0E-9E23-469D-A2CA-DE3BAECAF45D")
    IReader3 : public IReader2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DocReader( 
            /* [retval][out] */ IDocReader **ppDocReader) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Recorder( 
            /* [retval][out] */ IRecorder **ppRecorder) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReader3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReader3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReader3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReader3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReader3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReader3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReader3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReader3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AppReader )( 
            IReader3 * This,
            /* [retval][out] */ IAppReader **ppAppReader);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MouseEcho )( 
            IReader3 * This,
            /* [retval][out] */ IMouseEcho **ppMouseEcho);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadingZones )( 
            IReader3 * This,
            /* [retval][out] */ IReadingZones **ppReadingZones);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TypingEcho )( 
            IReader3 * This,
            /* [retval][out] */ ITypingEcho **ppTypingEcho);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Verbosity )( 
            IReader3 * This,
            /* [retval][out] */ IVerbosity **ppVerbosity);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramEcho )( 
            IReader3 * This,
            /* [retval][out] */ IProgramEcho **ppProgramEcho);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DocReader )( 
            IReader3 * This,
            /* [retval][out] */ IDocReader **ppDocReader);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Recorder )( 
            IReader3 * This,
            /* [retval][out] */ IRecorder **ppRecorder);
        
        END_INTERFACE
    } IReader3Vtbl;

    interface IReader3
    {
        CONST_VTBL struct IReader3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReader3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReader3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReader3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReader3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReader3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReader3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReader3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReader3_get_AppReader(This,ppAppReader)	\
    ( (This)->lpVtbl -> get_AppReader(This,ppAppReader) ) 

#define IReader3_get_MouseEcho(This,ppMouseEcho)	\
    ( (This)->lpVtbl -> get_MouseEcho(This,ppMouseEcho) ) 

#define IReader3_get_ReadingZones(This,ppReadingZones)	\
    ( (This)->lpVtbl -> get_ReadingZones(This,ppReadingZones) ) 

#define IReader3_get_TypingEcho(This,ppTypingEcho)	\
    ( (This)->lpVtbl -> get_TypingEcho(This,ppTypingEcho) ) 

#define IReader3_get_Verbosity(This,ppVerbosity)	\
    ( (This)->lpVtbl -> get_Verbosity(This,ppVerbosity) ) 


#define IReader3_get_ProgramEcho(This,ppProgramEcho)	\
    ( (This)->lpVtbl -> get_ProgramEcho(This,ppProgramEcho) ) 


#define IReader3_get_DocReader(This,ppDocReader)	\
    ( (This)->lpVtbl -> get_DocReader(This,ppDocReader) ) 

#define IReader3_get_Recorder(This,ppRecorder)	\
    ( (This)->lpVtbl -> get_Recorder(This,ppRecorder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReader3_INTERFACE_DEFINED__ */


#ifndef __IAppReader_INTERFACE_DEFINED__
#define __IAppReader_INTERFACE_DEFINED__

/* interface IAppReader */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAppReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C4C5A470-4F53-4BBF-A534-BA88E9FBBE5F")
    IAppReader : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartAtPoint( 
            IPoint *pPoint) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppReader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppReader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppReader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppReader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppReader * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IAppReader * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartAtPoint )( 
            IAppReader * This,
            IPoint *pPoint);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IAppReader * This);
        
        END_INTERFACE
    } IAppReaderVtbl;

    interface IAppReader
    {
        CONST_VTBL struct IAppReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppReader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppReader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppReader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppReader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppReader_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IAppReader_StartAtPoint(This,pPoint)	\
    ( (This)->lpVtbl -> StartAtPoint(This,pPoint) ) 

#define IAppReader_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppReader_INTERFACE_DEFINED__ */


#ifndef __IMouseEcho_INTERFACE_DEFINED__
#define __IMouseEcho_INTERFACE_DEFINED__

/* interface IMouseEcho */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMouseEcho;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1203B332-4EF0-41FD-BC24-763503B8DC90")
    IMouseEcho : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ BSTR *pstrMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ BSTR pstrMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMouseEchoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMouseEcho * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMouseEcho * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMouseEcho * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMouseEcho * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMouseEcho * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMouseEcho * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMouseEcho * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IMouseEcho * This,
            /* [retval][out] */ BSTR *pstrMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IMouseEcho * This,
            /* [in] */ BSTR pstrMode);
        
        END_INTERFACE
    } IMouseEchoVtbl;

    interface IMouseEcho
    {
        CONST_VTBL struct IMouseEchoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMouseEcho_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMouseEcho_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMouseEcho_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMouseEcho_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMouseEcho_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMouseEcho_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMouseEcho_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMouseEcho_get_Mode(This,pstrMode)	\
    ( (This)->lpVtbl -> get_Mode(This,pstrMode) ) 

#define IMouseEcho_put_Mode(This,pstrMode)	\
    ( (This)->lpVtbl -> put_Mode(This,pstrMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMouseEcho_INTERFACE_DEFINED__ */


#ifndef __IReadingZones_INTERFACE_DEFINED__
#define __IReadingZones_INTERFACE_DEFINED__

/* interface IReadingZones */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IReadingZones;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0A71491-2B73-43F3-9E6B-5A9FDDDDC3D1")
    IReadingZones : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateZone( 
            /* [in] */ IReadingZoneObject *pZone) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteZone( 
            /* [in] */ BSTR ApplicationName,
            /* [in] */ long ZoneID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ToggleZone( 
            /* [in] */ long lZoneNum) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NextZone( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PreviousZone( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReadingZonesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReadingZones * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReadingZones * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReadingZones * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReadingZones * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReadingZones * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReadingZones * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReadingZones * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateZone )( 
            IReadingZones * This,
            /* [in] */ IReadingZoneObject *pZone);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteZone )( 
            IReadingZones * This,
            /* [in] */ BSTR ApplicationName,
            /* [in] */ long ZoneID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ToggleZone )( 
            IReadingZones * This,
            /* [in] */ long lZoneNum);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NextZone )( 
            IReadingZones * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PreviousZone )( 
            IReadingZones * This);
        
        END_INTERFACE
    } IReadingZonesVtbl;

    interface IReadingZones
    {
        CONST_VTBL struct IReadingZonesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReadingZones_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReadingZones_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReadingZones_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReadingZones_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReadingZones_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReadingZones_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReadingZones_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReadingZones_CreateZone(This,pZone)	\
    ( (This)->lpVtbl -> CreateZone(This,pZone) ) 

#define IReadingZones_DeleteZone(This,ApplicationName,ZoneID)	\
    ( (This)->lpVtbl -> DeleteZone(This,ApplicationName,ZoneID) ) 

#define IReadingZones_ToggleZone(This,lZoneNum)	\
    ( (This)->lpVtbl -> ToggleZone(This,lZoneNum) ) 

#define IReadingZones_NextZone(This)	\
    ( (This)->lpVtbl -> NextZone(This) ) 

#define IReadingZones_PreviousZone(This)	\
    ( (This)->lpVtbl -> PreviousZone(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReadingZones_INTERFACE_DEFINED__ */


#ifndef __IReadingZoneObject_INTERFACE_DEFINED__
#define __IReadingZoneObject_INTERFACE_DEFINED__

/* interface IReadingZoneObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IReadingZoneObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB508DD4-5076-4B3C-B792-629D6C37AF41")
    IReadingZoneObject : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pstrName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR pstrName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IRectangle **ppLocation) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ IRectangle *ppLocation) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ApplicationName( 
            /* [retval][out] */ BSTR *pstrAppName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ApplicationName( 
            /* [in] */ BSTR pstrAppName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Anchor( 
            /* [retval][out] */ BSTR *pstrAnchor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Anchor( 
            /* [in] */ BSTR pstrAnchor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Action( 
            /* [retval][out] */ BSTR *pstrAction) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Action( 
            /* [in] */ BSTR pstrAction) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HighlightTime( 
            /* [retval][out] */ float *pfSeconds) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_HighlightTime( 
            /* [in] */ float pfSeconds) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReturnToPreviousLocation( 
            /* [retval][out] */ VARIANT_BOOL *pbReturns) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ReturnToPreviousLocation( 
            /* [in] */ VARIANT_BOOL pbReturns) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DimAreaOutside( 
            /* [retval][out] */ VARIANT_BOOL *pbDims) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DimAreaOutside( 
            /* [in] */ VARIANT_BOOL pbDims) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ZoneID( 
            /* [retval][out] */ long *pId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReadingZoneObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReadingZoneObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReadingZoneObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReadingZoneObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReadingZoneObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReadingZoneObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReadingZoneObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReadingZoneObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IReadingZoneObject * This,
            /* [retval][out] */ BSTR *pstrName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IReadingZoneObject * This,
            /* [in] */ BSTR pstrName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IReadingZoneObject * This,
            /* [retval][out] */ IRectangle **ppLocation);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IReadingZoneObject * This,
            /* [in] */ IRectangle *ppLocation);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )( 
            IReadingZoneObject * This,
            /* [retval][out] */ BSTR *pstrAppName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ApplicationName )( 
            IReadingZoneObject * This,
            /* [in] */ BSTR pstrAppName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Anchor )( 
            IReadingZoneObject * This,
            /* [retval][out] */ BSTR *pstrAnchor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Anchor )( 
            IReadingZoneObject * This,
            /* [in] */ BSTR pstrAnchor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Action )( 
            IReadingZoneObject * This,
            /* [retval][out] */ BSTR *pstrAction);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Action )( 
            IReadingZoneObject * This,
            /* [in] */ BSTR pstrAction);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HighlightTime )( 
            IReadingZoneObject * This,
            /* [retval][out] */ float *pfSeconds);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HighlightTime )( 
            IReadingZoneObject * This,
            /* [in] */ float pfSeconds);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReturnToPreviousLocation )( 
            IReadingZoneObject * This,
            /* [retval][out] */ VARIANT_BOOL *pbReturns);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ReturnToPreviousLocation )( 
            IReadingZoneObject * This,
            /* [in] */ VARIANT_BOOL pbReturns);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DimAreaOutside )( 
            IReadingZoneObject * This,
            /* [retval][out] */ VARIANT_BOOL *pbDims);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DimAreaOutside )( 
            IReadingZoneObject * This,
            /* [in] */ VARIANT_BOOL pbDims);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ZoneID )( 
            IReadingZoneObject * This,
            /* [retval][out] */ long *pId);
        
        END_INTERFACE
    } IReadingZoneObjectVtbl;

    interface IReadingZoneObject
    {
        CONST_VTBL struct IReadingZoneObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReadingZoneObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReadingZoneObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReadingZoneObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReadingZoneObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IReadingZoneObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IReadingZoneObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IReadingZoneObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IReadingZoneObject_get_Name(This,pstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pstrName) ) 

#define IReadingZoneObject_put_Name(This,pstrName)	\
    ( (This)->lpVtbl -> put_Name(This,pstrName) ) 

#define IReadingZoneObject_get_Location(This,ppLocation)	\
    ( (This)->lpVtbl -> get_Location(This,ppLocation) ) 

#define IReadingZoneObject_put_Location(This,ppLocation)	\
    ( (This)->lpVtbl -> put_Location(This,ppLocation) ) 

#define IReadingZoneObject_get_ApplicationName(This,pstrAppName)	\
    ( (This)->lpVtbl -> get_ApplicationName(This,pstrAppName) ) 

#define IReadingZoneObject_put_ApplicationName(This,pstrAppName)	\
    ( (This)->lpVtbl -> put_ApplicationName(This,pstrAppName) ) 

#define IReadingZoneObject_get_Anchor(This,pstrAnchor)	\
    ( (This)->lpVtbl -> get_Anchor(This,pstrAnchor) ) 

#define IReadingZoneObject_put_Anchor(This,pstrAnchor)	\
    ( (This)->lpVtbl -> put_Anchor(This,pstrAnchor) ) 

#define IReadingZoneObject_get_Action(This,pstrAction)	\
    ( (This)->lpVtbl -> get_Action(This,pstrAction) ) 

#define IReadingZoneObject_put_Action(This,pstrAction)	\
    ( (This)->lpVtbl -> put_Action(This,pstrAction) ) 

#define IReadingZoneObject_get_HighlightTime(This,pfSeconds)	\
    ( (This)->lpVtbl -> get_HighlightTime(This,pfSeconds) ) 

#define IReadingZoneObject_put_HighlightTime(This,pfSeconds)	\
    ( (This)->lpVtbl -> put_HighlightTime(This,pfSeconds) ) 

#define IReadingZoneObject_get_ReturnToPreviousLocation(This,pbReturns)	\
    ( (This)->lpVtbl -> get_ReturnToPreviousLocation(This,pbReturns) ) 

#define IReadingZoneObject_put_ReturnToPreviousLocation(This,pbReturns)	\
    ( (This)->lpVtbl -> put_ReturnToPreviousLocation(This,pbReturns) ) 

#define IReadingZoneObject_get_DimAreaOutside(This,pbDims)	\
    ( (This)->lpVtbl -> get_DimAreaOutside(This,pbDims) ) 

#define IReadingZoneObject_put_DimAreaOutside(This,pbDims)	\
    ( (This)->lpVtbl -> put_DimAreaOutside(This,pbDims) ) 

#define IReadingZoneObject_get_ZoneID(This,pId)	\
    ( (This)->lpVtbl -> get_ZoneID(This,pId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReadingZoneObject_INTERFACE_DEFINED__ */


#ifndef __ITypingEcho_INTERFACE_DEFINED__
#define __ITypingEcho_INTERFACE_DEFINED__

/* interface ITypingEcho */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITypingEcho;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("865C25B5-9A75-4E41-B182-DCA1768255E3")
    ITypingEcho : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ BSTR *pstrMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ BSTR pstrMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITypingEchoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITypingEcho * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITypingEcho * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITypingEcho * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITypingEcho * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITypingEcho * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITypingEcho * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITypingEcho * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            ITypingEcho * This,
            /* [retval][out] */ BSTR *pstrMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            ITypingEcho * This,
            /* [in] */ BSTR pstrMode);
        
        END_INTERFACE
    } ITypingEchoVtbl;

    interface ITypingEcho
    {
        CONST_VTBL struct ITypingEchoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITypingEcho_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITypingEcho_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITypingEcho_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITypingEcho_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITypingEcho_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITypingEcho_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITypingEcho_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITypingEcho_get_Mode(This,pstrMode)	\
    ( (This)->lpVtbl -> get_Mode(This,pstrMode) ) 

#define ITypingEcho_put_Mode(This,pstrMode)	\
    ( (This)->lpVtbl -> put_Mode(This,pstrMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITypingEcho_INTERFACE_DEFINED__ */


#ifndef __IVerbosity_INTERFACE_DEFINED__
#define __IVerbosity_INTERFACE_DEFINED__

/* interface IVerbosity */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVerbosity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F5432AA-9729-4FD3-A783-2C02FABE5B86")
    IVerbosity : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSetting( 
            /* [in] */ BSTR bstrLevel,
            /* [in] */ BSTR bstrValueName,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetSetting( 
            /* [in] */ BSTR bstrLevel,
            /* [in] */ BSTR bstrValueName,
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ BSTR *pstrLevel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ BSTR pstrLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVerbosityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVerbosity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVerbosity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVerbosity * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVerbosity * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVerbosity * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVerbosity * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVerbosity * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetSetting )( 
            IVerbosity * This,
            /* [in] */ BSTR bstrLevel,
            /* [in] */ BSTR bstrValueName,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetSetting )( 
            IVerbosity * This,
            /* [in] */ BSTR bstrLevel,
            /* [in] */ BSTR bstrValueName,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IVerbosity * This,
            /* [retval][out] */ BSTR *pstrLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IVerbosity * This,
            /* [in] */ BSTR pstrLevel);
        
        END_INTERFACE
    } IVerbosityVtbl;

    interface IVerbosity
    {
        CONST_VTBL struct IVerbosityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVerbosity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVerbosity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVerbosity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVerbosity_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVerbosity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVerbosity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVerbosity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVerbosity_GetSetting(This,bstrLevel,bstrValueName,pbEnabled)	\
    ( (This)->lpVtbl -> GetSetting(This,bstrLevel,bstrValueName,pbEnabled) ) 

#define IVerbosity_SetSetting(This,bstrLevel,bstrValueName,bEnabled)	\
    ( (This)->lpVtbl -> SetSetting(This,bstrLevel,bstrValueName,bEnabled) ) 

#define IVerbosity_get_Level(This,pstrLevel)	\
    ( (This)->lpVtbl -> get_Level(This,pstrLevel) ) 

#define IVerbosity_put_Level(This,pstrLevel)	\
    ( (This)->lpVtbl -> put_Level(This,pstrLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVerbosity_INTERFACE_DEFINED__ */


#ifndef __IProgramEcho_INTERFACE_DEFINED__
#define __IProgramEcho_INTERFACE_DEFINED__

/* interface IProgramEcho */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IProgramEcho;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BFFF5140-BA03-40B0-8131-EC64673BC735")
    IProgramEcho : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AlertsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AlertsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ControlsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ControlsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MenusEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MenusEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TextCursorEchosLine( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TextCursorEchosLine( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TextCursorEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TextCursorEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ToolTipsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ToolTipsEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowTitlesEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowTitlesEnabled( 
            /* [in] */ VARIANT_BOOL pbEnabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProgramEchoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProgramEcho * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProgramEcho * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProgramEcho * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IProgramEcho * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IProgramEcho * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IProgramEcho * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IProgramEcho * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AlertsEnabled )( 
            IProgramEcho * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AlertsEnabled )( 
            IProgramEcho * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlsEnabled )( 
            IProgramEcho * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ControlsEnabled )( 
            IProgramEcho * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenusEnabled )( 
            IProgramEcho * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MenusEnabled )( 
            IProgramEcho * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextCursorEchosLine )( 
            IProgramEcho * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextCursorEchosLine )( 
            IProgramEcho * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextCursorEnabled )( 
            IProgramEcho * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextCursorEnabled )( 
            IProgramEcho * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ToolTipsEnabled )( 
            IProgramEcho * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ToolTipsEnabled )( 
            IProgramEcho * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowTitlesEnabled )( 
            IProgramEcho * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowTitlesEnabled )( 
            IProgramEcho * This,
            /* [in] */ VARIANT_BOOL pbEnabled);
        
        END_INTERFACE
    } IProgramEchoVtbl;

    interface IProgramEcho
    {
        CONST_VTBL struct IProgramEchoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProgramEcho_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProgramEcho_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProgramEcho_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProgramEcho_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IProgramEcho_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IProgramEcho_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IProgramEcho_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IProgramEcho_get_AlertsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_AlertsEnabled(This,pbEnabled) ) 

#define IProgramEcho_put_AlertsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_AlertsEnabled(This,pbEnabled) ) 

#define IProgramEcho_get_ControlsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_ControlsEnabled(This,pbEnabled) ) 

#define IProgramEcho_put_ControlsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_ControlsEnabled(This,pbEnabled) ) 

#define IProgramEcho_get_MenusEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_MenusEnabled(This,pbEnabled) ) 

#define IProgramEcho_put_MenusEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_MenusEnabled(This,pbEnabled) ) 

#define IProgramEcho_get_TextCursorEchosLine(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_TextCursorEchosLine(This,pbEnabled) ) 

#define IProgramEcho_put_TextCursorEchosLine(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_TextCursorEchosLine(This,pbEnabled) ) 

#define IProgramEcho_get_TextCursorEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_TextCursorEnabled(This,pbEnabled) ) 

#define IProgramEcho_put_TextCursorEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_TextCursorEnabled(This,pbEnabled) ) 

#define IProgramEcho_get_ToolTipsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_ToolTipsEnabled(This,pbEnabled) ) 

#define IProgramEcho_put_ToolTipsEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_ToolTipsEnabled(This,pbEnabled) ) 

#define IProgramEcho_get_WindowTitlesEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_WindowTitlesEnabled(This,pbEnabled) ) 

#define IProgramEcho_put_WindowTitlesEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> put_WindowTitlesEnabled(This,pbEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProgramEcho_INTERFACE_DEFINED__ */


#ifndef __IDocReader_INTERFACE_DEFINED__
#define __IDocReader_INTERFACE_DEFINED__

/* interface IDocReader */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDocReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8423FBEB-FEAF-4248-9638-156A7543EA91")
    IDocReader : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDocReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocReader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDocReader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDocReader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDocReader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDocReader * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IDocReader * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IDocReader * This);
        
        END_INTERFACE
    } IDocReaderVtbl;

    interface IDocReader
    {
        CONST_VTBL struct IDocReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDocReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDocReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDocReader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDocReader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDocReader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDocReader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDocReader_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IDocReader_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDocReader_INTERFACE_DEFINED__ */


#ifndef __IRecorder_INTERFACE_DEFINED__
#define __IRecorder_INTERFACE_DEFINED__

/* interface IRecorder */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IRecorder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2AEB500E-85AD-4808-836B-2F1512697966")
    IRecorder : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRecorderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecorder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecorder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecorder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecorder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecorder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecorder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecorder * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IRecorder * This);
        
        END_INTERFACE
    } IRecorderVtbl;

    interface IRecorder
    {
        CONST_VTBL struct IRecorderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecorder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecorder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecorder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecorder_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRecorder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRecorder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRecorder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRecorder_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRecorder_INTERFACE_DEFINED__ */


#ifndef __IScriptConfiguration_INTERFACE_DEFINED__
#define __IScriptConfiguration_INTERFACE_DEFINED__

/* interface IScriptConfiguration */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptConfiguration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF065601-DC5C-49AD-AB8D-58325885BE0B")
    IScriptConfiguration : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterScriptFile( 
            /* [in] */ BSTR bsFilePath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterScriptComponent( 
            /* [in] */ BSTR bsProgID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterScript( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScriptRegistered( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbRegistered) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFirstScript( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNextScript( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrNext) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetScriptType( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ unsigned long *dwType) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScriptInitialized( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbInitialized) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ChangeScriptLoadOrder( 
            /* [in] */ BSTR bstrScript,
            /* [in] */ int iPosChange) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableScript( 
            /* [in] */ BSTR bstrScript) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableScript( 
            /* [in] */ BSTR bstrScript) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScriptEnabled( 
            /* [in] */ BSTR bstrScript,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetScriptFileInformation( 
            /* [in] */ BSTR bstrScript,
            /* [retval][out] */ IScriptInformation **pScriptInformation) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetScriptComponentInformation( 
            /* [in] */ BSTR bstrScript,
            /* [retval][out] */ IScriptInformation **pScriptInformation) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RequireAdmin( 
            /* [retval][out] */ VARIANT_BOOL *pbRequireAdmin) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RequireAdmin( 
            /* [in] */ VARIANT_BOOL pbRequireAdmin) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetScriptInformation( 
            /* [in] */ BSTR bstrScript,
            /* [in] */ IScriptInformation *pScriptInformation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptConfigurationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptConfiguration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptConfiguration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptConfiguration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptConfiguration * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptConfiguration * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptConfiguration * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptConfiguration * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterScriptFile )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bsFilePath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterScriptComponent )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bsProgID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterScript )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScriptRegistered )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbRegistered);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstScript )( 
            IScriptConfiguration * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNextScript )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrNext);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetScriptType )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ unsigned long *dwType);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScriptInitialized )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbInitialized);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ChangeScriptLoadOrder )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrScript,
            /* [in] */ int iPosChange);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableScript )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrScript);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableScript )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrScript);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScriptEnabled )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrScript,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetScriptFileInformation )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrScript,
            /* [retval][out] */ IScriptInformation **pScriptInformation);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetScriptComponentInformation )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrScript,
            /* [retval][out] */ IScriptInformation **pScriptInformation);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RequireAdmin )( 
            IScriptConfiguration * This,
            /* [retval][out] */ VARIANT_BOOL *pbRequireAdmin);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RequireAdmin )( 
            IScriptConfiguration * This,
            /* [in] */ VARIANT_BOOL pbRequireAdmin);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetScriptInformation )( 
            IScriptConfiguration * This,
            /* [in] */ BSTR bstrScript,
            /* [in] */ IScriptInformation *pScriptInformation);
        
        END_INTERFACE
    } IScriptConfigurationVtbl;

    interface IScriptConfiguration
    {
        CONST_VTBL struct IScriptConfigurationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptConfiguration_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptConfiguration_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptConfiguration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptConfiguration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptConfiguration_RegisterScriptFile(This,bsFilePath)	\
    ( (This)->lpVtbl -> RegisterScriptFile(This,bsFilePath) ) 

#define IScriptConfiguration_RegisterScriptComponent(This,bsProgID)	\
    ( (This)->lpVtbl -> RegisterScriptComponent(This,bsProgID) ) 

#define IScriptConfiguration_UnregisterScript(This,bstrName)	\
    ( (This)->lpVtbl -> UnregisterScript(This,bstrName) ) 

#define IScriptConfiguration_ScriptRegistered(This,bstrName,pbRegistered)	\
    ( (This)->lpVtbl -> ScriptRegistered(This,bstrName,pbRegistered) ) 

#define IScriptConfiguration_GetFirstScript(This,pbstrName)	\
    ( (This)->lpVtbl -> GetFirstScript(This,pbstrName) ) 

#define IScriptConfiguration_GetNextScript(This,bstrName,pbstrNext)	\
    ( (This)->lpVtbl -> GetNextScript(This,bstrName,pbstrNext) ) 

#define IScriptConfiguration_GetScriptType(This,bstrName,dwType)	\
    ( (This)->lpVtbl -> GetScriptType(This,bstrName,dwType) ) 

#define IScriptConfiguration_ScriptInitialized(This,bstrName,pbInitialized)	\
    ( (This)->lpVtbl -> ScriptInitialized(This,bstrName,pbInitialized) ) 

#define IScriptConfiguration_ChangeScriptLoadOrder(This,bstrScript,iPosChange)	\
    ( (This)->lpVtbl -> ChangeScriptLoadOrder(This,bstrScript,iPosChange) ) 

#define IScriptConfiguration_EnableScript(This,bstrScript)	\
    ( (This)->lpVtbl -> EnableScript(This,bstrScript) ) 

#define IScriptConfiguration_DisableScript(This,bstrScript)	\
    ( (This)->lpVtbl -> DisableScript(This,bstrScript) ) 

#define IScriptConfiguration_ScriptEnabled(This,bstrScript,pbEnabled)	\
    ( (This)->lpVtbl -> ScriptEnabled(This,bstrScript,pbEnabled) ) 

#define IScriptConfiguration_GetScriptFileInformation(This,bstrScript,pScriptInformation)	\
    ( (This)->lpVtbl -> GetScriptFileInformation(This,bstrScript,pScriptInformation) ) 

#define IScriptConfiguration_GetScriptComponentInformation(This,bstrScript,pScriptInformation)	\
    ( (This)->lpVtbl -> GetScriptComponentInformation(This,bstrScript,pScriptInformation) ) 

#define IScriptConfiguration_get_RequireAdmin(This,pbRequireAdmin)	\
    ( (This)->lpVtbl -> get_RequireAdmin(This,pbRequireAdmin) ) 

#define IScriptConfiguration_put_RequireAdmin(This,pbRequireAdmin)	\
    ( (This)->lpVtbl -> put_RequireAdmin(This,pbRequireAdmin) ) 

#define IScriptConfiguration_SetScriptInformation(This,bstrScript,pScriptInformation)	\
    ( (This)->lpVtbl -> SetScriptInformation(This,bstrScript,pScriptInformation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptConfiguration_INTERFACE_DEFINED__ */


#ifndef __IScriptInformation_INTERFACE_DEFINED__
#define __IScriptInformation_INTERFACE_DEFINED__

/* interface IScriptInformation */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FA636707-C09A-4FD9-8A1B-838A5A505A4C")
    IScriptInformation : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScriptName( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ScriptName( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Date( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Date( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Author( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Author( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Address1( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Address1( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Address2( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Address2( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Address3( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Address3( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Email( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Email( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Website( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Website( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Phone( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Phone( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR pbstrData) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Copyright( 
            /* [retval][out] */ BSTR *pbstrData) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Copyright( 
            /* [in] */ BSTR pbstrData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptInformation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptInformation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptInformation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptInformation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptName )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptName )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Version )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Date )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Date )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Author )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Author )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Address1 )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Address1 )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Address2 )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Address2 )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Address3 )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Address3 )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Email )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Email )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Website )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Website )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Phone )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Phone )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Copyright )( 
            IScriptInformation * This,
            /* [retval][out] */ BSTR *pbstrData);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Copyright )( 
            IScriptInformation * This,
            /* [in] */ BSTR pbstrData);
        
        END_INTERFACE
    } IScriptInformationVtbl;

    interface IScriptInformation
    {
        CONST_VTBL struct IScriptInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptInformation_get_ScriptName(This,pbstrData)	\
    ( (This)->lpVtbl -> get_ScriptName(This,pbstrData) ) 

#define IScriptInformation_put_ScriptName(This,pbstrData)	\
    ( (This)->lpVtbl -> put_ScriptName(This,pbstrData) ) 

#define IScriptInformation_get_Version(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Version(This,pbstrData) ) 

#define IScriptInformation_put_Version(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Version(This,pbstrData) ) 

#define IScriptInformation_get_Date(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Date(This,pbstrData) ) 

#define IScriptInformation_put_Date(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Date(This,pbstrData) ) 

#define IScriptInformation_get_Author(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Author(This,pbstrData) ) 

#define IScriptInformation_put_Author(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Author(This,pbstrData) ) 

#define IScriptInformation_get_Address1(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Address1(This,pbstrData) ) 

#define IScriptInformation_put_Address1(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Address1(This,pbstrData) ) 

#define IScriptInformation_get_Address2(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Address2(This,pbstrData) ) 

#define IScriptInformation_put_Address2(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Address2(This,pbstrData) ) 

#define IScriptInformation_get_Address3(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Address3(This,pbstrData) ) 

#define IScriptInformation_put_Address3(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Address3(This,pbstrData) ) 

#define IScriptInformation_get_Email(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Email(This,pbstrData) ) 

#define IScriptInformation_put_Email(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Email(This,pbstrData) ) 

#define IScriptInformation_get_Website(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Website(This,pbstrData) ) 

#define IScriptInformation_put_Website(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Website(This,pbstrData) ) 

#define IScriptInformation_get_Phone(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Phone(This,pbstrData) ) 

#define IScriptInformation_put_Phone(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Phone(This,pbstrData) ) 

#define IScriptInformation_get_Description(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrData) ) 

#define IScriptInformation_put_Description(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Description(This,pbstrData) ) 

#define IScriptInformation_get_Copyright(This,pbstrData)	\
    ( (This)->lpVtbl -> get_Copyright(This,pbstrData) ) 

#define IScriptInformation_put_Copyright(This,pbstrData)	\
    ( (This)->lpVtbl -> put_Copyright(This,pbstrData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptInformation_INTERFACE_DEFINED__ */


#ifndef __IZoomTextSettings_INTERFACE_DEFINED__
#define __IZoomTextSettings_INTERFACE_DEFINED__

/* interface IZoomTextSettings */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZoomTextSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE7B5CC9-BF3E-493D-AED4-A0A0A10A9A8C")
    IZoomTextSettings : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UiCulture( 
            /* [retval][out] */ BSTR *pUiCulture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZoomTextSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZoomTextSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZoomTextSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZoomTextSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZoomTextSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZoomTextSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZoomTextSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZoomTextSettings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UiCulture )( 
            IZoomTextSettings * This,
            /* [retval][out] */ BSTR *pUiCulture);
        
        END_INTERFACE
    } IZoomTextSettingsVtbl;

    interface IZoomTextSettings
    {
        CONST_VTBL struct IZoomTextSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZoomTextSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZoomTextSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZoomTextSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZoomTextSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZoomTextSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZoomTextSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZoomTextSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZoomTextSettings_get_UiCulture(This,pUiCulture)	\
    ( (This)->lpVtbl -> get_UiCulture(This,pUiCulture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZoomTextSettings_INTERFACE_DEFINED__ */


#ifndef __IZoomTextSettings2_INTERFACE_DEFINED__
#define __IZoomTextSettings2_INTERFACE_DEFINED__

/* interface IZoomTextSettings2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZoomTextSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E874A180-D7C9-4B21-A638-982D36F5EA7E")
    IZoomTextSettings2 : public IZoomTextSettings
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgramFolder( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScriptDataFolder( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ScriptsFolder( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZoomTextSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZoomTextSettings2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZoomTextSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZoomTextSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZoomTextSettings2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZoomTextSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZoomTextSettings2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZoomTextSettings2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UiCulture )( 
            IZoomTextSettings2 * This,
            /* [retval][out] */ BSTR *pUiCulture);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramFolder )( 
            IZoomTextSettings2 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptDataFolder )( 
            IZoomTextSettings2 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptsFolder )( 
            IZoomTextSettings2 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        END_INTERFACE
    } IZoomTextSettings2Vtbl;

    interface IZoomTextSettings2
    {
        CONST_VTBL struct IZoomTextSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZoomTextSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZoomTextSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZoomTextSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZoomTextSettings2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZoomTextSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZoomTextSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZoomTextSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZoomTextSettings2_get_UiCulture(This,pUiCulture)	\
    ( (This)->lpVtbl -> get_UiCulture(This,pUiCulture) ) 


#define IZoomTextSettings2_get_ProgramFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ProgramFolder(This,pbstrValue) ) 

#define IZoomTextSettings2_get_ScriptDataFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ScriptDataFolder(This,pbstrValue) ) 

#define IZoomTextSettings2_get_ScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ScriptsFolder(This,pbstrValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZoomTextSettings2_INTERFACE_DEFINED__ */


#ifndef __IZoomTextSettings3_INTERFACE_DEFINED__
#define __IZoomTextSettings3_INTERFACE_DEFINED__

/* interface IZoomTextSettings3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZoomTextSettings3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51B35190-807C-4AC8-B74F-3A3FD83E6F86")
    IZoomTextSettings3 : public IZoomTextSettings2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProductType( 
            /* [retval][out] */ unsigned long *pdwType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MyScriptsFolder( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SharedScriptsFolder( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SampleScriptsFolder( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetScriptSetting( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDefaultValue,
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetScriptSetting( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZoomTextSettings3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZoomTextSettings3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZoomTextSettings3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZoomTextSettings3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZoomTextSettings3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZoomTextSettings3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZoomTextSettings3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZoomTextSettings3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UiCulture )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ BSTR *pUiCulture);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramFolder )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptDataFolder )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptsFolder )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductType )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ unsigned long *pdwType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MyScriptsFolder )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SharedScriptsFolder )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SampleScriptsFolder )( 
            IZoomTextSettings3 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetScriptSetting )( 
            IZoomTextSettings3 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDefaultValue,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetScriptSetting )( 
            IZoomTextSettings3 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue);
        
        END_INTERFACE
    } IZoomTextSettings3Vtbl;

    interface IZoomTextSettings3
    {
        CONST_VTBL struct IZoomTextSettings3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZoomTextSettings3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZoomTextSettings3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZoomTextSettings3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZoomTextSettings3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZoomTextSettings3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZoomTextSettings3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZoomTextSettings3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZoomTextSettings3_get_UiCulture(This,pUiCulture)	\
    ( (This)->lpVtbl -> get_UiCulture(This,pUiCulture) ) 


#define IZoomTextSettings3_get_ProgramFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ProgramFolder(This,pbstrValue) ) 

#define IZoomTextSettings3_get_ScriptDataFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ScriptDataFolder(This,pbstrValue) ) 

#define IZoomTextSettings3_get_ScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ScriptsFolder(This,pbstrValue) ) 


#define IZoomTextSettings3_get_ProductType(This,pdwType)	\
    ( (This)->lpVtbl -> get_ProductType(This,pdwType) ) 

#define IZoomTextSettings3_get_MyScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_MyScriptsFolder(This,pbstrValue) ) 

#define IZoomTextSettings3_get_SharedScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_SharedScriptsFolder(This,pbstrValue) ) 

#define IZoomTextSettings3_get_SampleScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_SampleScriptsFolder(This,pbstrValue) ) 

#define IZoomTextSettings3_GetScriptSetting(This,bstrName,bstrDefaultValue,pbstrValue)	\
    ( (This)->lpVtbl -> GetScriptSetting(This,bstrName,bstrDefaultValue,pbstrValue) ) 

#define IZoomTextSettings3_SetScriptSetting(This,bstrName,bstrValue)	\
    ( (This)->lpVtbl -> SetScriptSetting(This,bstrName,bstrValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZoomTextSettings3_INTERFACE_DEFINED__ */


#ifndef __IZoomTextSettings4_INTERFACE_DEFINED__
#define __IZoomTextSettings4_INTERFACE_DEFINED__

/* interface IZoomTextSettings4 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZoomTextSettings4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84C39C47-0CFB-43A8-B88E-0C6662000877")
    IZoomTextSettings4 : public IZoomTextSettings3
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentConfigurationFile( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZoomTextSettings4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZoomTextSettings4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZoomTextSettings4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZoomTextSettings4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZoomTextSettings4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZoomTextSettings4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZoomTextSettings4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZoomTextSettings4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UiCulture )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pUiCulture);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramFolder )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptDataFolder )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptsFolder )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductType )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ unsigned long *pdwType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MyScriptsFolder )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SharedScriptsFolder )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SampleScriptsFolder )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetScriptSetting )( 
            IZoomTextSettings4 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDefaultValue,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetScriptSetting )( 
            IZoomTextSettings4 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentConfigurationFile )( 
            IZoomTextSettings4 * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        END_INTERFACE
    } IZoomTextSettings4Vtbl;

    interface IZoomTextSettings4
    {
        CONST_VTBL struct IZoomTextSettings4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZoomTextSettings4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZoomTextSettings4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZoomTextSettings4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZoomTextSettings4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZoomTextSettings4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZoomTextSettings4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZoomTextSettings4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZoomTextSettings4_get_UiCulture(This,pUiCulture)	\
    ( (This)->lpVtbl -> get_UiCulture(This,pUiCulture) ) 


#define IZoomTextSettings4_get_ProgramFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ProgramFolder(This,pbstrValue) ) 

#define IZoomTextSettings4_get_ScriptDataFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ScriptDataFolder(This,pbstrValue) ) 

#define IZoomTextSettings4_get_ScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ScriptsFolder(This,pbstrValue) ) 


#define IZoomTextSettings4_get_ProductType(This,pdwType)	\
    ( (This)->lpVtbl -> get_ProductType(This,pdwType) ) 

#define IZoomTextSettings4_get_MyScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_MyScriptsFolder(This,pbstrValue) ) 

#define IZoomTextSettings4_get_SharedScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_SharedScriptsFolder(This,pbstrValue) ) 

#define IZoomTextSettings4_get_SampleScriptsFolder(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_SampleScriptsFolder(This,pbstrValue) ) 

#define IZoomTextSettings4_GetScriptSetting(This,bstrName,bstrDefaultValue,pbstrValue)	\
    ( (This)->lpVtbl -> GetScriptSetting(This,bstrName,bstrDefaultValue,pbstrValue) ) 

#define IZoomTextSettings4_SetScriptSetting(This,bstrName,bstrValue)	\
    ( (This)->lpVtbl -> SetScriptSetting(This,bstrName,bstrValue) ) 


#define IZoomTextSettings4_get_CurrentConfigurationFile(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_CurrentConfigurationFile(This,pbstrValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZoomTextSettings4_INTERFACE_DEFINED__ */


#ifndef __ISpeech_INTERFACE_DEFINED__
#define __ISpeech_INTERFACE_DEFINED__

/* interface ISpeech */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISpeech;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B7271C8C-3A94-4831-883B-81BA18B87664")
    ISpeech : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentVoice( 
            /* [retval][out] */ IVoice **ppVoice) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CurrentVoice( 
            /* [in] */ IVoice *ppVoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Voices( 
            /* [retval][out] */ IObjectCollection **ppVoiceCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpeechVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpeech * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpeech * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpeech * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpeech * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpeech * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpeech * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpeech * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVoice )( 
            ISpeech * This,
            /* [retval][out] */ IVoice **ppVoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentVoice )( 
            ISpeech * This,
            /* [in] */ IVoice *ppVoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ISpeech * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Voices )( 
            ISpeech * This,
            /* [retval][out] */ IObjectCollection **ppVoiceCollection);
        
        END_INTERFACE
    } ISpeechVtbl;

    interface ISpeech
    {
        CONST_VTBL struct ISpeechVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpeech_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpeech_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpeech_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpeech_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpeech_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpeech_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpeech_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpeech_get_CurrentVoice(This,ppVoice)	\
    ( (This)->lpVtbl -> get_CurrentVoice(This,ppVoice) ) 

#define ISpeech_put_CurrentVoice(This,ppVoice)	\
    ( (This)->lpVtbl -> put_CurrentVoice(This,ppVoice) ) 

#define ISpeech_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define ISpeech_Voices(This,ppVoiceCollection)	\
    ( (This)->lpVtbl -> Voices(This,ppVoiceCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpeech_INTERFACE_DEFINED__ */


#ifndef __ISpeech2_INTERFACE_DEFINED__
#define __ISpeech2_INTERFACE_DEFINED__

/* interface ISpeech2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISpeech2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD16491D-29DE-4CB2-A4D9-2AD423FE3C6E")
    ISpeech2 : public ISpeech
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindVoice( 
            /* [in] */ BSTR bstrProductName,
            /* [in] */ BSTR bstrVoiceName,
            /* [retval][out] */ IVoice **ppVoice) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateSpeaker( 
            /* [in] */ IVoice *pVoice,
            /* [retval][out] */ ISpeaker **ppSpeaker) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteSpeaker( 
            /* [in] */ ISpeaker *pSpeaker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpeech2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpeech2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpeech2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpeech2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpeech2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpeech2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpeech2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpeech2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVoice )( 
            ISpeech2 * This,
            /* [retval][out] */ IVoice **ppVoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentVoice )( 
            ISpeech2 * This,
            /* [in] */ IVoice *ppVoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ISpeech2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Voices )( 
            ISpeech2 * This,
            /* [retval][out] */ IObjectCollection **ppVoiceCollection);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindVoice )( 
            ISpeech2 * This,
            /* [in] */ BSTR bstrProductName,
            /* [in] */ BSTR bstrVoiceName,
            /* [retval][out] */ IVoice **ppVoice);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateSpeaker )( 
            ISpeech2 * This,
            /* [in] */ IVoice *pVoice,
            /* [retval][out] */ ISpeaker **ppSpeaker);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeleteSpeaker )( 
            ISpeech2 * This,
            /* [in] */ ISpeaker *pSpeaker);
        
        END_INTERFACE
    } ISpeech2Vtbl;

    interface ISpeech2
    {
        CONST_VTBL struct ISpeech2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpeech2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpeech2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpeech2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpeech2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpeech2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpeech2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpeech2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpeech2_get_CurrentVoice(This,ppVoice)	\
    ( (This)->lpVtbl -> get_CurrentVoice(This,ppVoice) ) 

#define ISpeech2_put_CurrentVoice(This,ppVoice)	\
    ( (This)->lpVtbl -> put_CurrentVoice(This,ppVoice) ) 

#define ISpeech2_get_Enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) ) 

#define ISpeech2_Voices(This,ppVoiceCollection)	\
    ( (This)->lpVtbl -> Voices(This,ppVoiceCollection) ) 


#define ISpeech2_FindVoice(This,bstrProductName,bstrVoiceName,ppVoice)	\
    ( (This)->lpVtbl -> FindVoice(This,bstrProductName,bstrVoiceName,ppVoice) ) 

#define ISpeech2_CreateSpeaker(This,pVoice,ppSpeaker)	\
    ( (This)->lpVtbl -> CreateSpeaker(This,pVoice,ppSpeaker) ) 

#define ISpeech2_DeleteSpeaker(This,pSpeaker)	\
    ( (This)->lpVtbl -> DeleteSpeaker(This,pSpeaker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpeech2_INTERFACE_DEFINED__ */


#ifndef __IVoice_INTERFACE_DEFINED__
#define __IVoice_INTERFACE_DEFINED__

/* interface IVoice */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVoice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A2FBF963-0748-4266-A04B-8C54466126D5")
    IVoice : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ VARIANT_BOOL *pbActive) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Active( 
            /* [in] */ VARIANT_BOOL pbActive) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LanguageID( 
            /* [retval][out] */ long *pnLanguageID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mute( 
            /* [retval][out] */ VARIANT_BOOL *pbMute) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Mute( 
            /* [in] */ VARIANT_BOOL pbMute) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Pitch( 
            /* [retval][out] */ long *pnPitch) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Pitch( 
            /* [in] */ long pnPitch) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PitchSupported( 
            /* [retval][out] */ VARIANT_BOOL *pbSupported) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProductName( 
            /* [retval][out] */ BSTR *pbstrProductName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Rate( 
            /* [retval][out] */ long *pnRate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Rate( 
            /* [in] */ long pnRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RateSupported( 
            /* [retval][out] */ VARIANT_BOOL *pbSupported) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Speaking( 
            /* [retval][out] */ VARIANT_BOOL *pbSpeaking) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VoiceName( 
            /* [retval][out] */ BSTR *pbstrVoiceName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Volume( 
            /* [retval][out] */ long *pnVolume) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Volume( 
            /* [in] */ long pnVolume) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VolumeSupported( 
            /* [retval][out] */ VARIANT_BOOL *pbSupported) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SpellMode( 
            /* [retval][out] */ VARIANT_BOOL *pbSpell) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SpellMode( 
            /* [in] */ VARIANT_BOOL pbSpell) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SpeakImmediate( 
            /* [retval][out] */ VARIANT_BOOL *pbImmediate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SpeakImmediate( 
            /* [in] */ VARIANT_BOOL pbImmediate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AllowInterrupt( 
            /* [retval][out] */ VARIANT_BOOL *pbInterrupt) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AllowInterrupt( 
            /* [in] */ VARIANT_BOOL pbInterrupt) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Speak( 
            /* [in] */ BSTR bstrText) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SpeakEvent( 
            /* [in] */ IDispatch *pSpeechEventObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVoiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVoice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVoice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVoice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVoice * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVoice * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVoice * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVoice * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbActive);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Active )( 
            IVoice * This,
            /* [in] */ VARIANT_BOOL pbActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LanguageID )( 
            IVoice * This,
            /* [retval][out] */ long *pnLanguageID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mute )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbMute);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mute )( 
            IVoice * This,
            /* [in] */ VARIANT_BOOL pbMute);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Pitch )( 
            IVoice * This,
            /* [retval][out] */ long *pnPitch);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Pitch )( 
            IVoice * This,
            /* [in] */ long pnPitch);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PitchSupported )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            IVoice * This,
            /* [retval][out] */ BSTR *pbstrProductName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Rate )( 
            IVoice * This,
            /* [retval][out] */ long *pnRate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Rate )( 
            IVoice * This,
            /* [in] */ long pnRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RateSupported )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Speaking )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbSpeaking);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VoiceName )( 
            IVoice * This,
            /* [retval][out] */ BSTR *pbstrVoiceName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Volume )( 
            IVoice * This,
            /* [retval][out] */ long *pnVolume);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Volume )( 
            IVoice * This,
            /* [in] */ long pnVolume);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VolumeSupported )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SpellMode )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbSpell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SpellMode )( 
            IVoice * This,
            /* [in] */ VARIANT_BOOL pbSpell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SpeakImmediate )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbImmediate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SpeakImmediate )( 
            IVoice * This,
            /* [in] */ VARIANT_BOOL pbImmediate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllowInterrupt )( 
            IVoice * This,
            /* [retval][out] */ VARIANT_BOOL *pbInterrupt);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowInterrupt )( 
            IVoice * This,
            /* [in] */ VARIANT_BOOL pbInterrupt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Speak )( 
            IVoice * This,
            /* [in] */ BSTR bstrText);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IVoice * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SpeakEvent )( 
            IVoice * This,
            /* [in] */ IDispatch *pSpeechEventObject);
        
        END_INTERFACE
    } IVoiceVtbl;

    interface IVoice
    {
        CONST_VTBL struct IVoiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVoice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVoice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVoice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVoice_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVoice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVoice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVoice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVoice_get_Active(This,pbActive)	\
    ( (This)->lpVtbl -> get_Active(This,pbActive) ) 

#define IVoice_put_Active(This,pbActive)	\
    ( (This)->lpVtbl -> put_Active(This,pbActive) ) 

#define IVoice_get_LanguageID(This,pnLanguageID)	\
    ( (This)->lpVtbl -> get_LanguageID(This,pnLanguageID) ) 

#define IVoice_get_Mute(This,pbMute)	\
    ( (This)->lpVtbl -> get_Mute(This,pbMute) ) 

#define IVoice_put_Mute(This,pbMute)	\
    ( (This)->lpVtbl -> put_Mute(This,pbMute) ) 

#define IVoice_get_Pitch(This,pnPitch)	\
    ( (This)->lpVtbl -> get_Pitch(This,pnPitch) ) 

#define IVoice_put_Pitch(This,pnPitch)	\
    ( (This)->lpVtbl -> put_Pitch(This,pnPitch) ) 

#define IVoice_get_PitchSupported(This,pbSupported)	\
    ( (This)->lpVtbl -> get_PitchSupported(This,pbSupported) ) 

#define IVoice_get_ProductName(This,pbstrProductName)	\
    ( (This)->lpVtbl -> get_ProductName(This,pbstrProductName) ) 

#define IVoice_get_Rate(This,pnRate)	\
    ( (This)->lpVtbl -> get_Rate(This,pnRate) ) 

#define IVoice_put_Rate(This,pnRate)	\
    ( (This)->lpVtbl -> put_Rate(This,pnRate) ) 

#define IVoice_get_RateSupported(This,pbSupported)	\
    ( (This)->lpVtbl -> get_RateSupported(This,pbSupported) ) 

#define IVoice_get_Speaking(This,pbSpeaking)	\
    ( (This)->lpVtbl -> get_Speaking(This,pbSpeaking) ) 

#define IVoice_get_VoiceName(This,pbstrVoiceName)	\
    ( (This)->lpVtbl -> get_VoiceName(This,pbstrVoiceName) ) 

#define IVoice_get_Volume(This,pnVolume)	\
    ( (This)->lpVtbl -> get_Volume(This,pnVolume) ) 

#define IVoice_put_Volume(This,pnVolume)	\
    ( (This)->lpVtbl -> put_Volume(This,pnVolume) ) 

#define IVoice_get_VolumeSupported(This,pbSupported)	\
    ( (This)->lpVtbl -> get_VolumeSupported(This,pbSupported) ) 

#define IVoice_get_SpellMode(This,pbSpell)	\
    ( (This)->lpVtbl -> get_SpellMode(This,pbSpell) ) 

#define IVoice_put_SpellMode(This,pbSpell)	\
    ( (This)->lpVtbl -> put_SpellMode(This,pbSpell) ) 

#define IVoice_get_SpeakImmediate(This,pbImmediate)	\
    ( (This)->lpVtbl -> get_SpeakImmediate(This,pbImmediate) ) 

#define IVoice_put_SpeakImmediate(This,pbImmediate)	\
    ( (This)->lpVtbl -> put_SpeakImmediate(This,pbImmediate) ) 

#define IVoice_get_AllowInterrupt(This,pbInterrupt)	\
    ( (This)->lpVtbl -> get_AllowInterrupt(This,pbInterrupt) ) 

#define IVoice_put_AllowInterrupt(This,pbInterrupt)	\
    ( (This)->lpVtbl -> put_AllowInterrupt(This,pbInterrupt) ) 

#define IVoice_Speak(This,bstrText)	\
    ( (This)->lpVtbl -> Speak(This,bstrText) ) 

#define IVoice_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IVoice_SpeakEvent(This,pSpeechEventObject)	\
    ( (This)->lpVtbl -> SpeakEvent(This,pSpeechEventObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVoice_INTERFACE_DEFINED__ */


#ifndef __IObjectCollection_INTERFACE_DEFINED__
#define __IObjectCollection_INTERFACE_DEFINED__

/* interface IObjectCollection */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IObjectCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E9EF732F-25EF-4D19-A0D2-FE8F6D3A1BBB")
    IObjectCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *pSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_First( 
            /* [retval][out] */ IDispatch **ppObject) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Last( 
            /* [retval][out] */ IDispatch **ppObject) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ VARIANT vCurrent,
            /* [retval][out] */ IDispatch **ppObject) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Previous( 
            /* [in] */ VARIANT vCurrent,
            /* [retval][out] */ IDispatch **ppObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObjectCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObjectCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObjectCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IObjectCollection * This,
            /* [retval][out] */ long *pSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_First )( 
            IObjectCollection * This,
            /* [retval][out] */ IDispatch **ppObject);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Last )( 
            IObjectCollection * This,
            /* [retval][out] */ IDispatch **ppObject);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IObjectCollection * This,
            /* [in] */ VARIANT vCurrent,
            /* [retval][out] */ IDispatch **ppObject);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Previous )( 
            IObjectCollection * This,
            /* [in] */ VARIANT vCurrent,
            /* [retval][out] */ IDispatch **ppObject);
        
        END_INTERFACE
    } IObjectCollectionVtbl;

    interface IObjectCollection
    {
        CONST_VTBL struct IObjectCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectCollection_get_Size(This,pSize)	\
    ( (This)->lpVtbl -> get_Size(This,pSize) ) 

#define IObjectCollection_get_First(This,ppObject)	\
    ( (This)->lpVtbl -> get_First(This,ppObject) ) 

#define IObjectCollection_get_Last(This,ppObject)	\
    ( (This)->lpVtbl -> get_Last(This,ppObject) ) 

#define IObjectCollection_Next(This,vCurrent,ppObject)	\
    ( (This)->lpVtbl -> Next(This,vCurrent,ppObject) ) 

#define IObjectCollection_Previous(This,vCurrent,ppObject)	\
    ( (This)->lpVtbl -> Previous(This,vCurrent,ppObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectCollection_INTERFACE_DEFINED__ */


#ifndef __ISpeaker_INTERFACE_DEFINED__
#define __ISpeaker_INTERFACE_DEFINED__

/* interface ISpeaker */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISpeaker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C7149863-61D3-422F-AA2C-0DCA654914D5")
    ISpeaker : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LanguageID( 
            /* [retval][out] */ long *pnLanguageID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Mute( 
            /* [retval][out] */ VARIANT_BOOL *pbMute) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Mute( 
            /* [in] */ VARIANT_BOOL pbMute) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Pitch( 
            /* [retval][out] */ long *pnPitch) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Pitch( 
            /* [in] */ long pnPitch) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PitchSupported( 
            /* [retval][out] */ VARIANT_BOOL *pbSupported) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProductName( 
            /* [retval][out] */ BSTR *pbstrProductName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Rate( 
            /* [retval][out] */ long *pnRate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Rate( 
            /* [in] */ long pnRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RateSupported( 
            /* [retval][out] */ VARIANT_BOOL *pbSupported) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RateMaximum( 
            /* [retval][out] */ long *pnRateMaximum) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RateMinimum( 
            /* [retval][out] */ long *pnRateMinimum) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RateIsWPM( 
            /* [retval][out] */ VARIANT_BOOL *pbRateIsWPM) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Speaking( 
            /* [retval][out] */ VARIANT_BOOL *pbSpeaking) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VoiceName( 
            /* [retval][out] */ BSTR *pbstrVoiceName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Volume( 
            /* [retval][out] */ long *pnVolume) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Volume( 
            /* [in] */ long pnVolume) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VolumeSupported( 
            /* [retval][out] */ VARIANT_BOOL *pbSupported) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SpellMode( 
            /* [retval][out] */ VARIANT_BOOL *pbSpell) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SpellMode( 
            /* [in] */ VARIANT_BOOL pbSpell) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SpeakImmediate( 
            /* [retval][out] */ VARIANT_BOOL *pbImmediate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SpeakImmediate( 
            /* [in] */ VARIANT_BOOL pbImmediate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AllowInterrupt( 
            /* [retval][out] */ VARIANT_BOOL *pbInterrupt) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AllowInterrupt( 
            /* [in] */ VARIANT_BOOL pbInterrupt) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [retval][out] */ unsigned long *pdwSpeakerHandle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FileOutputStatus( 
            /* [retval][out] */ long *plStatus) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SpeakStatus( 
            /* [retval][out] */ long *plStatus) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Speak( 
            /* [in] */ BSTR bstrText,
            /* [optional][in] */ VARIANT varDoneEvent) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OutputToWaveFile( 
            /* [in] */ BSTR bstrText,
            /* [in] */ BSTR bstrFile,
            /* [optional][in] */ VARIANT varDoneEvent) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CancelOutputToWaveFile( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpeakerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpeaker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpeaker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpeaker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpeaker * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpeaker * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpeaker * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpeaker * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LanguageID )( 
            ISpeaker * This,
            /* [retval][out] */ long *pnLanguageID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mute )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbMute);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Mute )( 
            ISpeaker * This,
            /* [in] */ VARIANT_BOOL pbMute);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Pitch )( 
            ISpeaker * This,
            /* [retval][out] */ long *pnPitch);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Pitch )( 
            ISpeaker * This,
            /* [in] */ long pnPitch);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PitchSupported )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            ISpeaker * This,
            /* [retval][out] */ BSTR *pbstrProductName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Rate )( 
            ISpeaker * This,
            /* [retval][out] */ long *pnRate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Rate )( 
            ISpeaker * This,
            /* [in] */ long pnRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RateSupported )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RateMaximum )( 
            ISpeaker * This,
            /* [retval][out] */ long *pnRateMaximum);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RateMinimum )( 
            ISpeaker * This,
            /* [retval][out] */ long *pnRateMinimum);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RateIsWPM )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbRateIsWPM);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Speaking )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbSpeaking);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VoiceName )( 
            ISpeaker * This,
            /* [retval][out] */ BSTR *pbstrVoiceName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Volume )( 
            ISpeaker * This,
            /* [retval][out] */ long *pnVolume);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Volume )( 
            ISpeaker * This,
            /* [in] */ long pnVolume);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VolumeSupported )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbSupported);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SpellMode )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbSpell);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SpellMode )( 
            ISpeaker * This,
            /* [in] */ VARIANT_BOOL pbSpell);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SpeakImmediate )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbImmediate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SpeakImmediate )( 
            ISpeaker * This,
            /* [in] */ VARIANT_BOOL pbImmediate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllowInterrupt )( 
            ISpeaker * This,
            /* [retval][out] */ VARIANT_BOOL *pbInterrupt);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowInterrupt )( 
            ISpeaker * This,
            /* [in] */ VARIANT_BOOL pbInterrupt);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            ISpeaker * This,
            /* [retval][out] */ unsigned long *pdwSpeakerHandle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileOutputStatus )( 
            ISpeaker * This,
            /* [retval][out] */ long *plStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SpeakStatus )( 
            ISpeaker * This,
            /* [retval][out] */ long *plStatus);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Speak )( 
            ISpeaker * This,
            /* [in] */ BSTR bstrText,
            /* [optional][in] */ VARIANT varDoneEvent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ISpeaker * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OutputToWaveFile )( 
            ISpeaker * This,
            /* [in] */ BSTR bstrText,
            /* [in] */ BSTR bstrFile,
            /* [optional][in] */ VARIANT varDoneEvent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CancelOutputToWaveFile )( 
            ISpeaker * This);
        
        END_INTERFACE
    } ISpeakerVtbl;

    interface ISpeaker
    {
        CONST_VTBL struct ISpeakerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpeaker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpeaker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpeaker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpeaker_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpeaker_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpeaker_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpeaker_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpeaker_get_LanguageID(This,pnLanguageID)	\
    ( (This)->lpVtbl -> get_LanguageID(This,pnLanguageID) ) 

#define ISpeaker_get_Mute(This,pbMute)	\
    ( (This)->lpVtbl -> get_Mute(This,pbMute) ) 

#define ISpeaker_put_Mute(This,pbMute)	\
    ( (This)->lpVtbl -> put_Mute(This,pbMute) ) 

#define ISpeaker_get_Pitch(This,pnPitch)	\
    ( (This)->lpVtbl -> get_Pitch(This,pnPitch) ) 

#define ISpeaker_put_Pitch(This,pnPitch)	\
    ( (This)->lpVtbl -> put_Pitch(This,pnPitch) ) 

#define ISpeaker_get_PitchSupported(This,pbSupported)	\
    ( (This)->lpVtbl -> get_PitchSupported(This,pbSupported) ) 

#define ISpeaker_get_ProductName(This,pbstrProductName)	\
    ( (This)->lpVtbl -> get_ProductName(This,pbstrProductName) ) 

#define ISpeaker_get_Rate(This,pnRate)	\
    ( (This)->lpVtbl -> get_Rate(This,pnRate) ) 

#define ISpeaker_put_Rate(This,pnRate)	\
    ( (This)->lpVtbl -> put_Rate(This,pnRate) ) 

#define ISpeaker_get_RateSupported(This,pbSupported)	\
    ( (This)->lpVtbl -> get_RateSupported(This,pbSupported) ) 

#define ISpeaker_get_RateMaximum(This,pnRateMaximum)	\
    ( (This)->lpVtbl -> get_RateMaximum(This,pnRateMaximum) ) 

#define ISpeaker_get_RateMinimum(This,pnRateMinimum)	\
    ( (This)->lpVtbl -> get_RateMinimum(This,pnRateMinimum) ) 

#define ISpeaker_get_RateIsWPM(This,pbRateIsWPM)	\
    ( (This)->lpVtbl -> get_RateIsWPM(This,pbRateIsWPM) ) 

#define ISpeaker_get_Speaking(This,pbSpeaking)	\
    ( (This)->lpVtbl -> get_Speaking(This,pbSpeaking) ) 

#define ISpeaker_get_VoiceName(This,pbstrVoiceName)	\
    ( (This)->lpVtbl -> get_VoiceName(This,pbstrVoiceName) ) 

#define ISpeaker_get_Volume(This,pnVolume)	\
    ( (This)->lpVtbl -> get_Volume(This,pnVolume) ) 

#define ISpeaker_put_Volume(This,pnVolume)	\
    ( (This)->lpVtbl -> put_Volume(This,pnVolume) ) 

#define ISpeaker_get_VolumeSupported(This,pbSupported)	\
    ( (This)->lpVtbl -> get_VolumeSupported(This,pbSupported) ) 

#define ISpeaker_get_SpellMode(This,pbSpell)	\
    ( (This)->lpVtbl -> get_SpellMode(This,pbSpell) ) 

#define ISpeaker_put_SpellMode(This,pbSpell)	\
    ( (This)->lpVtbl -> put_SpellMode(This,pbSpell) ) 

#define ISpeaker_get_SpeakImmediate(This,pbImmediate)	\
    ( (This)->lpVtbl -> get_SpeakImmediate(This,pbImmediate) ) 

#define ISpeaker_put_SpeakImmediate(This,pbImmediate)	\
    ( (This)->lpVtbl -> put_SpeakImmediate(This,pbImmediate) ) 

#define ISpeaker_get_AllowInterrupt(This,pbInterrupt)	\
    ( (This)->lpVtbl -> get_AllowInterrupt(This,pbInterrupt) ) 

#define ISpeaker_put_AllowInterrupt(This,pbInterrupt)	\
    ( (This)->lpVtbl -> put_AllowInterrupt(This,pbInterrupt) ) 

#define ISpeaker_get_Handle(This,pdwSpeakerHandle)	\
    ( (This)->lpVtbl -> get_Handle(This,pdwSpeakerHandle) ) 

#define ISpeaker_get_FileOutputStatus(This,plStatus)	\
    ( (This)->lpVtbl -> get_FileOutputStatus(This,plStatus) ) 

#define ISpeaker_get_SpeakStatus(This,plStatus)	\
    ( (This)->lpVtbl -> get_SpeakStatus(This,plStatus) ) 

#define ISpeaker_Speak(This,bstrText,varDoneEvent)	\
    ( (This)->lpVtbl -> Speak(This,bstrText,varDoneEvent) ) 

#define ISpeaker_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ISpeaker_OutputToWaveFile(This,bstrText,bstrFile,varDoneEvent)	\
    ( (This)->lpVtbl -> OutputToWaveFile(This,bstrText,bstrFile,varDoneEvent) ) 

#define ISpeaker_CancelOutputToWaveFile(This)	\
    ( (This)->lpVtbl -> CancelOutputToWaveFile(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpeaker_INTERFACE_DEFINED__ */


#ifndef __IScriptManager_INTERFACE_DEFINED__
#define __IScriptManager_INTERFACE_DEFINED__

/* interface IScriptManager */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("729772A3-83E7-4D86-A30C-780C24D0BB6C")
    IScriptManager : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DetachScriptTrigger( 
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DetachScriptTriggersFromTriggerPoint( 
            /* [in] */ BSTR bstrTriggerPoint) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DetachScriptTriggersFromAllTriggerPoints( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableScriptTrigger( 
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableScriptTriggerPoint( 
            /* [in] */ BSTR bstrTriggerPoint) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableScriptTriggerPoints( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableScriptTrigger( 
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableScriptTriggerPoint( 
            /* [in] */ BSTR bstrTriggerName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableScriptTriggerPoints( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetTriggerPointFilterData( 
            /* [in] */ BSTR bstrTriggerPoint,
            /* [retval][out] */ IEventDefinition **pTriggerPointData) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetTriggerFilterData( 
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName,
            /* [retval][out] */ IEventDefinition **pTriggerPointData) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableTriggersForScript( 
            /* [in] */ BSTR bstrScript) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableTriggersForScript( 
            /* [in] */ BSTR bstrScript) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DetachScriptTrigger )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DetachScriptTriggersFromTriggerPoint )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerPoint);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DetachScriptTriggersFromAllTriggerPoints )( 
            IScriptManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableScriptTrigger )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableScriptTriggerPoint )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerPoint);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableScriptTriggerPoints )( 
            IScriptManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableScriptTrigger )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableScriptTriggerPoint )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableScriptTriggerPoints )( 
            IScriptManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetTriggerPointFilterData )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerPoint,
            /* [retval][out] */ IEventDefinition **pTriggerPointData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetTriggerFilterData )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrTriggerPoint,
            /* [in] */ BSTR bstrScriptName,
            /* [retval][out] */ IEventDefinition **pTriggerPointData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableTriggersForScript )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrScript);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableTriggersForScript )( 
            IScriptManager * This,
            /* [in] */ BSTR bstrScript);
        
        END_INTERFACE
    } IScriptManagerVtbl;

    interface IScriptManager
    {
        CONST_VTBL struct IScriptManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptManager_DetachScriptTrigger(This,bstrTriggerPoint,bstrScriptName)	\
    ( (This)->lpVtbl -> DetachScriptTrigger(This,bstrTriggerPoint,bstrScriptName) ) 

#define IScriptManager_DetachScriptTriggersFromTriggerPoint(This,bstrTriggerPoint)	\
    ( (This)->lpVtbl -> DetachScriptTriggersFromTriggerPoint(This,bstrTriggerPoint) ) 

#define IScriptManager_DetachScriptTriggersFromAllTriggerPoints(This)	\
    ( (This)->lpVtbl -> DetachScriptTriggersFromAllTriggerPoints(This) ) 

#define IScriptManager_DisableScriptTrigger(This,bstrTriggerPoint,bstrScriptName)	\
    ( (This)->lpVtbl -> DisableScriptTrigger(This,bstrTriggerPoint,bstrScriptName) ) 

#define IScriptManager_DisableScriptTriggerPoint(This,bstrTriggerPoint)	\
    ( (This)->lpVtbl -> DisableScriptTriggerPoint(This,bstrTriggerPoint) ) 

#define IScriptManager_DisableScriptTriggerPoints(This)	\
    ( (This)->lpVtbl -> DisableScriptTriggerPoints(This) ) 

#define IScriptManager_EnableScriptTrigger(This,bstrTriggerPoint,bstrScriptName)	\
    ( (This)->lpVtbl -> EnableScriptTrigger(This,bstrTriggerPoint,bstrScriptName) ) 

#define IScriptManager_EnableScriptTriggerPoint(This,bstrTriggerName)	\
    ( (This)->lpVtbl -> EnableScriptTriggerPoint(This,bstrTriggerName) ) 

#define IScriptManager_EnableScriptTriggerPoints(This)	\
    ( (This)->lpVtbl -> EnableScriptTriggerPoints(This) ) 

#define IScriptManager_GetTriggerPointFilterData(This,bstrTriggerPoint,pTriggerPointData)	\
    ( (This)->lpVtbl -> GetTriggerPointFilterData(This,bstrTriggerPoint,pTriggerPointData) ) 

#define IScriptManager_GetTriggerFilterData(This,bstrTriggerPoint,bstrScriptName,pTriggerPointData)	\
    ( (This)->lpVtbl -> GetTriggerFilterData(This,bstrTriggerPoint,bstrScriptName,pTriggerPointData) ) 

#define IScriptManager_EnableTriggersForScript(This,bstrScript)	\
    ( (This)->lpVtbl -> EnableTriggersForScript(This,bstrScript) ) 

#define IScriptManager_DisableTriggersForScript(This,bstrScript)	\
    ( (This)->lpVtbl -> DisableTriggersForScript(This,bstrScript) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptManager_INTERFACE_DEFINED__ */


#ifndef __ITextSearch_INTERFACE_DEFINED__
#define __ITextSearch_INTERFACE_DEFINED__

/* interface ITextSearch */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITextSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D7614B7-C695-4527-9B99-ACA804AACB5E")
    ITextSearch : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Options( 
            /* [retval][out] */ ITextSearchOption **ppOption) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AtPoint( 
            /* [in] */ IPoint *pPoint,
            /* [retval][out] */ ITextObject **ppTextObj) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CollectionInRect( 
            /* [in] */ IRectangle *pRect,
            /* [retval][out] */ IObjectCollection **ppObjectCollection) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InRect( 
            /* [in] */ IRectangle *pRect,
            /* [retval][out] */ ITextObject **ppTextObject) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TextCursor( 
            /* [retval][out] */ ITextCursor **ppTextCursor) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FirstVisible( 
            /* [retval][out] */ ITextObject **ppTextObject) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindTextObject( 
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IObjectCollection **ppObjectCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextSearch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITextSearch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITextSearch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITextSearch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITextSearch * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ITextSearch * This,
            /* [retval][out] */ ITextSearchOption **ppOption);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AtPoint )( 
            ITextSearch * This,
            /* [in] */ IPoint *pPoint,
            /* [retval][out] */ ITextObject **ppTextObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CollectionInRect )( 
            ITextSearch * This,
            /* [in] */ IRectangle *pRect,
            /* [retval][out] */ IObjectCollection **ppObjectCollection);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InRect )( 
            ITextSearch * This,
            /* [in] */ IRectangle *pRect,
            /* [retval][out] */ ITextObject **ppTextObject);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TextCursor )( 
            ITextSearch * This,
            /* [retval][out] */ ITextCursor **ppTextCursor);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FirstVisible )( 
            ITextSearch * This,
            /* [retval][out] */ ITextObject **ppTextObject);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindTextObject )( 
            ITextSearch * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IObjectCollection **ppObjectCollection);
        
        END_INTERFACE
    } ITextSearchVtbl;

    interface ITextSearch
    {
        CONST_VTBL struct ITextSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextSearch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITextSearch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITextSearch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITextSearch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITextSearch_get_Options(This,ppOption)	\
    ( (This)->lpVtbl -> get_Options(This,ppOption) ) 

#define ITextSearch_AtPoint(This,pPoint,ppTextObj)	\
    ( (This)->lpVtbl -> AtPoint(This,pPoint,ppTextObj) ) 

#define ITextSearch_CollectionInRect(This,pRect,ppObjectCollection)	\
    ( (This)->lpVtbl -> CollectionInRect(This,pRect,ppObjectCollection) ) 

#define ITextSearch_InRect(This,pRect,ppTextObject)	\
    ( (This)->lpVtbl -> InRect(This,pRect,ppTextObject) ) 

#define ITextSearch_TextCursor(This,ppTextCursor)	\
    ( (This)->lpVtbl -> TextCursor(This,ppTextCursor) ) 

#define ITextSearch_FirstVisible(This,ppTextObject)	\
    ( (This)->lpVtbl -> FirstVisible(This,ppTextObject) ) 

#define ITextSearch_FindTextObject(This,bstr,ppObjectCollection)	\
    ( (This)->lpVtbl -> FindTextObject(This,bstr,ppObjectCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextSearch_INTERFACE_DEFINED__ */


#ifndef __ITextSearchOption_INTERFACE_DEFINED__
#define __ITextSearchOption_INTERFACE_DEFINED__

/* interface ITextSearchOption */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITextSearchOption;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6820972A-1ABD-4BCF-924A-60053FAC4A8D")
    ITextSearchOption : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR pType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Area( 
            /* [retval][out] */ BSTR *pArea) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Area( 
            /* [in] */ BSTR pArea) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StartFrom( 
            /* [retval][out] */ BSTR *pStartFrom) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StartFrom( 
            /* [in] */ BSTR pStartFrom) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WholeWords( 
            /* [retval][out] */ VARIANT_BOOL *pWholeWords) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WholeWords( 
            /* [in] */ VARIANT_BOOL pWholeWords) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CaseSensitive( 
            /* [retval][out] */ VARIANT_BOOL *pCase) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CaseSensitive( 
            /* [in] */ VARIANT_BOOL pCase) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextSearchOptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextSearchOption * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextSearchOption * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextSearchOption * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITextSearchOption * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITextSearchOption * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITextSearchOption * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITextSearchOption * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITextSearchOption * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITextSearchOption * This,
            /* [in] */ BSTR pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Area )( 
            ITextSearchOption * This,
            /* [retval][out] */ BSTR *pArea);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Area )( 
            ITextSearchOption * This,
            /* [in] */ BSTR pArea);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartFrom )( 
            ITextSearchOption * This,
            /* [retval][out] */ BSTR *pStartFrom);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartFrom )( 
            ITextSearchOption * This,
            /* [in] */ BSTR pStartFrom);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WholeWords )( 
            ITextSearchOption * This,
            /* [retval][out] */ VARIANT_BOOL *pWholeWords);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WholeWords )( 
            ITextSearchOption * This,
            /* [in] */ VARIANT_BOOL pWholeWords);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CaseSensitive )( 
            ITextSearchOption * This,
            /* [retval][out] */ VARIANT_BOOL *pCase);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CaseSensitive )( 
            ITextSearchOption * This,
            /* [in] */ VARIANT_BOOL pCase);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ITextSearchOption * This);
        
        END_INTERFACE
    } ITextSearchOptionVtbl;

    interface ITextSearchOption
    {
        CONST_VTBL struct ITextSearchOptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextSearchOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextSearchOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextSearchOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextSearchOption_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITextSearchOption_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITextSearchOption_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITextSearchOption_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITextSearchOption_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ITextSearchOption_put_Type(This,pType)	\
    ( (This)->lpVtbl -> put_Type(This,pType) ) 

#define ITextSearchOption_get_Area(This,pArea)	\
    ( (This)->lpVtbl -> get_Area(This,pArea) ) 

#define ITextSearchOption_put_Area(This,pArea)	\
    ( (This)->lpVtbl -> put_Area(This,pArea) ) 

#define ITextSearchOption_get_StartFrom(This,pStartFrom)	\
    ( (This)->lpVtbl -> get_StartFrom(This,pStartFrom) ) 

#define ITextSearchOption_put_StartFrom(This,pStartFrom)	\
    ( (This)->lpVtbl -> put_StartFrom(This,pStartFrom) ) 

#define ITextSearchOption_get_WholeWords(This,pWholeWords)	\
    ( (This)->lpVtbl -> get_WholeWords(This,pWholeWords) ) 

#define ITextSearchOption_put_WholeWords(This,pWholeWords)	\
    ( (This)->lpVtbl -> put_WholeWords(This,pWholeWords) ) 

#define ITextSearchOption_get_CaseSensitive(This,pCase)	\
    ( (This)->lpVtbl -> get_CaseSensitive(This,pCase) ) 

#define ITextSearchOption_put_CaseSensitive(This,pCase)	\
    ( (This)->lpVtbl -> put_CaseSensitive(This,pCase) ) 

#define ITextSearchOption_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextSearchOption_INTERFACE_DEFINED__ */


#ifndef __ITextObject_INTERFACE_DEFINED__
#define __ITextObject_INTERFACE_DEFINED__

/* interface ITextObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITextObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7DC44C70-D1E4-4477-9E4A-CCDB38C862F7")
    ITextObject : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR pType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Next( 
            /* [retval][out] */ ITextObject **ppTextObject) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Previous( 
            /* [retval][out] */ ITextObject **ppTextObject) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IRectangle **pRectangle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplicationObject **pApplication) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ IDispatch **pWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ IFontObject **pFont) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITextObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITextObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITextObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITextObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITextObject * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ITextObject * This,
            /* [in] */ BSTR pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Next )( 
            ITextObject * This,
            /* [retval][out] */ ITextObject **ppTextObject);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Previous )( 
            ITextObject * This,
            /* [retval][out] */ ITextObject **ppTextObject);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ITextObject * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ITextObject * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITextObject * This,
            /* [retval][out] */ IApplicationObject **pApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            ITextObject * This,
            /* [retval][out] */ IDispatch **pWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            ITextObject * This,
            /* [retval][out] */ IFontObject **pFont);
        
        END_INTERFACE
    } ITextObjectVtbl;

    interface ITextObject
    {
        CONST_VTBL struct ITextObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITextObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITextObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITextObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITextObject_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ITextObject_put_Type(This,pType)	\
    ( (This)->lpVtbl -> put_Type(This,pType) ) 

#define ITextObject_get_Next(This,ppTextObject)	\
    ( (This)->lpVtbl -> get_Next(This,ppTextObject) ) 

#define ITextObject_get_Previous(This,ppTextObject)	\
    ( (This)->lpVtbl -> get_Previous(This,ppTextObject) ) 

#define ITextObject_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ITextObject_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ITextObject_get_Application(This,pApplication)	\
    ( (This)->lpVtbl -> get_Application(This,pApplication) ) 

#define ITextObject_get_Window(This,pWindow)	\
    ( (This)->lpVtbl -> get_Window(This,pWindow) ) 

#define ITextObject_get_Font(This,pFont)	\
    ( (This)->lpVtbl -> get_Font(This,pFont) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextObject_INTERFACE_DEFINED__ */


#ifndef __IApplicationObject_INTERFACE_DEFINED__
#define __IApplicationObject_INTERFACE_DEFINED__

/* interface IApplicationObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IApplicationObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30EF42DE-166E-4BD4-B864-0BEC8DC143F3")
    IApplicationObject : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ VARIANT_BOOL *pActive) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProcessID( 
            /* [retval][out] */ long *pProcID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowRoot( 
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplicationObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplicationObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplicationObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplicationObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplicationObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplicationObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplicationObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IApplicationObject * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IApplicationObject * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            IApplicationObject * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessID )( 
            IApplicationObject * This,
            /* [retval][out] */ long *pProcID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowRoot )( 
            IApplicationObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IApplicationObject * This);
        
        END_INTERFACE
    } IApplicationObjectVtbl;

    interface IApplicationObject
    {
        CONST_VTBL struct IApplicationObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IApplicationObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IApplicationObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IApplicationObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IApplicationObject_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IApplicationObject_get_Module(This,Name)	\
    ( (This)->lpVtbl -> get_Module(This,Name) ) 

#define IApplicationObject_get_FriendlyName(This,Name)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) ) 

#define IApplicationObject_get_ProcessID(This,pProcID)	\
    ( (This)->lpVtbl -> get_ProcessID(This,pProcID) ) 

#define IApplicationObject_get_WindowRoot(This,ppWindow)	\
    ( (This)->lpVtbl -> get_WindowRoot(This,ppWindow) ) 

#define IApplicationObject_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationObject_INTERFACE_DEFINED__ */


#ifndef __IFontObject_INTERFACE_DEFINED__
#define __IFontObject_INTERFACE_DEFINED__

/* interface IFontObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IFontObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3B6C1B2-5B5A-48D3-889B-F77B4087E860")
    IFontObject : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FontName( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FontSize( 
            /* [retval][out] */ long *pSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TextColor( 
            /* [retval][out] */ long *pColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
            /* [retval][out] */ long *pColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Bold( 
            /* [retval][out] */ VARIANT_BOOL *pBold) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Italic( 
            /* [retval][out] */ VARIANT_BOOL *pItalic) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Underline( 
            /* [retval][out] */ VARIANT_BOOL *pUnderline) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Strikeout( 
            /* [retval][out] */ VARIANT_BOOL *pStrikeout) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFontObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFontObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFontObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFontObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFontObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFontObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFontObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFontObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontName )( 
            IFontObject * This,
            /* [retval][out] */ BSTR *pName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            IFontObject * This,
            /* [retval][out] */ long *pSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextColor )( 
            IFontObject * This,
            /* [retval][out] */ long *pColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            IFontObject * This,
            /* [retval][out] */ long *pColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Bold )( 
            IFontObject * This,
            /* [retval][out] */ VARIANT_BOOL *pBold);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Italic )( 
            IFontObject * This,
            /* [retval][out] */ VARIANT_BOOL *pItalic);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Underline )( 
            IFontObject * This,
            /* [retval][out] */ VARIANT_BOOL *pUnderline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Strikeout )( 
            IFontObject * This,
            /* [retval][out] */ VARIANT_BOOL *pStrikeout);
        
        END_INTERFACE
    } IFontObjectVtbl;

    interface IFontObject
    {
        CONST_VTBL struct IFontObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFontObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFontObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFontObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFontObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFontObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFontObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFontObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFontObject_get_FontName(This,pName)	\
    ( (This)->lpVtbl -> get_FontName(This,pName) ) 

#define IFontObject_get_FontSize(This,pSize)	\
    ( (This)->lpVtbl -> get_FontSize(This,pSize) ) 

#define IFontObject_get_TextColor(This,pColor)	\
    ( (This)->lpVtbl -> get_TextColor(This,pColor) ) 

#define IFontObject_get_BackgroundColor(This,pColor)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,pColor) ) 

#define IFontObject_get_Bold(This,pBold)	\
    ( (This)->lpVtbl -> get_Bold(This,pBold) ) 

#define IFontObject_get_Italic(This,pItalic)	\
    ( (This)->lpVtbl -> get_Italic(This,pItalic) ) 

#define IFontObject_get_Underline(This,pUnderline)	\
    ( (This)->lpVtbl -> get_Underline(This,pUnderline) ) 

#define IFontObject_get_Strikeout(This,pStrikeout)	\
    ( (This)->lpVtbl -> get_Strikeout(This,pStrikeout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFontObject_INTERFACE_DEFINED__ */


#ifndef __ITextCursor_INTERFACE_DEFINED__
#define __ITextCursor_INTERFACE_DEFINED__

/* interface ITextCursor */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITextCursor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A04731F3-3F79-4AFD-8658-1673D5E56ECE")
    ITextCursor : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IRectangle **pRectangle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ ITextObject **ppTextObject) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplicationObject **pApplication) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ IDispatch **pWindow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextCursorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextCursor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextCursor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextCursor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITextCursor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITextCursor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITextCursor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITextCursor * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ITextCursor * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ITextCursor * This,
            /* [retval][out] */ ITextObject **ppTextObject);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITextCursor * This,
            /* [retval][out] */ IApplicationObject **pApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            ITextCursor * This,
            /* [retval][out] */ IDispatch **pWindow);
        
        END_INTERFACE
    } ITextCursorVtbl;

    interface ITextCursor
    {
        CONST_VTBL struct ITextCursorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextCursor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextCursor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextCursor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextCursor_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITextCursor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITextCursor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITextCursor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITextCursor_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ITextCursor_get_Text(This,ppTextObject)	\
    ( (This)->lpVtbl -> get_Text(This,ppTextObject) ) 

#define ITextCursor_get_Application(This,pApplication)	\
    ( (This)->lpVtbl -> get_Application(This,pApplication) ) 

#define ITextCursor_get_Window(This,pWindow)	\
    ( (This)->lpVtbl -> get_Window(This,pWindow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextCursor_INTERFACE_DEFINED__ */


#ifndef __IApplicationSearch_INTERFACE_DEFINED__
#define __IApplicationSearch_INTERFACE_DEFINED__

/* interface IApplicationSearch */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IApplicationSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4E4B0F5-5321-4E2C-9526-A5B33E890D17")
    IApplicationSearch : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ IApplicationObject **ppApp) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Applications( 
            /* [retval][out] */ IObjectCollection **ppAppColl) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ByModuleName( 
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IObjectCollection **ppAppColl) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AtPoint( 
            /* [in] */ IPoint *pPoint,
            /* [retval][out] */ IApplicationObject **ppApp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplicationSearch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplicationSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplicationSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplicationSearch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplicationSearch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplicationSearch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplicationSearch * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IApplicationSearch * This,
            /* [retval][out] */ IApplicationObject **ppApp);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Applications )( 
            IApplicationSearch * This,
            /* [retval][out] */ IObjectCollection **ppAppColl);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ByModuleName )( 
            IApplicationSearch * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IObjectCollection **ppAppColl);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AtPoint )( 
            IApplicationSearch * This,
            /* [in] */ IPoint *pPoint,
            /* [retval][out] */ IApplicationObject **ppApp);
        
        END_INTERFACE
    } IApplicationSearchVtbl;

    interface IApplicationSearch
    {
        CONST_VTBL struct IApplicationSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationSearch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IApplicationSearch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IApplicationSearch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IApplicationSearch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IApplicationSearch_get_Active(This,ppApp)	\
    ( (This)->lpVtbl -> get_Active(This,ppApp) ) 

#define IApplicationSearch_Applications(This,ppAppColl)	\
    ( (This)->lpVtbl -> Applications(This,ppAppColl) ) 

#define IApplicationSearch_ByModuleName(This,bstr,ppAppColl)	\
    ( (This)->lpVtbl -> ByModuleName(This,bstr,ppAppColl) ) 

#define IApplicationSearch_AtPoint(This,pPoint,ppApp)	\
    ( (This)->lpVtbl -> AtPoint(This,pPoint,ppApp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationSearch_INTERFACE_DEFINED__ */


#ifndef __IWindowSearch_INTERFACE_DEFINED__
#define __IWindowSearch_INTERFACE_DEFINED__

/* interface IWindowSearch */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWindowSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67C6CF6A-AFDA-44BE-BCF9-C70E28C9EE91")
    IWindowSearch : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AtPoint( 
            /* [in] */ IPoint *pPoint,
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindWindowObject( 
            /* [in] */ BSTR bstrClassName,
            /* [in] */ BSTR bstrWindowTitle,
            /* [retval][out] */ IObjectCollection **ppWindow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowSearch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowSearch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowSearch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowSearch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowSearch * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IWindowSearch * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AtPoint )( 
            IWindowSearch * This,
            /* [in] */ IPoint *pPoint,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindWindowObject )( 
            IWindowSearch * This,
            /* [in] */ BSTR bstrClassName,
            /* [in] */ BSTR bstrWindowTitle,
            /* [retval][out] */ IObjectCollection **ppWindow);
        
        END_INTERFACE
    } IWindowSearchVtbl;

    interface IWindowSearch
    {
        CONST_VTBL struct IWindowSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowSearch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowSearch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowSearch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowSearch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowSearch_get_Active(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Active(This,ppWindow) ) 

#define IWindowSearch_AtPoint(This,pPoint,ppWindow)	\
    ( (This)->lpVtbl -> AtPoint(This,pPoint,ppWindow) ) 

#define IWindowSearch_FindWindowObject(This,bstrClassName,bstrWindowTitle,ppWindow)	\
    ( (This)->lpVtbl -> FindWindowObject(This,bstrClassName,bstrWindowTitle,ppWindow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowSearch_INTERFACE_DEFINED__ */


#ifndef __IWindowObject_INTERFACE_DEFINED__
#define __IWindowObject_INTERFACE_DEFINED__

/* interface IWindowObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWindowObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A1F732F-6C70-4B4E-BDF8-B0ECF9500134")
    IWindowObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ VARIANT_BOOL *pActive) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IApplicationObject **ppApplication) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ClassName( 
            /* [retval][out] */ BSTR *pClassName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVisible) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FirstChild( 
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Focus( 
            /* [retval][out] */ VARIANT_BOOL *pActive) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Hotkey( 
            /* [retval][out] */ BSTR *pHotkey) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HWnd( 
            /* [retval][out] */ long *pHWnd) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LastChild( 
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ IRectangle **pRectangle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NextSibling( 
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PreviousSibling( 
            /* [retval][out] */ IDispatch **ppWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pTitle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pVisible) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IWindowObject * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IWindowObject * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IWindowObject * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IWindowObject * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWindowObject * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IWindowObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IWindowObject * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IWindowObject * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IWindowObject * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IWindowObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IWindowObject * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IWindowObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IWindowObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IWindowObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IWindowObject * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IWindowObject * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWindowObject * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IWindowObject * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        END_INTERFACE
    } IWindowObjectVtbl;

    interface IWindowObject
    {
        CONST_VTBL struct IWindowObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowObject_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IWindowObject_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IWindowObject_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IWindowObject_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IWindowObject_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IWindowObject_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IWindowObject_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IWindowObject_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IWindowObject_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IWindowObject_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IWindowObject_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IWindowObject_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IWindowObject_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IWindowObject_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IWindowObject_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IWindowObject_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IWindowObject_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IWindowObject_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowObject_INTERFACE_DEFINED__ */


#ifndef __ICheckBox_INTERFACE_DEFINED__
#define __ICheckBox_INTERFACE_DEFINED__

/* interface ICheckBox */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICheckBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("477F6A4D-AD3D-49BE-A990-C56DD52614FB")
    ICheckBox : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CheckState( 
            /* [retval][out] */ BSTR *pState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICheckBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICheckBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICheckBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICheckBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICheckBox * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICheckBox * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICheckBox * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICheckBox * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ICheckBox * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ICheckBox * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ICheckBox * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ICheckBox * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ICheckBox * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ICheckBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ICheckBox * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ICheckBox * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ICheckBox * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ICheckBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ICheckBox * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ICheckBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ICheckBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ICheckBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ICheckBox * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ICheckBox * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICheckBox * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ICheckBox * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CheckState )( 
            ICheckBox * This,
            /* [retval][out] */ BSTR *pState);
        
        END_INTERFACE
    } ICheckBoxVtbl;

    interface ICheckBox
    {
        CONST_VTBL struct ICheckBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICheckBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICheckBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICheckBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICheckBox_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICheckBox_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICheckBox_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICheckBox_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICheckBox_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ICheckBox_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ICheckBox_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ICheckBox_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ICheckBox_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ICheckBox_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ICheckBox_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ICheckBox_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ICheckBox_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ICheckBox_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ICheckBox_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ICheckBox_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ICheckBox_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ICheckBox_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ICheckBox_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ICheckBox_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ICheckBox_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ICheckBox_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ICheckBox_get_CheckState(This,pState)	\
    ( (This)->lpVtbl -> get_CheckState(This,pState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICheckBox_INTERFACE_DEFINED__ */


#ifndef __IComboBox_INTERFACE_DEFINED__
#define __IComboBox_INTERFACE_DEFINED__

/* interface IComboBox */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IComboBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C644815F-2157-4854-861D-E433DA8DA5B0")
    IComboBox : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedItem( 
            /* [retval][out] */ IItemObject **pListItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfItems( 
            /* [retval][out] */ long *pNumber) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pReadOnly) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Open( 
            /* [retval][out] */ VARIANT_BOOL *pOpen) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComboBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComboBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComboBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComboBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComboBox * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComboBox * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComboBox * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComboBox * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IComboBox * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IComboBox * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IComboBox * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IComboBox * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IComboBox * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IComboBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IComboBox * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IComboBox * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IComboBox * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IComboBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IComboBox * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IComboBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IComboBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IComboBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IComboBox * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IComboBox * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IComboBox * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IComboBox * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )( 
            IComboBox * This,
            /* [retval][out] */ IItemObject **pListItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfItems )( 
            IComboBox * This,
            /* [retval][out] */ long *pNumber);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IComboBox * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Open )( 
            IComboBox * This,
            /* [retval][out] */ VARIANT_BOOL *pOpen);
        
        END_INTERFACE
    } IComboBoxVtbl;

    interface IComboBox
    {
        CONST_VTBL struct IComboBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComboBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComboBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComboBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComboBox_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComboBox_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComboBox_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComboBox_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComboBox_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IComboBox_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IComboBox_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IComboBox_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IComboBox_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IComboBox_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IComboBox_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IComboBox_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IComboBox_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IComboBox_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IComboBox_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IComboBox_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IComboBox_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IComboBox_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IComboBox_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IComboBox_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IComboBox_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IComboBox_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IComboBox_get_SelectedItem(This,pListItem)	\
    ( (This)->lpVtbl -> get_SelectedItem(This,pListItem) ) 

#define IComboBox_get_NumberOfItems(This,pNumber)	\
    ( (This)->lpVtbl -> get_NumberOfItems(This,pNumber) ) 

#define IComboBox_get_ReadOnly(This,pReadOnly)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,pReadOnly) ) 

#define IComboBox_get_Open(This,pOpen)	\
    ( (This)->lpVtbl -> get_Open(This,pOpen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComboBox_INTERFACE_DEFINED__ */


#ifndef __IItemObject_INTERFACE_DEFINED__
#define __IItemObject_INTERFACE_DEFINED__

/* interface IItemObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IItemObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE0E849F-ED2B-494D-9A02-9DB2F021DDA5")
    IItemObject : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Selected( 
            /* [retval][out] */ VARIANT_BOOL *pSelected) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IItemObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IItemObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IItemObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IItemObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IItemObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IItemObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IItemObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IItemObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IItemObject * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IItemObject * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IItemObject * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IItemObject * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IItemObject * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IItemObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IItemObject * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IItemObject * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IItemObject * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IItemObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IItemObject * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IItemObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IItemObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IItemObject * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IItemObject * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IItemObject * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IItemObject * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IItemObject * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Selected )( 
            IItemObject * This,
            /* [retval][out] */ VARIANT_BOOL *pSelected);
        
        END_INTERFACE
    } IItemObjectVtbl;

    interface IItemObject
    {
        CONST_VTBL struct IItemObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IItemObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IItemObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IItemObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IItemObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IItemObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IItemObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IItemObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IItemObject_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IItemObject_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IItemObject_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IItemObject_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IItemObject_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IItemObject_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IItemObject_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IItemObject_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IItemObject_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IItemObject_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IItemObject_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IItemObject_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IItemObject_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IItemObject_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IItemObject_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IItemObject_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IItemObject_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IItemObject_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IItemObject_get_Selected(This,pSelected)	\
    ( (This)->lpVtbl -> get_Selected(This,pSelected) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IItemObject_INTERFACE_DEFINED__ */


#ifndef __IEditBox_INTERFACE_DEFINED__
#define __IEditBox_INTERFACE_DEFINED__

/* interface IEditBox */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEditBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("37E5004F-2BBD-4800-BD87-B8883B6A2A83")
    IEditBox : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pReadOnly) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MultiLine( 
            /* [retval][out] */ VARIANT_BOOL *pMultiLine) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RichText( 
            /* [retval][out] */ VARIANT_BOOL *pRichText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ VARIANT_BOOL *pPassword) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEditBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEditBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEditBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEditBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEditBox * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEditBox * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEditBox * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEditBox * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IEditBox * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IEditBox * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IEditBox * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IEditBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IEditBox * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IEditBox * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IEditBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IEditBox * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IEditBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IEditBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IEditBox * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IEditBox * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IEditBox * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IEditBox * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MultiLine )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pMultiLine);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RichText )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pRichText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            IEditBox * This,
            /* [retval][out] */ VARIANT_BOOL *pPassword);
        
        END_INTERFACE
    } IEditBoxVtbl;

    interface IEditBox
    {
        CONST_VTBL struct IEditBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEditBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEditBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEditBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEditBox_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEditBox_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEditBox_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEditBox_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEditBox_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IEditBox_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IEditBox_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IEditBox_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IEditBox_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IEditBox_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IEditBox_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IEditBox_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IEditBox_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IEditBox_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IEditBox_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IEditBox_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IEditBox_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IEditBox_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IEditBox_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IEditBox_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IEditBox_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IEditBox_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IEditBox_get_ReadOnly(This,pReadOnly)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,pReadOnly) ) 

#define IEditBox_get_MultiLine(This,pMultiLine)	\
    ( (This)->lpVtbl -> get_MultiLine(This,pMultiLine) ) 

#define IEditBox_get_RichText(This,pRichText)	\
    ( (This)->lpVtbl -> get_RichText(This,pRichText) ) 

#define IEditBox_get_Password(This,pPassword)	\
    ( (This)->lpVtbl -> get_Password(This,pPassword) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEditBox_INTERFACE_DEFINED__ */


#ifndef __ILink_INTERFACE_DEFINED__
#define __ILink_INTERFACE_DEFINED__

/* interface ILink */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ILink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FB9E3E9B-374D-4E3F-9203-7C3D8F848F41")
    ILink : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Visited( 
            /* [retval][out] */ VARIANT_BOOL *pVisited) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_URL( 
            /* [retval][out] */ BSTR *pURL) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILink * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILink * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILink * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILink * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ILink * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ILink * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ILink * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ILink * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ILink * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ILink * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ILink * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ILink * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ILink * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ILink * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ILink * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ILink * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ILink * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ILink * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ILink * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ILink * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ILink * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ILink * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visited )( 
            ILink * This,
            /* [retval][out] */ VARIANT_BOOL *pVisited);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            ILink * This,
            /* [retval][out] */ BSTR *pURL);
        
        END_INTERFACE
    } ILinkVtbl;

    interface ILink
    {
        CONST_VTBL struct ILinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILink_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILink_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ILink_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ILink_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ILink_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ILink_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ILink_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ILink_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ILink_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ILink_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ILink_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ILink_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ILink_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ILink_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ILink_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ILink_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ILink_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ILink_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ILink_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ILink_get_Visited(This,pVisited)	\
    ( (This)->lpVtbl -> get_Visited(This,pVisited) ) 

#define ILink_get_URL(This,pURL)	\
    ( (This)->lpVtbl -> get_URL(This,pURL) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILink_INTERFACE_DEFINED__ */


#ifndef __IListView_INTERFACE_DEFINED__
#define __IListView_INTERFACE_DEFINED__

/* interface IListView */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IListView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32A532D8-5F54-4E5A-876A-737A87C8CEE1")
    IListView : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedItem( 
            /* [retval][out] */ IItemObject **pListItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfItems( 
            /* [retval][out] */ long *pNumber) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfColumns( 
            /* [retval][out] */ long *pNumber) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ViewType( 
            /* [retval][out] */ BSTR *pViewType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IListView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IListView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IListView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IListView * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IListView * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IListView * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IListView * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IListView * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IListView * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IListView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IListView * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IListView * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IListView * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IListView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IListView * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IListView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IListView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IListView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IListView * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IListView * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IListView * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IListView * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )( 
            IListView * This,
            /* [retval][out] */ IItemObject **pListItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfItems )( 
            IListView * This,
            /* [retval][out] */ long *pNumber);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfColumns )( 
            IListView * This,
            /* [retval][out] */ long *pNumber);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ViewType )( 
            IListView * This,
            /* [retval][out] */ BSTR *pViewType);
        
        END_INTERFACE
    } IListViewVtbl;

    interface IListView
    {
        CONST_VTBL struct IListViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IListView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IListView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IListView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IListView_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IListView_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IListView_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IListView_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IListView_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IListView_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IListView_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IListView_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IListView_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IListView_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IListView_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IListView_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IListView_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IListView_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IListView_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IListView_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IListView_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IListView_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IListView_get_SelectedItem(This,pListItem)	\
    ( (This)->lpVtbl -> get_SelectedItem(This,pListItem) ) 

#define IListView_get_NumberOfItems(This,pNumber)	\
    ( (This)->lpVtbl -> get_NumberOfItems(This,pNumber) ) 

#define IListView_get_NumberOfColumns(This,pNumber)	\
    ( (This)->lpVtbl -> get_NumberOfColumns(This,pNumber) ) 

#define IListView_get_ViewType(This,pViewType)	\
    ( (This)->lpVtbl -> get_ViewType(This,pViewType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListView_INTERFACE_DEFINED__ */


#ifndef __IMenuItem_INTERFACE_DEFINED__
#define __IMenuItem_INTERFACE_DEFINED__

/* interface IMenuItem */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMenuItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("836A99AD-BCBE-4534-A8A2-73ADDFCC7571")
    IMenuItem : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ShortCut( 
            /* [retval][out] */ BSTR *pShortCut) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Selected( 
            /* [retval][out] */ VARIANT_BOOL *pSelected) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *pChecked) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HasSubmenu( 
            /* [retval][out] */ VARIANT_BOOL *pHasSubmenu) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMenuItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMenuItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMenuItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMenuItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMenuItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMenuItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMenuItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMenuItem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMenuItem * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IMenuItem * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IMenuItem * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IMenuItem * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IMenuItem * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IMenuItem * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IMenuItem * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMenuItem * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IMenuItem * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShortCut )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pShortCut);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Selected )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pSelected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Checked )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pChecked);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasSubmenu )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pHasSubmenu);
        
        END_INTERFACE
    } IMenuItemVtbl;

    interface IMenuItem
    {
        CONST_VTBL struct IMenuItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMenuItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMenuItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMenuItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMenuItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMenuItem_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IMenuItem_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IMenuItem_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IMenuItem_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IMenuItem_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IMenuItem_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IMenuItem_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IMenuItem_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IMenuItem_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IMenuItem_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IMenuItem_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IMenuItem_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IMenuItem_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IMenuItem_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IMenuItem_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IMenuItem_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IMenuItem_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IMenuItem_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IMenuItem_get_ShortCut(This,pShortCut)	\
    ( (This)->lpVtbl -> get_ShortCut(This,pShortCut) ) 

#define IMenuItem_get_Selected(This,pSelected)	\
    ( (This)->lpVtbl -> get_Selected(This,pSelected) ) 

#define IMenuItem_get_Checked(This,pChecked)	\
    ( (This)->lpVtbl -> get_Checked(This,pChecked) ) 

#define IMenuItem_get_HasSubmenu(This,pHasSubmenu)	\
    ( (This)->lpVtbl -> get_HasSubmenu(This,pHasSubmenu) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMenuItem_INTERFACE_DEFINED__ */


#ifndef __IRadioButton_INTERFACE_DEFINED__
#define __IRadioButton_INTERFACE_DEFINED__

/* interface IRadioButton */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IRadioButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0680F1B0-823E-4953-A9FF-F52C407A59FD")
    IRadioButton : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *pChecked) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRadioButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRadioButton * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRadioButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRadioButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRadioButton * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRadioButton * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRadioButton * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRadioButton * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IRadioButton * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IRadioButton * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IRadioButton * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IRadioButton * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IRadioButton * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IRadioButton * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IRadioButton * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IRadioButton * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IRadioButton * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IRadioButton * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IRadioButton * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IRadioButton * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IRadioButton * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IRadioButton * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IRadioButton * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IRadioButton * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IRadioButton * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IRadioButton * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Checked )( 
            IRadioButton * This,
            /* [retval][out] */ VARIANT_BOOL *pChecked);
        
        END_INTERFACE
    } IRadioButtonVtbl;

    interface IRadioButton
    {
        CONST_VTBL struct IRadioButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRadioButton_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRadioButton_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRadioButton_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRadioButton_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRadioButton_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRadioButton_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRadioButton_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRadioButton_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IRadioButton_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IRadioButton_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IRadioButton_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IRadioButton_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IRadioButton_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IRadioButton_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IRadioButton_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IRadioButton_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IRadioButton_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IRadioButton_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IRadioButton_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IRadioButton_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IRadioButton_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IRadioButton_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IRadioButton_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IRadioButton_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IRadioButton_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IRadioButton_get_Checked(This,pChecked)	\
    ( (This)->lpVtbl -> get_Checked(This,pChecked) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRadioButton_INTERFACE_DEFINED__ */


#ifndef __IScrollBar_INTERFACE_DEFINED__
#define __IScrollBar_INTERFACE_DEFINED__

/* interface IScrollBar */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IScrollBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3656A1FC-DFEA-4ACF-9C78-675BE5EA272D")
    IScrollBar : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ BSTR *pDirection) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Percent( 
            /* [retval][out] */ long *pPercent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScrollBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScrollBar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScrollBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScrollBar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScrollBar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScrollBar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScrollBar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScrollBar * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IScrollBar * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IScrollBar * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IScrollBar * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IScrollBar * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IScrollBar * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IScrollBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IScrollBar * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IScrollBar * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IScrollBar * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IScrollBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IScrollBar * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IScrollBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IScrollBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IScrollBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IScrollBar * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IScrollBar * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IScrollBar * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IScrollBar * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            IScrollBar * This,
            /* [retval][out] */ BSTR *pDirection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Percent )( 
            IScrollBar * This,
            /* [retval][out] */ long *pPercent);
        
        END_INTERFACE
    } IScrollBarVtbl;

    interface IScrollBar
    {
        CONST_VTBL struct IScrollBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScrollBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScrollBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScrollBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScrollBar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScrollBar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScrollBar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScrollBar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScrollBar_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IScrollBar_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IScrollBar_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IScrollBar_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IScrollBar_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IScrollBar_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IScrollBar_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IScrollBar_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IScrollBar_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IScrollBar_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IScrollBar_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IScrollBar_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IScrollBar_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IScrollBar_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IScrollBar_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IScrollBar_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IScrollBar_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IScrollBar_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IScrollBar_get_Direction(This,pDirection)	\
    ( (This)->lpVtbl -> get_Direction(This,pDirection) ) 

#define IScrollBar_get_Percent(This,pPercent)	\
    ( (This)->lpVtbl -> get_Percent(This,pPercent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScrollBar_INTERFACE_DEFINED__ */


#ifndef __ITrackBar_INTERFACE_DEFINED__
#define __ITrackBar_INTERFACE_DEFINED__

/* interface ITrackBar */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITrackBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68DD54E0-183D-41AE-BF86-4DA434814302")
    ITrackBar : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ long *pPosition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITrackBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrackBar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrackBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrackBar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITrackBar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITrackBar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITrackBar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITrackBar * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ITrackBar * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ITrackBar * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITrackBar * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ITrackBar * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ITrackBar * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ITrackBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ITrackBar * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ITrackBar * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ITrackBar * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ITrackBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ITrackBar * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ITrackBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ITrackBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ITrackBar * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ITrackBar * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ITrackBar * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITrackBar * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ITrackBar * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITrackBar * This,
            /* [retval][out] */ long *pPosition);
        
        END_INTERFACE
    } ITrackBarVtbl;

    interface ITrackBar
    {
        CONST_VTBL struct ITrackBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrackBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrackBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrackBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrackBar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITrackBar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITrackBar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITrackBar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITrackBar_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ITrackBar_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ITrackBar_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ITrackBar_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ITrackBar_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ITrackBar_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ITrackBar_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ITrackBar_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ITrackBar_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ITrackBar_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ITrackBar_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ITrackBar_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ITrackBar_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ITrackBar_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ITrackBar_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ITrackBar_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ITrackBar_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ITrackBar_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ITrackBar_get_Position(This,pPosition)	\
    ( (This)->lpVtbl -> get_Position(This,pPosition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrackBar_INTERFACE_DEFINED__ */


#ifndef __ITreeView_INTERFACE_DEFINED__
#define __ITreeView_INTERFACE_DEFINED__

/* interface ITreeView */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITreeView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4F521C31-EE39-4CF7-A200-E9850A9C070C")
    ITreeView : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedItem( 
            /* [retval][out] */ IItemObject **pListItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedLevel( 
            /* [retval][out] */ long *pSelectedLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITreeViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITreeView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITreeView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITreeView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITreeView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITreeView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITreeView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITreeView * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ITreeView * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ITreeView * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITreeView * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ITreeView * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ITreeView * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ITreeView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ITreeView * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ITreeView * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ITreeView * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ITreeView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ITreeView * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ITreeView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ITreeView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ITreeView * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ITreeView * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ITreeView * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITreeView * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ITreeView * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )( 
            ITreeView * This,
            /* [retval][out] */ IItemObject **pListItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedLevel )( 
            ITreeView * This,
            /* [retval][out] */ long *pSelectedLevel);
        
        END_INTERFACE
    } ITreeViewVtbl;

    interface ITreeView
    {
        CONST_VTBL struct ITreeViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITreeView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITreeView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITreeView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITreeView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITreeView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITreeView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITreeView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITreeView_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ITreeView_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ITreeView_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ITreeView_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ITreeView_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ITreeView_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ITreeView_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ITreeView_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ITreeView_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ITreeView_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ITreeView_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ITreeView_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ITreeView_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ITreeView_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ITreeView_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ITreeView_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ITreeView_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ITreeView_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ITreeView_get_SelectedItem(This,pListItem)	\
    ( (This)->lpVtbl -> get_SelectedItem(This,pListItem) ) 

#define ITreeView_get_SelectedLevel(This,pSelectedLevel)	\
    ( (This)->lpVtbl -> get_SelectedLevel(This,pSelectedLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITreeView_INTERFACE_DEFINED__ */


#ifndef __ISpeechEventObject_INTERFACE_DEFINED__
#define __ISpeechEventObject_INTERFACE_DEFINED__

/* interface ISpeechEventObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISpeechEventObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8511473E-8FDE-4327-BFAD-EC59F77FCB3F")
    ISpeechEventObject : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Client( 
            /* [retval][out] */ BSTR *pbstrClient) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Client( 
            /* [in] */ BSTR pbstrClient) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR pbstrText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Voice( 
            /* [retval][out] */ IVoice **pVoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ unsigned long *pdwFlags) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Flags( 
            /* [in] */ unsigned long pdwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpeechEventObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpeechEventObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpeechEventObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpeechEventObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpeechEventObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpeechEventObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpeechEventObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpeechEventObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Client )( 
            ISpeechEventObject * This,
            /* [retval][out] */ BSTR *pbstrClient);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Client )( 
            ISpeechEventObject * This,
            /* [in] */ BSTR pbstrClient);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISpeechEventObject * This,
            /* [retval][out] */ BSTR *pbstrText);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISpeechEventObject * This,
            /* [in] */ BSTR pbstrText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Voice )( 
            ISpeechEventObject * This,
            /* [retval][out] */ IVoice **pVoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ISpeechEventObject * This,
            /* [retval][out] */ unsigned long *pdwFlags);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            ISpeechEventObject * This,
            /* [in] */ unsigned long pdwFlags);
        
        END_INTERFACE
    } ISpeechEventObjectVtbl;

    interface ISpeechEventObject
    {
        CONST_VTBL struct ISpeechEventObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpeechEventObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpeechEventObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpeechEventObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpeechEventObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpeechEventObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpeechEventObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpeechEventObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpeechEventObject_get_Client(This,pbstrClient)	\
    ( (This)->lpVtbl -> get_Client(This,pbstrClient) ) 

#define ISpeechEventObject_put_Client(This,pbstrClient)	\
    ( (This)->lpVtbl -> put_Client(This,pbstrClient) ) 

#define ISpeechEventObject_get_Text(This,pbstrText)	\
    ( (This)->lpVtbl -> get_Text(This,pbstrText) ) 

#define ISpeechEventObject_put_Text(This,pbstrText)	\
    ( (This)->lpVtbl -> put_Text(This,pbstrText) ) 

#define ISpeechEventObject_get_Voice(This,pVoice)	\
    ( (This)->lpVtbl -> get_Voice(This,pVoice) ) 

#define ISpeechEventObject_get_Flags(This,pdwFlags)	\
    ( (This)->lpVtbl -> get_Flags(This,pdwFlags) ) 

#define ISpeechEventObject_put_Flags(This,pdwFlags)	\
    ( (This)->lpVtbl -> put_Flags(This,pdwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpeechEventObject_INTERFACE_DEFINED__ */


#ifndef __IEnvironment_INTERFACE_DEFINED__
#define __IEnvironment_INTERFACE_DEFINED__

/* interface IEnvironment */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnvironment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C27BB1E7-6142-4A9D-8DB1-8571B09E4363")
    IEnvironment : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_OperatingSystemVersion( 
            /* [retval][out] */ long *pOpSysVer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnvironmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnvironment * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnvironment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnvironment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnvironment * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnvironment * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnvironment * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnvironment * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OperatingSystemVersion )( 
            IEnvironment * This,
            /* [retval][out] */ long *pOpSysVer);
        
        END_INTERFACE
    } IEnvironmentVtbl;

    interface IEnvironment
    {
        CONST_VTBL struct IEnvironmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnvironment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnvironment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnvironment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnvironment_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnvironment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnvironment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnvironment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnvironment_get_OperatingSystemVersion(This,pOpSysVer)	\
    ( (This)->lpVtbl -> get_OperatingSystemVersion(This,pOpSysVer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnvironment_INTERFACE_DEFINED__ */


#ifndef __IWindowObject2_INTERFACE_DEFINED__
#define __IWindowObject2_INTERFACE_DEFINED__

/* interface IWindowObject2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWindowObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F71A5B7C-BB03-45AC-9703-DDFFF9A94807")
    IWindowObject2 : public IWindowObject
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ControlID( 
            /* [retval][out] */ BSTR *pId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MakeVisible( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Options( 
            /* [retval][out] */ IWindowObjectOption **ppOptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TopMost( 
            /* [retval][out] */ VARIANT_BOOL *pTopMost) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowObject2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowObject2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowObject2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowObject2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowObject2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowObject2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowObject2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IWindowObject2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IWindowObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IWindowObject2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IWindowObject2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWindowObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IWindowObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IWindowObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IWindowObject2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IWindowObject2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IWindowObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IWindowObject2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IWindowObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IWindowObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IWindowObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IWindowObject2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IWindowObject2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWindowObject2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IWindowObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IWindowObject2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IWindowObject2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IWindowObject2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IWindowObject2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IWindowObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        END_INTERFACE
    } IWindowObject2Vtbl;

    interface IWindowObject2
    {
        CONST_VTBL struct IWindowObject2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowObject2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowObject2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowObject2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowObject2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowObject2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowObject2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowObject2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowObject2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IWindowObject2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IWindowObject2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IWindowObject2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IWindowObject2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IWindowObject2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IWindowObject2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IWindowObject2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IWindowObject2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IWindowObject2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IWindowObject2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IWindowObject2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IWindowObject2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IWindowObject2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IWindowObject2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IWindowObject2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IWindowObject2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IWindowObject2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IWindowObject2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IWindowObject2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IWindowObject2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IWindowObject2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IWindowObject2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowObject2_INTERFACE_DEFINED__ */


#ifndef __IWindowObjectOption_INTERFACE_DEFINED__
#define __IWindowObjectOption_INTERFACE_DEFINED__

/* interface IWindowObjectOption */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWindowObjectOption;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D226D606-A89C-4277-A396-AB57F9D2C1BD")
    IWindowObjectOption : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NavigateToNotVisible( 
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NavigateToNotVisible( 
            /* [in] */ VARIANT_BOOL pBool) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NavigateToUnnamed( 
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NavigateToUnnamed( 
            /* [in] */ VARIANT_BOOL pBool) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowObjectOptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowObjectOption * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowObjectOption * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowObjectOption * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowObjectOption * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowObjectOption * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowObjectOption * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowObjectOption * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NavigateToNotVisible )( 
            IWindowObjectOption * This,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NavigateToNotVisible )( 
            IWindowObjectOption * This,
            /* [in] */ VARIANT_BOOL pBool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NavigateToUnnamed )( 
            IWindowObjectOption * This,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NavigateToUnnamed )( 
            IWindowObjectOption * This,
            /* [in] */ VARIANT_BOOL pBool);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWindowObjectOption * This);
        
        END_INTERFACE
    } IWindowObjectOptionVtbl;

    interface IWindowObjectOption
    {
        CONST_VTBL struct IWindowObjectOptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowObjectOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowObjectOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowObjectOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowObjectOption_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowObjectOption_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowObjectOption_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowObjectOption_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowObjectOption_get_NavigateToNotVisible(This,pBool)	\
    ( (This)->lpVtbl -> get_NavigateToNotVisible(This,pBool) ) 

#define IWindowObjectOption_put_NavigateToNotVisible(This,pBool)	\
    ( (This)->lpVtbl -> put_NavigateToNotVisible(This,pBool) ) 

#define IWindowObjectOption_get_NavigateToUnnamed(This,pBool)	\
    ( (This)->lpVtbl -> get_NavigateToUnnamed(This,pBool) ) 

#define IWindowObjectOption_put_NavigateToUnnamed(This,pBool)	\
    ( (This)->lpVtbl -> put_NavigateToUnnamed(This,pBool) ) 

#define IWindowObjectOption_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowObjectOption_INTERFACE_DEFINED__ */


#ifndef __IHeaderControl_INTERFACE_DEFINED__
#define __IHeaderControl_INTERFACE_DEFINED__

/* interface IHeaderControl */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IHeaderControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19E19AE5-D44B-4C67-BA8E-37BDF971BF90")
    IHeaderControl : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ long *pLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHeaderControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHeaderControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHeaderControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHeaderControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHeaderControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHeaderControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHeaderControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHeaderControl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IHeaderControl * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IHeaderControl * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IHeaderControl * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IHeaderControl * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IHeaderControl * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IHeaderControl * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IHeaderControl * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IHeaderControl * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IHeaderControl * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IHeaderControl * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IHeaderControl * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IHeaderControl * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IHeaderControl * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IHeaderControl * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IHeaderControl * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IHeaderControl * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IHeaderControl * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IHeaderControl * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IHeaderControl * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IHeaderControl * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IHeaderControl * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IHeaderControl * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IHeaderControl * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IHeaderControl * This,
            /* [retval][out] */ long *pLevel);
        
        END_INTERFACE
    } IHeaderControlVtbl;

    interface IHeaderControl
    {
        CONST_VTBL struct IHeaderControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHeaderControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHeaderControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHeaderControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHeaderControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHeaderControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHeaderControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHeaderControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHeaderControl_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IHeaderControl_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IHeaderControl_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IHeaderControl_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IHeaderControl_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IHeaderControl_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IHeaderControl_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IHeaderControl_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IHeaderControl_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IHeaderControl_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IHeaderControl_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IHeaderControl_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IHeaderControl_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IHeaderControl_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IHeaderControl_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IHeaderControl_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IHeaderControl_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IHeaderControl_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IHeaderControl_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IHeaderControl_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IHeaderControl_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IHeaderControl_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IHeaderControl_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IHeaderControl_get_Level(This,pLevel)	\
    ( (This)->lpVtbl -> get_Level(This,pLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHeaderControl_INTERFACE_DEFINED__ */


#ifndef __ICheckBox2_INTERFACE_DEFINED__
#define __ICheckBox2_INTERFACE_DEFINED__

/* interface ICheckBox2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICheckBox2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A9140B5-7C86-4A9C-8EA9-5C84755841E1")
    ICheckBox2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CheckState( 
            /* [retval][out] */ BSTR *pState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICheckBox2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICheckBox2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICheckBox2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICheckBox2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICheckBox2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICheckBox2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICheckBox2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICheckBox2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ICheckBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ICheckBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ICheckBox2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ICheckBox2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ICheckBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ICheckBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ICheckBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ICheckBox2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ICheckBox2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ICheckBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ICheckBox2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ICheckBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ICheckBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ICheckBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ICheckBox2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ICheckBox2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICheckBox2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ICheckBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            ICheckBox2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            ICheckBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICheckBox2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            ICheckBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            ICheckBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CheckState )( 
            ICheckBox2 * This,
            /* [retval][out] */ BSTR *pState);
        
        END_INTERFACE
    } ICheckBox2Vtbl;

    interface ICheckBox2
    {
        CONST_VTBL struct ICheckBox2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICheckBox2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICheckBox2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICheckBox2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICheckBox2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICheckBox2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICheckBox2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICheckBox2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICheckBox2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ICheckBox2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ICheckBox2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ICheckBox2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ICheckBox2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ICheckBox2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ICheckBox2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ICheckBox2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ICheckBox2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ICheckBox2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ICheckBox2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ICheckBox2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ICheckBox2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ICheckBox2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ICheckBox2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ICheckBox2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ICheckBox2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ICheckBox2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ICheckBox2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define ICheckBox2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define ICheckBox2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define ICheckBox2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define ICheckBox2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define ICheckBox2_get_CheckState(This,pState)	\
    ( (This)->lpVtbl -> get_CheckState(This,pState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICheckBox2_INTERFACE_DEFINED__ */


#ifndef __IComboBox2_INTERFACE_DEFINED__
#define __IComboBox2_INTERFACE_DEFINED__

/* interface IComboBox2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IComboBox2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A1CA3F99-86F1-4B78-9267-046AD32782C7")
    IComboBox2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedItem( 
            /* [retval][out] */ IItemObject2 **pListItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfItems( 
            /* [retval][out] */ long *pNumber) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pReadOnly) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Open( 
            /* [retval][out] */ VARIANT_BOOL *pOpen) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComboBox2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComboBox2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComboBox2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComboBox2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComboBox2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComboBox2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComboBox2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComboBox2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IComboBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IComboBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IComboBox2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IComboBox2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IComboBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IComboBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IComboBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IComboBox2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IComboBox2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IComboBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IComboBox2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IComboBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IComboBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IComboBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IComboBox2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IComboBox2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IComboBox2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IComboBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IComboBox2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IComboBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IComboBox2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IComboBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IComboBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )( 
            IComboBox2 * This,
            /* [retval][out] */ IItemObject2 **pListItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfItems )( 
            IComboBox2 * This,
            /* [retval][out] */ long *pNumber);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IComboBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Open )( 
            IComboBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pOpen);
        
        END_INTERFACE
    } IComboBox2Vtbl;

    interface IComboBox2
    {
        CONST_VTBL struct IComboBox2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComboBox2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComboBox2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComboBox2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComboBox2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComboBox2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComboBox2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComboBox2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComboBox2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IComboBox2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IComboBox2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IComboBox2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IComboBox2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IComboBox2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IComboBox2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IComboBox2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IComboBox2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IComboBox2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IComboBox2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IComboBox2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IComboBox2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IComboBox2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IComboBox2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IComboBox2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IComboBox2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IComboBox2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IComboBox2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IComboBox2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IComboBox2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IComboBox2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IComboBox2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IComboBox2_get_SelectedItem(This,pListItem)	\
    ( (This)->lpVtbl -> get_SelectedItem(This,pListItem) ) 

#define IComboBox2_get_NumberOfItems(This,pNumber)	\
    ( (This)->lpVtbl -> get_NumberOfItems(This,pNumber) ) 

#define IComboBox2_get_ReadOnly(This,pReadOnly)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,pReadOnly) ) 

#define IComboBox2_get_Open(This,pOpen)	\
    ( (This)->lpVtbl -> get_Open(This,pOpen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComboBox2_INTERFACE_DEFINED__ */


#ifndef __IItemObject2_INTERFACE_DEFINED__
#define __IItemObject2_INTERFACE_DEFINED__

/* interface IItemObject2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IItemObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97787E6B-A70D-4A65-A74A-10A33C031B61")
    IItemObject2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Selected( 
            /* [retval][out] */ VARIANT_BOOL *pSelected) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IItemObject2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IItemObject2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IItemObject2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IItemObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IItemObject2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IItemObject2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IItemObject2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IItemObject2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IItemObject2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IItemObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IItemObject2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IItemObject2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IItemObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IItemObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IItemObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IItemObject2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IItemObject2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IItemObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IItemObject2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IItemObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IItemObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IItemObject2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IItemObject2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IItemObject2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IItemObject2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IItemObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IItemObject2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IItemObject2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IItemObject2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IItemObject2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IItemObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Selected )( 
            IItemObject2 * This,
            /* [retval][out] */ VARIANT_BOOL *pSelected);
        
        END_INTERFACE
    } IItemObject2Vtbl;

    interface IItemObject2
    {
        CONST_VTBL struct IItemObject2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IItemObject2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IItemObject2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IItemObject2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IItemObject2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IItemObject2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IItemObject2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IItemObject2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IItemObject2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IItemObject2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IItemObject2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IItemObject2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IItemObject2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IItemObject2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IItemObject2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IItemObject2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IItemObject2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IItemObject2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IItemObject2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IItemObject2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IItemObject2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IItemObject2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IItemObject2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IItemObject2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IItemObject2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IItemObject2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IItemObject2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IItemObject2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IItemObject2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IItemObject2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IItemObject2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IItemObject2_get_Selected(This,pSelected)	\
    ( (This)->lpVtbl -> get_Selected(This,pSelected) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IItemObject2_INTERFACE_DEFINED__ */


#ifndef __IEditBox2_INTERFACE_DEFINED__
#define __IEditBox2_INTERFACE_DEFINED__

/* interface IEditBox2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEditBox2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EF4FE0D9-8E73-4E99-9D98-4438A4C023B1")
    IEditBox2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pReadOnly) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MultiLine( 
            /* [retval][out] */ VARIANT_BOOL *pMultiLine) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RichText( 
            /* [retval][out] */ VARIANT_BOOL *pRichText) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ VARIANT_BOOL *pPassword) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEditBox2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEditBox2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEditBox2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEditBox2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEditBox2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEditBox2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEditBox2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEditBox2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IEditBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IEditBox2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IEditBox2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IEditBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IEditBox2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IEditBox2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IEditBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IEditBox2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IEditBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IEditBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IEditBox2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IEditBox2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IEditBox2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IEditBox2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IEditBox2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IEditBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IEditBox2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IEditBox2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MultiLine )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pMultiLine);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RichText )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRichText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            IEditBox2 * This,
            /* [retval][out] */ VARIANT_BOOL *pPassword);
        
        END_INTERFACE
    } IEditBox2Vtbl;

    interface IEditBox2
    {
        CONST_VTBL struct IEditBox2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEditBox2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEditBox2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEditBox2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEditBox2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEditBox2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEditBox2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEditBox2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEditBox2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IEditBox2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IEditBox2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IEditBox2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IEditBox2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IEditBox2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IEditBox2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IEditBox2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IEditBox2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IEditBox2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IEditBox2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IEditBox2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IEditBox2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IEditBox2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IEditBox2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IEditBox2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IEditBox2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IEditBox2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IEditBox2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IEditBox2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IEditBox2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IEditBox2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IEditBox2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IEditBox2_get_ReadOnly(This,pReadOnly)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,pReadOnly) ) 

#define IEditBox2_get_MultiLine(This,pMultiLine)	\
    ( (This)->lpVtbl -> get_MultiLine(This,pMultiLine) ) 

#define IEditBox2_get_RichText(This,pRichText)	\
    ( (This)->lpVtbl -> get_RichText(This,pRichText) ) 

#define IEditBox2_get_Password(This,pPassword)	\
    ( (This)->lpVtbl -> get_Password(This,pPassword) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEditBox2_INTERFACE_DEFINED__ */


#ifndef __ILink2_INTERFACE_DEFINED__
#define __ILink2_INTERFACE_DEFINED__

/* interface ILink2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ILink2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F2A6D33C-F60B-4E89-98F2-C00B4413BEFE")
    ILink2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Visited( 
            /* [retval][out] */ VARIANT_BOOL *pVisited) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_URL( 
            /* [retval][out] */ BSTR *pURL) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILink2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILink2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILink2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILink2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILink2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILink2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILink2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILink2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ILink2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ILink2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ILink2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ILink2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ILink2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ILink2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ILink2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ILink2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ILink2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ILink2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ILink2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ILink2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ILink2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ILink2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ILink2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ILink2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ILink2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ILink2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            ILink2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            ILink2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ILink2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            ILink2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            ILink2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visited )( 
            ILink2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisited);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            ILink2 * This,
            /* [retval][out] */ BSTR *pURL);
        
        END_INTERFACE
    } ILink2Vtbl;

    interface ILink2
    {
        CONST_VTBL struct ILink2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILink2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILink2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILink2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILink2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILink2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILink2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILink2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILink2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ILink2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ILink2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ILink2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ILink2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ILink2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ILink2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ILink2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ILink2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ILink2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ILink2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ILink2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ILink2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ILink2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ILink2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ILink2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ILink2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ILink2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ILink2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define ILink2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define ILink2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define ILink2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define ILink2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define ILink2_get_Visited(This,pVisited)	\
    ( (This)->lpVtbl -> get_Visited(This,pVisited) ) 

#define ILink2_get_URL(This,pURL)	\
    ( (This)->lpVtbl -> get_URL(This,pURL) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILink2_INTERFACE_DEFINED__ */


#ifndef __IListView2_INTERFACE_DEFINED__
#define __IListView2_INTERFACE_DEFINED__

/* interface IListView2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IListView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA4119F3-7735-4C7F-980D-F92F20B103D3")
    IListView2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedItem( 
            /* [retval][out] */ IItemObject2 **pListItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfItems( 
            /* [retval][out] */ long *pNumber) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfColumns( 
            /* [retval][out] */ long *pNumber) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ViewType( 
            /* [retval][out] */ BSTR *pViewType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IListView2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IListView2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IListView2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IListView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IListView2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IListView2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IListView2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IListView2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IListView2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IListView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IListView2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IListView2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IListView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IListView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IListView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IListView2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IListView2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IListView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IListView2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IListView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IListView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IListView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IListView2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IListView2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IListView2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IListView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IListView2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IListView2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IListView2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IListView2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IListView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )( 
            IListView2 * This,
            /* [retval][out] */ IItemObject2 **pListItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfItems )( 
            IListView2 * This,
            /* [retval][out] */ long *pNumber);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfColumns )( 
            IListView2 * This,
            /* [retval][out] */ long *pNumber);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ViewType )( 
            IListView2 * This,
            /* [retval][out] */ BSTR *pViewType);
        
        END_INTERFACE
    } IListView2Vtbl;

    interface IListView2
    {
        CONST_VTBL struct IListView2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IListView2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IListView2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IListView2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IListView2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IListView2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IListView2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IListView2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IListView2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IListView2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IListView2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IListView2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IListView2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IListView2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IListView2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IListView2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IListView2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IListView2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IListView2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IListView2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IListView2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IListView2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IListView2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IListView2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IListView2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IListView2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IListView2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IListView2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IListView2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IListView2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IListView2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IListView2_get_SelectedItem(This,pListItem)	\
    ( (This)->lpVtbl -> get_SelectedItem(This,pListItem) ) 

#define IListView2_get_NumberOfItems(This,pNumber)	\
    ( (This)->lpVtbl -> get_NumberOfItems(This,pNumber) ) 

#define IListView2_get_NumberOfColumns(This,pNumber)	\
    ( (This)->lpVtbl -> get_NumberOfColumns(This,pNumber) ) 

#define IListView2_get_ViewType(This,pViewType)	\
    ( (This)->lpVtbl -> get_ViewType(This,pViewType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IListView2_INTERFACE_DEFINED__ */


#ifndef __IMenuItem2_INTERFACE_DEFINED__
#define __IMenuItem2_INTERFACE_DEFINED__

/* interface IMenuItem2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMenuItem2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E11C2304-A3B0-4F17-8C36-1970D709156A")
    IMenuItem2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ShortCut( 
            /* [retval][out] */ BSTR *pShortCut) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Selected( 
            /* [retval][out] */ VARIANT_BOOL *pSelected) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *pChecked) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_HasSubmenu( 
            /* [retval][out] */ VARIANT_BOOL *pHasSubmenu) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMenuItem2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMenuItem2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMenuItem2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMenuItem2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMenuItem2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMenuItem2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMenuItem2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMenuItem2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IMenuItem2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IMenuItem2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IMenuItem2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IMenuItem2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IMenuItem2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IMenuItem2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IMenuItem2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IMenuItem2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IMenuItem2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMenuItem2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IMenuItem2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IMenuItem2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IMenuItem2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMenuItem2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IMenuItem2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IMenuItem2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IMenuItem2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IMenuItem2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShortCut )( 
            IMenuItem2 * This,
            /* [retval][out] */ BSTR *pShortCut);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Selected )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pSelected);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Checked )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pChecked);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasSubmenu )( 
            IMenuItem2 * This,
            /* [retval][out] */ VARIANT_BOOL *pHasSubmenu);
        
        END_INTERFACE
    } IMenuItem2Vtbl;

    interface IMenuItem2
    {
        CONST_VTBL struct IMenuItem2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMenuItem2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMenuItem2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMenuItem2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMenuItem2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMenuItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMenuItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMenuItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMenuItem2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IMenuItem2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IMenuItem2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IMenuItem2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IMenuItem2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IMenuItem2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IMenuItem2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IMenuItem2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IMenuItem2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IMenuItem2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IMenuItem2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IMenuItem2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IMenuItem2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IMenuItem2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IMenuItem2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IMenuItem2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IMenuItem2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IMenuItem2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IMenuItem2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IMenuItem2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IMenuItem2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IMenuItem2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IMenuItem2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IMenuItem2_get_ShortCut(This,pShortCut)	\
    ( (This)->lpVtbl -> get_ShortCut(This,pShortCut) ) 

#define IMenuItem2_get_Selected(This,pSelected)	\
    ( (This)->lpVtbl -> get_Selected(This,pSelected) ) 

#define IMenuItem2_get_Checked(This,pChecked)	\
    ( (This)->lpVtbl -> get_Checked(This,pChecked) ) 

#define IMenuItem2_get_HasSubmenu(This,pHasSubmenu)	\
    ( (This)->lpVtbl -> get_HasSubmenu(This,pHasSubmenu) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMenuItem2_INTERFACE_DEFINED__ */


#ifndef __IObjectStore_INTERFACE_DEFINED__
#define __IObjectStore_INTERFACE_DEFINED__

/* interface IObjectStore */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IObjectStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E81982EC-7A3A-4D15-B126-75CCC520BD81")
    IObjectStore : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR pName,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ BSTR pName,
            /* [retval][out] */ VARIANT *pvarValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObjectStore * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObjectStore * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObjectStore * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectStore * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IObjectStore * This,
            /* [in] */ BSTR pName,
            /* [in] */ VARIANT varValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IObjectStore * This,
            /* [in] */ BSTR bstrName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            IObjectStore * This,
            /* [in] */ BSTR pName,
            /* [retval][out] */ VARIANT *pvarValue);
        
        END_INTERFACE
    } IObjectStoreVtbl;

    interface IObjectStore
    {
        CONST_VTBL struct IObjectStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectStore_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectStore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectStore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectStore_Add(This,pName,varValue)	\
    ( (This)->lpVtbl -> Add(This,pName,varValue) ) 

#define IObjectStore_Delete(This,bstrName)	\
    ( (This)->lpVtbl -> Delete(This,bstrName) ) 

#define IObjectStore_Get(This,pName,pvarValue)	\
    ( (This)->lpVtbl -> Get(This,pName,pvarValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectStore_INTERFACE_DEFINED__ */


#ifndef __IRadioButton2_INTERFACE_DEFINED__
#define __IRadioButton2_INTERFACE_DEFINED__

/* interface IRadioButton2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IRadioButton2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93CEFB5D-E673-434A-AF70-93D4A6FEE9D8")
    IRadioButton2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *pChecked) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRadioButton2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRadioButton2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRadioButton2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRadioButton2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRadioButton2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRadioButton2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRadioButton2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRadioButton2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IRadioButton2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IRadioButton2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IRadioButton2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IRadioButton2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IRadioButton2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IRadioButton2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IRadioButton2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IRadioButton2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IRadioButton2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IRadioButton2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IRadioButton2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IRadioButton2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IRadioButton2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IRadioButton2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IRadioButton2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IRadioButton2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IRadioButton2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IRadioButton2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IRadioButton2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IRadioButton2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IRadioButton2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IRadioButton2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IRadioButton2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Checked )( 
            IRadioButton2 * This,
            /* [retval][out] */ VARIANT_BOOL *pChecked);
        
        END_INTERFACE
    } IRadioButton2Vtbl;

    interface IRadioButton2
    {
        CONST_VTBL struct IRadioButton2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRadioButton2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRadioButton2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRadioButton2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRadioButton2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRadioButton2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRadioButton2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRadioButton2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRadioButton2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IRadioButton2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IRadioButton2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IRadioButton2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IRadioButton2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IRadioButton2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IRadioButton2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IRadioButton2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IRadioButton2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IRadioButton2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IRadioButton2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IRadioButton2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IRadioButton2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IRadioButton2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IRadioButton2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IRadioButton2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IRadioButton2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IRadioButton2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IRadioButton2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IRadioButton2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IRadioButton2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IRadioButton2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IRadioButton2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IRadioButton2_get_Checked(This,pChecked)	\
    ( (This)->lpVtbl -> get_Checked(This,pChecked) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRadioButton2_INTERFACE_DEFINED__ */


#ifndef __IScrollBar2_INTERFACE_DEFINED__
#define __IScrollBar2_INTERFACE_DEFINED__

/* interface IScrollBar2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IScrollBar2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("179608AF-19D4-4D94-83FC-315814B0C0A9")
    IScrollBar2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ BSTR *pDirection) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Percent( 
            /* [retval][out] */ long *pPercent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScrollBar2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScrollBar2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScrollBar2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScrollBar2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScrollBar2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScrollBar2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScrollBar2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScrollBar2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IScrollBar2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IScrollBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IScrollBar2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IScrollBar2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IScrollBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IScrollBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IScrollBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IScrollBar2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IScrollBar2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IScrollBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IScrollBar2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IScrollBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IScrollBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IScrollBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IScrollBar2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IScrollBar2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IScrollBar2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IScrollBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IScrollBar2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IScrollBar2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IScrollBar2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IScrollBar2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IScrollBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            IScrollBar2 * This,
            /* [retval][out] */ BSTR *pDirection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Percent )( 
            IScrollBar2 * This,
            /* [retval][out] */ long *pPercent);
        
        END_INTERFACE
    } IScrollBar2Vtbl;

    interface IScrollBar2
    {
        CONST_VTBL struct IScrollBar2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScrollBar2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScrollBar2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScrollBar2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScrollBar2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScrollBar2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScrollBar2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScrollBar2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScrollBar2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IScrollBar2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IScrollBar2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IScrollBar2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IScrollBar2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IScrollBar2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IScrollBar2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IScrollBar2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IScrollBar2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IScrollBar2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IScrollBar2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IScrollBar2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IScrollBar2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IScrollBar2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IScrollBar2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IScrollBar2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IScrollBar2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IScrollBar2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IScrollBar2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IScrollBar2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IScrollBar2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IScrollBar2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IScrollBar2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IScrollBar2_get_Direction(This,pDirection)	\
    ( (This)->lpVtbl -> get_Direction(This,pDirection) ) 

#define IScrollBar2_get_Percent(This,pPercent)	\
    ( (This)->lpVtbl -> get_Percent(This,pPercent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScrollBar2_INTERFACE_DEFINED__ */


#ifndef __ITrackBar2_INTERFACE_DEFINED__
#define __ITrackBar2_INTERFACE_DEFINED__

/* interface ITrackBar2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITrackBar2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F6B91FE-8DAD-40C6-8151-D3533585BADD")
    ITrackBar2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ long *pPosition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITrackBar2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrackBar2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrackBar2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrackBar2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITrackBar2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITrackBar2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITrackBar2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITrackBar2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ITrackBar2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ITrackBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITrackBar2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ITrackBar2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ITrackBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ITrackBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ITrackBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ITrackBar2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ITrackBar2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ITrackBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ITrackBar2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ITrackBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ITrackBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ITrackBar2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ITrackBar2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ITrackBar2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITrackBar2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ITrackBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            ITrackBar2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            ITrackBar2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ITrackBar2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            ITrackBar2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            ITrackBar2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ITrackBar2 * This,
            /* [retval][out] */ long *pPosition);
        
        END_INTERFACE
    } ITrackBar2Vtbl;

    interface ITrackBar2
    {
        CONST_VTBL struct ITrackBar2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrackBar2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrackBar2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrackBar2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrackBar2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITrackBar2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITrackBar2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITrackBar2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITrackBar2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ITrackBar2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ITrackBar2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ITrackBar2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ITrackBar2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ITrackBar2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ITrackBar2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ITrackBar2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ITrackBar2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ITrackBar2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ITrackBar2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ITrackBar2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ITrackBar2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ITrackBar2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ITrackBar2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ITrackBar2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ITrackBar2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ITrackBar2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ITrackBar2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define ITrackBar2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define ITrackBar2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define ITrackBar2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define ITrackBar2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define ITrackBar2_get_Position(This,pPosition)	\
    ( (This)->lpVtbl -> get_Position(This,pPosition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrackBar2_INTERFACE_DEFINED__ */


#ifndef __ITreeView2_INTERFACE_DEFINED__
#define __ITreeView2_INTERFACE_DEFINED__

/* interface ITreeView2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITreeView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8D6ADCF-E992-45EF-BB3F-A9572DC85752")
    ITreeView2 : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedItem( 
            /* [retval][out] */ IItemObject2 **pListItem) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedLevel( 
            /* [retval][out] */ long *pSelectedLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITreeView2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITreeView2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITreeView2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITreeView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITreeView2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITreeView2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITreeView2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITreeView2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ITreeView2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            ITreeView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITreeView2 * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            ITreeView2 * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            ITreeView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            ITreeView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            ITreeView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            ITreeView2 * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            ITreeView2 * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            ITreeView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ITreeView2 * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            ITreeView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ITreeView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            ITreeView2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ITreeView2 * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ITreeView2 * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ITreeView2 * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ITreeView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            ITreeView2 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            ITreeView2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ITreeView2 * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            ITreeView2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            ITreeView2 * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )( 
            ITreeView2 * This,
            /* [retval][out] */ IItemObject2 **pListItem);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedLevel )( 
            ITreeView2 * This,
            /* [retval][out] */ long *pSelectedLevel);
        
        END_INTERFACE
    } ITreeView2Vtbl;

    interface ITreeView2
    {
        CONST_VTBL struct ITreeView2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITreeView2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITreeView2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITreeView2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITreeView2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITreeView2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITreeView2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITreeView2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITreeView2_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ITreeView2_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define ITreeView2_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define ITreeView2_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define ITreeView2_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define ITreeView2_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define ITreeView2_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define ITreeView2_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define ITreeView2_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define ITreeView2_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define ITreeView2_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define ITreeView2_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define ITreeView2_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define ITreeView2_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define ITreeView2_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define ITreeView2_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define ITreeView2_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define ITreeView2_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define ITreeView2_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define ITreeView2_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define ITreeView2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define ITreeView2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define ITreeView2_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define ITreeView2_get_SelectedItem(This,pListItem)	\
    ( (This)->lpVtbl -> get_SelectedItem(This,pListItem) ) 

#define ITreeView2_get_SelectedLevel(This,pSelectedLevel)	\
    ( (This)->lpVtbl -> get_SelectedLevel(This,pSelectedLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITreeView2_INTERFACE_DEFINED__ */


#ifndef __IWindowSearch2_INTERFACE_DEFINED__
#define __IWindowSearch2_INTERFACE_DEFINED__

/* interface IWindowSearch2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWindowSearch2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFC01288-CB56-4C56-B082-EEDDD8C0E144")
    IWindowSearch2 : public IWindowSearch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Options( 
            /* [retval][out] */ IWindowSearchOption **ppOptions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowSearch2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowSearch2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowSearch2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowSearch2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowSearch2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowSearch2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowSearch2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowSearch2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IWindowSearch2 * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AtPoint )( 
            IWindowSearch2 * This,
            /* [in] */ IPoint *pPoint,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindWindowObject )( 
            IWindowSearch2 * This,
            /* [in] */ BSTR bstrClassName,
            /* [in] */ BSTR bstrWindowTitle,
            /* [retval][out] */ IObjectCollection **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IWindowSearch2 * This,
            /* [retval][out] */ IWindowSearchOption **ppOptions);
        
        END_INTERFACE
    } IWindowSearch2Vtbl;

    interface IWindowSearch2
    {
        CONST_VTBL struct IWindowSearch2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowSearch2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowSearch2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowSearch2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowSearch2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowSearch2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowSearch2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowSearch2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowSearch2_get_Active(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Active(This,ppWindow) ) 

#define IWindowSearch2_AtPoint(This,pPoint,ppWindow)	\
    ( (This)->lpVtbl -> AtPoint(This,pPoint,ppWindow) ) 

#define IWindowSearch2_FindWindowObject(This,bstrClassName,bstrWindowTitle,ppWindow)	\
    ( (This)->lpVtbl -> FindWindowObject(This,bstrClassName,bstrWindowTitle,ppWindow) ) 


#define IWindowSearch2_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowSearch2_INTERFACE_DEFINED__ */


#ifndef __IWindowSearchOption_INTERFACE_DEFINED__
#define __IWindowSearchOption_INTERFACE_DEFINED__

/* interface IWindowSearchOption */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWindowSearchOption;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F4C7C49-96A6-4C87-926A-79083A19D534")
    IWindowSearchOption : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PreferAHOI( 
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PreferAHOI( 
            /* [in] */ VARIANT_BOOL pBool) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PreferZSM( 
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PreferZSM( 
            /* [in] */ VARIANT_BOOL pBool) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FindOnly( 
            /* [retval][out] */ BSTR *pType) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FindOnly( 
            /* [in] */ BSTR pType) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowSearchOptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowSearchOption * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowSearchOption * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowSearchOption * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWindowSearchOption * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWindowSearchOption * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWindowSearchOption * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWindowSearchOption * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreferAHOI )( 
            IWindowSearchOption * This,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PreferAHOI )( 
            IWindowSearchOption * This,
            /* [in] */ VARIANT_BOOL pBool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreferZSM )( 
            IWindowSearchOption * This,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PreferZSM )( 
            IWindowSearchOption * This,
            /* [in] */ VARIANT_BOOL pBool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FindOnly )( 
            IWindowSearchOption * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FindOnly )( 
            IWindowSearchOption * This,
            /* [in] */ BSTR pType);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWindowSearchOption * This);
        
        END_INTERFACE
    } IWindowSearchOptionVtbl;

    interface IWindowSearchOption
    {
        CONST_VTBL struct IWindowSearchOptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowSearchOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowSearchOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowSearchOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowSearchOption_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWindowSearchOption_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWindowSearchOption_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWindowSearchOption_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWindowSearchOption_get_PreferAHOI(This,pBool)	\
    ( (This)->lpVtbl -> get_PreferAHOI(This,pBool) ) 

#define IWindowSearchOption_put_PreferAHOI(This,pBool)	\
    ( (This)->lpVtbl -> put_PreferAHOI(This,pBool) ) 

#define IWindowSearchOption_get_PreferZSM(This,pBool)	\
    ( (This)->lpVtbl -> get_PreferZSM(This,pBool) ) 

#define IWindowSearchOption_put_PreferZSM(This,pBool)	\
    ( (This)->lpVtbl -> put_PreferZSM(This,pBool) ) 

#define IWindowSearchOption_get_FindOnly(This,pType)	\
    ( (This)->lpVtbl -> get_FindOnly(This,pType) ) 

#define IWindowSearchOption_put_FindOnly(This,pType)	\
    ( (This)->lpVtbl -> put_FindOnly(This,pType) ) 

#define IWindowSearchOption_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowSearchOption_INTERFACE_DEFINED__ */


#ifndef __IWebPage_INTERFACE_DEFINED__
#define __IWebPage_INTERFACE_DEFINED__

/* interface IWebPage */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWebPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87908E23-DCFB-4A32-82C6-5E54C4870D4D")
    IWebPage : public IWindowObject2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_URL( 
            /* [retval][out] */ BSTR *pStr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWebPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebPage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebPage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebPage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebPage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebPage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebPage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            IWebPage * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            IWebPage * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IWebPage * This,
            /* [retval][out] */ IApplicationObject **ppApplication);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IWebPage * This,
            /* [retval][out] */ BSTR *pClassName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWebPage * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FirstChild )( 
            IWebPage * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Focus )( 
            IWebPage * This,
            /* [retval][out] */ VARIANT_BOOL *pActive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkey )( 
            IWebPage * This,
            /* [retval][out] */ BSTR *pHotkey);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            IWebPage * This,
            /* [retval][out] */ long *pHWnd);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastChild )( 
            IWebPage * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IWebPage * This,
            /* [retval][out] */ IRectangle **pRectangle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NextSibling )( 
            IWebPage * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IWebPage * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )( 
            IWebPage * This,
            /* [retval][out] */ IDispatch **ppWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IWebPage * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IWebPage * This,
            /* [retval][out] */ BSTR *pTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWebPage * This,
            /* [retval][out] */ BSTR *pType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IWebPage * This,
            /* [retval][out] */ VARIANT_BOOL *pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ControlID )( 
            IWebPage * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MakeVisible )( 
            IWebPage * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            IWebPage * This,
            /* [retval][out] */ IWindowObjectOption **ppOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IWebPage * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopMost )( 
            IWebPage * This,
            /* [retval][out] */ VARIANT_BOOL *pTopMost);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWebPage * This,
            /* [retval][out] */ BSTR *pStr);
        
        END_INTERFACE
    } IWebPageVtbl;

    interface IWebPage
    {
        CONST_VTBL struct IWebPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebPage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebPage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebPage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebPage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebPage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebPage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebPage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebPage_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IWebPage_get_Active(This,pActive)	\
    ( (This)->lpVtbl -> get_Active(This,pActive) ) 

#define IWebPage_get_Application(This,ppApplication)	\
    ( (This)->lpVtbl -> get_Application(This,ppApplication) ) 

#define IWebPage_get_ClassName(This,pClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,pClassName) ) 

#define IWebPage_get_Enabled(This,pVisible)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVisible) ) 

#define IWebPage_get_FirstChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_FirstChild(This,ppWindow) ) 

#define IWebPage_get_Focus(This,pActive)	\
    ( (This)->lpVtbl -> get_Focus(This,pActive) ) 

#define IWebPage_get_Hotkey(This,pHotkey)	\
    ( (This)->lpVtbl -> get_Hotkey(This,pHotkey) ) 

#define IWebPage_get_HWnd(This,pHWnd)	\
    ( (This)->lpVtbl -> get_HWnd(This,pHWnd) ) 

#define IWebPage_get_LastChild(This,ppWindow)	\
    ( (This)->lpVtbl -> get_LastChild(This,ppWindow) ) 

#define IWebPage_get_Location(This,pRectangle)	\
    ( (This)->lpVtbl -> get_Location(This,pRectangle) ) 

#define IWebPage_get_NextSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_NextSibling(This,ppWindow) ) 

#define IWebPage_get_Parent(This,ppWindow)	\
    ( (This)->lpVtbl -> get_Parent(This,ppWindow) ) 

#define IWebPage_get_PreviousSibling(This,ppWindow)	\
    ( (This)->lpVtbl -> get_PreviousSibling(This,ppWindow) ) 

#define IWebPage_get_Text(This,pText)	\
    ( (This)->lpVtbl -> get_Text(This,pText) ) 

#define IWebPage_get_Title(This,pTitle)	\
    ( (This)->lpVtbl -> get_Title(This,pTitle) ) 

#define IWebPage_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IWebPage_get_Visible(This,pVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 


#define IWebPage_get_ControlID(This,pId)	\
    ( (This)->lpVtbl -> get_ControlID(This,pId) ) 

#define IWebPage_MakeVisible(This)	\
    ( (This)->lpVtbl -> MakeVisible(This) ) 

#define IWebPage_get_Options(This,ppOptions)	\
    ( (This)->lpVtbl -> get_Options(This,ppOptions) ) 

#define IWebPage_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IWebPage_get_TopMost(This,pTopMost)	\
    ( (This)->lpVtbl -> get_TopMost(This,pTopMost) ) 


#define IWebPage_get_URL(This,pStr)	\
    ( (This)->lpVtbl -> get_URL(This,pStr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebPage_INTERFACE_DEFINED__ */


#ifndef __IZoomText2_INTERFACE_DEFINED__
#define __IZoomText2_INTERFACE_DEFINED__

/* interface IZoomText2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IZoomText2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C954470B-98E8-4214-A011-B556DBDF26A6")
    IZoomText2 : public IZoomText
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Environment( 
            /* [retval][out] */ IEnvironment **ppObj) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ObjectStore( 
            /* [retval][out] */ IObjectStore **ppObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IZoomText2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZoomText2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZoomText2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZoomText2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZoomText2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZoomText2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZoomText2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZoomText2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveToolMode )( 
            IZoomText2 * This,
            /* [retval][out] */ BSTR *pstrToolMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AhoiManager )( 
            IZoomText2 * This,
            /* [retval][out] */ IAhoiManager2 **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            IZoomText2 * This,
            /* [in] */ BSTR bstrObjName,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IZoomText2 * This,
            /* [retval][out] */ VARIANT_BOOL *pEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IZoomText2 * This,
            /* [in] */ VARIANT_BOOL pEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EventManager )( 
            IZoomText2 * This,
            /* [retval][out] */ IEventManager2 **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetEventData )( 
            IZoomText2 * This,
            /* [in] */ BSTR bstrDataHandle,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hotkeys )( 
            IZoomText2 * This,
            /* [retval][out] */ IHotkeys **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Keyboard )( 
            IZoomText2 * This,
            /* [retval][out] */ IKeyboard **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Magnification )( 
            IZoomText2 * This,
            /* [retval][out] */ IMagnification3 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mouse )( 
            IZoomText2 * This,
            /* [retval][out] */ IMouse **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Reader )( 
            IZoomText2 * This,
            /* [retval][out] */ IReader3 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptConfiguration )( 
            IZoomText2 * This,
            /* [retval][out] */ IScriptConfiguration **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Settings )( 
            IZoomText2 * This,
            /* [retval][out] */ IZoomTextSettings4 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Speech )( 
            IZoomText2 * This,
            /* [retval][out] */ ISpeech2 **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IZoomText2 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ZTCommand )( 
            IZoomText2 * This,
            /* [retval][out] */ IZTCommand **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateObjectFromAhoiId )( 
            IZoomText2 * This,
            /* [in] */ BSTR bstrObjName,
            /* [in] */ tagAHOIOBJECTID AhoiId,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateSpeechEventObject )( 
            IZoomText2 * This,
            /* [in] */ BSTR bstrClient,
            /* [in] */ BSTR bstrText,
            /* [in] */ unsigned long dwFlags,
            /* [retval][out] */ IUnknown **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptManager )( 
            IZoomText2 * This,
            /* [retval][out] */ IScriptManager **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Environment )( 
            IZoomText2 * This,
            /* [retval][out] */ IEnvironment **ppObj);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectStore )( 
            IZoomText2 * This,
            /* [retval][out] */ IObjectStore **ppObj);
        
        END_INTERFACE
    } IZoomText2Vtbl;

    interface IZoomText2
    {
        CONST_VTBL struct IZoomText2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZoomText2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IZoomText2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IZoomText2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IZoomText2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IZoomText2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IZoomText2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IZoomText2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IZoomText2_get_ActiveToolMode(This,pstrToolMode)	\
    ( (This)->lpVtbl -> get_ActiveToolMode(This,pstrToolMode) ) 

#define IZoomText2_get_AhoiManager(This,ppObj)	\
    ( (This)->lpVtbl -> get_AhoiManager(This,ppObj) ) 

#define IZoomText2_CreateObject(This,bstrObjName,ppObj)	\
    ( (This)->lpVtbl -> CreateObject(This,bstrObjName,ppObj) ) 

#define IZoomText2_get_Enabled(This,pEnabled)	\
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) ) 

#define IZoomText2_put_Enabled(This,pEnabled)	\
    ( (This)->lpVtbl -> put_Enabled(This,pEnabled) ) 

#define IZoomText2_get_EventManager(This,ppObj)	\
    ( (This)->lpVtbl -> get_EventManager(This,ppObj) ) 

#define IZoomText2_GetEventData(This,bstrDataHandle,ppObj)	\
    ( (This)->lpVtbl -> GetEventData(This,bstrDataHandle,ppObj) ) 

#define IZoomText2_get_Hotkeys(This,ppObj)	\
    ( (This)->lpVtbl -> get_Hotkeys(This,ppObj) ) 

#define IZoomText2_get_Keyboard(This,ppObj)	\
    ( (This)->lpVtbl -> get_Keyboard(This,ppObj) ) 

#define IZoomText2_get_Magnification(This,ppObj)	\
    ( (This)->lpVtbl -> get_Magnification(This,ppObj) ) 

#define IZoomText2_get_Mouse(This,ppObj)	\
    ( (This)->lpVtbl -> get_Mouse(This,ppObj) ) 

#define IZoomText2_get_Reader(This,ppObj)	\
    ( (This)->lpVtbl -> get_Reader(This,ppObj) ) 

#define IZoomText2_get_ScriptConfiguration(This,ppObj)	\
    ( (This)->lpVtbl -> get_ScriptConfiguration(This,ppObj) ) 

#define IZoomText2_get_Settings(This,ppObj)	\
    ( (This)->lpVtbl -> get_Settings(This,ppObj) ) 

#define IZoomText2_get_Speech(This,ppObj)	\
    ( (This)->lpVtbl -> get_Speech(This,ppObj) ) 

#define IZoomText2_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IZoomText2_get_ZTCommand(This,ppObj)	\
    ( (This)->lpVtbl -> get_ZTCommand(This,ppObj) ) 

#define IZoomText2_CreateObjectFromAhoiId(This,bstrObjName,AhoiId,ppObj)	\
    ( (This)->lpVtbl -> CreateObjectFromAhoiId(This,bstrObjName,AhoiId,ppObj) ) 

#define IZoomText2_CreateSpeechEventObject(This,bstrClient,bstrText,dwFlags,ppObj)	\
    ( (This)->lpVtbl -> CreateSpeechEventObject(This,bstrClient,bstrText,dwFlags,ppObj) ) 

#define IZoomText2_get_ScriptManager(This,ppObj)	\
    ( (This)->lpVtbl -> get_ScriptManager(This,ppObj) ) 


#define IZoomText2_get_Environment(This,ppObj)	\
    ( (This)->lpVtbl -> get_Environment(This,ppObj) ) 

#define IZoomText2_get_ObjectStore(This,ppObj)	\
    ( (This)->lpVtbl -> get_ObjectStore(This,ppObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IZoomText2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ZoomText;

#ifdef __cplusplus

class DECLSPEC_UUID("30BB8BE8-4275-4042-90DA-5F9698744F19")
ZoomText;
#endif
#endif /* __AiSquared_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


