/* Module: rmme3260.dll
   Function: FUN_66202950
   Address: 66202950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202950(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    return 0x80040007;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(param_2);
  return uVar1;
}


