/* Module: vegas30.exe
   Function: FUN_00488aa0
   Address: 00488aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00488aa0(undefined4 param_1,LPSTR param_2,int param_3)

{
  lstrcpynA(param_2,"",param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


