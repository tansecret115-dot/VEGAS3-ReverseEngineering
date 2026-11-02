/* Module: mpegin.dll
   Function: mpegInOpenMPEG
   Address: 100083f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegInOpenMPEG(undefined4 *param_1)

{
  undefined4 uVar1;
  
                    /* 0x83f0  2  mpegInOpenMPEG */
  if (param_1 == (undefined4 *)0x0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 1;
  }
  param_1[0x4b93] = _malloc;
  param_1[0x4b94] = FUN_1000e22b;
  param_1[0x4b8f] = 0;
  param_1[0x4b90] = 0;
  param_1[0x4b91] = 0;
  param_1[0x4b92] = 0;
  uVar1 = FUN_10008450(param_1,0,0);
  return uVar1;
}


