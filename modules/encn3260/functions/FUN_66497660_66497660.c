/* Module: encn3260.dll
   Function: FUN_66497660
   Address: 66497660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66497660(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_664dc750) || (param_2[1] != DAT_664dc754)) || (param_2[2] != DAT_664dc758)
       ) || (param_2[3] != DAT_664dc75c)) &&
     (((*param_2 != DAT_664dc5d0 || (param_2[1] != DAT_664dc5d4)) ||
      ((param_2[2] != DAT_664dc5d8 || (param_2[3] != DAT_664dc5dc)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


