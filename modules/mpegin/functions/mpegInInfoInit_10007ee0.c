/* Module: mpegin.dll
   Function: mpegInInfoInit
   Address: 10007ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInInfoInit(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x7ee0  1  mpegInInfoInit */
  if (param_1 == (undefined4 *)0x0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return;
  }
  puVar2 = param_1;
  for (iVar1 = 0x4b96; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[2] = 7;
  param_1[3] = 7;
  param_1[0x341] = 1;
  param_1[0x340] = 1;
  param_1[5] = 1;
  param_1[4] = 1;
  return;
}


