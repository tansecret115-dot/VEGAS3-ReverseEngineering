/* Module: vegas30k.dll
   Function: Mixer_GetDeviceAudioFormat
   Address: 0117e220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDeviceAudioFormat(struct tWAVEFORMATEX *,struct ISFMixer *,int) */

long Mixer_GetDeviceAudioFormat(tWAVEFORMATEX *param_1,ISFMixer *param_2,int param_3)

{
  long lVar1;
  
                    /* 0x17e220  168
                       ?Mixer_GetDeviceAudioFormat@@YGJPAUtWAVEFORMATEX@@PAUISFMixer@@H@Z */
  if (param_2 == (ISFMixer *)0x0) {
    param_2 = DAT_012b09c8;
  }
  lVar1 = (**(code **)(*(int *)param_2 + 0x6c))(param_2,param_1,param_3);
  return lVar1;
}


