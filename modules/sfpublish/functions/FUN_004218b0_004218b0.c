/* Module: sfpublish.dll
   Function: FUN_004218b0
   Address: 004218b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_004218b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004203c0(param_1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_0043b07c;
  puVar2 = param_1 + 0x1c;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


