/* Module: vidcap30.exe
   Function: FUN_00423d10
   Address: 00423d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423d10(int param_1,LPSTR param_2,int param_3)

{
  if (((*(uint *)(param_1 + 0x138) & 1) != 0) || ((*(uint *)(param_1 + 0x138) & 2) != 0)) {
    GetWindowTextA(*(HWND *)(param_1 + 8),(LPSTR)(param_1 + 0x28),0x104);
  }
  lstrcpynA(param_2,(LPCSTR)(param_1 + 0x28),param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


