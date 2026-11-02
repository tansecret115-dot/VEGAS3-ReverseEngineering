/* Module: mpgmux.dll
   Function: FUN_1000e218
   Address: 1000e218
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000e218(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10019b00 == param_1) {
    PTR_LOOP_10019b00 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10017ae0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1001c680,0,param_1);
    return;
  }
  DAT_10017af0 = 0xffffffff;
  return;
}


