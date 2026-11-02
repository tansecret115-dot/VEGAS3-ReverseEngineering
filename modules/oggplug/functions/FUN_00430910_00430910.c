/* Module: oggplug.dll
   Function: FUN_00430910
   Address: 00430910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_00430910(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_18;
  int local_14 [2];
  undefined4 *local_c;
  
  iVar5 = *(int *)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 4);
  local_18 = 0xffffff7e;
  if (iVar5 == 0) {
    local_18 = 0xffffff7f;
  }
  else {
    FUN_00441d50(local_14);
    iVar1 = FUN_00430b80(local_14,iVar7);
    if (iVar1 == 0) {
      if (*(void **)(iVar5 + 0x3c) != (void *)0x0) {
        free(*(void **)(iVar5 + 0x3c));
      }
      sVar2 = FUN_00442230(local_14);
      pvVar3 = malloc(sVar2);
      *(void **)(iVar5 + 0x3c) = pvVar3;
      uVar4 = FUN_00442230(local_14);
      puVar8 = local_c;
      puVar9 = *(undefined4 **)(iVar5 + 0x3c);
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *param_3 = *(undefined4 *)(iVar5 + 0x3c);
      iVar1 = FUN_00442230(local_14);
      param_3[1] = iVar1;
      param_3[4] = 0;
      param_3[2] = 1;
      param_3[3] = 0;
      param_3[5] = 0;
      FUN_00441d90(local_14);
      iVar1 = FUN_00430810(local_14,param_2);
      if (iVar1 == 0) {
        if (*(void **)(iVar5 + 0x40) != (void *)0x0) {
          free(*(void **)(iVar5 + 0x40));
        }
        sVar2 = FUN_00442230(local_14);
        pvVar3 = malloc(sVar2);
        *(void **)(iVar5 + 0x40) = pvVar3;
        uVar4 = FUN_00442230(local_14);
        puVar8 = local_c;
        puVar9 = *(undefined4 **)(iVar5 + 0x40);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *param_4 = *(undefined4 *)(iVar5 + 0x40);
        iVar1 = FUN_00442230(local_14);
        param_4[1] = iVar1;
        param_4[4] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[5] = 0;
        FUN_00441d90(local_14);
        iVar7 = FUN_00430c60(local_14,iVar7);
        if (iVar7 == 0) {
          if (*(void **)(iVar5 + 0x44) != (void *)0x0) {
            free(*(void **)(iVar5 + 0x44));
          }
          sVar2 = FUN_00442230(local_14);
          pvVar3 = malloc(sVar2);
          *(void **)(iVar5 + 0x44) = pvVar3;
          uVar4 = FUN_00442230(local_14);
          puVar8 = *(undefined4 **)(iVar5 + 0x44);
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *local_c;
            local_c = local_c + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)local_c;
            local_c = (undefined4 *)((int)local_c + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *param_5 = *(undefined4 *)(iVar5 + 0x44);
          iVar5 = FUN_00442230(local_14);
          param_5[4] = 0;
          param_5[1] = iVar5;
          param_5[2] = 0;
          param_5[3] = 0;
          param_5[5] = 0;
          FUN_00441db0(local_14);
          return 0;
        }
      }
    }
  }
  FUN_00441db0(local_14);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_4 = 0;
    param_4 = param_4 + 1;
  }
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_5 = 0;
    param_5 = param_5 + 1;
  }
  if (*(void **)(iVar5 + 0x3c) != (void *)0x0) {
    free(*(void **)(iVar5 + 0x3c));
  }
  if (*(void **)(iVar5 + 0x40) != (void *)0x0) {
    free(*(void **)(iVar5 + 0x40));
  }
  if (*(void **)(iVar5 + 0x44) != (void *)0x0) {
    free(*(void **)(iVar5 + 0x44));
  }
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  return local_18;
}


