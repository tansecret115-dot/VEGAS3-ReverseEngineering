/* Module: mcplug.dll
   Function: FUN_0040a460
   Address: 0040a460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0040a460(void *param_1)

{
  if (*(int *)((int)param_1 + 0x34) != 0) {
    (**(code **)((int)param_1 + 0x1c))(param_1,0);
  }
  free(param_1);
  return;
}


