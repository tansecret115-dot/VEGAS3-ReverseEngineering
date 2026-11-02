/* Module: vidcap30.exe
   Function: FUN_00434a00
   Address: 00434a00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00434a00(int param_1)

{
  uint local_4;
  
  local_4 = 0;
  FUN_004251c0(param_1 + 0xd8,&local_4);
  return (local_4 & 1) != 0;
}


