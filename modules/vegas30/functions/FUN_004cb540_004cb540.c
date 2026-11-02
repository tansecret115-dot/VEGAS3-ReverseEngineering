/* Module: vegas30.exe
   Function: FUN_004cb540
   Address: 004cb540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cb540(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar2 == 0)) {
LAB_004cb574:
    *(undefined4 *)(param_1 + 0xcbc) = 0xffffffff;
    return;
  }
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if (*piVar3 == 0) goto LAB_004cb574;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else {
    iVar2 = *piVar3 + -1;
    if (iVar2 < param_2) {
      param_2 = iVar2;
    }
  }
  if (param_3 == 0) {
    if ((*(int *)(param_1 + 0xbc8) == 0) ||
       (piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8)), piVar3 == (int *)0x0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar3;
    }
    if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
      iVar2 = 0;
    }
    else if (*(int *)(param_1 + 0xbc8) == 0) {
      iVar2 = *(int *)(_DAT_00000008 + param_2 * 4);
    }
    else {
      iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + param_2 * 4);
    }
LAB_004cb6e4:
    FUN_004ca740(param_1,iVar2);
  }
  else {
    if ((param_3 & 1) != 0) {
      FUN_004cb780(param_1,param_2,param_3 & 2);
      goto LAB_004cb6f1;
    }
    iVar2 = *(int *)(param_1 + 0xbc8);
    if ((param_3 & 2) == 0) {
      if ((iVar2 == 0) || (piVar3 = (int *)FUN_005b87b0(iVar2), piVar3 == (int *)0x0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
      if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
        iVar2 = 0;
      }
      else if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar2 = *(int *)(_DAT_00000008 + param_2 * 4);
      }
      else {
        iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        iVar2 = *(int *)(*(int *)(iVar2 + 8) + param_2 * 4);
      }
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x10) & 0x10) == 0)) goto LAB_004cb6e4;
    }
    else {
      if ((iVar2 == 0) || (piVar3 = (int *)FUN_005b87b0(iVar2), piVar3 == (int *)0x0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
      if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
        iVar2 = 0;
      }
      else if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar2 = *(int *)(_DAT_00000008 + param_2 * 4);
      }
      else {
        iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        iVar2 = *(int *)(*(int *)(iVar2 + 8) + param_2 * 4);
      }
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) ^ 0x10;
        if ((param_1 != -0x364) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x36c),0);
        }
        DAT_0064767c = DAT_0064767c | 0x20;
      }
    }
  }
  *(int *)(param_1 + 0xcc0) = param_2;
LAB_004cb6f1:
  if (param_2 != *(int *)(param_1 + 0xcbc)) {
    pHVar4 = GetFocus();
    if ((pHVar4 == *(HWND *)(param_1 + 4)) && (*(int *)(param_1 + 0xb24) != 0)) {
      bVar1 = true;
      FUN_00452e00(param_1);
    }
    else {
      bVar1 = false;
    }
    *(int *)(param_1 + 0xcbc) = param_2;
    DAT_0064767c = DAT_0064767c | 0x40;
    if ((param_1 != -0x364) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x36c),0);
    }
    if (bVar1) {
      FUN_00452ea0(param_1);
    }
    if (*(int *)(param_1 + 0xadc) == 1) {
      FUN_0052c1a0(param_1);
    }
  }
  if (param_4 != 0) {
    FUN_004cb2d0(param_1,param_2,0);
  }
  return;
}


