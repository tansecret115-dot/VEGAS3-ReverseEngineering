/* Module: vidcap30.exe
   Function: FUN_00460140
   Address: 00460140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460140(HWND param_1,int param_2)

{
  GetDlgItemTextA(param_1,0x9c76,(LPSTR)(param_2 + 0x30),0x80);
  GetDlgItemTextA(param_1,0x466,(LPSTR)(param_2 + 0xb0),500);
  return;
}


