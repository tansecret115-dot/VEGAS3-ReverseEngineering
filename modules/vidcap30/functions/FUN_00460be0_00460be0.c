/* Module: vidcap30.exe
   Function: FUN_00460be0
   Address: 00460be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460be0(int param_1,LPSTR param_2,int param_3)

{
  lstrcpynA(param_2,*(LPCSTR *)(param_1 + 0x28),param_3);
  param_2[param_3 + -1] = '\0';
  lstrlenA(param_2);
  return;
}


