/* Module: rmme3260.dll
   Function: FUN_66233780
   Address: 66233780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66233780(UINT_PTR *param_1)

{
  if ((param_1[3] & 1) != 0) {
    FUN_662337a0(param_1);
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] & 0xfe;
  FUN_662338c0((int)param_1);
  return;
}


