/* Module: sfcdi.dll
   Function: FUN_5bf21100
   Address: 5bf21100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5bf21100(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 1;
  *param_1 = &PTR_LAB_5bf56560;
  param_1[2] = 0;
  puVar2 = param_1 + 3;
  for (iVar1 = 0x764; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x76c] = 0;
  param_1[0x767] = 0;
  param_1[0x768] = 0;
  param_1[0x769] = 0;
  param_1[0x76a] = 0;
  param_1[0x76b] = 0;
  return param_1;
}


