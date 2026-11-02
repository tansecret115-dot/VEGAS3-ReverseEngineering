/* Module: vegas30.exe
   Function: FUN_005fb140
   Address: 005fb140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fb140(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar1 = Transport_IsPlaying();
  iVar2 = Transport_IsPreviewPlaying();
  iVar3 = Transport_IsRecording();
  iVar4 = Transport_IsRecMonitoring();
  if (iVar3 == 0) {
    if (iVar1 == 0) {
      FUN_00429280();
    }
    else {
      uVar5 = FUN_005fb390(0,0xffffffff,0xffffffff);
    }
    if (iVar2 != 0) {
      uVar5 = FUN_005fd4c0(1);
    }
    if (iVar4 == 0) goto LAB_005fb1db;
    uVar5 = FUN_005fb710(0xffffffff);
  }
  else {
    uVar5 = FUN_005fb660(DAT_0065e528,1,0,0xffffffff,0xffffffff);
  }
  if (param_1 != 0) {
    FUN_004c8110(DAT_00647630);
  }
LAB_005fb1db:
  if (DAT_0064b150 != 0) {
    FUN_005fc6f0();
  }
  return uVar5;
}


