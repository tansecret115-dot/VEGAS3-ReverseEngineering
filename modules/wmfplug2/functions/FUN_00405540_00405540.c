/* Module: wmfplug2.dll
   Function: FUN_00405540
   Address: 00405540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405540(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4,uint *param_5,
                undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,int *param_9)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint unaff_retaddr;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar5 = param_1;
  if (((uint)param_9 & 2) != 0) {
    return 1;
  }
  WaitForSingleObject((HANDLE)param_1[4],0xffffffff);
  uVar8 = param_2;
  if (puVar5[100] == 0) {
    ReleaseMutex((HANDLE)puVar5[4]);
    return -0x7ffb1ff9;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
    param_8[1] = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = puVar5[0xc];
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = puVar5[0xd];
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = puVar5[0x11];
  }
  if (((int)puVar5[0x61] <= (int)param_3) &&
     (((int)puVar5[0x61] < (int)param_3 || ((uint)puVar5[0x60] <= param_2)))) {
    ReleaseMutex((HANDLE)puVar5[4]);
    return 1;
  }
  uVar1 = puVar5[0x62];
  uVar2 = puVar5[99];
  if ((param_2 == uVar1) && (param_3 == uVar2)) {
    piVar3 = (int *)puVar5[0xb];
    if (piVar3 == (int *)0x0) {
      puVar5[0x62] = 0xffffffff;
      puVar5[99] = 0xffffffff;
      ReleaseMutex((HANDLE)puVar5[4]);
      return -0x7fffbffb;
    }
    param_9 = (int *)0x0;
    param_1 = (undefined4 *)0x0;
    iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,&param_9,&param_1);
    if (-1 < iVar6) {
      *param_1 = param_6;
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar8;
        param_5[1] = unaff_retaddr;
      }
      puVar5[0x62] = uVar8;
      puVar5[99] = unaff_retaddr;
      return 0;
    }
    puVar5[0x62] = 0xffffffff;
    puVar5[99] = 0xffffffff;
    ReleaseMutex((HANDLE)puVar5[4]);
    piVar3 = (int *)puVar5[0xb];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    puVar5[0xb] = 0;
    return iVar6;
  }
  if ((((uVar1 & uVar2) == 0xffffffff) || (param_2 != uVar1 + 1)) ||
     (param_3 != uVar2 + (0xfffffffe < uVar1))) {
    if ((uVar1 & uVar2) != 0xffffffff) {
      uVar8 = uVar1 + 1;
      iVar6 = uVar2 + (0xfffffffe < uVar1);
      if ((iVar6 <= (int)param_3) && ((iVar6 < (int)param_3 || (uVar8 < param_2)))) {
        iVar7 = uVar2 + (0xffffffe7 < uVar1);
        if (((int)param_3 <= iVar7) && (((int)param_3 < iVar7 || (param_2 < uVar1 + 0x18)))) {
          local_18 = 0;
          local_14 = 0;
          local_20 = 0;
          local_1c = (undefined4 *)0x0;
          param_7 = (undefined4 *)0x0;
          param_6 = (undefined4 *)0x0;
          param_1 = (undefined4 *)0x0;
          param_9 = (int *)0x0;
          if ((iVar6 <= (int)param_3) && ((iVar6 < (int)param_3 || (uVar8 < param_2)))) {
            do {
              iVar7 = (**(code **)(*(int *)puVar5[0x59] + 0x1c))
                                ((int *)puVar5[0x59],0,&param_9,&local_18,&local_20,&param_7,
                                 &param_6,&param_1);
              if (-1 < iVar7) {
                if (param_9 != (int *)0x0) {
                  (**(code **)(*param_9 + 8))(param_9);
                }
                param_9 = (int *)0x0;
              }
              bVar9 = 0xfffffffe < uVar8;
              uVar8 = uVar8 + 1;
              iVar6 = iVar6 + (uint)bVar9;
            } while ((iVar6 < (int)param_3) || ((iVar6 <= (int)param_3 && (uVar8 < param_2))));
          }
          goto LAB_004057e9;
        }
      }
    }
    (**(code **)(*(int *)puVar5[0x59] + 0x18))
              ((int *)puVar5[0x59],*(undefined2 *)(puVar5 + 7),param_2,param_3,0,0);
  }
LAB_004057e9:
  piVar4 = (int *)puVar5[0xb];
  piVar3 = puVar5 + 0xb;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  puVar5[0x62] = 0xffffffff;
  puVar5[99] = 0xffffffff;
  *piVar3 = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_10 = 0;
  puStack_c = (undefined4 *)0x0;
  uStack_24 = 0;
  uStack_28 = 0;
  param_5 = (uint *)0x0;
  iVar6 = (**(code **)(*(int *)puVar5[0x59] + 0x1c))
                    ((int *)puVar5[0x59],0,piVar3,&uStack_8,&uStack_10,&uStack_24,&uStack_28,
                     &param_5);
  if (iVar6 < 0) {
    ReleaseMutex((HANDLE)puVar5[4]);
    if (iVar6 == -0x3ff2f431) {
      return 1;
    }
  }
  else {
    param_1 = (undefined4 *)0x0;
    local_1c = (undefined4 *)0x0;
    iVar6 = (**(code **)(*(int *)*piVar3 + 0x1c))((int *)*piVar3,&param_1,&local_1c);
    if (iVar6 < 0) {
      puVar5[0x62] = 0xffffffff;
      puVar5[99] = 0xffffffff;
      ReleaseMutex((HANDLE)puVar5[4]);
      piVar4 = (int *)*piVar3;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      *piVar3 = 0;
      return iVar6;
    }
    *local_1c = uStack_8;
    if (puStack_c != (undefined4 *)0x0) {
      *puStack_c = uStack_24;
      puStack_c[1] = local_20;
    }
    puVar5[0x62] = uStack_24;
    puVar5[99] = local_20;
  }
  return iVar6;
}


