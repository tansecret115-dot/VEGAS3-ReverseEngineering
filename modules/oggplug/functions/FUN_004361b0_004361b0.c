/* Module: oggplug.dll
   Function: FUN_004361b0
   Address: 004361b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004361b0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  puVar5 = param_2;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_2[0xc] = 1;
  uVar1 = FUN_00442100(param_1,0x18);
  if (uVar1 == 0x564342) {
    uVar1 = FUN_00442100(param_1,0x10);
    *param_2 = uVar1;
    uVar1 = FUN_00442100(param_1,0x18);
    param_2[1] = uVar1;
    if (uVar1 != 0xffffffff) {
      uVar1 = FUN_00442100(param_1,1);
      if (uVar1 == 0) {
        pvVar3 = malloc(param_2[1] << 2);
        param_2[2] = (uint)pvVar3;
        uVar1 = FUN_00442100(param_1,1);
        if (uVar1 == 0) {
          iVar6 = 0;
          if (0 < (int)param_2[1]) {
            do {
              uVar1 = FUN_00442100(param_1,5);
              if (uVar1 == 0xffffffff) goto LAB_004363d1;
              *(uint *)(param_2[2] + iVar6 * 4) = uVar1 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)param_2[1]);
          }
        }
        else {
          iVar6 = 0;
          if (0 < (int)param_2[1]) {
            do {
              uVar1 = FUN_00442100(param_1,1);
              if (uVar1 == 0) {
                *(undefined4 *)(param_2[2] + iVar6 * 4) = 0;
              }
              else {
                uVar1 = FUN_00442100(param_1,5);
                if (uVar1 == 0xffffffff) goto LAB_004363d1;
                *(uint *)(param_2[2] + iVar6 * 4) = uVar1 + 1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)param_2[1]);
          }
        }
      }
      else {
        if (uVar1 != 1) {
          return 0xffffffff;
        }
        uVar2 = FUN_00442100(param_1,5);
        pvVar3 = malloc(param_2[1] << 2);
        param_2[2] = (uint)pvVar3;
        uVar1 = param_2[1];
        iVar6 = 0;
        if (0 < (int)uVar1) {
          do {
            uVar2 = uVar2 + 1;
            iVar4 = FUN_00435290(uVar1 - iVar6);
            uVar1 = FUN_00442100(param_1,iVar4);
            if (uVar1 == 0xffffffff) goto LAB_004363d1;
            if (0 < (int)uVar1) {
              do {
                iVar6 = iVar6 + 1;
                uVar1 = uVar1 - 1;
                *(uint *)((param_2[2] - 4) + iVar6 * 4) = uVar2;
              } while (uVar1 != 0);
            }
            uVar1 = param_2[1];
          } while (iVar6 < (int)uVar1);
        }
      }
      uVar1 = FUN_00442100(param_1,4);
      param_2[3] = uVar1;
      if (uVar1 == 0) {
        return 0;
      }
      if ((0 < (int)uVar1) && ((int)uVar1 < 3)) {
        uVar1 = FUN_00442100(param_1,0x20);
        param_2[4] = uVar1;
        uVar1 = FUN_00442100(param_1,0x20);
        param_2[5] = uVar1;
        uVar1 = FUN_00442100(param_1,4);
        param_2[6] = uVar1 + 1;
        uVar1 = FUN_00442100(param_1,1);
        param_2[7] = uVar1;
        if (param_2[3] == 1) {
          puVar5 = (uint *)FUN_004356b0((int *)param_2);
        }
        else {
          puVar5 = param_2;
          if (param_2[3] == 2) {
            puVar5 = (uint *)(*param_2 * param_2[1]);
          }
        }
        pvVar3 = malloc((int)puVar5 * 4);
        iVar6 = 0;
        param_2[8] = (uint)pvVar3;
        if (0 < (int)puVar5) {
          do {
            uVar1 = FUN_00442100(param_1,param_2[6]);
            *(uint *)(param_2[8] + iVar6 * 4) = uVar1;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)puVar5);
        }
        if (*(int *)(((int)puVar5 * 4 - 4U) + param_2[8]) != -1) {
          return 0;
        }
      }
    }
  }
LAB_004363d1:
  FUN_00435860(param_2);
  return 0xffffffff;
}


