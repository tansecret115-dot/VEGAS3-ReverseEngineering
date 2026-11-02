/* Module: mpegin.dll
   Function: FUN_10010970
   Address: 10010970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10010970(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1001b338 == param_1) {
    PTR_LOOP_1001b338 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10019318) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1001da90,0,param_1);
    return;
  }
  DAT_10019328 = 0xffffffff;
  return;
}


