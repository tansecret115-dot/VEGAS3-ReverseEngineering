/* Module: vegas30.exe
   Function: FUN_005fd8b0
   Address: 005fd8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fd8b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  Transport_SetMetric(0x100,&DAT_0064a548);
  Mixer_SetMetronomeMute((uint)(DAT_00649ce4 == 0));
  iVar1 = FUN_005fb100();
  if (iVar1 != 0) {
    Transport_Suspend();
  }
  if (param_1 != 0) {
    iVar2 = FUN_005fc600(1,0);
    if (iVar2 == 0) {
      FUN_005fc6f0();
    }
    iVar3 = FUN_005fc600(1,1);
    if (iVar3 == 0) {
      FUN_005fc850();
    }
    iVar4 = FUN_005fc600(2,0);
    if (iVar4 == 0) {
      FUN_005fc8e0();
    }
    FUN_005fcc60();
    if (iVar2 == 0) {
      iVar2 = FUN_005fc660(1,0);
      if (iVar2 == 0) {
        iVar2 = FUN_005fc6f0();
        if (iVar2 < 0) {
          _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0x12,iVar2,0,1);
        }
      }
    }
    if (iVar3 == 0) {
      iVar2 = FUN_005fc6b0(1);
      if (iVar2 == 0) {
        iVar2 = FUN_005fc850();
        if (iVar2 < 0) {
          _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0x13,iVar2,0,1);
        }
      }
    }
    if (iVar4 == 0) {
      iVar2 = FUN_005fc6b0(2);
      if (iVar2 == 0) {
        iVar2 = FUN_005fc8e0();
        if (iVar2 < 0) {
          _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0x14,iVar2,0,1);
        }
      }
    }
  }
  Mixer_UpdatePrefs(FUN_005fd570,0);
  if (iVar1 != 0) {
    Transport_Resume(0);
  }
  return 0;
}


