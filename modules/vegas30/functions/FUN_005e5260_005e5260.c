/* Module: vegas30.exe
   Function: FUN_005e5260
   Address: 005e5260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e5260(HWND param_1,int param_2,int param_3)

{
  LRESULT LVar1;
  
  if (param_3 == 1) {
    LVar1 = SendMessageA(param_1,0x147,0,0);
    *(LRESULT *)(param_2 + 0x28) = LVar1 + 1;
    return 1;
  }
  return 0;
}


