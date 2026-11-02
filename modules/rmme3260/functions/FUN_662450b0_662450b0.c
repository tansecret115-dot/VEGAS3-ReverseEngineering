/* Module: rmme3260.dll
   Function: FUN_662450b0
   Address: 662450b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662450b0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x92b));
  (**(code **)(**(int **)(param_1 + 0x933) + 0x10))(0xffffffff);
  FUN_66235300(*(void **)(param_1 + 0x3b),(undefined4 *)0x0);
  if ((*(byte *)(param_1 + 0x26) & 2) != 0) {
    FUN_66244910(param_1);
  }
  InterlockedDecrement((LONG *)(param_1 + 0x92b));
  return 0;
}


