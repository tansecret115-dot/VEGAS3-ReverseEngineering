/* Module: sfpublish.dll
   Function: FUN_00406d50
   Address: 00406d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406d50(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(code **)(param_1 + 0x1c) = DefWindowProcA_exref;
  return;
}


