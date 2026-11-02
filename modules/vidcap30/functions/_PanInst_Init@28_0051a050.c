/* Module: vidcap30.exe
   Function: _PanInst_Init@28
   Address: 0051a050
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PanInst_Init_28(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  puVar2 = local_30;
                    /* 0x11a050  193  _PanInst_Init@28 */
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_30[3] = param_4;
  local_30[2] = param_5;
  local_14 = *param_3;
  local_18 = param_3[1];
  local_1c = param_3[2] - local_14;
  local_20 = param_3[3] - local_18;
  local_10 = param_2;
  local_30[0] = param_7;
  FUN_005195c0(param_1,param_4,local_30,param_6);
  return;
}


