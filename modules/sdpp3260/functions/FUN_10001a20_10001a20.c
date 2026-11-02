/* Module: sdpp3260.dll
   Function: FUN_10001a20
   Address: 10001a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10001a20(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_10008080) || (param_2[1] != DAT_10008084)) || (param_2[2] != DAT_10008088)
       ) || (param_2[3] != DAT_1000808c)) &&
     (((*param_2 != DAT_10008110 || (param_2[1] != DAT_10008114)) ||
      ((param_2[2] != DAT_10008118 || (param_2[3] != DAT_1000811c)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


