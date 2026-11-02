/* Module: erv13260.dll
   Function: FUN_635fb890
   Address: 635fb890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_635fb890(int *param_1,int *param_2,float *param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = *(int *)(param_4 + 0x23cf);
  iVar1 = *(int *)(param_4 + 0x23cb);
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (0 < iVar5) {
    local_14 = 0;
    local_18 = iVar5;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = (uint)*(byte *)(iVar4 + *param_1 + local_14) -
                  (uint)*(byte *)(iVar4 + *param_2 + local_14);
          local_8 = local_8 + iVar3 * iVar3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      local_14 = local_14 + iVar1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  fVar6 = (float10)local_8 / (float10)*(int *)(param_4 + 0xc);
  fVar2 = (float10)_DAT_63604228;
  *param_3 = (float)fVar6;
  if (fVar6 == fVar2) {
    *param_3 = 99.99;
  }
  else {
    fVar2 = (float10)log2((float10)_DAT_6360422c / fVar6);
    *param_3 = (float)((float10)0.3010299956639812 * fVar2 * (float10)_DAT_63604230);
  }
  local_18 = iVar5 / 2;
  if (0 < local_18) {
    local_8 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1 / 2) {
        iVar4 = local_8 / 2;
        do {
          iVar3 = (uint)*(byte *)(iVar5 + param_1[1] + iVar4) -
                  (uint)*(byte *)(iVar5 + param_2[1] + iVar4);
          local_c = local_c + iVar3 * iVar3;
          iVar3 = (uint)*(byte *)(iVar5 + param_1[2] + iVar4) -
                  (uint)*(byte *)(iVar5 + param_2[2] + iVar4);
          local_10 = local_10 + iVar3 * iVar3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1 / 2);
      }
      local_8 = local_8 + iVar1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  fVar6 = (float10)local_c / (float10)(*(uint *)(param_4 + 0xc) >> 2);
  fVar2 = (float10)_DAT_63604228;
  param_3[1] = (float)fVar6;
  if (fVar6 == fVar2) {
    param_3[1] = 99.99;
  }
  else {
    fVar2 = (float10)log2((float10)_DAT_6360422c / fVar6);
    param_3[1] = (float)((float10)0.3010299956639812 * fVar2 * (float10)_DAT_63604230);
  }
  fVar6 = (float10)local_10 / (float10)(*(uint *)(param_4 + 0xc) >> 2);
  fVar2 = (float10)_DAT_63604228;
  param_3[2] = (float)fVar6;
  if (fVar6 == fVar2) {
    param_3[2] = 99.99;
    return;
  }
  fVar2 = (float10)log2((float10)_DAT_6360422c / fVar6);
  param_3[2] = (float)((float10)0.3010299956639812 * fVar2 * (float10)_DAT_63604230);
  return;
}


