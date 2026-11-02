/* Module: vidcap30.exe
   Function: FUN_0041f9c0
   Address: 0041f9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f9c0(HWND param_1,int param_2)

{
  SendMessageA(param_1,0x100c,0xffffffff,-(uint)(param_2 != 0) & 2 | 1);
  return;
}


