/* Module: sftrans1.dll
   Function: FUN_004ad4d0
   Address: 004ad4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004ad4d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00565594;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


