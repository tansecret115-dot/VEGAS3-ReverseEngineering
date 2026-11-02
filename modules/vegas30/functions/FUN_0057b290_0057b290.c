/* Module: vegas30.exe
   Function: FUN_0057b290
   Address: 0057b290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057b290(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0x32;
  param_1[0x17] = 100;
  return;
}


