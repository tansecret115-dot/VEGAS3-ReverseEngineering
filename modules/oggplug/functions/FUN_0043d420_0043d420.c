/* Module: oggplug.dll
   Function: FUN_0043d420
   Address: 0043d420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0043d420(float *param_1,float *param_2,int *param_3)

{
  uint uVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  int local_8;
  
  uVar1 = param_3[1];
  FUN_00444a80();
  iVar7 = 0;
  puVar3 = (undefined4 *)&stack0xffffffdc;
  for (uVar5 = uVar1 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_8 = 0;
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  local_10 = 0;
  if (0 < *param_3) {
    do {
      iVar7 = *(int *)(param_3[3] + local_10 * 4);
      if (*(float *)(&stack0xffffffdc + iVar7 * 4) < param_1[local_10]) {
        *(float *)(&stack0xffffffdc + iVar7 * 4) = param_1[local_10];
      }
      if (local_8 + 1 < iVar7) {
        iVar6 = iVar7 - local_8;
        local_c = 1;
        if (1 < iVar6) {
          pfVar4 = (float *)(&stack0xffffffdc + (local_8 + 1) * 4);
          do {
            fVar2 = (float)local_c;
            local_c = local_c + 1;
            *pfVar4 = (fVar2 / (float)iVar6) * *(float *)(&stack0xffffffdc + iVar7 * 4) +
                      (_DAT_0044d74c - fVar2 / (float)iVar6) *
                      *(float *)(&stack0xffffffdc + local_8 * 4);
            pfVar4 = pfVar4 + 1;
          } while (local_c < iVar6);
        }
      }
      local_10 = local_10 + 1;
      local_8 = iVar7;
    } while (local_10 < *param_3);
  }
  iVar7 = iVar7 + 1;
  if (iVar7 < (int)uVar1) {
    puVar3 = (undefined4 *)(&stack0xffffffdc + iVar7 * 4);
    iVar7 = uVar1 - iVar7;
    do {
      *puVar3 = puVar3[-1];
      puVar3 = puVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  pfVar4 = param_1;
  if (0 < *param_3) {
    do {
      iVar7 = iVar7 + 1;
      *pfVar4 = *pfVar4 - _DAT_0044d7ec;
      pfVar4 = pfVar4 + 1;
    } while (iVar7 < *param_3);
  }
  FUN_00432360();
  DAT_00516398 = DAT_00516398 + 1;
  FUN_00432360();
  iVar7 = 0;
  if (0 < *param_3) {
    do {
      iVar7 = iVar7 + 1;
      *param_1 = *param_1 + _DAT_0044d7ec;
      param_1 = param_1 + 1;
    } while (iVar7 < *param_3);
  }
  FUN_00438590((float *)&stack0xffffffdc,param_2,param_3 + 5);
  return;
}


