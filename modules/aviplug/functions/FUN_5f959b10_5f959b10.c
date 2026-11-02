/* Module: aviplug.dll
   Function: FUN_5f959b10
   Address: 5f959b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f959b10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f9d9040;
  if ((HDRVR)param_1[2] != (HDRVR)0x0) {
    CloseDriver((HDRVR)param_1[2],0,0);
    param_1[2] = 0;
  }
  FUN_5f9593b0(param_1);
  return;
}


