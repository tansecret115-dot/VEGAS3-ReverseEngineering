/* Module: vegas30k.dll
   Function: FUN_01193c90
   Address: 01193c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01193c90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  piVar1 = *(int **)(param_1 + 0x618);
  if (piVar1 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar1 + 0x9c))(piVar1,param_2,param_3);
    for (iVar2 = *(int *)(param_1 + 0x674); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
      if ((((*(byte *)(iVar2 + 0xc) & 2) != 0) && ((*(byte *)(iVar2 + 8) & 2) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x618) + 0x28) != *(int *)(iVar2 + 4))) {
        uVar3 = FUN_011947a0(param_2,param_3);
      }
    }
  }
  return uVar3;
}


