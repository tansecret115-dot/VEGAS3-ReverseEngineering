/* Module: vegas30.exe
   Function: FUN_004c3bd0
   Address: 004c3bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3bd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = _DAT_00000000;
    if (*(int *)(param_1 + 0xbc8) != 0) {
      piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar2 = *piVar3;
    }
  }
  iVar5 = 0;
  if (0 < iVar2) {
    piVar3 = *(int **)(iVar1 + 8);
    while ((iVar1 = *piVar3, *(int *)(*(int *)(iVar1 + 0x69c) + 0x50) != 2 ||
           (*(int *)(iVar1 + 0x14) != param_2))) {
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
      if (iVar2 <= iVar5) {
        return;
      }
    }
    fVar6 = (float10)*(float *)(iVar1 + 0x48);
    iVar2 = *(int *)(*(int *)(iVar1 + 0x69c) + 0x54);
    if ((float10)_DAT_006106d0 == fVar6) {
      uVar4 = 0;
    }
    else if ((float10)_DAT_00610fd8 == fVar6) {
      uVar4 = 0xfffffda8;
    }
    else {
      log2(fVar6);
      uVar4 = ftol();
    }
    _FaderInst_Message_16(*(undefined4 *)(iVar2 + 0x118),0x610,1,uVar4);
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(*(int *)(*(int *)(iVar1 + 0x69c) + 0x54) + 0xc4),
                   0);
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(*(int *)(*(int *)(iVar1 + 0x69c) + 0x54) + 0xd4),
                   0);
  }
  return;
}


