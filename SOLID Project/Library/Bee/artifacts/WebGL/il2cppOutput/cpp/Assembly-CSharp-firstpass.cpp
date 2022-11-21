#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_tEC2DBE93CE8B9DBF9FF119D19F030262232B8C8F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_t779BD4DD4D2D5862F11D210EB514218FC564C932;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_t5BEC0C6BFCDE0DC45F7F0BF2D874E97F714B403D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_t1124A8801B2CF1A103574DCC94430B7E13140142;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t6EA5EEB53B9A827CA69F3FB4DF0F5E735DB77E1A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_t66ADAB633BA1A6095DADCA32FAE0806B7579DE8C;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200;
// System.Exception
struct Exception_t;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D;
// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7;
// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct HeadBob_tD499F09A0FC930637D9575F563919F454A3E3E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1;
// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10
struct U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8;
// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9
struct U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32;
// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4
struct U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797;

IL2CPP_EXTERN_C RuntimeClass* AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA6EEDCE2E77DE061420FA38CA55104CE5A588E;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9;
IL2CPP_EXTERN_C String_t* _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDED3C895BE054B4A0AD269D921EF3D2FE101EE44;
IL2CPP_EXTERN_C String_t* _stringLiteralE1921D3070489B1532E810684C2992B44215A052;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m57982534B7F6F473EF75801DD825CFCD88EA8DD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m00CF47D66B2843E488ADAD38EF816621E8A7111F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mEA0303C181C5BDEF8F60F11344EB2DC08F7AE77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m793D4B6D3920C73FBC30267C18F3C734C8D92940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD10BFB6B487D9959F2B269ED0D719A4E7F9395C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m305A5DD72F1CAE2229F74082CC03DC3D7975CA63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m42A903ED11F6425F1BCF4C142D14A0E955F1732D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FOVKick_CheckStatus_mE5A4C8D5B46C1971F434E7E207E21A9DC3EDB5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisNegative_mCE8C3094324B5A86388B8387E8E66C796576B482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisPositive_m10B0D98E7C0FBDDB95CFDC6AEFA95CD5B197192E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisZero_m26FB53017C9E066DEF72387B2A1DFB8106CF5E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxis_m7536D55B9E48E66ABA27727BE1B1C1C3CFF75C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonDown_m1E5353A39619C3E7A984DBB4CEE2723FCF62BE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonUp_mBFF7876850BB9450FC67F16901A596211F4F9E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_Reset_m0A0B723C13AA6C8A506379390E9F8A9AD973D5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_Reset_m6620A1366E0EA3DB3D3B580463E72520A26FFB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_Reset_m2A4AE0E6A70D4E36FF29376CA0DF68A7F3FBD703_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6EA5EEB53B9A827CA69F3FB4DF0F5E735DB77E1A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEC2DBE93CE8B9DBF9FF119D19F030262232B8C8F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5BEC0C6BFCDE0DC45F7F0BF2D874E97F714B403D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t66ADAB633BA1A6095DADCA32FAE0806B7579DE8C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t779BD4DD4D2D5862F11D210EB514218FC564C932* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1124A8801B2CF1A103574DCC94430B7E13140142* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C  : public RuntimeObject
{
};

struct CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields
{
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* ___s_HardwareInput_2;
};

// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D  : public RuntimeObject
{
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___IncreaseCurve_5;
};

// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::m_Offset
	float ___m_Offset_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;
};

// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10
struct U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8  : public RuntimeObject
{
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<>4__this
	FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::<t>5__2
	float ___U3CtU3E5__2_3;
};

// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9
struct U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32  : public RuntimeObject
{
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<>4__this
	FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::<t>5__2
	float ___U3CtU3E5__2_3;
};

// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4
struct U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5  : public RuntimeObject
{
	// System.Int32 UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<>4__this
	LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* ___U3CU3E4__this_2;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::<t>5__2
	float ___U3CtU3E5__2_3;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::groundCheckDistance
	float ___groundCheckDistance_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::stickToGroundHelperDistance
	float ___stickToGroundHelperDistance_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::slowDownRate
	float ___slowDownRate_2;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::airControl
	bool ___airControl_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::shellOffset
	float ___shellOffset_4;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::ForwardSpeed
	float ___ForwardSpeed_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::BackwardSpeed
	float ___BackwardSpeed_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::StrafeSpeed
	float ___StrafeSpeed_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunMultiplier
	float ___RunMultiplier_3;
	// UnityEngine.KeyCode UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunKey
	int32_t ___RunKey_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::JumpForce
	float ___JumpForce_5;
	// UnityEngine.AnimationCurve UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::SlopeCurveModifier
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___SlopeCurveModifier_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::CurrentTargetSpeed
	float ___CurrentTargetSpeed_7;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::m_Running
	bool ___m_Running_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_0;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Bobcurve_2;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_3;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionX
	float ___m_CyclePositionX_4;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionY
	float ___m_CyclePositionY_5;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_BobBaseInterval
	float ___m_BobBaseInterval_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_7;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_Time
	float ___m_Time_8;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::XSensitivity
	float ___XSensitivity_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::YSensitivity
	float ___YSensitivity_1;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::clampVerticalRotation
	bool ___clampVerticalRotation_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MinimumX
	float ___MinimumX_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MaximumX
	float ___MaximumX_4;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::smooth
	bool ___smooth_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::smoothTime
	float ___smoothTime_6;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::lockCursor
	bool ___lockCursor_7;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CharacterTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CharacterTargetRot_8;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CameraTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CameraTargetRot_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::m_cursorIsLocked
	bool ___m_cursorIsLocked_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_AlwaysUseVirtual_3;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9  : public VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D
{
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D  : public VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_IsWalking
	bool ___m_IsWalking_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_WalkSpeed
	float ___m_WalkSpeed_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunSpeed
	float ___m_RunSpeed_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunstepLenghten
	float ___m_RunstepLenghten_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSpeed
	float ___m_JumpSpeed_8;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StickToGroundForce
	float ___m_StickToGroundForce_9;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_GravityMultiplier
	float ___m_GravityMultiplier_10;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MouseLook
	MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* ___m_MouseLook_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseFovKick
	bool ___m_UseFovKick_12;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FovKick
	FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* ___m_FovKick_13;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseHeadBob
	bool ___m_UseHeadBob_14;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_HeadBob
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* ___m_HeadBob_15;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpBob
	LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* ___m_JumpBob_16;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepInterval
	float ___m_StepInterval_17;
	// UnityEngine.AudioClip[] UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FootstepSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___m_FootstepSounds_18;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_JumpSound_19;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_LandSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_LandSound_20;
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_21;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jump
	bool ___m_Jump_22;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_YRotation
	float ___m_YRotation_23;
	// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Input_24;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MoveDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDir_25;
	// UnityEngine.CharacterController UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_26;
	// UnityEngine.CollisionFlags UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CollisionFlags
	int32_t ___m_CollisionFlags_27;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_28;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_29;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepCycle
	float ___m_StepCycle_30;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_NextStep
	float ___m_NextStep_31;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jumping
	bool ___m_Jumping_32;
	// UnityEngine.AudioSource UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_AudioSource_33;
};

// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct HeadBob_tD499F09A0FC930637D9575F563919F454A3E3E8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.HeadBob::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* ___motionBob_5;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* ___jumpAndLandingBob_6;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnityStandardAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* ___rigidbodyFirstPersonController_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_8;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.HeadBob::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_10;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.HeadBob::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_11;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::movementSettings
	MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* ___movementSettings_5;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::mouseLook
	MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* ___mouseLook_6;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::advancedSettings
	AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* ___advancedSettings_7;
	// UnityEngine.Rigidbody UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_RigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_RigidBody_8;
	// UnityEngine.CapsuleCollider UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___m_Capsule_9;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_YRotation
	float ___m_YRotation_10;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_GroundContactNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_GroundContactNormal_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jump
	bool ___m_Jump_12;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_13;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jumping
	bool ___m_Jumping_14;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_IsGrounded
	bool ___m_IsGrounded_15;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_CheckStatus_mE5A4C8D5B46C1971F434E7E207E21A9DC3EDB5E0 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ed__9__ctor_m94A251F28F9DA9224CDA08587D41AB9A8753875E (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ed__10__ctor_m56E65981DACC7B0F56258E7DF1131AB9E1832E11 (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ed__4__ctor_m7C4CE3859418AE1626D6FAF4582436786A8D4070 (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7 (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m07059ED5F2B9B0CAD1E4236B6B48D2389C296733 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_mD647D2B31817BF5FD4A882F8F695E6FB463D8468 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mED2FABA84EE1C5E4F464D1EB22A746A7B49A32DB (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m01FC46D132CE9A53E128F091D53F0A4ABFBC75CF (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_mB78A29811E4ACE37253488549970615358007256 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* ___axis0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m77D934CDC1ACF8C60D435EDE229D1FC29A950BFD (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* ___button0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mE52BC71A1382C85BFA9E5B604FFADB7DDEB00364 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mC5933B08DF96B5E56CC35922E745F05C78B902AB (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* VirtualInput_VirtualAxisReference_mAD34229AA6FC0FF71F66A776E66853B47DD17301 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mCA243277C31388751E310E98E38C0D7645BC9DF0 (String_t* ___name0, bool ___raw1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_mD950764D7B140DFD39999B9C36A1FC527BB18B95 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_mA7F72188309360B9662EE393983183308B85C13B (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m0F88050AF38D8B27BDFEC2B501DB0FDBE54BAF43 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mB68089D9540C9F6FAB7374B51AC6350C9CF2D156 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m1ACC9260F42FF6B84F7FE033FDCD39E5B84D39CD_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m64B5DDE21842217E453CF99A61D473EF8E8111B8_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m57982534B7F6F473EF75801DD825CFCD88EA8DD0 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m0729B25EBD030FF90211D5D707B84DA39E5AC834 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mDD23E2B0311CA404527187BC10C06BDABA2262AC_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_mB580A9CD9D60CACAC2CBBB9569BA68D418450E69_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m9166593955394F3BBFE861CD0C93869392301012 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4 (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(TKey,TValue)
inline void Dictionary_2_Add_mEA0303C181C5BDEF8F60F11344EB2DC08F7AE77A (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* __this, String_t* ___key0, VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062*, String_t*, VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF8E152814D898FE8F54D4E1CD12A593820A25937_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(TKey,TValue)
inline void Dictionary_2_Add_m00CF47D66B2843E488ADAD38EF816621E8A7111F (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* __this, String_t* ___key0, VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854*, String_t*, VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m7B2AA7C47390156121D9DA0C84B11806275EB2C4_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(TKey)
inline bool Dictionary_2_Remove_m793D4B6D3920C73FBC30267C18F3C734C8D92940 (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(TKey)
inline bool Dictionary_2_Remove_mD10BFB6B487D9959F2B269ED0D719A4E7F9395C4 (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(TKey)
inline VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42 (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* (*) (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m695B765261F304C42498A2A1A08ACB8705857CE9_inline (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_m305A5DD72F1CAE2229F74082CC03DC3D7975CA63 (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_m42A903ED11F6425F1BCF4C142D14A0E955F1732D (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m08D38A950516399E44D084FD0B1C0D6C1064B001 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m0AFEEED4ACE56F68DDD8C49CD064AB72BC8448B4 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* ___button0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mB7D39B75EDF8642254F8621FE2B10B634D297AD5 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_m5D690E4BE40A7A1104AD08BA8FB7F84CFB21FEBA (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* ___axis0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m84F66639D48511D97F8E71A37488745E9112CE5F (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m3208970D6C40FC8AA0304330C7BB4E3797F7EDE7_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_m8EAE0FECC9BDCECC2E6EC5A964AA78F6FBDE251D (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(TKey)
inline VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* (*) (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_m3872C7EDE943398CE5769D0A9E0E6686FC673C9D (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m359DAE002A4035E09419F599F18CB10411229B76 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_mBF84A169980643545AC4F1A771A32B8BAAD1E7A0_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_mDF48F18DE1BC8DF6D05852022AAE246F3D9E97B5 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m5721A8485FCCFCC67F52242319422FB2AB998632 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mFCD3B5447C6EEF1E177F556973D9BA199AE24E5F_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_mF5E08A62E03FFBF955939A5637E36B1BD5184ECD (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_Setup_m4F9584C1610E1B767B6547BAB08E799D9F90F505 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob_Setup_m6692CB7489082BA46CF2FF7CE2D16CE9218E2AD3 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___bobBaseInterval1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_mC5AAE8B6B989184410638B22566688441DD33E5A (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_m6DA625811334A3E1E56D0E1A29D1092BAA9F1E92 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m2AEC6C7F5E5D3987230E51A4575A3CB6A7088C88 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LerpControlledBob_DoBobCycle_m457BF7490A4DDC7B31C7675752F83D630D4D8D65 (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayLandingSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayLandingSound_m18A84CB1D601381B9BA86FE5425D0458EF56103A (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mA973EBB03719A5E34DCE7DD7B438705438F1A45B (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, float* ___speed0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayJumpSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayJumpSound_m55067E55D2BE70BE968DC6A15FDC62CDBD284495 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mDF204426B84DD1528532DB9BBC09E86CA25A5066 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_m09FA04C68EC864EFECC77850A8CA1648F7B38E9E (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_mE013EB69C8F810DB9263394540DDE576B65AC63B (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayFootStepAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayFootStepAudio_mFEFD2622D2B40F74AEBCC04F58ED2F41F5120FE1 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurveControlledBob_DoHeadBob_m939E73B581223054E433FA94C53044A39589C789 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickDown_m3A72FD589557D6FBD4898FE2C414887AC9B8EEA8 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickUp_mF7BD01A8C076F8D85D51C419F15EF3DC26F65A73 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m4B5863D269A1137FEC7B29C122F3F9A72619C89E (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick__ctor_mDF56243B3AC3548DDE2A9BDE0B5647D3651FE1DC (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob__ctor_mB3869A153057F97DE66D6E864AFC2FBA95D5C463 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpControlledBob__ctor_m51BAF74545894A740D2526114BE0C39E105BAD79 (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RigidbodyFirstPersonController_get_Velocity_m58E7BC7E88DA9897BD58C34DD008D6DF78E2EF0E (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Grounded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_m9F37AC22D1EEBBB4B2E8A3239C36A1EE03964392_inline (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Running_m7968161B7591E9305BB102D7FD873454D1DCE537 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m73E9685DBD0CE9FBCB8192A051D949B7CF1E41AE (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_mDCAA44FD6A3956B3DD9C51EB879AAED23947C32A (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::get_Running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_m0227D0724C131EBAF7BF35FD2CB6B7B46C175BA2_inline (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_RotateView_m0BA89B180C3A77FA035A8C6F5428F3B436C65AD5 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_GroundCheck_m3C8FF34BEECF513A15B59BBCCC1BDCD00EFBAFD1 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RigidbodyFirstPersonController_GetInput_m22E6EF8D289E18BA5A0C7D282E57ED5BCC4BA981 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::SlopeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RigidbodyFirstPersonController_SlopeMultiplier_mE7FEF1D2A4A5FCE7628766B025AD261BD7FC28DC (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::Sleep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::StickToGroundHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_StickToGroundHelper_m0DF00DF8875A8762FC6CA1CE41987CCD6202B685 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::UpdateDesiredTargetSpeed(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings_UpdateDesiredTargetSpeed_m2193667C84E4A5981CE22D64DC7F517D19F841DC (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings__ctor_m12E4B7AC6862A57BC5D3B0BC69B70236783D3DBD (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_mAFD9B314262B2610E073FD482C80CC06D8819F6B (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m97C8FC11BB389DB0BB737596F305466292954DA0 (AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob_Setup_m6692CB7489082BA46CF2FF7CE2D16CE9218E2AD3 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___bobBaseInterval1, const RuntimeMethod* method) 
{
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_BobBaseInterval = bobBaseInterval;
		float L_0 = ___bobBaseInterval1;
		__this->___m_BobBaseInterval_6 = L_0;
		// m_OriginalCameraPosition = camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___camera0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___m_OriginalCameraPosition_7 = L_3;
		// m_Time = Bobcurve[Bobcurve.length - 1].time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = __this->___Bobcurve_2;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___Bobcurve_2;
		int32_t L_6;
		L_6 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_5, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_7;
		L_7 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_0), NULL);
		__this->___m_Time_8 = L_8;
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurveControlledBob_DoHeadBob_m939E73B581223054E433FA94C53044A39589C789 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, float ___speed0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float xPos = m_OriginalCameraPosition.x + (Bobcurve.Evaluate(m_CyclePositionX)*HorizontalBobRange);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___m_OriginalCameraPosition_7);
		float L_1 = L_0->___x_2;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = __this->___Bobcurve_2;
		float L_3 = __this->___m_CyclePositionX_4;
		float L_4;
		L_4 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_2, L_3, NULL);
		float L_5 = __this->___HorizontalBobRange_0;
		// float yPos = m_OriginalCameraPosition.y + (Bobcurve.Evaluate(m_CyclePositionY)*VerticalBobRange);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___m_OriginalCameraPosition_7);
		float L_7 = L_6->___y_3;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___Bobcurve_2;
		float L_9 = __this->___m_CyclePositionY_5;
		float L_10;
		L_10 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_8, L_9, NULL);
		float L_11 = __this->___VerticalBobRange_1;
		V_0 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		// m_CyclePositionX += (speed*Time.deltaTime)/m_BobBaseInterval;
		float L_12 = __this->___m_CyclePositionX_4;
		float L_13 = ___speed0;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_15 = __this->___m_BobBaseInterval_6;
		__this->___m_CyclePositionX_4 = ((float)il2cpp_codegen_add(L_12, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15))));
		// m_CyclePositionY += ((speed*Time.deltaTime)/m_BobBaseInterval)*VerticaltoHorizontalRatio;
		float L_16 = __this->___m_CyclePositionY_5;
		float L_17 = ___speed0;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_19 = __this->___m_BobBaseInterval_6;
		float L_20 = __this->___VerticaltoHorizontalRatio_3;
		__this->___m_CyclePositionY_5 = ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(L_17, L_18))/L_19)), L_20))));
		// if (m_CyclePositionX > m_Time)
		float L_21 = __this->___m_CyclePositionX_4;
		float L_22 = __this->___m_Time_8;
		G_B1_0 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		if ((!(((float)L_21) > ((float)L_22))))
		{
			G_B2_0 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_4, L_5))));
			goto IL_00a7;
		}
	}
	{
		// m_CyclePositionX = m_CyclePositionX - m_Time;
		float L_23 = __this->___m_CyclePositionX_4;
		float L_24 = __this->___m_Time_8;
		__this->___m_CyclePositionX_4 = ((float)il2cpp_codegen_subtract(L_23, L_24));
		G_B2_0 = G_B1_0;
	}

IL_00a7:
	{
		// if (m_CyclePositionY > m_Time)
		float L_25 = __this->___m_CyclePositionY_5;
		float L_26 = __this->___m_Time_8;
		G_B3_0 = G_B2_0;
		if ((!(((float)L_25) > ((float)L_26))))
		{
			G_B4_0 = G_B2_0;
			goto IL_00c8;
		}
	}
	{
		// m_CyclePositionY = m_CyclePositionY - m_Time;
		float L_27 = __this->___m_CyclePositionY_5;
		float L_28 = __this->___m_Time_8;
		__this->___m_CyclePositionY_5 = ((float)il2cpp_codegen_subtract(L_27, L_28));
		G_B4_0 = G_B3_0;
	}

IL_00c8:
	{
		// return new Vector3(xPos, yPos, 0f);
		float L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), G_B4_0, L_29, (0.0f), /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob__ctor_mB3869A153057F97DE66D6E864AFC2FBA95D5C463 (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float HorizontalBobRange = 0.33f;
		__this->___HorizontalBobRange_0 = (0.330000013f);
		// public float VerticalBobRange = 0.33f;
		__this->___VerticalBobRange_1 = (0.330000013f);
		// public AnimationCurve Bobcurve = new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(0.5f, 1f),
		//                                                     new Keyframe(1f, 0f), new Keyframe(1.5f, -1f),
		//                                                     new Keyframe(2f, 0f)); // sin curve for head bob
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_8), (1.5f), (-1.0f), /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_8);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_10), (2.0f), (0.0f), /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_10);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_11, L_9, NULL);
		__this->___Bobcurve_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Bobcurve_2), (void*)L_11);
		// public float VerticaltoHorizontalRatio = 1f;
		__this->___VerticaltoHorizontalRatio_3 = (1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_Setup_m4F9584C1610E1B767B6547BAB08E799D9F90F505 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	{
		// CheckStatus(camera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		FOVKick_CheckStatus_mE5A4C8D5B46C1971F434E7E207E21A9DC3EDB5E0(__this, L_0, NULL);
		// Camera = camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___camera0;
		__this->___Camera_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Camera_0), (void*)L_1);
		// originalFov = camera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera0;
		float L_3;
		L_3 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_2, NULL);
		__this->___originalFov_1 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::CheckStatus(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_CheckStatus_mE5A4C8D5B46C1971F434E7E207E21A9DC3EDB5E0 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new Exception("FOVKick camera is null, please supply the camera to the constructor");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EA6EEDCE2E77DE061420FA38CA55104CE5A588E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FOVKick_CheckStatus_mE5A4C8D5B46C1971F434E7E207E21A9DC3EDB5E0_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (IncreaseCurve == null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___IncreaseCurve_5;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new Exception(
		//     "FOVKick Increase curve is null, please define the curve for the field of view kicks");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDED3C895BE054B4A0AD269D921EF3D2FE101EE44)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FOVKick_CheckStatus_mE5A4C8D5B46C1971F434E7E207E21A9DC3EDB5E0_RuntimeMethod_var)));
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::ChangeCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_ChangeCamera_m0BBA710524BCA5071FD0D58EC360F3883B62F61E (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	{
		// Camera = camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		__this->___Camera_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Camera_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickUp_mF7BD01A8C076F8D85D51C419F15EF3DC26F65A73 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* L_0 = (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32*)il2cpp_codegen_object_new(U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32_il2cpp_TypeInfo_var);
		U3CFOVKickUpU3Ed__9__ctor_m94A251F28F9DA9224CDA08587D41AB9A8753875E(L_0, 0, NULL);
		U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickDown_m3A72FD589557D6FBD4898FE2C414887AC9B8EEA8 (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* L_0 = (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8*)il2cpp_codegen_object_new(U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8_il2cpp_TypeInfo_var);
		U3CFOVKickDownU3Ed__10__ctor_m56E65981DACC7B0F56258E7DF1131AB9E1832E11(L_0, 0, NULL);
		U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick__ctor_mDF56243B3AC3548DDE2A9BDE0B5647D3651FE1DC (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* __this, const RuntimeMethod* method) 
{
	{
		// public float FOVIncrease = 3f;                  // the amount the field of view increases when going into a run
		__this->___FOVIncrease_2 = (3.0f);
		// public float TimeToIncrease = 1f;               // the amount of time the field of view will increase over
		__this->___TimeToIncrease_3 = (1.0f);
		// public float TimeToDecrease = 1f;               // the amount of time the field of view will take to return to its original size
		__this->___TimeToDecrease_4 = (1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ed__9__ctor_m94A251F28F9DA9224CDA08587D41AB9A8753875E (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ed__9_System_IDisposable_Dispose_mEE635D6F8D49E6FB445249BD0140BE0830335B19 (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFOVKickUpU3Ed__9_MoveNext_m0DEBC2ED310D2F55895018BFB8A5C363BE31E1B2 (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = Mathf.Abs((Camera.fieldOfView - originalFov)/FOVIncrease);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_4 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4->___Camera_0;
		float L_6;
		L_6 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_5, NULL);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_7 = V_1;
		float L_8 = L_7->___originalFov_1;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_9 = V_1;
		float L_10 = L_9->___FOVIncrease_2;
		float L_11;
		L_11 = fabsf(((float)(((float)il2cpp_codegen_subtract(L_6, L_8))/L_10)));
		__this->___U3CtU3E5__2_3 = L_11;
		goto IL_00a5;
	}

IL_0047:
	{
		// Camera.fieldOfView = originalFov + (IncreaseCurve.Evaluate(t/TimeToIncrease)*FOVIncrease);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_12 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = L_12->___Camera_0;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_14 = V_1;
		float L_15 = L_14->___originalFov_1;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_16 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = L_16->___IncreaseCurve_5;
		float L_18 = __this->___U3CtU3E5__2_3;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_19 = V_1;
		float L_20 = L_19->___TimeToIncrease_3;
		float L_21;
		L_21 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_17, ((float)(L_18/L_20)), NULL);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_22 = V_1;
		float L_23 = L_22->___FOVIncrease_2;
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_13, ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_21, L_23)))), NULL);
		// t += Time.deltaTime;
		float L_24 = __this->___U3CtU3E5__2_3;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_add(L_24, L_25));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_26 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_26, NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a5:
	{
		// while (t < TimeToIncrease)
		float L_27 = __this->___U3CtU3E5__2_3;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_28 = V_1;
		float L_29 = L_28->___TimeToIncrease_3;
		if ((((float)L_27) < ((float)L_29)))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFOVKickUpU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB4D21614616460ED1EFE82BF39C465B5FDF235A8 (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_Reset_m2A4AE0E6A70D4E36FF29376CA0DF68A7F3FBD703 (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_Reset_m2A4AE0E6A70D4E36FF29376CA0DF68A7F3FBD703_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFOVKickUpU3Ed__9_System_Collections_IEnumerator_get_Current_m2303D0BD52B64C18D1562D1B2318B4D17877A4AA (U3CFOVKickUpU3Ed__9_t0ED5995D284A3BE7DC11193F0C9830A6247B7A32* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ed__10__ctor_m56E65981DACC7B0F56258E7DF1131AB9E1832E11 (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ed__10_System_IDisposable_Dispose_m5FA29623E4591D69D744287575F3F26A3CDEBEA6 (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFOVKickDownU3Ed__10_MoveNext_mBF493997E0FEF71CD40D99A19C8150E9DFD84F12 (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = Mathf.Abs((Camera.fieldOfView - originalFov)/FOVIncrease);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_4 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4->___Camera_0;
		float L_6;
		L_6 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_5, NULL);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_7 = V_1;
		float L_8 = L_7->___originalFov_1;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_9 = V_1;
		float L_10 = L_9->___FOVIncrease_2;
		float L_11;
		L_11 = fabsf(((float)(((float)il2cpp_codegen_subtract(L_6, L_8))/L_10)));
		__this->___U3CtU3E5__2_3 = L_11;
		goto IL_00a5;
	}

IL_0047:
	{
		// Camera.fieldOfView = originalFov + (IncreaseCurve.Evaluate(t/TimeToDecrease)*FOVIncrease);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_12 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = L_12->___Camera_0;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_14 = V_1;
		float L_15 = L_14->___originalFov_1;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_16 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = L_16->___IncreaseCurve_5;
		float L_18 = __this->___U3CtU3E5__2_3;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_19 = V_1;
		float L_20 = L_19->___TimeToDecrease_4;
		float L_21;
		L_21 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_17, ((float)(L_18/L_20)), NULL);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_22 = V_1;
		float L_23 = L_22->___FOVIncrease_2;
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_13, ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_21, L_23)))), NULL);
		// t -= Time.deltaTime;
		float L_24 = __this->___U3CtU3E5__2_3;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_24, L_25));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_26 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_26, NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a5:
	{
		// while (t > 0)
		float L_27 = __this->___U3CtU3E5__2_3;
		if ((((float)L_27) > ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		// Camera.fieldOfView = originalFov;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_28 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = L_28->___Camera_0;
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_30 = V_1;
		float L_31 = L_30->___originalFov_1;
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_29, L_31, NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFOVKickDownU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9974EA222B77F05059E58700BB81DCD4E1603A04 (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_Reset_m6620A1366E0EA3DB3D3B580463E72520A26FFB02 (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_Reset_m6620A1366E0EA3DB3D3B580463E72520A26FFB02_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFOVKickDownU3Ed__10_System_Collections_IEnumerator_get_Current_m5B2C30B7A72E681DED4F243EAB9770B64347170C (U3CFOVKickDownU3Ed__10_tD09DD2A61282FB0993D02ACB444ECB67B91D7EB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) 
{
	{
		// return m_Offset;
		float L_0 = __this->___m_Offset_2;
		return L_0;
	}
}
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LerpControlledBob_DoBobCycle_m457BF7490A4DDC7B31C7675752F83D630D4D8D65 (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* L_0 = (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5*)il2cpp_codegen_object_new(U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5_il2cpp_TypeInfo_var);
		U3CDoBobCycleU3Ed__4__ctor_m7C4CE3859418AE1626D6FAF4582436786A8D4070(L_0, 0, NULL);
		U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpControlledBob__ctor_m51BAF74545894A740D2526114BE0C39E105BAD79 (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ed__4__ctor_m7C4CE3859418AE1626D6FAF4582436786A8D4070 (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ed__4_System_IDisposable_Dispose_m36217FE2E083CA832C307D4F0ED04D5348EC045D (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoBobCycleU3Ed__4_MoveNext_m43889880A0FD837D4479E495B86A3BC705686EE1 (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_00ea;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = 0f;
		__this->___U3CtU3E5__2_3 = (0.0f);
		goto IL_0086;
	}

IL_0036:
	{
		// m_Offset = Mathf.Lerp(0f, BobAmount, t/BobDuration);
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_3 = V_1;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_4 = V_1;
		float L_5 = L_4->___BobAmount_1;
		float L_6 = __this->___U3CtU3E5__2_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_7 = V_1;
		float L_8 = L_7->___BobDuration_0;
		float L_9;
		L_9 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_5, ((float)(L_6/L_8)), NULL);
		L_3->___m_Offset_2 = L_9;
		// t += Time.deltaTime;
		float L_10 = __this->___U3CtU3E5__2_3;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_add(L_10, L_11));
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_12 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_12, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0086:
	{
		// while (t < BobDuration)
		float L_13 = __this->___U3CtU3E5__2_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_14 = V_1;
		float L_15 = L_14->___BobDuration_0;
		if ((((float)L_13) < ((float)L_15)))
		{
			goto IL_0036;
		}
	}
	{
		// t = 0f;
		__this->___U3CtU3E5__2_3 = (0.0f);
		goto IL_00f1;
	}

IL_00a1:
	{
		// m_Offset = Mathf.Lerp(BobAmount, 0f, t/BobDuration);
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_16 = V_1;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_17 = V_1;
		float L_18 = L_17->___BobAmount_1;
		float L_19 = __this->___U3CtU3E5__2_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_20 = V_1;
		float L_21 = L_20->___BobDuration_0;
		float L_22;
		L_22 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_18, (0.0f), ((float)(L_19/L_21)), NULL);
		L_16->___m_Offset_2 = L_22;
		// t += Time.deltaTime;
		float L_23 = __this->___U3CtU3E5__2_3;
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_add(L_23, L_24));
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_25 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_25, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ea:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f1:
	{
		// while (t < BobDuration)
		float L_26 = __this->___U3CtU3E5__2_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_27 = V_1;
		float L_28 = L_27->___BobDuration_0;
		if ((((float)L_26) < ((float)L_28)))
		{
			goto IL_00a1;
		}
	}
	{
		// m_Offset = 0f;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_29 = V_1;
		L_29->___m_Offset_2 = (0.0f);
		// }
		return (bool)0;
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoBobCycleU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E72D286EE5BBDF41E971D8DD087191834A52D9E (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_Reset_m0A0B723C13AA6C8A506379390E9F8A9AD973D5A0 (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_Reset_m0A0B723C13AA6C8A506379390E9F8A9AD973D5A0_RuntimeMethod_var)));
	}
}
// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoBobCycleU3Ed__4_System_Collections_IEnumerator_get_Current_mAF11516FAE07CFA8145387610E6E49846CBB4FF3 (U3CDoBobCycleU3Ed__4_tEFB685BC992908C0DDF6BFEF1C73F27822CAECD5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_m6CC30D5EADEFBAB3EAA252391ABD44C4BC50C0B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TouchInput = new MobileInput();
		MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* L_0 = (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9*)il2cpp_codegen_object_new(MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9_il2cpp_TypeInfo_var);
		MobileInput__ctor_m07059ED5F2B9B0CAD1E4236B6B48D2389C296733(L_0, NULL);
		((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___s_TouchInput_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___s_TouchInput_1), (void*)L_0);
		// s_HardwareInput = new StandaloneInput();
		StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* L_1 = (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D*)il2cpp_codegen_object_new(StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_mD647D2B31817BF5FD4A882F8F695E6FB463D8468(L_1, NULL);
		((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___s_HardwareInput_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___s_HardwareInput_2), (void*)L_1);
		// activeInput = s_HardwareInput;
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_2 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___s_HardwareInput_2;
		((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_m5135F01842F48631228862D84603996A003B1371 (int32_t ___activeInputMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// activeInput = s_HardwareInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_2 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___s_HardwareInput_2;
		((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// break;
		return;
	}

IL_0013:
	{
		// activeInput = s_TouchInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_3 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___s_TouchInput_1;
		((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_3);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m60F72365A4EB3333BC12384C71FB81C7C2DA9793 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.AxisExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = VirtualInput_AxisExists_mED2FABA84EE1C5E4F464D1EB22A746A7B49A32DB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_m4748D1E5C1BC97DD12BD773E291B375253586569 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.ButtonExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = VirtualInput_ButtonExists_m01FC46D132CE9A53E128F091D53F0A4ABFBC75CF(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_m5D690E4BE40A7A1104AD08BA8FB7F84CFB21FEBA (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualAxis(axis);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_1 = ___axis0;
		VirtualInput_RegisterVirtualAxis_mB78A29811E4ACE37253488549970615358007256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m0AFEEED4ACE56F68DDD8C49CD064AB72BC8448B4 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualButton(button);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_1 = ___button0;
		VirtualInput_RegisterVirtualButton_m77D934CDC1ACF8C60D435EDE229D1FC29A950BFD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m57982534B7F6F473EF75801DD825CFCD88EA8DD0 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == null)
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("name");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrossPlatformInputManager_UnRegisterVirtualAxis_m57982534B7F6F473EF75801DD825CFCD88EA8DD0_RuntimeMethod_var)));
	}

IL_000e:
	{
		// activeInput.UnRegisterVirtualAxis(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_2 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_3 = ___name0;
		VirtualInput_UnRegisterVirtualAxis_mE52BC71A1382C85BFA9E5B604FFADB7DDEB00364(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m9166593955394F3BBFE861CD0C93869392301012 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.UnRegisterVirtualButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		VirtualInput_UnRegisterVirtualButton_mC5933B08DF96B5E56CC35922E745F05C78B902AB(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* CrossPlatformInputManager_VirtualAxisReference_m9DE3A58E2E4AAB34BCEB680A4BA8E0CA593A64BB (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.VirtualAxisReference(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_2;
		L_2 = VirtualInput_VirtualAxisReference_mAD34229AA6FC0FF71F66A776E66853B47DD17301(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, false);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_mCA243277C31388751E310E98E38C0D7645BC9DF0(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_mC868A1C9386E9F337F0BDAC0EA5724E34B841AFF (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, true);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_mCA243277C31388751E310E98E38C0D7645BC9DF0(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mCA243277C31388751E310E98E38C0D7645BC9DF0 (String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetAxis(name, raw);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		float L_3;
		L_3 = VirtualFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_mDE1A99EB42653A64E777F727CB21C8A3A6931AE6 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m2AEC6C7F5E5D3987230E51A4575A3CB6A7088C88 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_mD2F003F743AF914B5B7D480957F1A2582594FE59 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m115DE6A64B22418E96A1B6B9DA9706D24D3212DD (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		VirtualActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_mBC4EBC919A5B42BD40436B1864EE8A8E1E5EF549 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_m73C49B13315F6C95C140299E47D78FD0CCC58CCC (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisPositive(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mFB15496EA5F767288386B51558FFE5A2F05F6912 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisNegative(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_m0481E0DC6847C950D95328D2C476E21CBC87CFB9 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisZero(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m452DBE40E8EDA3927888F785EFB4327D0E7086E7 (String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxis(name, value);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		VirtualActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CrossPlatformInputManager_get_mousePosition_m3D40FA5D5DCF2F166E1CCEF2DE9A6DF45E0B5841 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return activeInput.MousePosition(); }
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_mD59C3417CCB0983B71C82C272B0C3F44F787782F (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionX(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		VirtualInput_SetVirtualMousePositionX_mD950764D7B140DFD39999B9C36A1FC527BB18B95(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m3EF749E27E3DF38908DDBC8136D1C1450349A07B (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionY(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		VirtualInput_SetVirtualMousePositionY_mA7F72188309360B9662EE393983183308B85C13B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_m2A157A3417071C8CFB0CC425B8C7EC23CB242337 (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionZ(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* L_0 = ((CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		VirtualInput_SetVirtualMousePositionZ_m0F88050AF38D8B27BDFEC2B501DB0FDBE54BAF43(L_0, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m1ACC9260F42FF6B84F7FE033FDCD39E5B84D39CD (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF8E152814D898FE8F54D4E1CD12A593820A25937 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m64B5DDE21842217E453CF99A61D473EF8E8111B8 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mB7D39B75EDF8642254F8621FE2B10B634D297AD5 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_mB68089D9540C9F6FAB7374B51AC6350C9CF2D156(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mB68089D9540C9F6FAB7374B51AC6350C9CF2D156 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) 
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_m1ACC9260F42FF6B84F7FE033FDCD39E5B84D39CD_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m64B5DDE21842217E453CF99A61D473EF8E8111B8_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_mEDDEC59110B58B2F98B0900A7C3896BE598C9F48 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m57982534B7F6F473EF75801DD825CFCD88EA8DD0(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_mBF84A169980643545AC4F1A771A32B8BAAD1E7A0 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m3208970D6C40FC8AA0304330C7BB4E3797F7EDE7 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_mAA90043B7C84C9711E2634526C0A0DA9F8D60CB8 (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_mDD23E2B0311CA404527187BC10C06BDABA2262AC (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m7B2AA7C47390156121D9DA0C84B11806275EB2C4 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_mB580A9CD9D60CACAC2CBBB9569BA68D418450E69 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m08D38A950516399E44D084FD0B1C0D6C1064B001 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m0729B25EBD030FF90211D5D707B84DA39E5AC834(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m0729B25EBD030FF90211D5D707B84DA39E5AC834 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) 
{
	{
		// private int m_LastPressedFrame = -5;
		__this->___m_LastPressedFrame_2 = ((int32_t)-5);
		// private int m_ReleasedFrame = -5;
		__this->___m_ReleasedFrame_3 = ((int32_t)-5);
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_mDD23E2B0311CA404527187BC10C06BDABA2262AC_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_mB580A9CD9D60CACAC2CBBB9569BA68D418450E69_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_m3872C7EDE943398CE5769D0A9E0E6686FC673C9D (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Pressed)
		bool L_0 = __this->___m_Pressed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->___m_Pressed_4 = (bool)1;
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___m_LastPressedFrame_2 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m359DAE002A4035E09419F599F18CB10411229B76 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// m_Pressed = false;
		__this->___m_Pressed_4 = (bool)0;
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___m_ReleasedFrame_3 = L_0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m213428254F9C51AE5691C4F6699C79FDAF8F39AA (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m9166593955394F3BBFE861CD0C93869392301012(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mFCD3B5447C6EEF1E177F556973D9BA199AE24E5F (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_mDF48F18DE1BC8DF6D05852022AAE246F3D9E97B5 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->___m_LastPressedFrame_2;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m5721A8485FCCFCC67F52242319422FB2AB998632 (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->___m_ReleasedFrame_3;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1))))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m695B765261F304C42498A2A1A08ACB8705857CE9 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mED2FABA84EE1C5E4F464D1EB22A746A7B49A32DB (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_m01FC46D132CE9A53E128F091D53F0A4ABFBC75CF (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_1, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_mB78A29811E4ACE37253488549970615358007256 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mEA0303C181C5BDEF8F60F11344EB2DC08F7AE77A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1921D3070489B1532E810684C2992B44215A052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = __this->___m_VirtualAxes_1;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_1 = ___axis0;
		String_t* L_2;
		L_2 = VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94_inline(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_2, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_4 = ___axis0;
		String_t* L_5;
		L_5 = VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE1921D3070489B1532E810684C2992B44215A052, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_7 = __this->___m_VirtualAxes_1;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_8 = ___axis0;
		String_t* L_9;
		L_9 = VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94_inline(L_8, NULL);
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_10 = ___axis0;
		Dictionary_2_Add_mEA0303C181C5BDEF8F60F11344EB2DC08F7AE77A(L_7, L_9, L_10, Dictionary_2_Add_mEA0303C181C5BDEF8F60F11344EB2DC08F7AE77A_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_11 = ___axis0;
		bool L_12;
		L_12 = VirtualAxis_get_matchWithInputManager_mF8E152814D898FE8F54D4E1CD12A593820A25937_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_14 = ___axis0;
		String_t* L_15;
		L_15 = VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94_inline(L_14, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m77D934CDC1ACF8C60D435EDE229D1FC29A950BFD (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m00CF47D66B2843E488ADAD38EF816621E8A7111F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = __this->___m_VirtualButtons_2;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_1 = ___button0;
		String_t* L_2;
		L_2 = VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22_inline(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_2, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_4 = ___button0;
		String_t* L_5;
		L_5 = VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_7 = __this->___m_VirtualButtons_2;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_8 = ___button0;
		String_t* L_9;
		L_9 = VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22_inline(L_8, NULL);
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_10 = ___button0;
		Dictionary_2_Add_m00CF47D66B2843E488ADAD38EF816621E8A7111F(L_7, L_9, L_10, Dictionary_2_Add_m00CF47D66B2843E488ADAD38EF816621E8A7111F_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_11 = ___button0;
		bool L_12;
		L_12 = VirtualButton_get_matchWithInputManager_m7B2AA7C47390156121D9DA0C84B11806275EB2C4_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_14 = ___button0;
		String_t* L_15;
		L_15 = VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22_inline(L_14, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_mE52BC71A1382C85BFA9E5B604FFADB7DDEB00364 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m793D4B6D3920C73FBC30267C18F3C734C8D92940_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = Dictionary_2_Remove_m793D4B6D3920C73FBC30267C18F3C734C8D92940(L_3, L_4, Dictionary_2_Remove_m793D4B6D3920C73FBC30267C18F3C734C8D92940_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mC5933B08DF96B5E56CC35922E745F05C78B902AB (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD10BFB6B487D9959F2B269ED0D719A4E7F9395C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_1, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_3 = __this->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = Dictionary_2_Remove_mD10BFB6B487D9959F2B269ED0D719A4E7F9395C4(L_3, L_4, Dictionary_2_Remove_mD10BFB6B487D9959F2B269ED0D719A4E7F9395C4_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* VirtualInput_VirtualAxisReference_mAD34229AA6FC0FF71F66A776E66853B47DD17301 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E*)NULL;
	}

IL_0010:
	{
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_5;
		L_5 = Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42(L_3, L_4, Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_mD950764D7B140DFD39999B9C36A1FC527BB18B95 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline(__this, NULL);
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m695B765261F304C42498A2A1A08ACB8705857CE9_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_mA7F72188309360B9662EE393983183308B85C13B (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		float L_2 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m695B765261F304C42498A2A1A08ACB8705857CE9_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m0F88050AF38D8B27BDFEC2B501DB0FDBE54BAF43 (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline(__this, NULL);
		float L_3 = L_2.___y_3;
		float L_4 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m695B765261F304C42498A2A1A08ACB8705857CE9_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_mF5E08A62E03FFBF955939A5637E36B1BD5184ECD (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m305A5DD72F1CAE2229F74082CC03DC3D7975CA63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m42A903ED11F6425F1BCF4C142D14A0E955F1732D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = (Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062*)il2cpp_codegen_object_new(Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m305A5DD72F1CAE2229F74082CC03DC3D7975CA63(L_0, Dictionary_2__ctor_m305A5DD72F1CAE2229F74082CC03DC3D7975CA63_RuntimeMethod_var);
		__this->___m_VirtualAxes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualAxes_1), (void*)L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_1 = (Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854*)il2cpp_codegen_object_new(Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m42A903ED11F6425F1BCF4C142D14A0E955F1732D(L_1, Dictionary_2__ctor_m42A903ED11F6425F1BCF4C142D14A0E955F1732D_RuntimeMethod_var);
		__this->___m_VirtualButtons_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualButtons_2), (void*)L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_AlwaysUseVirtual_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AlwaysUseVirtual_3), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_m8EAE0FECC9BDCECC2E6EC5A964AA78F6FBDE251D (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualButton(new CrossPlatformInputManager.VirtualButton(name));
		String_t* L_0 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_1 = (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1*)il2cpp_codegen_object_new(VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m08D38A950516399E44D084FD0B1C0D6C1064B001(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m0AFEEED4ACE56F68DDD8C49CD064AB72BC8448B4(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m84F66639D48511D97F8E71A37488745E9112CE5F (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualAxis(new CrossPlatformInputManager.VirtualAxis(name));
		String_t* L_0 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_1 = (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E*)il2cpp_codegen_object_new(VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_mB7D39B75EDF8642254F8621FE2B10B634D297AD5(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m5D690E4BE40A7A1104AD08BA8FB7F84CFB21FEBA(L_1, NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MobileInput_GetAxis_m6F4F2F01AA0B9B1C6A151C252A44785766A6F8B7 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m84F66639D48511D97F8E71A37488745E9112CE5F(__this, L_3, NULL);
	}

IL_0015:
	{
		// return m_VirtualAxes[name].GetValue;
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_4 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_6;
		L_6 = Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42(L_4, L_5, Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		float L_7;
		L_7 = VirtualAxis_get_GetValue_m3208970D6C40FC8AA0304330C7BB4E3797F7EDE7_inline(L_6, NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_m6AA87970E30D462D2E3D70CF5E0CA69AA25D8A45 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_1, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m8EAE0FECC9BDCECC2E6EC5A964AA78F6FBDE251D(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Pressed();
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_4 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_6;
		L_6 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_4, L_5, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		VirtualButton_Pressed_m3872C7EDE943398CE5769D0A9E0E6686FC673C9D(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_m4AF9465A9E2B6B00AA2561453251C1F6833E4BD5 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_1, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m8EAE0FECC9BDCECC2E6EC5A964AA78F6FBDE251D(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Released();
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_4 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_6;
		L_6 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_4, L_5, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		VirtualButton_Released_m359DAE002A4035E09419F599F18CB10411229B76(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_m47A20F43787C4A99A8DBF3BDC32D243C414D9984 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m84F66639D48511D97F8E71A37488745E9112CE5F(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(1f);
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_4 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_6;
		L_6 = Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42(L_4, L_5, Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		VirtualAxis_Update_mBF84A169980643545AC4F1A771A32B8BAAD1E7A0_inline(L_6, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_m8C1413D7674ED365FDED0866967FD8B293B8563B (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m84F66639D48511D97F8E71A37488745E9112CE5F(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(-1f);
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_4 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_6;
		L_6 = Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42(L_4, L_5, Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		VirtualAxis_Update_mBF84A169980643545AC4F1A771A32B8BAAD1E7A0_inline(L_6, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_mF25D66055A22917625F061DEC1FCC0DA76483CD7 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m84F66639D48511D97F8E71A37488745E9112CE5F(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(0f);
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_4 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_6;
		L_6 = Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42(L_4, L_5, Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		VirtualAxis_Update_mBF84A169980643545AC4F1A771A32B8BAAD1E7A0_inline(L_6, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxis_m5A73B5F5B02C23B96A15A4A34ABE939805E9B6B8 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C(L_0, L_1, Dictionary_2_ContainsKey_m05BCE66CF2DE624266E2AC4DDEAEBC750B6D5D6C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m84F66639D48511D97F8E71A37488745E9112CE5F(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(value);
		Dictionary_2_tB4D70366199665DE9A64901DA130A9579F807062* L_4 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* L_6;
		L_6 = Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42(L_4, L_5, Dictionary_2_get_Item_m1E1CB90D935DF99D9CF9A8C3A2FEDFE95CEBCC42_RuntimeMethod_var);
		float L_7 = ___value1;
		VirtualAxis_Update_mBF84A169980643545AC4F1A771A32B8BAAD1E7A0_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_mF2830867E47B0DDB7A6CE64BFFCF323DD28C7964 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_1, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_3 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_5;
		L_5 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_3, L_4, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonDown_mDF48F18DE1BC8DF6D05852022AAE246F3D9E97B5(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m8EAE0FECC9BDCECC2E6EC5A964AA78F6FBDE251D(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_8 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_10;
		L_10 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_8, L_9, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonDown_mDF48F18DE1BC8DF6D05852022AAE246F3D9E97B5(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_mC6565976389B53D827B6550D294CB08A275FFFCB (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_1, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_3 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_5;
		L_5 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_3, L_4, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonUp_m5721A8485FCCFCC67F52242319422FB2AB998632(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m8EAE0FECC9BDCECC2E6EC5A964AA78F6FBDE251D(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_8 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_10;
		L_10 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_8, L_9, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonUp_m5721A8485FCCFCC67F52242319422FB2AB998632(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButton_mD5088B6C42E56D69A73A3D9D1D866008A6AE3662 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_0 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4(L_0, L_1, Dictionary_2_ContainsKey_m15386548EF47DB43EBDCFB4253B87829161A32B4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_3 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_5;
		L_5 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_3, L_4, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButton_mFCD3B5447C6EEF1E177F556973D9BA199AE24E5F_inline(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m8EAE0FECC9BDCECC2E6EC5A964AA78F6FBDE251D(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_t02020A0FFCB24EE1D819962BE3F64F5DBDACA854* L_8 = ((VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* L_10;
		L_10 = Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB(L_8, L_9, Dictionary_2_get_Item_mC748D2BA0D6C3D6DC3FE384AAFF9C2A0EA1279FB_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButton_mFCD3B5447C6EEF1E177F556973D9BA199AE24E5F_inline(L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MobileInput_MousePosition_mA64FB64F736061995376B9A9A4F9413710148EA2 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, const RuntimeMethod* method) 
{
	{
		// return virtualMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline(__this, NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m07059ED5F2B9B0CAD1E4236B6B48D2389C296733 (MobileInput_t2C8FE56F480BFF250E5403C0B21586E93B8111B9* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_mF5E08A62E03FFBF955939A5637E36B1BD5184ECD(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_m43EA70333817C590C64AFF7C32C92BD887AC47CA (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	{
		// return raw ? Input.GetAxisRaw(name) : Input.GetAxis(name);
		bool L_0 = ___raw1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name0;
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___name0;
		float L_4;
		L_4 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_3, NULL);
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_m6958AE36EE2F0D329AFD4E6D52ECA5851F85186C (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButton(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_mCC2E98581EF6F74A2C26239D8CCB0BDC32A82E9E (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonDown(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_m801C2B384336FE78A08A0484DFBE6530E1C6640A (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonUp(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_m1E5353A39619C3E7A984DBB4CEE2723FCF62BE43 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonDown_m1E5353A39619C3E7A984DBB4CEE2723FCF62BE43_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_mBFF7876850BB9450FC67F16901A596211F4F9E20 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonUp_mBFF7876850BB9450FC67F16901A596211F4F9E20_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_m10B0D98E7C0FBDDB95CFDC6AEFA95CD5B197192E (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisPositive_m10B0D98E7C0FBDDB95CFDC6AEFA95CD5B197192E_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_mCE8C3094324B5A86388B8387E8E66C796576B482 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisNegative_mCE8C3094324B5A86388B8387E8E66C796576B482_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_m26FB53017C9E066DEF72387B2A1DFB8106CF5E52 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisZero_m26FB53017C9E066DEF72387B2A1DFB8106CF5E52_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_m7536D55B9E48E66ABA27727BE1B1C1C3CFF75C14 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxis_m7536D55B9E48E66ABA27727BE1B1C1C3CFF75C14_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StandaloneInput_MousePosition_mFC7523F8A3034AE181ABE3E53A21F90FB3DE4643 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, const RuntimeMethod* method) 
{
	{
		// return Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_mD647D2B31817BF5FD4A882F8F695E6FB463D8468 (StandaloneInput_t2BDF9B89654B73937FBC0A8703BE4894466CA69D* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_mF5E08A62E03FFBF955939A5637E36B1BD5184ECD(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Start_m5E1BE593FBF25C972493F309B2FF53B54E760CFA (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CharacterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___m_CharacterController_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CharacterController_26), (void*)L_0);
		// m_Camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___m_Camera_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_21), (void*)L_1);
		// m_OriginalCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		__this->___m_OriginalCameraPosition_29 = L_4;
		// m_FovKick.Setup(m_Camera);
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_5 = __this->___m_FovKick_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_21;
		FOVKick_Setup_m4F9584C1610E1B767B6547BAB08E799D9F90F505(L_5, L_6, NULL);
		// m_HeadBob.Setup(m_Camera, m_StepInterval);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_7 = __this->___m_HeadBob_15;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___m_Camera_21;
		float L_9 = __this->___m_StepInterval_17;
		CurveControlledBob_Setup_m6692CB7489082BA46CF2FF7CE2D16CE9218E2AD3(L_7, L_8, L_9, NULL);
		// m_StepCycle = 0f;
		__this->___m_StepCycle_30 = (0.0f);
		// m_NextStep = m_StepCycle/2f;
		float L_10 = __this->___m_StepCycle_30;
		__this->___m_NextStep_31 = ((float)(L_10/(2.0f)));
		// m_Jumping = false;
		__this->___m_Jumping_32 = (bool)0;
		// m_AudioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___m_AudioSource_33 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AudioSource_33), (void*)L_11);
		// m_MouseLook.Init(transform , m_Camera.transform);
		MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* L_12 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		MouseLook_Init_mC5AAE8B6B989184410638B22566688441DD33E5A(L_12, L_13, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Update_mBCE30948857180B0F760F3AC2C5B684610ED3C0B (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateView();
		FirstPersonController_RotateView_m6DA625811334A3E1E56D0E1A29D1092BAA9F1E92(__this, NULL);
		// if (!m_Jump)
		bool L_0 = __this->___m_Jump_22;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_GetButtonDown_m2AEC6C7F5E5D3987230E51A4575A3CB6A7088C88(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->___m_Jump_22 = L_1;
	}

IL_001e:
	{
		// if (!m_PreviouslyGrounded && m_CharacterController.isGrounded)
		bool L_2 = __this->___m_PreviouslyGrounded_28;
		if (L_2)
		{
			goto IL_0062;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_3 = __this->___m_CharacterController_26;
		bool L_4;
		L_4 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_3, NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// StartCoroutine(m_JumpBob.DoBobCycle());
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_5 = __this->___m_JumpBob_16;
		RuntimeObject* L_6;
		L_6 = LerpControlledBob_DoBobCycle_m457BF7490A4DDC7B31C7675752F83D630D4D8D65(L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// PlayLandingSound();
		FirstPersonController_PlayLandingSound_m18A84CB1D601381B9BA86FE5425D0458EF56103A(__this, NULL);
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___m_MoveDir_25);
		L_8->___y_3 = (0.0f);
		// m_Jumping = false;
		__this->___m_Jumping_32 = (bool)0;
	}

IL_0062:
	{
		// if (!m_CharacterController.isGrounded && !m_Jumping && m_PreviouslyGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		bool L_10;
		L_10 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_9, NULL);
		if (L_10)
		{
			goto IL_008f;
		}
	}
	{
		bool L_11 = __this->___m_Jumping_32;
		if (L_11)
		{
			goto IL_008f;
		}
	}
	{
		bool L_12 = __this->___m_PreviouslyGrounded_28;
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___m_MoveDir_25);
		L_13->___y_3 = (0.0f);
	}

IL_008f:
	{
		// m_PreviouslyGrounded = m_CharacterController.isGrounded;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_14 = __this->___m_CharacterController_26;
		bool L_15;
		L_15 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_14, NULL);
		__this->___m_PreviouslyGrounded_28 = L_15;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayLandingSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayLandingSound_m18A84CB1D601381B9BA86FE5425D0458EF56103A (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	{
		// m_AudioSource.clip = m_LandSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___m_LandSound_20;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// m_AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___m_AudioSource_33;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// m_NextStep = m_StepCycle + .5f;
		float L_3 = __this->___m_StepCycle_30;
		__this->___m_NextStep_31 = ((float)il2cpp_codegen_add(L_3, (0.5f)));
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_FixedUpdate_m913B8B1BBC8FA203EDFE38D3D0AFAAD2514B1B57 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GetInput(out speed);
		FirstPersonController_GetInput_mA973EBB03719A5E34DCE7DD7B438705438F1A45B(__this, (&V_0), NULL);
		// Vector3 desiredMove = transform.forward*m_Input.y + transform.right*m_Input.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___m_Input_24);
		float L_3 = L_2->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___m_Input_24);
		float L_8 = L_7->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_9, NULL);
		V_1 = L_10;
		// Physics.SphereCast(transform.position, m_CharacterController.radius, Vector3.down, out hitInfo,
		//                    m_CharacterController.height/2f, Physics.AllLayers, QueryTriggerInteraction.Ignore);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = __this->___m_CharacterController_26;
		float L_14;
		L_14 = CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_16 = __this->___m_CharacterController_26;
		float L_17;
		L_17 = CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF(L_16, NULL);
		bool L_18;
		L_18 = Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D(L_12, L_14, L_15, (&V_2), ((float)(L_17/(2.0f))), (-1), 1, NULL);
		// desiredMove = Vector3.ProjectOnPlane(desiredMove, hitInfo.normal).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_19, L_20, NULL);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_1 = L_22;
		// m_MoveDir.x = desiredMove.x*speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___m_MoveDir_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = L_24.___x_2;
		float L_26 = V_0;
		L_23->___x_2 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// m_MoveDir.z = desiredMove.z*speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___m_MoveDir_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		float L_29 = L_28.___z_4;
		float L_30 = V_0;
		L_27->___z_4 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// if (m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_31 = __this->___m_CharacterController_26;
		bool L_32;
		L_32 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_31, NULL);
		if (!L_32)
		{
			goto IL_0104;
		}
	}
	{
		// m_MoveDir.y = -m_StickToGroundForce;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___m_MoveDir_25);
		float L_34 = __this->___m_StickToGroundForce_9;
		L_33->___y_3 = ((-L_34));
		// if (m_Jump)
		bool L_35 = __this->___m_Jump_22;
		if (!L_35)
		{
			goto IL_012f;
		}
	}
	{
		// m_MoveDir.y = m_JumpSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___m_MoveDir_25);
		float L_37 = __this->___m_JumpSpeed_8;
		L_36->___y_3 = L_37;
		// PlayJumpSound();
		FirstPersonController_PlayJumpSound_m55067E55D2BE70BE968DC6A15FDC62CDBD284495(__this, NULL);
		// m_Jump = false;
		__this->___m_Jump_22 = (bool)0;
		// m_Jumping = true;
		__this->___m_Jumping_32 = (bool)1;
		goto IL_012f;
	}

IL_0104:
	{
		// m_MoveDir += Physics.gravity*m_GravityMultiplier*Time.fixedDeltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___m_MoveDir_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_40 = __this->___m_GravityMultiplier_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_40, NULL);
		float L_42;
		L_42 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_43, NULL);
		__this->___m_MoveDir_25 = L_44;
	}

IL_012f:
	{
		// m_CollisionFlags = m_CharacterController.Move(m_MoveDir*Time.fixedDeltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_45 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___m_MoveDir_25;
		float L_47;
		L_47 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, L_47, NULL);
		int32_t L_49;
		L_49 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_45, L_48, NULL);
		__this->___m_CollisionFlags_27 = L_49;
		// ProgressStepCycle(speed);
		float L_50 = V_0;
		FirstPersonController_ProgressStepCycle_mDF204426B84DD1528532DB9BBC09E86CA25A5066(__this, L_50, NULL);
		// UpdateCameraPosition(speed);
		float L_51 = V_0;
		FirstPersonController_UpdateCameraPosition_m09FA04C68EC864EFECC77850A8CA1648F7B38E9E(__this, L_51, NULL);
		// m_MouseLook.UpdateCursorLock();
		MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* L_52 = __this->___m_MouseLook_11;
		MouseLook_UpdateCursorLock_mE013EB69C8F810DB9263394540DDE576B65AC63B(L_52, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayJumpSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayJumpSound_m55067E55D2BE70BE968DC6A15FDC62CDBD284495 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	{
		// m_AudioSource.clip = m_JumpSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___m_JumpSound_19;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// m_AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___m_AudioSource_33;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mDF204426B84DD1528532DB9BBC09E86CA25A5066 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, float ___speed0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* G_B5_3 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* G_B4_3 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* G_B6_4 = NULL;
	{
		// if (m_CharacterController.velocity.sqrMagnitude > 0 && (m_Input.x != 0 || m_Input.y != 0))
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___m_Input_24);
		float L_4 = L_3->___x_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___m_Input_24);
		float L_6 = L_5->___y_1;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_007c;
		}
	}

IL_003e:
	{
		// m_StepCycle += (m_CharacterController.velocity.magnitude + (speed*(m_IsWalking ? 1f : m_RunstepLenghten)))*
		//              Time.fixedDeltaTime;
		float L_7 = __this->___m_StepCycle_30;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_11 = ___speed0;
		bool L_12 = __this->___m_IsWalking_4;
		G_B4_0 = L_11;
		G_B4_1 = L_10;
		G_B4_2 = L_7;
		G_B4_3 = __this;
		if (L_12)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			G_B5_2 = L_7;
			G_B5_3 = __this;
			goto IL_0069;
		}
	}
	{
		float L_13 = __this->___m_RunstepLenghten_7;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_006e;
	}

IL_0069:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_006e:
	{
		float L_14;
		L_14 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		G_B6_4->___m_StepCycle_30 = ((float)il2cpp_codegen_add(G_B6_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, G_B6_0)))), L_14))));
	}

IL_007c:
	{
		// if (!(m_StepCycle > m_NextStep))
		float L_15 = __this->___m_StepCycle_30;
		float L_16 = __this->___m_NextStep_31;
		if ((((float)L_15) > ((float)L_16)))
		{
			goto IL_008b;
		}
	}
	{
		// return;
		return;
	}

IL_008b:
	{
		// m_NextStep = m_StepCycle + m_StepInterval;
		float L_17 = __this->___m_StepCycle_30;
		float L_18 = __this->___m_StepInterval_17;
		__this->___m_NextStep_31 = ((float)il2cpp_codegen_add(L_17, L_18));
		// PlayFootStepAudio();
		FirstPersonController_PlayFootStepAudio_mFEFD2622D2B40F74AEBCC04F58ED2F41F5120FE1(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayFootStepAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayFootStepAudio_mFEFD2622D2B40F74AEBCC04F58ED2F41F5120FE1 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___m_CharacterController_26;
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// int n = Random.Range(1, m_FootstepSounds.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = __this->___m_FootstepSounds_18;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_0 = L_3;
		// m_AudioSource.clip = m_FootstepSounds[n];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___m_AudioSource_33;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = __this->___m_FootstepSounds_18;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_8, NULL);
		// m_AudioSource.PlayOneShot(m_AudioSource.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___m_AudioSource_33;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11;
		L_11 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_10, NULL);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_9, L_11, NULL);
		// m_FootstepSounds[n] = m_FootstepSounds[0];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_12 = __this->___m_FootstepSounds_18;
		int32_t L_13 = V_0;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_14 = __this->___m_FootstepSounds_18;
		int32_t L_15 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_16);
		// m_FootstepSounds[0] = m_AudioSource.clip;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_17 = __this->___m_FootstepSounds_18;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19;
		L_19 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_18, NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_19);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_m09FA04C68EC864EFECC77850A8CA1648F7B38E9E (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, float ___speed0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B6_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_3 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B5_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_3 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B7_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_4 = NULL;
	{
		// if (!m_UseHeadBob)
		bool L_0 = __this->___m_UseHeadBob_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CharacterController.velocity.magnitude > 0 && m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->___m_CharacterController_26;
		bool L_5;
		L_5 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_4, NULL);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		// m_Camera.transform.localPosition =
		//     m_HeadBob.DoHeadBob(m_CharacterController.velocity.magnitude +
		//                       (speed*(m_IsWalking ? 1f : m_RunstepLenghten)));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_8 = __this->___m_HeadBob_15;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_12 = ___speed0;
		bool L_13 = __this->___m_IsWalking_4;
		G_B5_0 = L_12;
		G_B5_1 = L_11;
		G_B5_2 = L_8;
		G_B5_3 = L_7;
		if (L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_11;
			G_B6_2 = L_8;
			G_B6_3 = L_7;
			goto IL_006b;
		}
	}
	{
		float L_14 = __this->___m_RunstepLenghten_7;
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_0070;
	}

IL_006b:
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_0070:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = CurveControlledBob_DoHeadBob_m939E73B581223054E433FA94C53044A39589C789(G_B7_3, ((float)il2cpp_codegen_add(G_B7_2, ((float)il2cpp_codegen_multiply(G_B7_1, G_B7_0)))), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B7_4, L_15, NULL);
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		V_0 = L_18;
		// newCameraPosition.y = m_Camera.transform.localPosition.y - m_JumpBob.Offset();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		float L_22 = L_21.___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_23 = __this->___m_JumpBob_16;
		float L_24;
		L_24 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_23, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		goto IL_00e6;
	}

IL_00b7:
	{
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		V_0 = L_27;
		// newCameraPosition.y = m_OriginalCameraPosition.y - m_JumpBob.Offset();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_OriginalCameraPosition_29);
		float L_29 = L_28->___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_30 = __this->___m_JumpBob_16;
		float L_31;
		L_31 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_30, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_29, L_31));
	}

IL_00e6:
	{
		// m_Camera.transform.localPosition = newCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mA973EBB03719A5E34DCE7DD7B438705438F1A45B (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, float* ___speed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float* G_B2_0 = NULL;
	float* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	float* G_B3_1 = NULL;
	FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* G_B10_0 = NULL;
	FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* G_B9_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* G_B11_1 = NULL;
	{
		// float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float vertical = CrossPlatformInputManager.GetAxis("Vertical");
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// bool waswalking = m_IsWalking;
		bool L_2 = __this->___m_IsWalking_4;
		V_2 = L_2;
		// m_IsWalking = !Input.GetKey(KeyCode.LeftShift);
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		__this->___m_IsWalking_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// speed = m_IsWalking ? m_WalkSpeed : m_RunSpeed;
		float* L_4 = ___speed0;
		bool L_5 = __this->___m_IsWalking_4;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0041;
		}
	}
	{
		float L_6 = __this->___m_RunSpeed_6;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0047;
	}

IL_0041:
	{
		float L_7 = __this->___m_WalkSpeed_5;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0047:
	{
		*((float*)G_B3_1) = (float)G_B3_0;
		// m_Input = new Vector2(horizontal, vertical);
		float L_8 = V_0;
		float L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		__this->___m_Input_24 = L_10;
		// if (m_Input.sqrMagnitude > 1)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___m_Input_24);
		float L_12;
		L_12 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_11, NULL);
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// m_Input.Normalize();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___m_Input_24);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_13, NULL);
	}

IL_0072:
	{
		// if (m_IsWalking != waswalking && m_UseFovKick && m_CharacterController.velocity.sqrMagnitude > 0)
		bool L_14 = __this->___m_IsWalking_4;
		bool L_15 = V_2;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_16 = __this->___m_UseFovKick_12;
		if (!L_16)
		{
			goto IL_00ca;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_17 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_17, NULL);
		V_3 = L_18;
		float L_19;
		L_19 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_3), NULL);
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(!m_IsWalking ? m_FovKick.FOVKickUp() : m_FovKick.FOVKickDown());
		bool L_20 = __this->___m_IsWalking_4;
		G_B9_0 = __this;
		if (!L_20)
		{
			G_B10_0 = __this;
			goto IL_00b9;
		}
	}
	{
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_21 = __this->___m_FovKick_13;
		RuntimeObject* L_22;
		L_22 = FOVKick_FOVKickDown_m3A72FD589557D6FBD4898FE2C414887AC9B8EEA8(L_21, NULL);
		G_B11_0 = L_22;
		G_B11_1 = G_B9_0;
		goto IL_00c4;
	}

IL_00b9:
	{
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_23 = __this->___m_FovKick_13;
		RuntimeObject* L_24;
		L_24 = FOVKick_FOVKickUp_mF7BD01A8C076F8D85D51C419F15EF3DC26F65A73(L_23, NULL);
		G_B11_0 = L_24;
		G_B11_1 = G_B10_0;
	}

IL_00c4:
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(G_B11_1, G_B11_0, NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_m6DA625811334A3E1E56D0E1A29D1092BAA9F1E92 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	{
		// m_MouseLook.LookRotation (transform, m_Camera.transform);
		MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* L_0 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		MouseLook_LookRotation_m4B5863D269A1137FEC7B29C122F3F9A72619C89E(L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_OnControllerColliderHit_m2155A786C322AA2CAB65745C3613AB4FCB90C0E8 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (m_CollisionFlags == CollisionFlags.Below)
		int32_t L_3 = __this->___m_CollisionFlags_27;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (body == null || body.isKinematic)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = V_0;
		bool L_7;
		L_7 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_6, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// body.AddForceAtPosition(m_CharacterController.velocity*0.1f, hit.point, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = V_0;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, (0.100000001f), NULL);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915(L_12, NULL);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_8, L_11, L_13, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController__ctor_mA661DB5D1E7D45770936DE00D198ECFA3447DC68 (FirstPersonController_tC0EDB51A962C99D85A43D28A7CC6C2A2B06548A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private FOVKick m_FovKick = new FOVKick();
		FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D* L_0 = (FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D*)il2cpp_codegen_object_new(FOVKick_t3C3EA3A67FCDBC913162032B60ABB3B4505A6D0D_il2cpp_TypeInfo_var);
		FOVKick__ctor_mDF56243B3AC3548DDE2A9BDE0B5647D3651FE1DC(L_0, NULL);
		__this->___m_FovKick_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FovKick_13), (void*)L_0);
		// [SerializeField] private CurveControlledBob m_HeadBob = new CurveControlledBob();
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_1 = (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200*)il2cpp_codegen_object_new(CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		CurveControlledBob__ctor_mB3869A153057F97DE66D6E864AFC2FBA95D5C463(L_1, NULL);
		__this->___m_HeadBob_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadBob_15), (void*)L_1);
		// [SerializeField] private LerpControlledBob m_JumpBob = new LerpControlledBob();
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_2 = (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B*)il2cpp_codegen_object_new(LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		LerpControlledBob__ctor_m51BAF74545894A740D2526114BE0C39E105BAD79(L_2, NULL);
		__this->___m_JumpBob_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JumpBob_16), (void*)L_2);
		// private Vector3 m_MoveDir = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_MoveDir_25 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob_Start_m2D77EF26A9A1BCC784BD6324A28E19DBEC4E3F95 (HeadBob_tD499F09A0FC930637D9575F563919F454A3E3E8E* __this, const RuntimeMethod* method) 
{
	{
		// motionBob.Setup(Camera, StrideInterval);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_0 = __this->___motionBob_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___Camera_4;
		float L_2 = __this->___StrideInterval_8;
		CurveControlledBob_Setup_m6692CB7489082BA46CF2FF7CE2D16CE9218E2AD3(L_0, L_1, L_2, NULL);
		// m_OriginalCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		__this->___m_OriginalCameraPosition_11 = L_5;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob_Update_m791126B628C2449DD97ABB0A6D439EB1BFD42B39 (HeadBob_tD499F09A0FC930637D9575F563919F454A3E3E8E* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B4_0 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B4_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_2 = NULL;
	float G_B3_0 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B3_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* G_B5_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_3 = NULL;
	{
		// if (rigidbodyFirstPersonController.Velocity.magnitude > 0 && rigidbodyFirstPersonController.Grounded)
		RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* L_0 = __this->___rigidbodyFirstPersonController_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = RigidbodyFirstPersonController_get_Velocity_m58E7BC7E88DA9897BD58C34DD008D6DF78E2EF0E(L_0, NULL);
		V_1 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_00b1;
		}
	}
	{
		RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* L_3 = __this->___rigidbodyFirstPersonController_7;
		bool L_4;
		L_4 = RigidbodyFirstPersonController_get_Grounded_m9F37AC22D1EEBBB4B2E8A3239C36A1EE03964392_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// Camera.transform.localPosition = motionBob.DoHeadBob(rigidbodyFirstPersonController.Velocity.magnitude*(rigidbodyFirstPersonController.Running ? RunningStrideLengthen : 1f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_7 = __this->___motionBob_5;
		RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* L_8 = __this->___rigidbodyFirstPersonController_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RigidbodyFirstPersonController_get_Velocity_m58E7BC7E88DA9897BD58C34DD008D6DF78E2EF0E(L_8, NULL);
		V_1 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* L_11 = __this->___rigidbodyFirstPersonController_7;
		bool L_12;
		L_12 = RigidbodyFirstPersonController_get_Running_m7968161B7591E9305BB102D7FD873454D1DCE537(L_11, NULL);
		G_B3_0 = L_10;
		G_B3_1 = L_7;
		G_B3_2 = L_6;
		if (L_12)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_7;
			G_B4_2 = L_6;
			goto IL_0065;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_006b;
	}

IL_0065:
	{
		float L_13 = __this->___RunningStrideLengthen_9;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_006b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = CurveControlledBob_DoHeadBob_m939E73B581223054E433FA94C53044A39589C789(G_B5_2, ((float)il2cpp_codegen_multiply(G_B5_1, G_B5_0)), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B5_3, L_14, NULL);
		// newCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		V_0 = L_17;
		// newCameraPosition.y = Camera.transform.localPosition.y - jumpAndLandingBob.Offset();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		float L_21 = L_20.___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_22 = __this->___jumpAndLandingBob_6;
		float L_23;
		L_23 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_22, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_21, L_23));
		goto IL_00e0;
	}

IL_00b1:
	{
		// newCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_25, NULL);
		V_0 = L_26;
		// newCameraPosition.y = m_OriginalCameraPosition.y - jumpAndLandingBob.Offset();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___m_OriginalCameraPosition_11);
		float L_28 = L_27->___y_3;
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_29 = __this->___jumpAndLandingBob_6;
		float L_30;
		L_30 = LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline(L_29, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_28, L_30));
	}

IL_00e0:
	{
		// Camera.transform.localPosition = newCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_32, L_33, NULL);
		// if (!m_PreviouslyGrounded && rigidbodyFirstPersonController.Grounded)
		bool L_34 = __this->___m_PreviouslyGrounded_10;
		if (L_34)
		{
			goto IL_0118;
		}
	}
	{
		RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* L_35 = __this->___rigidbodyFirstPersonController_7;
		bool L_36;
		L_36 = RigidbodyFirstPersonController_get_Grounded_m9F37AC22D1EEBBB4B2E8A3239C36A1EE03964392_inline(L_35, NULL);
		if (!L_36)
		{
			goto IL_0118;
		}
	}
	{
		// StartCoroutine(jumpAndLandingBob.DoBobCycle());
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_37 = __this->___jumpAndLandingBob_6;
		RuntimeObject* L_38;
		L_38 = LerpControlledBob_DoBobCycle_m457BF7490A4DDC7B31C7675752F83D630D4D8D65(L_37, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_39;
		L_39 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_38, NULL);
	}

IL_0118:
	{
		// m_PreviouslyGrounded = rigidbodyFirstPersonController.Grounded;
		RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* L_40 = __this->___rigidbodyFirstPersonController_7;
		bool L_41;
		L_41 = RigidbodyFirstPersonController_get_Grounded_m9F37AC22D1EEBBB4B2E8A3239C36A1EE03964392_inline(L_40, NULL);
		__this->___m_PreviouslyGrounded_10 = L_41;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob__ctor_mF002E0CF6DF17059A49AEEF1D527FD89570CFCD2 (HeadBob_tD499F09A0FC930637D9575F563919F454A3E3E8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CurveControlledBob motionBob = new CurveControlledBob();
		CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200* L_0 = (CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200*)il2cpp_codegen_object_new(CurveControlledBob_tA83BDE30C70487F6A2BF6C8BAA63C7CA5C652200_il2cpp_TypeInfo_var);
		CurveControlledBob__ctor_mB3869A153057F97DE66D6E864AFC2FBA95D5C463(L_0, NULL);
		__this->___motionBob_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___motionBob_5), (void*)L_0);
		// public LerpControlledBob jumpAndLandingBob = new LerpControlledBob();
		LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* L_1 = (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B*)il2cpp_codegen_object_new(LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B_il2cpp_TypeInfo_var);
		LerpControlledBob__ctor_m51BAF74545894A740D2526114BE0C39E105BAD79(L_1, NULL);
		__this->___jumpAndLandingBob_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpAndLandingBob_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_mC5AAE8B6B989184410638B22566688441DD33E5A (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) 
{
	{
		// m_CharacterTargetRot = character.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___m_CharacterTargetRot_8 = L_1;
		// m_CameraTargetRot = camera.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___m_CameraTargetRot_9 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m4B5863D269A1137FEC7B29C122F3F9A72619C89E (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float yRot = CrossPlatformInputManager.GetAxis("Mouse X") * XSensitivity;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___XSensitivity_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// float xRot = CrossPlatformInputManager.GetAxis("Mouse Y") * YSensitivity;
		float L_2;
		L_2 = CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_3 = __this->___YSensitivity_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// m_CharacterTargetRot *= Quaternion.Euler (0f, yRot, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___m_CharacterTargetRot_8;
		float L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_5, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_4, L_6, NULL);
		__this->___m_CharacterTargetRot_8 = L_7;
		// m_CameraTargetRot *= Quaternion.Euler (-xRot, 0f, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___m_CameraTargetRot_9;
		float L_9 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((-L_9)), (0.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_8, L_10, NULL);
		__this->___m_CameraTargetRot_9 = L_11;
		// if(clampVerticalRotation)
		bool L_12 = __this->___clampVerticalRotation_2;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		// m_CameraTargetRot = ClampRotationAroundXAxis (m_CameraTargetRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___m_CameraTargetRot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = MouseLook_ClampRotationAroundXAxis_m73E9685DBD0CE9FBCB8192A051D949B7CF1E41AE(__this, L_13, NULL);
		__this->___m_CameraTargetRot_9 = L_14;
	}

IL_0081:
	{
		// if(smooth)
		bool L_15 = __this->___smooth_5;
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		// character.localRotation = Quaternion.Slerp (character.localRotation, m_CharacterTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___character0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = __this->___m_CharacterTargetRot_8;
		float L_20 = __this->___smoothTime_6;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_22, NULL);
		// camera.localRotation = Quaternion.Slerp (camera.localRotation, m_CameraTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___camera1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = __this->___m_CameraTargetRot_9;
		float L_27 = __this->___smoothTime_6;
		float L_28;
		L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_25, L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_23, L_29, NULL);
		goto IL_00e9;
	}

IL_00d1:
	{
		// character.localRotation = m_CharacterTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = __this->___m_CharacterTargetRot_8;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		// camera.localRotation = m_CameraTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = __this->___m_CameraTargetRot_9;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_32, L_33, NULL);
	}

IL_00e9:
	{
		// UpdateCursorLock();
		MouseLook_UpdateCursorLock_mE013EB69C8F810DB9263394540DDE576B65AC63B(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::SetCursorLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_SetCursorLock_m39BC957804AC172058244C4669AB9A1546F1608B (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// lockCursor = value;
		bool L_0 = ___value0;
		__this->___lockCursor_7 = L_0;
		// if(!lockCursor)
		bool L_1 = __this->___lockCursor_7;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_mE013EB69C8F810DB9263394540DDE576B65AC63B (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, const RuntimeMethod* method) 
{
	{
		// if (lockCursor)
		bool L_0 = __this->___lockCursor_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InternalLockUpdate();
		MouseLook_InternalLockUpdate_mDCAA44FD6A3956B3DD9C51EB879AAED23947C32A(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_mDCAA44FD6A3956B3DD9C51EB879AAED23947C32A (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// m_cursorIsLocked = false;
		__this->___m_cursorIsLocked_10 = (bool)0;
		goto IL_0021;
	}

IL_0012:
	{
		// else if(Input.GetMouseButtonUp(0))
		bool L_1;
		L_1 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
	}

IL_0021:
	{
		// if (m_cursorIsLocked)
		bool L_2 = __this->___m_cursorIsLocked_10;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		return;
	}

IL_0036:
	{
		// else if (!m_cursorIsLocked)
		bool L_3 = __this->___m_cursorIsLocked_10;
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m73E9685DBD0CE9FBCB8192A051D949B7CF1E41AE (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// q.x /= q.w;
		float* L_0 = (&(&___q0)->___x_0);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___q0;
		float L_4 = L_3.___w_3;
		*((float*)L_1) = (float)((float)(L_2/L_4));
		// q.y /= q.w;
		float* L_5 = (&(&___q0)->___y_1);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___q0;
		float L_9 = L_8.___w_3;
		*((float*)L_6) = (float)((float)(L_7/L_9));
		// q.z /= q.w;
		float* L_10 = (&(&___q0)->___z_2);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___q0;
		float L_14 = L_13.___w_3;
		*((float*)L_11) = (float)((float)(L_12/L_14));
		// q.w = 1.0f;
		(&___q0)->___w_3 = (1.0f);
		// float angleX = 2.0f * Mathf.Rad2Deg * Mathf.Atan (q.x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___q0;
		float L_16 = L_15.___x_0;
		float L_17;
		L_17 = atanf(L_16);
		V_0 = ((float)il2cpp_codegen_multiply((114.59156f), L_17));
		// angleX = Mathf.Clamp (angleX, MinimumX, MaximumX);
		float L_18 = V_0;
		float L_19 = __this->___MinimumX_3;
		float L_20 = __this->___MaximumX_4;
		float L_21;
		L_21 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_18, L_19, L_20, NULL);
		V_0 = L_21;
		// q.x = Mathf.Tan (0.5f * Mathf.Deg2Rad * angleX);
		float L_22 = V_0;
		float L_23;
		L_23 = tanf(((float)il2cpp_codegen_multiply((0.00872664619f), L_22)));
		(&___q0)->___x_0 = L_23;
		// return q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___q0;
		return L_24;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_mAFD9B314262B2610E073FD482C80CC06D8819F6B (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* __this, const RuntimeMethod* method) 
{
	{
		// public float XSensitivity = 2f;
		__this->___XSensitivity_0 = (2.0f);
		// public float YSensitivity = 2f;
		__this->___YSensitivity_1 = (2.0f);
		// public bool clampVerticalRotation = true;
		__this->___clampVerticalRotation_2 = (bool)1;
		// public float MinimumX = -90F;
		__this->___MinimumX_3 = (-90.0f);
		// public float MaximumX = 90F;
		__this->___MaximumX_4 = (90.0f);
		// public float smoothTime = 5f;
		__this->___smoothTime_6 = (5.0f);
		// public bool lockCursor = true;
		__this->___lockCursor_7 = (bool)1;
		// private bool m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RigidbodyFirstPersonController_get_Velocity_m58E7BC7E88DA9897BD58C34DD008D6DF78E2EF0E (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_RigidBody.velocity; }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Grounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_m9F37AC22D1EEBBB4B2E8A3239C36A1EE03964392 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsGrounded; }
		bool L_0 = __this->___m_IsGrounded_15;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Jumping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Jumping_mEBAFE8D1119818ED531267F5FAD282D90E1CE1E7 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Jumping; }
		bool L_0 = __this->___m_Jumping_14;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Running_m7968161B7591E9305BB102D7FD873454D1DCE537 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	{
		// return movementSettings.Running;
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_0 = __this->___movementSettings_5;
		bool L_1;
		L_1 = MovementSettings_get_Running_m0227D0724C131EBAF7BF35FD2CB6B7B46C175BA2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_Start_m6BD9E23D64E63A1CE966149986E8038DC913DAED (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_RigidBody_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RigidBody_8), (void*)L_0);
		// m_Capsule = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___m_Capsule_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Capsule_9), (void*)L_1);
		// mouseLook.Init (transform, cam.transform);
		MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* L_2 = __this->___mouseLook_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		MouseLook_Init_mC5AAE8B6B989184410638B22566688441DD33E5A(L_2, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_Update_m3C61FD34764FBAE5A91A5D54F0AA809CB2B0778E (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateView();
		RigidbodyFirstPersonController_RotateView_m0BA89B180C3A77FA035A8C6F5428F3B436C65AD5(__this, NULL);
		// if (CrossPlatformInputManager.GetButtonDown("Jump") && !m_Jump)
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrossPlatformInputManager_GetButtonDown_m2AEC6C7F5E5D3987230E51A4575A3CB6A7088C88(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = __this->___m_Jump_12;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_Jump = true;
		__this->___m_Jump_12 = (bool)1;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_FixedUpdate_mFE657F3C8EA1C4CB252F93189D8A9B69B862EAC5 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GroundCheck();
		RigidbodyFirstPersonController_GroundCheck_m3C8FF34BEECF513A15B59BBCCC1BDCD00EFBAFD1(__this, NULL);
		// Vector2 input = GetInput();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = RigidbodyFirstPersonController_GetInput_m22E6EF8D289E18BA5A0C7D282E57ED5BCC4BA981(__this, NULL);
		V_0 = L_0;
		// if ((Mathf.Abs(input.x) > float.Epsilon || Mathf.Abs(input.y) > float.Epsilon) && (advancedSettings.airControl || m_IsGrounded))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((((float)L_3) > ((float)(1.40129846E-45f))))
		{
			goto IL_0034;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___y_1;
		float L_6;
		L_6 = fabsf(L_5);
		if ((!(((float)L_6) > ((float)(1.40129846E-45f)))))
		{
			goto IL_012c;
		}
	}

IL_0034:
	{
		AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* L_7 = __this->___advancedSettings_7;
		bool L_8 = L_7->___airControl_3;
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		bool L_9 = __this->___m_IsGrounded_15;
		if (!L_9)
		{
			goto IL_012c;
		}
	}

IL_004c:
	{
		// Vector3 desiredMove = cam.transform.forward*input.y + cam.transform.right*input.x;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_21, NULL);
		V_1 = L_22;
		// desiredMove = Vector3.ProjectOnPlane(desiredMove, m_GroundContactNormal).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___m_GroundContactNormal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_23, L_24, NULL);
		V_2 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_1 = L_26;
		// desiredMove.x = desiredMove.x*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28 = L_27.___x_2;
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_29 = __this->___movementSettings_5;
		float L_30 = L_29->___CurrentTargetSpeed_7;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_multiply(L_28, L_30));
		// desiredMove.z = desiredMove.z*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32 = L_31.___z_4;
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_33 = __this->___movementSettings_5;
		float L_34 = L_33->___CurrentTargetSpeed_7;
		(&V_1)->___z_4 = ((float)il2cpp_codegen_multiply(L_32, L_34));
		// desiredMove.y = desiredMove.y*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___y_3;
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_37 = __this->___movementSettings_5;
		float L_38 = L_37->___CurrentTargetSpeed_7;
		(&V_1)->___y_3 = ((float)il2cpp_codegen_multiply(L_36, L_38));
		// if (m_RigidBody.velocity.sqrMagnitude <
		//     (movementSettings.CurrentTargetSpeed*movementSettings.CurrentTargetSpeed))
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_39, NULL);
		V_2 = L_40;
		float L_41;
		L_41 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_42 = __this->___movementSettings_5;
		float L_43 = L_42->___CurrentTargetSpeed_7;
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_44 = __this->___movementSettings_5;
		float L_45 = L_44->___CurrentTargetSpeed_7;
		if ((!(((float)L_41) < ((float)((float)il2cpp_codegen_multiply(L_43, L_45))))))
		{
			goto IL_012c;
		}
	}
	{
		// m_RigidBody.AddForce(desiredMove*SlopeMultiplier(), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		float L_48;
		L_48 = RigidbodyFirstPersonController_SlopeMultiplier_mE7FEF1D2A4A5FCE7628766B025AD261BD7FC28DC(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_47, L_48, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_46, L_49, 1, NULL);
	}

IL_012c:
	{
		// if (m_IsGrounded)
		bool L_50 = __this->___m_IsGrounded_15;
		if (!L_50)
		{
			goto IL_0214;
		}
	}
	{
		// m_RigidBody.drag = 5f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_51 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_51, (5.0f), NULL);
		// if (m_Jump)
		bool L_52 = __this->___m_Jump_12;
		if (!L_52)
		{
			goto IL_01c1;
		}
	}
	{
		// m_RigidBody.drag = 0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_53 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_53, (0.0f), NULL);
		// m_RigidBody.velocity = new Vector3(m_RigidBody.velocity.x, 0f, m_RigidBody.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_54 = __this->___m_RigidBody_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_55 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_55, NULL);
		float L_57 = L_56.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_58 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_58, NULL);
		float L_60 = L_59.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_57, (0.0f), L_60, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_54, L_61, NULL);
		// m_RigidBody.AddForce(new Vector3(0f, movementSettings.JumpForce, 0f), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_62 = __this->___m_RigidBody_8;
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_63 = __this->___movementSettings_5;
		float L_64 = L_63->___JumpForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), (0.0f), L_64, (0.0f), /*hidden argument*/NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_62, L_65, 1, NULL);
		// m_Jumping = true;
		__this->___m_Jumping_14 = (bool)1;
	}

IL_01c1:
	{
		// if (!m_Jumping && Mathf.Abs(input.x) < float.Epsilon && Mathf.Abs(input.y) < float.Epsilon && m_RigidBody.velocity.magnitude < 1f)
		bool L_66 = __this->___m_Jumping_14;
		if (L_66)
		{
			goto IL_023a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_0;
		float L_68 = L_67.___x_0;
		float L_69;
		L_69 = fabsf(L_68);
		if ((!(((float)L_69) < ((float)(1.40129846E-45f)))))
		{
			goto IL_023a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_0;
		float L_71 = L_70.___y_1;
		float L_72;
		L_72 = fabsf(L_71);
		if ((!(((float)L_72) < ((float)(1.40129846E-45f)))))
		{
			goto IL_023a;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_73 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_73, NULL);
		V_2 = L_74;
		float L_75;
		L_75 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		if ((!(((float)L_75) < ((float)(1.0f)))))
		{
			goto IL_023a;
		}
	}
	{
		// m_RigidBody.Sleep();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_76 = __this->___m_RigidBody_8;
		Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA(L_76, NULL);
		goto IL_023a;
	}

IL_0214:
	{
		// m_RigidBody.drag = 0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_77 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_77, (0.0f), NULL);
		// if (m_PreviouslyGrounded && !m_Jumping)
		bool L_78 = __this->___m_PreviouslyGrounded_13;
		if (!L_78)
		{
			goto IL_023a;
		}
	}
	{
		bool L_79 = __this->___m_Jumping_14;
		if (L_79)
		{
			goto IL_023a;
		}
	}
	{
		// StickToGroundHelper();
		RigidbodyFirstPersonController_StickToGroundHelper_m0DF00DF8875A8762FC6CA1CE41987CCD6202B685(__this, NULL);
	}

IL_023a:
	{
		// m_Jump = false;
		__this->___m_Jump_12 = (bool)0;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::SlopeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RigidbodyFirstPersonController_SlopeMultiplier_mE7FEF1D2A4A5FCE7628766B025AD261BD7FC28DC (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angle = Vector3.Angle(m_GroundContactNormal, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_GroundContactNormal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_2;
		L_2 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return movementSettings.SlopeCurveModifier.Evaluate(angle);
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_3 = __this->___movementSettings_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = L_3->___SlopeCurveModifier_6;
		float L_5 = V_0;
		float L_6;
		L_6 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::StickToGroundHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_StickToGroundHelper_m0DF00DF8875A8762FC6CA1CE41987CCD6202B685 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.SphereCast(transform.position, m_Capsule.radius * (1.0f - advancedSettings.shellOffset), Vector3.down, out hitInfo,
		//                        ((m_Capsule.height/2f) - m_Capsule.radius) +
		//                        advancedSettings.stickToGroundHelperDistance, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___m_Capsule_9;
		float L_3;
		L_3 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_2, NULL);
		AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* L_4 = __this->___advancedSettings_7;
		float L_5 = L_4->___shellOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___m_Capsule_9;
		float L_8;
		L_8 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_7, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_9 = __this->___m_Capsule_9;
		float L_10;
		L_10 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_9, NULL);
		AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* L_11 = __this->___advancedSettings_7;
		float L_12 = L_11->___stickToGroundHelperDistance_1;
		bool L_13;
		L_13 = Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D(L_1, ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_subtract((1.0f), L_5)))), L_6, (&V_0), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)(L_8/(2.0f))), L_10)), L_12)), (-1), 1, NULL);
		if (!L_13)
		{
			goto IL_00a0;
		}
	}
	{
		// if (Mathf.Abs(Vector3.Angle(hitInfo.normal, Vector3.up)) < 85f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_16;
		L_16 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = fabsf(L_16);
		if ((!(((float)L_17) < ((float)(85.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		// m_RigidBody.velocity = Vector3.ProjectOnPlane(m_RigidBody.velocity, hitInfo.normal);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___m_RigidBody_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_20, L_21, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_18, L_22, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RigidbodyFirstPersonController_GetInput_m22E6EF8D289E18BA5A0C7D282E57ED5BCC4BA981 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 input = new Vector2
		//     {
		//         x = CrossPlatformInputManager.GetAxis("Horizontal"),
		//         y = CrossPlatformInputManager.GetAxis("Vertical")
		//     };
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t3CFE869C7296F3FE55EC37D80AD7C3C94AAC8B9C_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		(&V_1)->___x_0 = L_0;
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_mC1A738C1B10EDB9A87A4E4052D17F674A513B0BF(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		(&V_1)->___y_1 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_1;
		V_0 = L_2;
		// movementSettings.UpdateDesiredTargetSpeed(input);
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_3 = __this->___movementSettings_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		MovementSettings_UpdateDesiredTargetSpeed_m2193667C84E4A5981CE22D64DC7F517D19F841DC(L_3, L_4, NULL);
		// return input;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_RotateView_m0BA89B180C3A77FA035A8C6F5428F3B436C65AD5 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Mathf.Abs(Time.timeScale) < float.Epsilon) return;
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0012;
		}
	}
	{
		// if (Mathf.Abs(Time.timeScale) < float.Epsilon) return;
		return;
	}

IL_0012:
	{
		// float oldYRotation = transform.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		float L_4 = L_3.___y_3;
		V_0 = L_4;
		// mouseLook.LookRotation (transform, cam.transform);
		MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* L_5 = __this->___mouseLook_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		MouseLook_LookRotation_m4B5863D269A1137FEC7B29C122F3F9A72619C89E(L_5, L_6, L_8, NULL);
		// if (m_IsGrounded || advancedSettings.airControl)
		bool L_9 = __this->___m_IsGrounded_15;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* L_10 = __this->___advancedSettings_7;
		bool L_11 = L_10->___airControl_3;
		if (!L_11)
		{
			goto IL_008d;
		}
	}

IL_0054:
	{
		// Quaternion velRotation = Quaternion.AngleAxis(transform.eulerAngles.y - oldYRotation, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_12, NULL);
		float L_14 = L_13.___y_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract(L_14, L_15)), L_16, NULL);
		V_1 = L_17;
		// m_RigidBody.velocity = velRotation*m_RigidBody.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___m_RigidBody_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_19, L_21, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_18, L_22, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_GroundCheck_m3C8FF34BEECF513A15B59BBCCC1BDCD00EFBAFD1 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_PreviouslyGrounded = m_IsGrounded;
		bool L_0 = __this->___m_IsGrounded_15;
		__this->___m_PreviouslyGrounded_13 = L_0;
		// if (Physics.SphereCast(transform.position, m_Capsule.radius * (1.0f - advancedSettings.shellOffset), Vector3.down, out hitInfo,
		//                        ((m_Capsule.height/2f) - m_Capsule.radius) + advancedSettings.groundCheckDistance, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3 = __this->___m_Capsule_9;
		float L_4;
		L_4 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_3, NULL);
		AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* L_5 = __this->___advancedSettings_7;
		float L_6 = L_5->___shellOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_8 = __this->___m_Capsule_9;
		float L_9;
		L_9 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_8, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_10 = __this->___m_Capsule_9;
		float L_11;
		L_11 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_10, NULL);
		AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* L_12 = __this->___advancedSettings_7;
		float L_13 = L_12->___groundCheckDistance_0;
		bool L_14;
		L_14 = Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D(L_2, ((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_subtract((1.0f), L_6)))), L_7, (&V_0), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)(L_9/(2.0f))), L_11)), L_13)), (-1), 1, NULL);
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// m_IsGrounded = true;
		__this->___m_IsGrounded_15 = (bool)1;
		// m_GroundContactNormal = hitInfo.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		__this->___m_GroundContactNormal_11 = L_15;
		goto IL_0095;
	}

IL_0083:
	{
		// m_IsGrounded = false;
		__this->___m_IsGrounded_15 = (bool)0;
		// m_GroundContactNormal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___m_GroundContactNormal_11 = L_16;
	}

IL_0095:
	{
		// if (!m_PreviouslyGrounded && m_IsGrounded && m_Jumping)
		bool L_17 = __this->___m_PreviouslyGrounded_13;
		if (L_17)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_18 = __this->___m_IsGrounded_15;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_19 = __this->___m_Jumping_14;
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		// m_Jumping = false;
		__this->___m_Jumping_14 = (bool)0;
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController__ctor_m7D04F167D6BBFFBD37B2279CBD82726D1FD44CC8 (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MovementSettings movementSettings = new MovementSettings();
		MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* L_0 = (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797*)il2cpp_codegen_object_new(MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797_il2cpp_TypeInfo_var);
		MovementSettings__ctor_m12E4B7AC6862A57BC5D3B0BC69B70236783D3DBD(L_0, NULL);
		__this->___movementSettings_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movementSettings_5), (void*)L_0);
		// public MouseLook mouseLook = new MouseLook();
		MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084* L_1 = (MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084*)il2cpp_codegen_object_new(MouseLook_tA6C0C21F83A9523EEDBDEDE9B085F9245C662084_il2cpp_TypeInfo_var);
		MouseLook__ctor_mAFD9B314262B2610E073FD482C80CC06D8819F6B(L_1, NULL);
		__this->___mouseLook_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouseLook_6), (void*)L_1);
		// public AdvancedSettings advancedSettings = new AdvancedSettings();
		AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* L_2 = (AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8*)il2cpp_codegen_object_new(AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8_il2cpp_TypeInfo_var);
		AdvancedSettings__ctor_m97C8FC11BB389DB0BB737596F305466292954DA0(L_2, NULL);
		__this->___advancedSettings_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___advancedSettings_7), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::UpdateDesiredTargetSpeed(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings_UpdateDesiredTargetSpeed_m2193667C84E4A5981CE22D64DC7F517D19F841DC (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) 
{
	{
		// if (input == Vector2.zero) return;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___input0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// if (input == Vector2.zero) return;
		return;
	}

IL_000e:
	{
		// if (input.x > 0 || input.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___input0;
		float L_4 = L_3.___x_0;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___input0;
		float L_6 = L_5.___x_0;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}

IL_0028:
	{
		// CurrentTargetSpeed = StrafeSpeed;
		float L_7 = __this->___StrafeSpeed_2;
		__this->___CurrentTargetSpeed_7 = L_7;
	}

IL_0034:
	{
		// if (input.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___input0;
		float L_9 = L_8.___y_1;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// CurrentTargetSpeed = BackwardSpeed;
		float L_10 = __this->___BackwardSpeed_1;
		__this->___CurrentTargetSpeed_7 = L_10;
	}

IL_004d:
	{
		// if (input.y > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___input0;
		float L_12 = L_11.___y_1;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		// CurrentTargetSpeed = ForwardSpeed;
		float L_13 = __this->___ForwardSpeed_0;
		__this->___CurrentTargetSpeed_7 = L_13;
	}

IL_0066:
	{
		// if (Input.GetKey(RunKey))
		int32_t L_14 = __this->___RunKey_4;
		bool L_15;
		L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_14, NULL);
		if (!L_15)
		{
			goto IL_008e;
		}
	}
	{
		// CurrentTargetSpeed *= RunMultiplier;
		float L_16 = __this->___CurrentTargetSpeed_7;
		float L_17 = __this->___RunMultiplier_3;
		__this->___CurrentTargetSpeed_7 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		// m_Running = true;
		__this->___m_Running_8 = (bool)1;
		return;
	}

IL_008e:
	{
		// m_Running = false;
		__this->___m_Running_8 = (bool)0;
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_m0227D0724C131EBAF7BF35FD2CB6B7B46C175BA2 (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Running; }
		bool L_0 = __this->___m_Running_8;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings__ctor_m12E4B7AC6862A57BC5D3B0BC69B70236783D3DBD (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float ForwardSpeed = 8.0f;   // Speed when walking forward
		__this->___ForwardSpeed_0 = (8.0f);
		// public float BackwardSpeed = 4.0f;  // Speed when walking backwards
		__this->___BackwardSpeed_1 = (4.0f);
		// public float StrafeSpeed = 4.0f;    // Speed when walking sideways
		__this->___StrafeSpeed_2 = (4.0f);
		// public float RunMultiplier = 2.0f;   // Speed when sprinting
		__this->___RunMultiplier_3 = (2.0f);
		// public KeyCode RunKey = KeyCode.LeftShift;
		__this->___RunKey_4 = ((int32_t)304);
		// public float JumpForce = 30f;
		__this->___JumpForce_5 = (30.0f);
		// public AnimationCurve SlopeCurveModifier = new AnimationCurve(new Keyframe(-90.0f, 1.0f), new Keyframe(0.0f, 1.0f), new Keyframe(90.0f, 0.0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (-90.0f), (1.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.0f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (90.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___SlopeCurveModifier_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SlopeCurveModifier_6), (void*)L_7);
		// [HideInInspector] public float CurrentTargetSpeed = 8f;
		__this->___CurrentTargetSpeed_7 = (8.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m97C8FC11BB389DB0BB737596F305466292954DA0 (AdvancedSettings_t850616EE9AE83855EFFBCB04EDDFE99692ECECA8* __this, const RuntimeMethod* method) 
{
	{
		// public float groundCheckDistance = 0.01f; // distance for checking if the controller is grounded ( 0.01f seems to work best for this )
		__this->___groundCheckDistance_0 = (0.00999999978f);
		// public float stickToGroundHelperDistance = 0.5f; // stops the character
		__this->___stickToGroundHelperDistance_1 = (0.5f);
		// public float slowDownRate = 20f; // rate at which the controller comes to a stop when there is no input
		__this->___slowDownRate_2 = (20.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_m1ACC9260F42FF6B84F7FE033FDCD39E5B84D39CD_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m64B5DDE21842217E453CF99A61D473EF8E8111B8_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_mB215A6D2540D63039CF1AF8DAD75083BE6C42B94_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_mDD23E2B0311CA404527187BC10C06BDABA2262AC_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_mB580A9CD9D60CACAC2CBBB9569BA68D418450E69_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m42EB4DDCECD4253AA6AD05E7A3A80F4B02F8BF22_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF8E152814D898FE8F54D4E1CD12A593820A25937_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m7B2AA7C47390156121D9DA0C84B11806275EB2C4_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_m2935B464BDD2C0FB8606C42BF4C418DDEEFC15E8_inline (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m695B765261F304C42498A2A1A08ACB8705857CE9_inline (VirtualInput_tB66335634D6D37E4131BE87D8231F35C4B3D2B7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_m3208970D6C40FC8AA0304330C7BB4E3797F7EDE7_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_mBF84A169980643545AC4F1A771A32B8BAAD1E7A0_inline (VirtualAxis_tE9381AA041A0D14A94B8A76888371CFE6572DB7E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mFCD3B5447C6EEF1E177F556973D9BA199AE24E5F_inline (VirtualButton_t1B3AD58E16080723F5CD65F84774A0ECC6BFADA1* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_m9475BB8A21C740201FFEEFA73115DDADA6012D1C_inline (LerpControlledBob_t76AFC7E0BE6859860064D10262F82F8135E0A29B* __this, const RuntimeMethod* method) 
{
	{
		// return m_Offset;
		float L_0 = __this->___m_Offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_m9F37AC22D1EEBBB4B2E8A3239C36A1EE03964392_inline (RigidbodyFirstPersonController_t97EEC445D521D4A98E9DFF5B1BC0F432C23A6590* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsGrounded; }
		bool L_0 = __this->___m_IsGrounded_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_m0227D0724C131EBAF7BF35FD2CB6B7B46C175BA2_inline (MovementSettings_t4FA5A8DE8301074F4E72106B331E410E9D51F797* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Running; }
		bool L_0 = __this->___m_Running_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
