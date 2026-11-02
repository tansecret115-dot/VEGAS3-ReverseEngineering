/* Module: vegas30k.dll
   Function: Mixer_TestPreviewPortSettings
   Address: 0117e740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_TestPreviewPortSettings(struct tWAVEFORMATEX *) */

long Mixer_TestPreviewPortSettings(tWAVEFORMATEX *param_1)

{
  long lVar1;
  ISFMixerIn *local_18;
  tWAVEFORMATEX local_14;
  
                    /* 0x17e740  248  ?Mixer_TestPreviewPortSettings@@YGJPAUtWAVEFORMATEX@@@Z */
  local_18 = (ISFMixerIn *)0x0;
  lVar1 = Mixer_GetPreviewPort(&local_18,(char *)0x0,0);
  if (-1 < lVar1) {
    if (param_1 == (tWAVEFORMATEX *)0x0) {
      (**(code **)(*DAT_012b09c8 + 0x6c))(DAT_012b09c8,&local_14,0);
      param_1 = &local_14;
    }
    lVar1 = (**(code **)(*(int *)local_18 + 0xbc))(local_18,param_1,1);
    (**(code **)(*(int *)param_1 + 8))(param_1);
  }
  return lVar1;
}


