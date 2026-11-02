/* Module: vidcap30.exe
   Function: FUN_00553da0
   Address: 00553da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553da0(int param_1)

{
  FUN_00553c70(param_1,0xee);
  FUN_00553c90(param_1,0xe);
  FUN_00553c30(param_1,0x41);
  FUN_00553c30(param_1,100);
  FUN_00553c30(param_1,0x6f);
  FUN_00553c30(param_1,0x62);
  FUN_00553c30(param_1,0x65);
  FUN_00553c90(param_1,100);
  FUN_00553c90(param_1,0);
  FUN_00553c90(param_1,0);
  if (*(int *)(param_1 + 0x75) == 3) {
    FUN_00553c30(param_1,1);
    return;
  }
  if (*(int *)(param_1 + 0x75) != 5) {
    FUN_00553c30(param_1,0);
    return;
  }
  FUN_00553c30(param_1,2);
  return;
}


