/* Module: vegas30.exe
   Function: FUN_0046f390
   Address: 0046f390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f390(int param_1)

{
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  FUN_004582a0(param_1,&local_8,&local_10);
  if ((local_10 != 0) || (local_c != 0)) {
    FUN_0046d4b0(param_1,local_8,local_4,local_8 + local_10,
                 local_4 + local_c + (uint)CARRY4(local_8,local_10),
                 (**(int **)(param_1 + 0xcd0) != 1) + '\x1e');
  }
  return;
}


