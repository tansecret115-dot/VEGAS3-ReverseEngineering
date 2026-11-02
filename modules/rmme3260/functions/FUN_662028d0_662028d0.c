/* Module: rmme3260.dll
   Function: FUN_662028d0
   Address: 662028d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_662028d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    return 0x80040007;
  }
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 4;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x70))(param_2,param_3,param_4,param_5,iVar1);
  return uVar2;
}


