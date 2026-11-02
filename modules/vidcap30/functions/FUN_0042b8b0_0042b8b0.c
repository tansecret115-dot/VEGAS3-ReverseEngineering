/* Module: vidcap30.exe
   Function: FUN_0042b8b0
   Address: 0042b8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042b8b0(int *param_1,LPCSTR param_2)

{
  if (*param_1 == 8) {
    lstrcpynA((LPSTR)(param_1 + 0x160),(LPCSTR)(param_1 + 0x1a1),0x104);
    *(undefined1 *)((int)param_1 + 0x683) = 0;
    lstrcpynA((LPSTR)(param_1 + 0x1a1),param_2,0x104);
    *(undefined1 *)((int)param_1 + 0x787) = 0;
  }
  return;
}


