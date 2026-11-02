/* Module: mp3plug.dll
   Function: FUN_5f6e4b10
   Address: 5f6e4b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e4b10(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  
  if ((int)param_3 < 16000) {
    iVar2 = 2;
  }
  else if ((int)param_3 < 32000) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    iVar5 = 2;
  }
  else {
    iVar5 = 1;
  }
  local_28 = iVar5 * 0x240 * param_2;
  local_20 = param_3;
  iVar4 = -0xf;
  local_1c = param_4;
  do {
    iVar3 = (*(int *)(iVar2 * 0x3c + 0x5f73fecc + iVar4 * 4) * 0x240 * iVar5) / (int)param_3;
    param_1[iVar4 + 0x10] = ((uint)(iVar3 >> 2) >> 0x1d) + iVar3 & 0xfffffff8;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0);
  param_1[0x11] = 1;
  param_1[0x10] = 1;
  iVar5 = 0;
  if (param_4 == 0) goto LAB_5f6e4d8f;
  local_20 = 0;
  if (param_4 == 2) {
    local_24 = 1;
LAB_5f6e4c1b:
    iVar5 = 2;
  }
  else {
    if (param_4 == 3) {
      local_24 = (uint)((int)(param_3 + (0x7fffffff < param_3)) >> 1 < local_28 % (int)param_3);
      if (local_24 != 0) goto LAB_5f6e4c1b;
    }
    else {
      local_24 = 0;
    }
    iVar5 = 1;
  }
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    uVar1 = iVar4;
    if ((&DAT_5f73fe90)[iVar2 * 0xf + iVar4] == param_2) break;
    if (((int)(&DAT_5f73fe90)[iVar2 * 0xf + iVar4] < param_2) &&
       ((iVar4 == 0xe || (param_2 < *(int *)(iVar2 * 0x3c + 0x5f73fe94 + iVar4 * 4))))) {
      uVar1 = iVar4 + 1;
      break;
    }
    iVar4 = iVar4 + 1;
    iVar3 = 0;
    uVar1 = local_20;
  } while (iVar4 < 0xf);
  local_20 = uVar1;
  iVar4 = (&DAT_5f73fe90)[iVar2 * 0xf + local_20];
  iVar2 = (&DAT_5f73fe90)[iVar2 * 0xf + iVar3];
  if (iVar2 == iVar4) {
    iVar2 = param_1[iVar3 + 1];
    local_28 = iVar2 + local_24 * 8;
    local_20 = 1;
    param_1[0x10] = 1;
    param_1[0x11] = local_24 + ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3);
  }
  else {
    local_30 = iVar4 - param_2;
    local_34 = iVar4 - iVar2;
    iVar4 = local_20 + 1;
    local_18 = param_1;
    local_20 = local_34 / 1000;
    iVar2 = ((int)((param_2 - iVar2) *
                  (local_24 +
                  ((int)(param_1[iVar4] + ((uint)((int)param_1[iVar4] >> 2) >> 0x1d)) >> 3))) / 1000
            + (int)((((int)(param_1[iVar3 + 1] + ((uint)((int)param_1[iVar3 + 1] >> 2) >> 0x1d)) >>
                     3) + local_24) * local_30) / 1000) * 8;
    local_2c = local_34;
    local_28 = iVar2;
    FUN_5f6ff170(&local_34,&local_30);
    param_1[0x10] = local_34;
    iVar2 = local_34 * (iVar2 / (int)local_20);
    param_1[0x11] = (int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3;
  }
LAB_5f6e4d8f:
  FUN_5f6ff1d0((int *)*param_1,local_28,local_20,0xf,param_1 + 1,iVar5);
  return;
}


