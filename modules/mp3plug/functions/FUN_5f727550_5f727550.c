/* Module: mp3plug.dll
   Function: FUN_5f727550
   Address: 5f727550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f727550(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5f727540((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5f7274c0(param_1);
  param_1[10] = uVar1;
  return;
}


