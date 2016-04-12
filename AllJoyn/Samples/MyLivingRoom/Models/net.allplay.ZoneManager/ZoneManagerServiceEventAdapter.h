//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace net { namespace allplay { namespace ZoneManager {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IZoneManagerService. Instead, ZoneManagerServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class ZoneManagerServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IZoneManagerService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerCreateZoneCalledEventArgs^>^ CreateZoneCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerCreateZoneCalledEventArgs^>^ handler) 
        { 
            return _CreateZoneCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ZoneManagerServiceEventAdapter^>(sender), safe_cast<ZoneManagerCreateZoneCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _CreateZoneCalled -= token; 
        } 
    internal: 
        void raise(ZoneManagerServiceEventAdapter^ sender, ZoneManagerCreateZoneCalledEventArgs^ args) 
        { 
            _CreateZoneCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerSetZoneLeadCalledEventArgs^>^ SetZoneLeadCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerSetZoneLeadCalledEventArgs^>^ handler) 
        { 
            return _SetZoneLeadCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ZoneManagerServiceEventAdapter^>(sender), safe_cast<ZoneManagerSetZoneLeadCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetZoneLeadCalled -= token; 
        } 
    internal: 
        void raise(ZoneManagerServiceEventAdapter^ sender, ZoneManagerSetZoneLeadCalledEventArgs^ args) 
        { 
            _SetZoneLeadCalled(sender, args);
        } 
    }

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerGetEnabledRequestedEventArgs^>^ GetEnabledRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerGetEnabledRequestedEventArgs^>^ handler) 
        { 
            return _GetEnabledRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ZoneManagerServiceEventAdapter^>(sender), safe_cast<ZoneManagerGetEnabledRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetEnabledRequested -= token; 
        } 
    internal: 
        void raise(ZoneManagerServiceEventAdapter^ sender, ZoneManagerGetEnabledRequestedEventArgs^ args) 
        { 
            _GetEnabledRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerGetVersionRequestedEventArgs^>^ GetVersionRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ZoneManagerServiceEventAdapter^, ZoneManagerGetVersionRequestedEventArgs^>^ handler) 
        { 
            return _GetVersionRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ZoneManagerServiceEventAdapter^>(sender), safe_cast<ZoneManagerGetVersionRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetVersionRequested -= token; 
        } 
    internal: 
        void raise(ZoneManagerServiceEventAdapter^ sender, ZoneManagerGetVersionRequestedEventArgs^ args) 
        { 
            _GetVersionRequested(sender, args);
        } 
    }

    // Property Write Events
    // IZoneManagerService Implementation
    virtual Windows::Foundation::IAsyncOperation<ZoneManagerCreateZoneResult^>^ CreateZoneAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberSlaves);
    virtual Windows::Foundation::IAsyncOperation<ZoneManagerSetZoneLeadResult^>^ SetZoneLeadAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberZoneId, _In_ Platform::String^ interfaceMemberTimeServerIp, _In_ uint16 interfaceMemberTimeServerPort);

    virtual Windows::Foundation::IAsyncOperation<ZoneManagerGetEnabledResult^>^ GetEnabledAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<ZoneManagerGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);


private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _CreateZoneCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetZoneLeadCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetEnabledRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetVersionRequested;
};

} } } 