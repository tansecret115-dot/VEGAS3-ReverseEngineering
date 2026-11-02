/* Module: vegas30.exe
   Function: FUN_005d55a0
   Address: 005d55a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d55a0(undefined4 param_1,HWND param_2,undefined4 *param_3,int param_4)

{
  LRESULT LVar1;
  
  if (param_4 == 1) {
    LVar1 = SendMessageA(param_2,0x147,0,0);
    param_3[10] = LVar1;
    *param_3 = 1;
  }
  return 1;
}


