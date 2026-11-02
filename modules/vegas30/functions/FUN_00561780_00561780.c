/* Module: vegas30.exe
   Function: FUN_00561780
   Address: 00561780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00561780(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  int *unaff_EDI;
  int *local_20;
  ISFMixerIn *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = (ISFMixerIn *)0x0;
  local_20 = (int *)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = 10;
  local_4 = 10;
  local_18 = 0;
  local_14 = 0;
  iVar1 = Transport_IsAnyPlaying();
  if (iVar1 != 0) {
    FUN_005fb200(1);
  }
  lVar2 = Mixer_GetPreviewPort(&local_1c,(char *)0x0,0);
  if (-1 < lVar2) {
    iVar1 = _SfAudio_CreateGraphObject_4(&local_20);
    if (-1 < iVar1) {
      (**(code **)(*local_20 + 0x20))(local_20);
      (**(code **)(*local_20 + 0x108))(local_20,unaff_EDI);
      iVar1 = FUN_00561700(param_1,param_2,local_20,&local_10,&local_18,0,1);
      if ((iVar1 == 1) || (iVar1 == 3)) {
        FUN_00560cc0(DAT_0064b138,param_2,local_20,iVar1 != 3,0);
      }
    }
  }
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(local_20);
  }
  if (local_1c != (ISFMixerIn *)0x0) {
    (**(code **)(*(int *)local_1c + 0x108))(local_1c,0);
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return;
}


