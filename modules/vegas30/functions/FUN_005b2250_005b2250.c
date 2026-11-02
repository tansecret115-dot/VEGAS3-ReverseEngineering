/* Module: vegas30.exe
   Function: FUN_005b2250
   Address: 005b2250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b2250(void *param_1)

{
  if (*(int *)((int)param_1 + 0x838) != 0) {
    FUN_005b2250(*(int *)((int)param_1 + 0x838));
  }
  if (*(int *)((int)param_1 + 0x834) != 0) {
    FUN_005b2250(*(int *)((int)param_1 + 0x834));
  }
  free(param_1);
  return;
}


