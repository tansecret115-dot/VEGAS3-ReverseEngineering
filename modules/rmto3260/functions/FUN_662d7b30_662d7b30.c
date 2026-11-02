/* Module: rmto3260.dll
   Function: FUN_662d7b30
   Address: 662d7b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d7b30(int *param_1,int *param_2,undefined4 *param_3)

{
  if ((((*param_2 == DAT_663064a8) && (param_2[1] == DAT_663064ac)) && (param_2[2] == DAT_663064b0))
     && (param_2[3] == DAT_663064b4)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


