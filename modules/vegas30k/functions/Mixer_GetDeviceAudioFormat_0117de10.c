/* Module: vegas30k.dll
   Function: Mixer_GetDeviceAudioFormat
   Address: 0117de10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDeviceAudioFormat(struct tWAVEFORMATEX *,int) */

long Mixer_GetDeviceAudioFormat(tWAVEFORMATEX *param_1,int param_2)

{
  long lVar1;
  
                    /* 0x17de10  167  ?Mixer_GetDeviceAudioFormat@@YGJPAUtWAVEFORMATEX@@H@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x6c))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


