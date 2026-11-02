/* Module: pncrt.dll
   Function: FUN_7800b1c0
   Address: 7800b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800b1c0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_7803f3e8 == param_1) {
    PTR_LOOP_7803f3e8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_7803d3c8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_78042734,0,param_1);
    return;
  }
  DAT_7803d3d8 = 0xffffffff;
  return;
}


