/* Module: encn3260.dll
   Function: FUN_6649d720
   Address: 6649d720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6649d720(UINT_PTR *param_1)

{
  if ((param_1[3] & 1) != 0) {
    FUN_6649d790(param_1);
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xfe;
  FUN_6649d8b0((int)param_1);
  return;
}


