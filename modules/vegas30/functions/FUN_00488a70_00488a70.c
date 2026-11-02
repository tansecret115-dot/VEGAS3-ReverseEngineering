/* Module: vegas30.exe
   Function: FUN_00488a70
   Address: 00488a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00488a70(undefined4 param_1,LPSTR param_2,int param_3)

{
  lstrcpynA(param_2,"",param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


