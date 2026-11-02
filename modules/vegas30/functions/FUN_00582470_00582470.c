/* Module: vegas30.exe
   Function: FUN_00582470
   Address: 00582470
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00582470(int param_1,HWND param_2,HACCEL param_3,LPMSG param_4)

{
  *(undefined4 *)(param_1 + 0x4c) = 1;
  TranslateAcceleratorA(param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


