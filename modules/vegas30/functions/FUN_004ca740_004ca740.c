/* Module: vegas30.exe
   Function: FUN_004ca740
   Address: 004ca740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca740(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
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
  bVar1 = false;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 8) + iVar6 * 4);
      uVar5 = *(uint *)(iVar4 + 0x10);
      if (iVar4 == param_2) {
        if ((uVar5 & 0x10) == 0) {
          bVar1 = true;
        }
        uVar5 = uVar5 | 0x10;
LAB_004ca7c5:
        *(uint *)(iVar4 + 0x10) = uVar5;
      }
      else if ((uVar5 & 0x10) != 0) {
        bVar1 = true;
        uVar5 = uVar5 & 0xffffffef;
        goto LAB_004ca7c5;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
    if (((bVar1) && (DAT_0064767c = DAT_0064767c | 0x20, param_1 != -0x364)) &&
       (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x36c),0);
    }
  }
  return;
}


