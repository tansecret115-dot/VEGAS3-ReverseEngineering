/* Module: vidcap30.exe
   Function: FUN_0042b850
   Address: 0042b850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042b850(int *param_1,LPSTR param_2,int param_3)

{
  if (*param_1 == 8) {
    lstrcpynA(param_2,(LPCSTR)(param_1 + 0x160),param_3);
    param_2[param_3 + -1] = '\0';
  }
  return;
}


