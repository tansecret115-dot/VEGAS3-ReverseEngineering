/* Module: vegas30.exe
   Function: FUN_005fc980
   Address: 005fc980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fc980(HMENU param_1,UINT param_2,UINT param_3,UINT param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  UINT UVar5;
  UINT UVar6;
  
  iVar1 = Transport_IsPlaying();
  Transport_IsPreviewPlaying();
  iVar2 = Transport_IsRecording();
  Transport_IsRecMonitoring();
  uVar3 = Transport_GetStatus();
  if (param_2 != 0) {
    if ((iVar1 != 0) || (UVar5 = 0, iVar2 != 0)) {
      UVar5 = 1;
    }
    iVar4 = FUN_005fc6b0(1);
    if (((uVar3 & 0x300000) == 0) || (iVar4 != 0)) {
      UVar6 = 0;
    }
    else {
      UVar6 = 8;
    }
    EnableMenuItem(param_1,param_2,UVar5);
    CheckMenuItem(param_1,param_2,UVar6);
  }
  if (param_3 != 0) {
    iVar4 = FUN_005fc6b0(2);
    if ((iVar1 != 0) || (UVar5 = 0, iVar2 != 0)) {
      UVar5 = 1;
    }
    if (iVar4 == 0) {
      iVar4 = FUN_005fc600(2,1);
    }
    EnableMenuItem(param_1,param_3,UVar5);
    CheckMenuItem(param_1,param_3,(-(uint)(iVar4 != 0) & 0xfffffff8) + 8);
  }
  if (param_4 == 0) {
    return;
  }
  iVar4 = FUN_005fc660(1,0);
  if ((iVar1 == 0) && (iVar2 == 0)) {
    UVar5 = 0;
    if (((uVar3 & 0x70000) != 0) && (iVar4 == 0)) {
      UVar6 = 8;
      goto LAB_005fcabe;
    }
  }
  else {
    if ((uVar3 & 0x40000) != 0) {
      UVar5 = (UINT)(iVar4 != 0);
      UVar6 = (-(uint)(iVar4 != 0) & 0xfffffff8) + 8;
      goto LAB_005fcabe;
    }
    UVar5 = 1;
    if (((uVar3 & 0x70000) != 0) && (iVar4 == 0)) {
      UVar6 = 8;
      goto LAB_005fcabe;
    }
  }
  UVar6 = 0;
LAB_005fcabe:
  EnableMenuItem(param_1,param_4,UVar5);
  CheckMenuItem(param_1,param_4,UVar6);
  return;
}


