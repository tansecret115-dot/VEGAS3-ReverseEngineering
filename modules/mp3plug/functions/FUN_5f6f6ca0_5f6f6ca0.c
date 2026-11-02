/* Module: mp3plug.dll
   Function: FUN_5f6f6ca0
   Address: 5f6f6ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6f6ca0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6
            ,int *param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_2c;
  int local_28;
  
  piVar2 = (int *)param_1[1];
  FUN_5f6d6b60(param_2,piVar2,0x240);
  iVar5 = *(int *)(param_6 + param_5 * 4);
  iVar3 = 0x240 - iVar5;
  while (((0 < iVar5 && (piVar2[iVar5 + -2] == 0)) && (piVar2[iVar5 + -1] == 0))) {
    iVar3 = iVar3 + 2;
    iVar5 = iVar5 + -2;
  }
  iVar5 = 0;
  *param_7 = iVar3;
  local_28 = 0;
  local_2c = 0;
  iVar3 = 0x240 - iVar3;
  while (3 < iVar3) {
    if (((1 < (uint)piVar2[iVar3 + -4]) || (1 < (uint)piVar2[iVar3 + -3])) ||
       ((1 < (uint)piVar2[iVar3 + -2] || (1 < (uint)piVar2[iVar3 + -1])))) break;
    iVar1 = piVar2[iVar3 + -1] + piVar2[iVar3 + -4] * 8 + piVar2[iVar3 + -2] * 2 +
            piVar2[iVar3 + -3] * 4;
    local_2c = local_2c + 1;
    local_28 = local_28 + *(int *)(&DAT_5f741b48 + iVar1 * 4);
    iVar5 = iVar5 + *(int *)(&DAT_5f741b08 + iVar1 * 4);
    iVar3 = iVar3 + -4;
  }
  if (iVar5 < local_28) {
    param_7[2] = 1;
    param_7[3] = iVar5;
  }
  else {
    param_7[2] = 0;
    param_7[3] = local_28;
  }
  param_7[1] = local_2c;
  uVar4 = (0x240 - *param_7) + local_2c * -4;
  param_7[4] = (int)(uVar4 + (0x7fffffff < uVar4)) >> 1;
  FUN_5f6f6680(*param_1,param_6);
  param_7[0x12] = param_7[3] + param_7[0x11];
  return;
}


