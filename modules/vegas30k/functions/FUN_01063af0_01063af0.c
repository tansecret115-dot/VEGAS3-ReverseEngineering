/* Module: vegas30k.dll
   Function: FUN_01063af0
   Address: 01063af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01063af0(LPSTR param_1,int param_2)

{
  lstrcpynA(param_1,"::(Memory)::",param_2);
  param_1[param_2 + -1] = '\0';
  return 1;
}


