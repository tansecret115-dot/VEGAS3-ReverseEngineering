/* Module: vegas30.exe
   Function: FUN_005c8560
   Address: 005c8560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c8560(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (((int)param_4 < 1) && (((int)param_4 < 0 || (param_3 == 0)))) {
    param_3 = 0;
    param_4 = 0;
  }
  if (((int)param_4 <= (int)param_6) && (((int)param_4 < (int)param_6 || (param_3 <= param_5)))) {
    uVar2 = param_1[9];
    uVar5 = param_1[8];
    if (((int)param_4 < (int)uVar2) || (((int)param_4 <= (int)uVar2 && (param_3 <= uVar5)))) {
      uVar5 = param_3;
      uVar2 = param_4;
    }
    param_1[8] = uVar5;
    param_1[9] = uVar2;
    uVar5 = param_1[10];
    uVar4 = param_3 - param_1[8];
    uVar3 = param_1[0xb];
    uVar2 = (param_4 - uVar2) - (uint)(param_3 < param_1[8]);
    if (((int)uVar2 < (int)uVar3) || (((int)uVar2 <= (int)uVar3 && (uVar4 <= uVar5)))) {
      uVar3 = uVar2;
      uVar5 = uVar4;
    }
    param_1[10] = uVar5;
    param_1[0xb] = uVar3;
    return;
  }
  puVar6 = param_1;
  puVar7 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (((int)param_6 < 1) && (((int)param_6 < 0 || (param_5 == 0)))) {
    param_1[10] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    uVar2 = param_2[9];
    uVar5 = param_2[8];
    if (((int)param_4 < (int)uVar2) || (((int)param_4 <= (int)uVar2 && (param_3 <= uVar5)))) {
      uVar5 = param_3;
      uVar2 = param_4;
    }
    param_2[8] = uVar5;
    param_2[9] = uVar2;
    uVar2 = param_2[0xb];
    uVar4 = param_3 - param_1[8];
    uVar5 = param_2[10];
    uVar3 = (param_4 - param_1[9]) - (uint)(param_3 < param_1[8]);
    if (((int)uVar3 < (int)uVar2) || (((int)uVar3 <= (int)uVar2 && (uVar4 <= uVar5)))) {
      uVar2 = uVar3;
      uVar5 = uVar4;
    }
    param_2[10] = uVar5;
    param_2[0xb] = uVar2;
    return;
  }
  param_1[10] = 0;
  uVar5 = param_3 - param_5;
  uVar3 = (param_4 - param_6) - (uint)(param_3 < param_5);
  uVar2 = param_1[9];
  param_1[0xb] = 0;
  if (((int)uVar2 <= (int)param_6) && (((int)uVar2 < (int)param_6 || (param_1[8] < param_5)))) {
    param_6 = uVar2;
    param_5 = param_1[8];
  }
  param_1[8] = param_5;
  param_1[9] = param_6;
  *param_1 = *param_1 | 0x40;
  uVar2 = param_2[0xb];
  param_2[8] = 0;
  param_2[9] = 0;
  if (((int)uVar2 <= (int)uVar3) && (((int)uVar2 < (int)uVar3 || (param_2[10] < uVar5)))) {
    uVar5 = param_2[10];
    uVar3 = uVar2;
  }
  param_2[10] = uVar5;
  param_2[0xb] = uVar3;
  *param_2 = *param_2 & 0xfffffffc | 0x20;
  return;
}


