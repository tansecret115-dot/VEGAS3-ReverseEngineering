/* Module: vegas30.exe
   Function: FUN_005d0100
   Address: 005d0100
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d0100(undefined4 param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pvVar3 = param_2;
  iVar4 = *(int *)((int)param_2 + 0x50);
  puVar8 = (undefined4 *)0x0;
  iVar6 = 0;
  local_1c = iVar4;
  FUN_005b83b0(param_1,1);
  if (iVar4 != 0) {
    if ((((*(int *)(iVar4 + 0x18) == 0) ||
         (local_20 = FUN_005f13f0(*(undefined4 *)((int)pvVar3 + 4)), local_20 == 0)) ||
        (param_2 = (void *)(*(uint *)(*(int *)(local_20 + 8) + 0x134) >> 5 & 1),
        param_2 != (void *)0x0)) ||
       (param_2 = (void *)(*(uint *)(local_20 + 0x8c) & 1), param_2 != (void *)0x0)) {
      iVar6 = 0x4e008;
    }
    else {
      piVar2 = (int *)(local_20 + 0x94);
      if (piVar2 != (int *)0x0) {
        local_8 = 0;
        local_4 = 0;
        local_18 = 0;
        local_14 = 0;
        local_24 = 0;
        iVar6 = FUN_005cf930(pvVar3,&local_8,&local_18,&local_24,0,0,0);
        if (((local_18 != 0 || local_14 != 0) && ((uint *)*piVar2 != (uint *)0x0)) &&
           (param_2 = *(void **)*piVar2, param_2 != (void *)0x0)) {
          pvVar7 = (void *)0x0;
          if (0 < (int)param_2) {
            do {
              puVar8 = (undefined4 *)(*(int *)(*piVar2 + 4) * (int)pvVar7 + *(int *)(*piVar2 + 8));
              iVar4 = FUN_005cf560(*puVar8,puVar8[1],puVar8[2],puVar8[3],local_8,local_4,local_18,
                                   local_14);
              if ((iVar4 != 2) && (iVar4 != 3)) break;
              pvVar7 = (void *)((int)pvVar7 + 1);
            } while ((int)pvVar7 < (int)param_2);
          }
          if (pvVar7 == param_2) {
            iVar6 = 0x4e007;
          }
          else {
            if (puVar8[5] != 0) {
              FUN_005bad20(param_1);
              local_28 = 0;
              iVar4 = FUN_005ec8a0(puVar8[5],&local_28,0,0);
              if (-1 < iVar4) {
                local_10 = 0;
                local_c = 0;
                if (*(int *)((int)pvVar3 + 4) == 3) {
                  local_10 = *(undefined4 *)(local_20 + 0x48);
                  local_c = *(undefined4 *)(local_20 + 0x4c);
                }
                param_2 = (void *)0x0;
                iVar6 = FUN_005c6a40(pvVar3,local_28,local_1c,0,&param_2);
                if (-1 < iVar6) {
                  puVar1 = (undefined8 *)((int)param_2 + 8);
                  uVar9 = ftol();
                  *puVar1 = uVar9;
                  *(undefined4 *)((int)param_2 + 0x10) = puVar8[2];
                  *(undefined4 *)((int)param_2 + 0x14) = puVar8[3];
                  iVar6 = FUN_005c70c0(param_1,pvVar3,local_28,param_2,0,0,1);
                  pvVar7 = *(void **)((int)param_2 + 0x20);
                  if ((pvVar7 != (void *)0x0) && (pvVar7 != (void *)((int)param_2 + 0x28U))) {
                    free(pvVar7);
                  }
                  free(param_2);
                  param_2 = (void *)0x0;
                  if (-1 < iVar6) {
                    if ((((*(uint *)(local_28 + 0x134) & 0x800) != 0) &&
                        (*(int *)(*(int *)((int)pvVar3 + 0x50) + 0x18) != 0)) &&
                       (iVar4 = FUN_005f13f0(*(undefined4 *)((int)pvVar3 + 4)), iVar4 != 0)) {
                      FUN_005f7b90(iVar4,local_10,local_c);
                      *(uint *)(local_28 + 0x134) = *(uint *)(local_28 + 0x134) | 0x1000;
                    }
                    if (param_3 != 0) {
                      iVar4 = FUN_005c68e0(pvVar3);
                      while (iVar4 = iVar4 + -1, 0 < iVar4) {
                        uVar5 = FUN_005c6910(pvVar3,iVar4);
                        FUN_005c6b30(param_1,pvVar3,uVar5);
                      }
                    }
                  }
                }
                goto LAB_005d03fe;
              }
              if (param_3 != 0) {
                iVar4 = FUN_005c68e0(pvVar3);
                while (iVar4 = iVar4 + -1, -1 < iVar4) {
                  uVar5 = FUN_005c6910(pvVar3,iVar4);
                  FUN_005c6b30(param_1,pvVar3,uVar5);
                }
              }
            }
            iVar6 = 0x4e003;
          }
        }
      }
    }
  }
LAB_005d03fe:
  FUN_005b84d0(param_1,1);
  return iVar6;
}


