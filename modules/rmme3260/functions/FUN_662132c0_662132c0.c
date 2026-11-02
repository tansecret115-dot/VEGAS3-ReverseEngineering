/* Module: rmme3260.dll
   Function: FUN_662132c0
   Address: 662132c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662132c0(int param_1,int *param_2,int *param_3)

{
  if ((((*param_2 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0))
     && (param_2[3] == DAT_6626a5a4)) {
    (**(code **)(*(int *)(param_1 + 0xd8) + 0x20))(param_1 + 0xd8);
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


