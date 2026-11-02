/* Module: rmme3260.dll
   Function: FUN_66206ba0
   Address: 66206ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66206ba0(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    return 0x80040007;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(param_2);
  return 0;
}


