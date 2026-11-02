/* Module: vidpcore.dll
   Function: FUN_5de20ac0
   Address: 5de20ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de20ac0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17f00;
  param_2[1] = DAT_5df17f04;
  param_2[2] = DAT_5df17f08;
  param_2[3] = DAT_5df17f0c;
  return 0;
}


