/* Module: vidcap30.exe
   Function: FUN_0042f1f0
   Address: 0042f1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f1f0(int param_1,LPSTR param_2,int param_3)

{
  FUN_0042f4b0(param_1,0);
  lstrcpynA(param_2,(LPCSTR)(param_1 + 0x528),param_3);
  param_2[param_3 + -1] = '\0';
  FUN_0042f5d0(param_1,0);
  return;
}


