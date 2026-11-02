/* Module: vegas30k.dll
   Function: Mixer_SetDeviceAudioFormat
   Address: 0117de30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetDeviceAudioFormat(struct tWAVEFORMATEX const *,int) */

long Mixer_SetDeviceAudioFormat(tWAVEFORMATEX *param_1,int param_2)

{
  long lVar1;
  
                    /* 0x17de30  226  ?Mixer_SetDeviceAudioFormat@@YGJPBUtWAVEFORMATEX@@H@Z */
  Mixer_Unprepare();
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x70))(DAT_012b09c8,param_1,param_2);
  Mixer_Prepare();
  return lVar1;
}


