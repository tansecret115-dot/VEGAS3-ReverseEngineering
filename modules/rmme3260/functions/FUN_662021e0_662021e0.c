/* Module: rmme3260.dll
   Function: FUN_662021e0
   Address: 662021e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662021e0(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return 0x80040007;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x78))(param_2,param_3,0);
  return uVar1;
}


