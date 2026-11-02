/* Module: vidcap30.exe
   Function: FUN_0042f1b0
   Address: 0042f1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f1b0(int param_1,LPCSTR param_2)

{
  FUN_0042f4b0(param_1,1);
  lstrcpynA((LPSTR)(param_1 + 0x528),param_2,0x104);
  *(undefined1 *)(param_1 + 0x62b) = 0;
  FUN_0042f5d0(param_1,1);
  return;
}


