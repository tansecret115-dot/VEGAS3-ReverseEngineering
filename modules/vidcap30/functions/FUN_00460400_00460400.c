/* Module: vidcap30.exe
   Function: FUN_00460400
   Address: 00460400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00460400(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  double local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = *param_2;
  local_24 = param_2[1];
  local_18 = DAT_005bb838;
  fVar2 = (float10)FUN_0042ed90(DAT_005bb838);
  local_10 = (double)fVar2;
  local_8 = param_3;
  local_4 = param_4;
  iVar1 = _SfDialogBoxParam_20(DAT_005ba2a0,0x1ea,param_1,FUN_00460480,&local_28);
  if (iVar1 == 1) {
    *param_2 = local_28;
    param_2[1] = local_24;
    return 1;
  }
  return 0;
}


