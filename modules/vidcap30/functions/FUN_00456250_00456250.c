/* Module: vidcap30.exe
   Function: FUN_00456250
   Address: 00456250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_1a0 [104];
  
  puVar1 = local_1a0;
  for (iVar2 = 0x68; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_1a0[0] = param_2;
  local_1a0[2] = param_3;
  local_1a0[3] = param_4;
  _SfDialogBoxParam_20(DAT_005ba2a0,0x1d3,param_1,&LAB_004562c0,local_1a0);
  return;
}


