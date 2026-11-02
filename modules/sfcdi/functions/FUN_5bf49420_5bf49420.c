/* Module: sfcdi.dll
   Function: FUN_5bf49420
   Address: 5bf49420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf49420(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  puVar2 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0x28;
  param_1[2] = &LAB_5bf492c0;
  param_1[3] = FUN_5bf49240;
  param_1[4] = &LAB_5bf491e0;
  param_1[5] = &LAB_5bf48ff0;
  param_1[6] = &LAB_5bf48ea0;
  param_1[7] = &LAB_5bf48ae0;
  param_1[8] = &LAB_5bf47a40;
  param_1[9] = &LAB_5bf49400;
  return 0;
}


