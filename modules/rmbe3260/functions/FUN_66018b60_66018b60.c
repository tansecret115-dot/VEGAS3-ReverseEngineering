/* Module: rmbe3260.dll
   Function: FUN_66018b60
   Address: 66018b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66018b60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 7;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_660666f8;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_660666d0;
  param_1[4] = &PTR_LAB_660666b0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = param_1 + 9;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


