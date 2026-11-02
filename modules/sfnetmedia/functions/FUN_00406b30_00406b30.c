/* Module: sfnetmedia.dll
   Function: FUN_00406b30
   Address: 00406b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406b30(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(code **)(param_1 + 0x1c) = DefWindowProcA_exref;
  return;
}


