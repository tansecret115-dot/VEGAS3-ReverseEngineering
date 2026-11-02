/* Module: vegas30k.dll
   Function: FUN_011c1200
   Address: 011c1200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c1200(int param_1)

{
  ResetEvent(*(HANDLE *)(param_1 + 0x138));
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff9;
  if (*(int **)(param_1 + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x140) + 0x14))();
  }
  return 0;
}


