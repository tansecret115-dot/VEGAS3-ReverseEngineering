/* Module: rmme3260.dll
   Function: FUN_66204560
   Address: 66204560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66204560(int *param_1,int *param_2,undefined4 *param_3)

{
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_6626a598 == *param_2) && (DAT_6626a59c == param_2[1])) && (DAT_6626a5a0 == param_2[2]))
     && (DAT_6626a5a4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


