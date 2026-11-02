/* Module: vegas30k.dll
   Function: FUN_01193700
   Address: 01193700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01193700(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_011a8ac0(param_2,param_3);
  piVar1 = *(int **)(param_1 + 0x618);
  if ((piVar1 == (int *)0x0) || ((*(uint *)(param_1 + 8) & 0x800) == 0)) {
    iVar3 = -0x7fffbffb;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0xdc))(piVar1,param_2,param_3);
    for (iVar2 = *(int *)(param_1 + 0x674); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
      if ((((*(byte *)(iVar2 + 0xc) & 2) != 0) && ((*(byte *)(iVar2 + 8) & 2) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x618) + 0x28) != *(int *)(iVar2 + 4))) {
        iVar3 = FUN_011941f0(param_2,param_3);
      }
    }
    piVar1 = *(int **)(param_1 + 0x66c);
    if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
      iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1,param_2,param_3);
    }
    if (-1 < iVar3) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x2000;
      return iVar3;
    }
  }
  return iVar3;
}


