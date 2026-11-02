/* Module: g2plug.dll
   Function: FUN_5f80ab90
   Address: 5f80ab90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f80ab90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_5f86b0d8;
  param_1[1] = 1;
  param_1[2] = 0;
  puVar2 = param_1 + 3;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


