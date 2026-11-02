/* Module: sfmarket2.dll
   Function: FUN_0042fa10
   Address: 0042fa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_0042fa10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0042e520(param_1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_0049cafc;
  puVar2 = param_1 + 0x1c;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


