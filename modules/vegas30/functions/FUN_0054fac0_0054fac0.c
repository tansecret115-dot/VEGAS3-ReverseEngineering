/* Module: vegas30.exe
   Function: FUN_0054fac0
   Address: 0054fac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054fac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  tagPOINT local_10 [2];
  
  if (DAT_0064b4e4 == 0) {
    iVar1 = FUN_00601ab0(&local_24,&local_28,1);
    if (iVar1 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar2 = (local_28 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar2) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_24;
        DAT_0064b4e4 = uVar2;
      }
    }
  }
  if ((((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) &&
      (piVar3 = (int *)FUN_0054a530(param_1), piVar3 != (int *)0x0)) &&
     (iVar1 = *piVar3, (*(byte *)(iVar1 + 0x134) & 0x20) == 0)) {
    piVar3 = *(int **)(iVar1 + 0x130);
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      piVar3 = (int *)piVar3[2];
      while (*(int *)(*piVar3 + 4) != 3) {
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
        if (iVar5 <= iVar4) {
          return;
        }
      }
      SendMessageA(*(HWND *)(param_1 + 0x90),0x433,0xfdf0,(LPARAM)local_10);
      MapWindowPoints(*(HWND *)(param_1 + 0x90),(HWND)0x0,local_10,2);
      local_18 = *(undefined4 *)(iVar1 + 0x13c);
      local_14 = 0;
      local_20 = 6;
      local_1c = iVar1;
      iVar5 = FUN_0044b620(&local_20,*(undefined4 *)(param_1 + 0x90),param_2,param_3);
      if (iVar5 != 0) {
        FUN_0054d670(param_1,1);
      }
      FUN_0054d0c0(param_1);
      *(uint *)(iVar1 + 0x134) = *(uint *)(iVar1 + 0x134) | 0x10;
      DAT_0064767c = DAT_0064767c | 0x100;
    }
  }
  return;
}


