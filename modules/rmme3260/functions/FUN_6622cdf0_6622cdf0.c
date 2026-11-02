/* Module: rmme3260.dll
   Function: FUN_6622cdf0
   Address: 6622cdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622cdf0(int *param_1,int *param_2,undefined4 *param_3)

{
  if ((((*param_2 == DAT_6626a8a8) && (param_2[1] == DAT_6626a8ac)) && (param_2[2] == DAT_6626a8b0))
     && (param_2[3] == DAT_6626a8b4)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


