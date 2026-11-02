/* Module: rv203260.dll
   Function: FUN_638a54d0
   Address: 638a54d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a54d0(int param_1)

{
  void *this;
  undefined4 *this_00;
  FARPROC pFVar1;
  
  this = operator_new(0x18);
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_638af160(this,s_erv23260_dll_638b4524,2);
  }
  *(undefined4 **)(param_1 + 0xe4) = this_00;
  if (this_00 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  if (this_00[1] != 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    return 0x6e;
  }
  pFVar1 = FUN_638af3b0(this_00,s_YUV420toRV20PreFilterInit_638b4508);
  *(FARPROC *)(param_1 + 0xe8) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)(param_1 + 0xe4),s_YUV420toRV20DoPreFilter_638b44f0);
  *(FARPROC *)(param_1 + 0xec) = pFVar1;
  pFVar1 = FUN_638af3b0(*(void **)(param_1 + 0xe4),s_YUV420toRV20PreFilterFree_638b44d4);
  *(FARPROC *)(param_1 + 0xf0) = pFVar1;
  return 0;
}


