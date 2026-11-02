/* Module: pngu3266.dll
   Function: FUN_6061e990
   Address: 6061e990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061e990(UINT_PTR *param_1)

{
  if ((param_1[3] & 1) != 0) {
    FUN_6061ea00(param_1);
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xfe;
  FUN_6061eb20((int)param_1);
  return;
}


