/* Module: vegas30.exe
   Function: FUN_004868c0
   Address: 004868c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004868c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00612d2c;
  if (param_1[2] != 0) {
    _SfDibFree_8(param_1[2],0);
  }
  FUN_0052e040(param_1 + 0xda);
  FUN_00582d40();
  return;
}


