/* Module: vegas30.exe
   Function: FUN_00469280
   Address: 00469280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00469280(int param_1)

{
  if (*(int *)(param_1 + 0xcd0) != 0) {
    FUN_005b9e60(*(undefined4 *)(param_1 + 0xbc8),*(int *)(param_1 + 0xcd0),DAT_00612958,
                 DAT_00612958,0);
    FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
    FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


