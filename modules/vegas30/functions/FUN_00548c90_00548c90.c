/* Module: vegas30.exe
   Function: FUN_00548c90
   Address: 00548c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00548c90(HWND param_1,HACCEL param_2,LPMSG param_3)

{
  if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xb0) != 0)) {
    FUN_00582470(param_1,param_2,param_3);
    return;
  }
  TranslateAcceleratorA(param_1,param_2,param_3);
  return;
}


