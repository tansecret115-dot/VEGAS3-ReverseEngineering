/* Module: vegas30.exe
   Function: FUN_005fcae0
   Address: 005fcae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fcae0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  
  iVar1 = Transport_IsPlaying();
  Transport_IsPreviewPlaying();
  iVar2 = Transport_IsRecording();
  Transport_IsRecMonitoring();
  uVar3 = Transport_GetStatus();
  if (param_2 != 0) {
    iVar4 = FUN_005fc6b0(1);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      uVar6 = 4;
    }
    else {
      uVar6 = 0;
    }
    if (((uVar3 & 0x300000) == 0) || (iVar4 != 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_0043b250(param_1,param_2,uVar5 | uVar6);
  }
  if (param_3 != 0) {
    iVar4 = FUN_005fc6b0(2);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      bVar7 = 4;
    }
    else {
      bVar7 = 0;
    }
    if (iVar4 == 0) {
      iVar4 = FUN_005fc600(2,1);
    }
    FUN_0043b250(param_1,param_3,iVar4 == 0 | bVar7);
  }
  if (param_4 != 0) {
    iVar4 = FUN_005fc660(1,0);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      if (((uVar3 & 0x70000) != 0) && (iVar4 == 0)) {
        FUN_0043b250(param_1,param_4,5);
        return;
      }
      FUN_0043b250(param_1,param_4,4);
      return;
    }
    if ((uVar3 & 0x40000) != 0) {
      FUN_0043b250(param_1,param_4,(-(uint)(iVar4 != 0) & 0xfffffffc) + 4 | (uint)(iVar4 == 0));
      return;
    }
    if (((uVar3 & 0x70000) != 0) && (iVar4 == 0)) {
      FUN_0043b250(param_1,param_4,1);
      return;
    }
    FUN_0043b250(param_1,param_4,0);
  }
  return;
}


