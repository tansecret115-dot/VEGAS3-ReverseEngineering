/* Module: mp3plug.dll
   Function: FUN_5f6ea1b0
   Address: 5f6ea1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6ea1b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,
            int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_2c;
  int local_28;
  
  while ((((iVar5 = param_2, 0 < param_2 &&
           (*(int *)(param_1 + -4 + param_2 * 4) == 0 && *(int *)(param_1 + -8 + param_2 * 4) == 0))
          && (iVar5 = param_2 + -2, 0 < iVar5)) &&
         (*(int *)(param_1 + -4 + iVar5 * 4) == 0 && *(int *)(param_1 + -8 + iVar5 * 4) == 0))) {
    param_2 = param_2 + -4;
  }
  *param_7 = 0x240 - iVar5;
  iVar5 = 0x240 - (0x240 - iVar5);
  iVar7 = 0;
  local_2c = 0;
  local_28 = 0;
  while (3 < iVar5) {
    iVar5 = iVar5 + -4;
    uVar6 = *(uint *)(param_1 + 0xc + iVar5 * 4);
    uVar2 = *(uint *)(param_1 + 8 + iVar5 * 4);
    uVar3 = *(uint *)(param_1 + 4 + iVar5 * 4);
    uVar4 = *(uint *)(param_1 + iVar5 * 4);
    if (1 < (uVar6 | uVar2 | uVar3 | uVar4)) break;
    iVar1 = uVar6 + uVar4 * 8 + uVar2 * 2 + uVar3 * 4;
    local_28 = local_28 + *(int *)(&DAT_5f741428 + iVar1 * 4);
    iVar7 = iVar7 + *(int *)(&DAT_5f7413e8 + iVar1 * 4);
    local_2c = local_2c + 1;
  }
  if (iVar7 < local_28) {
    param_7[2] = 1;
    param_7[3] = iVar7;
  }
  else {
    param_7[2] = 0;
    param_7[3] = local_28;
  }
  param_7[1] = local_2c;
  uVar6 = (0x240 - *param_7) + local_2c * -4;
  param_7[4] = (int)(uVar6 + (0x7fffffff < uVar6)) >> 1;
  FUN_5f6e9b40(param_6,param_5);
  param_7[0x12] = param_7[3] + param_7[0x11];
  return;
}


