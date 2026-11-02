/* Module: vegas30.exe
   Function: FUN_004a3f90
   Address: 004a3f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a3f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  piVar1 = (int *)FUN_005b87b0(*(undefined4 *)(param_1 + 0xbc8));
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  iVar2 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)piVar1[2];
    do {
      if (((*(byte *)(*piVar1 + 0x10) & 0x10) != 0) && (bVar5 = iVar3 != 0, iVar3 = *piVar1, bVar5))
      {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < iVar4);
    if (((iVar3 != 0) && (*(int *)(param_1 + 0xbc0) <= *(int *)(iVar3 + 0x18))) &&
       (*(int *)(*(int *)(iVar3 + 0x69c) + 0x1c) < *(int *)(param_1 + 0xacc))) {
      FUN_004a3070(param_1,iVar3,param_2,param_3,param_4,param_5);
    }
  }
  return;
}


