/* Module: vidcap30.exe
   Function: FUN_00434760
   Address: 00434760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00434760(int param_1)

{
  FUN_00455d70(param_1 + 0xa48,param_1 + 0x17ac,param_1 + 0x19b4);
  PostMessageA(*(HWND *)(param_1 + 8),0x415,0,0);
  return;
}


