/* Module: vegas30.exe
   Function: FUN_00568480
   Address: 00568480
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00568480(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_118 [70];
  
  puVar2 = local_118;
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_118[0] = *param_2;
  local_118[1] = param_2[1];
  local_118[2] = *param_3;
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,1000,param_1,FUN_00568170,local_118);
  if (iVar1 == 1) {
    *param_2 = local_118[0];
    param_2[1] = local_118[1];
    *param_3 = local_118[2];
  }
  return iVar1 == 1;
}


