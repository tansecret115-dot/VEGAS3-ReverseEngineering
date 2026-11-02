/* Module: oggplug.dll
   Function: FUN_00431050
   Address: 00431050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00431050(undefined4 *param_1,int param_2,size_t *param_3)

{
  size_t *psVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  size_t *psVar9;
  int local_4;
  
  puVar3 = param_1;
  psVar1 = *(size_t **)(param_2 + 0x1c);
  puVar8 = param_1;
  for (iVar7 = 0x1c; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pvVar4 = calloc(1,0x48);
  param_1[0x1a] = pvVar4;
  param_1[1] = param_2;
  iVar7 = FUN_00431380(psVar1[2]);
  *(int *)((int)pvVar4 + 0x34) = iVar7;
  pvVar5 = calloc(1,4);
  *(void **)((int)pvVar4 + 0x24) = pvVar5;
  pvVar5 = calloc(1,4);
  *(void **)((int)pvVar4 + 0x28) = pvVar5;
  pvVar5 = calloc(1,0x14);
  **(undefined4 **)((int)pvVar4 + 0x24) = pvVar5;
  pvVar5 = calloc(1,0x14);
  **(undefined4 **)((int)pvVar4 + 0x28) = pvVar5;
  FUN_00437260((int *)**(undefined4 **)((int)pvVar4 + 0x24),*psVar1);
  FUN_00437260((int *)**(undefined4 **)((int)pvVar4 + 0x28),psVar1[1]);
  pvVar5 = calloc(1,4);
  *(void **)((int)pvVar4 + 4) = pvVar5;
  *(void **)((int)pvVar4 + 8) = pvVar5;
  *(void **)((int)pvVar4 + 0xc) = pvVar5;
  *(void **)((int)pvVar4 + 0x10) = pvVar5;
  pvVar5 = calloc(1,4);
  *(void **)((int)pvVar4 + 0x14) = pvVar5;
  pvVar5 = calloc(1,4);
  *(void **)((int)pvVar4 + 0x18) = pvVar5;
  pvVar5 = calloc(1,4);
  *(void **)((int)pvVar4 + 0x1c) = pvVar5;
  pvVar5 = calloc(1,4);
  *(void **)((int)pvVar4 + 0x20) = pvVar5;
  iVar7 = (int)*psVar1 / 2;
  pvVar5 = FUN_00437140(0,*psVar1,iVar7,iVar7);
  **(undefined4 **)((int)pvVar4 + 4) = pvVar5;
  pvVar5 = FUN_00437140(0,psVar1[1],(int)*psVar1 / 2,(int)*psVar1 / 2);
  **(undefined4 **)((int)pvVar4 + 0x14) = pvVar5;
  pvVar5 = FUN_00437140(0,psVar1[1],(int)*psVar1 / 2,(int)psVar1[1] / 2);
  **(undefined4 **)((int)pvVar4 + 0x18) = pvVar5;
  pvVar5 = FUN_00437140(0,psVar1[1],(int)psVar1[1] / 2,(int)*psVar1 / 2);
  **(undefined4 **)((int)pvVar4 + 0x1c) = pvVar5;
  iVar7 = (int)psVar1[1] / 2;
  pvVar5 = FUN_00437140(0,psVar1[1],iVar7,iVar7);
  **(undefined4 **)((int)pvVar4 + 0x20) = pvVar5;
  if (param_3 == (size_t *)0x0) {
    pvVar5 = calloc(psVar1[7],0x1c);
    *(void **)((int)pvVar4 + 0x2c) = pvVar5;
    param_1 = (undefined4 *)0x0;
    if (0 < (int)psVar1[7]) {
      param_3 = psVar1 + 0x249;
      local_4 = 0;
      do {
        FUN_00435a50((int *)(local_4 + *(int *)((int)pvVar4 + 0x2c)),(int *)*param_3);
        param_3 = param_3 + 1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        local_4 = local_4 + 0x1c;
      } while ((int)param_1 < (int)psVar1[7]);
    }
  }
  else {
    pvVar5 = calloc(psVar1[7],0x1c);
    *(void **)((int)pvVar4 + 0x2c) = pvVar5;
    param_1 = (undefined4 *)0x0;
    if (0 < (int)psVar1[7]) {
      param_3 = psVar1 + 0x249;
      local_4 = 0;
      do {
        FUN_004359b0((int *)(local_4 + *(int *)((int)pvVar4 + 0x2c)),(int *)*param_3);
        param_3 = param_3 + 1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        local_4 = local_4 + 0x1c;
      } while ((int)param_1 < (int)psVar1[7]);
    }
    *puVar3 = 1;
  }
  puVar3[4] = 0x2000;
  pvVar5 = malloc(*(int *)(param_2 + 4) << 2);
  puVar3[2] = pvVar5;
  pvVar5 = malloc(*(int *)(param_2 + 4) << 2);
  puVar3[3] = pvVar5;
  param_1 = (undefined4 *)0x0;
  if (0 < *(int *)(param_2 + 4)) {
    do {
      pvVar5 = calloc(puVar3[4],4);
      *(void **)(puVar3[2] + (int)param_1 * 4) = pvVar5;
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < *(int *)(param_2 + 4));
  }
  puVar3[9] = 0;
  puVar3[10] = 0;
  sVar2 = psVar1[1];
  puVar3[0xc] = (int)sVar2 / 2;
  puVar3[5] = (int)sVar2 / 2;
  pvVar5 = calloc(psVar1[2],4);
  *(void **)((int)pvVar4 + 0x38) = pvVar5;
  param_1 = (undefined4 *)0x0;
  if (0 < (int)psVar1[2]) {
    psVar9 = psVar1 + 9;
    do {
      iVar7 = *(int *)(*psVar9 + 0xc);
      uVar6 = (**(code **)((&PTR_PTR_00452c60)[psVar1[iVar7 + 0x49]] + 8))
                        (puVar3,*psVar9,psVar1[iVar7 + 0x89]);
      *(undefined4 *)((int)psVar9 + *(int *)((int)pvVar4 + 0x38) + (-0x24 - (int)psVar1)) = uVar6;
      param_1 = (undefined4 *)((int)param_1 + 1);
      psVar9 = psVar9 + 1;
    } while ((int)param_1 < (int)psVar1[2]);
  }
  return 0;
}


