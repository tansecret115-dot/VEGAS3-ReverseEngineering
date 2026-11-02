/* Module: encn3260.dll
   Function: FUN_6649d2b0
   Address: 6649d2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649d2b0(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_664dcb20) || (param_2[1] != DAT_664dcb24)) || (param_2[2] != DAT_664dcb28)
       ) || (param_2[3] != DAT_664dcb2c)) &&
     (((*param_2 != DAT_664dc5d0 || (param_2[1] != DAT_664dc5d4)) ||
      ((param_2[2] != DAT_664dc5d8 || (param_2[3] != DAT_664dc5dc)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


