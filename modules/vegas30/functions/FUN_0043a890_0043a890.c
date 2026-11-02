/* Module: vegas30.exe
   Function: FUN_0043a890
   Address: 0043a890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a890(int param_1)

{
  int local_8;
  int local_4;
  
  FUN_0043a7f0(param_1,&local_8);
  FUN_0043a860(param_1,&local_8);
  SetWindowPos(*(HWND *)(param_1 + 8),(HWND)0x0,0,1,local_8,local_4,0x16);
  return;
}


