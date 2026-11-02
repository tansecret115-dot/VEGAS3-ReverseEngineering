/* Module: vegas30.exe
   Function: FUN_00452a00
   Address: 00452a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452a00(undefined4 param_1,uint param_2)

{
  SfPrintF(param_1,"%02ld:%02ld",(param_2 / 1000) / 0x3c,(param_2 / 1000) % 0x3c);
  return;
}


