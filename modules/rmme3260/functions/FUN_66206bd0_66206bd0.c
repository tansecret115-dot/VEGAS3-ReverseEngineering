/* Module: rmme3260.dll
   Function: FUN_66206bd0
   Address: 66206bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66206bd0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    return 0x80040007;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x6c))(param_2);
  return uVar1;
}


