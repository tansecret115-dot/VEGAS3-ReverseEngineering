/* Module: rv303260.dll
   Function: FUN_672058a0
   Address: 672058a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_672058a0(int param_1)

{
  void *this;
  undefined4 *this_00;
  FARPROC pFVar1;
  
  this = operator_new(0x18);
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_6720e6d0(this,s_erv33260_dll_67214620,2);
  }
  *(undefined4 **)(param_1 + 0xe4) = this_00;
  if (this_00 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  if (this_00[1] != 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    return 0x6e;
  }
  pFVar1 = FUN_6720e920(this_00,s_YUV420toRV20PreFilterInit_67214604);
  *(FARPROC *)(param_1 + 0xe8) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)(param_1 + 0xe4),s_YUV420toRV20DoPreFilter_672145ec);
  *(FARPROC *)(param_1 + 0xec) = pFVar1;
  pFVar1 = FUN_6720e920(*(void **)(param_1 + 0xe4),s_YUV420toRV20PreFilterFree_672145d0);
  *(FARPROC *)(param_1 + 0xf0) = pFVar1;
  return 0;
}


