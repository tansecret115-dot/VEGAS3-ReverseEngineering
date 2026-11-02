/* Module: vidcap30.exe
   Function: FUN_00464340
   Address: 00464340
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00464340(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_1c = param_2;
  local_20 = param_3;
  local_18 = param_4;
  local_10 = param_6;
  local_c = param_7;
  local_8 = param_8;
  local_14 = param_5;
  FUN_004642e0(*param_3,param_7,param_8);
  iVar1 = _SfDialogBoxParam_20(DAT_005ba2a0,0x1e9,param_1,FUN_00464200,&local_20);
  iVar3 = 0;
  piVar2 = (int *)(param_8 * 0x60 + param_6);
  do {
    *piVar2 = iVar3;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 8);
  return iVar1 == 1;
}


