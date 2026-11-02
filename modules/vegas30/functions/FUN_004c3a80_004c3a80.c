/* Module: vegas30.exe
   Function: FUN_004c3a80
   Address: 004c3a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3a80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  int local_4;
  
  iVar2 = param_1;
  iVar6 = 0;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 == 0)) {
    param_1 = 0;
  }
  else if (*(int *)(param_1 + 0xbc8) == 0) {
    param_1 = _DAT_00000000;
  }
  else {
    piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    param_1 = *piVar4;
  }
  if (0 < param_1) {
    do {
      iVar3 = *(int *)(*(int *)(local_4 + 8) + iVar6 * 4);
      iVar1 = *(int *)(iVar3 + 0x69c);
      if (*(int *)(iVar1 + 0x50) == 2) {
        fVar7 = (float10)*(float *)(iVar3 + 0x48);
        iVar1 = *(int *)(iVar1 + 0x54);
        if ((float10)_DAT_006106d0 == fVar7) {
          uVar5 = 0;
        }
        else if ((float10)_DAT_00610fd8 == fVar7) {
          uVar5 = 0xfffffda8;
        }
        else {
          log2(fVar7);
          uVar5 = ftol();
        }
        _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x118),0x610,1,uVar5);
        FUN_004c37d0(iVar2,iVar3);
      }
      else if (*(int *)(iVar1 + 0x50) == 3) {
        uVar5 = ftol();
        _TrackbarInst_Message_16(*(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x134),0x610,1,uVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  return;
}


