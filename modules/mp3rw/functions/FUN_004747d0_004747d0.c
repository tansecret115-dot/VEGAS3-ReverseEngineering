/* Module: mp3rw.dll
   Function: FUN_004747d0
   Address: 004747d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004747d0(int *param_1)

{
  FUN_004746a0(param_1,0xee);
  FUN_004746c0(param_1,0xe);
  FUN_00474660(param_1,0x41);
  FUN_00474660(param_1,100);
  FUN_00474660(param_1,0x6f);
  FUN_00474660(param_1,0x62);
  FUN_00474660(param_1,0x65);
  FUN_004746c0(param_1,100);
  FUN_004746c0(param_1,0);
  FUN_004746c0(param_1,0);
  if (*(int *)((int)param_1 + 0x75) == 3) {
    FUN_00474660(param_1,1);
    return;
  }
  if (*(int *)((int)param_1 + 0x75) != 5) {
    FUN_00474660(param_1,0);
    return;
  }
  FUN_00474660(param_1,2);
  return;
}


