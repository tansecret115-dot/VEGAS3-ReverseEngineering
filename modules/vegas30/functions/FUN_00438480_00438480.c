/* Module: vegas30.exe
   Function: FUN_00438480
   Address: 00438480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00438480(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  local_4 = param_6;
  if (param_2 == (undefined4 *)0x0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
  }
  else {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
  }
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x37d,param_1,&LAB_00437e40,&local_20);
  if (iVar1 == 1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_20;
      param_2[1] = local_1c;
      param_2[2] = local_18;
      param_2[3] = local_14;
    }
    return 0;
  }
  return 1;
}


