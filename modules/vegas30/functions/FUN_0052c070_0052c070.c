/* Module: vegas30.exe
   Function: FUN_0052c070
   Address: 0052c070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052c070(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0xc9c) != 0) {
    FUN_0047df40(*(int *)(param_1 + 0xc9c),0,0,0,0);
    *(undefined4 *)(param_1 + 0xc9c) = 0;
  }
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar1 = *piVar2;
  if (0 < iVar1) {
    do {
      FUN_005bffc0(0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_004530a0(param_1,0);
  if (param_2 != -1) {
    FUN_004582a0(param_1,&local_8,&local_10);
    if ((*(int *)(param_1 + 0xbc8) == 0) ||
       (piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8)), piVar2 == (int *)0x0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if ((param_2 < 0) || (iVar3 + -1 < param_2)) {
      iVar3 = 0;
    }
    else if (*(int *)(param_1 + 0xbc8) == 0) {
      iVar3 = *(int *)(_DAT_00000008 + param_2 * 4);
    }
    else {
      iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar3 = *(int *)(*(int *)(iVar3 + 8) + param_2 * 4);
    }
    if (iVar3 != 0) {
      FUN_0047df40(iVar3 + 0x638,local_8,local_4,local_10,local_c);
      *(int *)(param_1 + 0xc9c) = iVar3 + 0x638;
      FUN_005bffc0(local_8,local_4,local_10,local_c);
    }
  }
  return;
}


