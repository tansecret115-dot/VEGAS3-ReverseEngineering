/* Module: sfpublish.dll
   Function: FUN_00415800
   Address: 00415800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00415800(undefined4 *param_1)

{
  if ((param_1[0xc] != 0) && (param_1[0xe] != 0)) {
    (*(code *)param_1[1])(param_1[0xe],0,0,0);
  }
  FUN_004157b0(param_1);
  return;
}


