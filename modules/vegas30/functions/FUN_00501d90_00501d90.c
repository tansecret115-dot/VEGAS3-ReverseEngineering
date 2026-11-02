/* Module: vegas30.exe
   Function: FUN_00501d90
   Address: 00501d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00501d90(int param_1,uchar *param_2,uchar *param_3)

{
  _mbscat(param_2,"</");
  _mbscat(param_2,param_3);
  _mbscat(param_2,">");
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}


