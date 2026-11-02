/* Module: vegas30.exe
   Function: FUN_00490800
   Address: 00490800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00490800(int param_1,undefined4 param_2)

{
  SendMessageA(*(HWND *)(param_1 + 0xdc),0x430,0,0);
  *(undefined4 *)(param_1 + 0x98) = param_2;
  (&DAT_00647e78)[*(int *)(param_1 + 0x94)] = param_2;
  FUN_004903b0(*(undefined4 *)(param_1 + 0xdc),param_1);
  FUN_004901f0(param_1,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  return;
}


