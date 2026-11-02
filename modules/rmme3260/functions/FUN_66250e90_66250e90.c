/* Module: rmme3260.dll
   Function: FUN_66250e90
   Address: 66250e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66250e90(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    FUN_66252660(*(undefined4 **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


