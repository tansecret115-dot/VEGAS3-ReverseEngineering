/* Module: wmfplug2.dll
   Function: FUN_00405910
   Address: 00405910
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405910(uint *param_1,uint param_2,uint param_3,undefined4 param_4,int *param_5,
                int *param_6,undefined4 *param_7,undefined4 *param_8,int *param_9)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint unaff_retaddr;
  int *piVar10;
  int **ppiVar11;
  uint **ppuVar12;
  undefined8 *puVar13;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  undefined8 local_18;
  int local_10;
  int iStack_c;
  uint local_4;
  
  puVar4 = param_1;
  if (((uint)param_9 & 2) != 0) {
    return 1;
  }
  WaitForSingleObject((HANDLE)param_1[4],0xffffffff);
  if (puVar4[100] == 0) {
    ReleaseMutex((HANDLE)puVar4[4]);
    return -0x7ffb1ff9;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
    param_8[1] = 0;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = puVar4[0xc];
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = puVar4[0xd];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = puVar4[0x11];
  }
  if (((int)puVar4[0x61] <= (int)param_3) &&
     (((int)puVar4[0x61] < (int)param_3 || (puVar4[0x60] <= param_2)))) {
    ReleaseMutex((HANDLE)puVar4[4]);
    return 1;
  }
  uVar6 = puVar4[0x62];
  uVar1 = puVar4[99];
  if ((param_2 == uVar6) && (param_3 == uVar1)) {
    piVar10 = (int *)puVar4[0xb];
    if (piVar10 == (int *)0x0) {
      puVar4[0x62] = 0xffffffff;
      puVar4[99] = 0xffffffff;
      ReleaseMutex((HANDLE)puVar4[4]);
      return -0x7fffbffb;
    }
    ppuVar12 = &param_1;
    param_9 = (int *)0x0;
    ppiVar11 = &param_9;
    param_1 = (uint *)0x0;
    iVar5 = (**(code **)(*piVar10 + 0x1c))();
    if (-1 < iVar5) {
      *param_1 = (uint)param_6;
      if (param_5 != (int *)0x0) {
        *param_5 = local_4;
        param_5[1] = unaff_retaddr;
      }
      return 0;
    }
    puVar4[0x62] = 0xffffffff;
    puVar4[99] = 0xffffffff;
    ReleaseMutex((HANDLE)puVar4[4]);
    piVar2 = (int *)puVar4[0xb];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2,piVar10,ppiVar11,ppuVar12);
    }
    puVar4[0xb] = 0;
    return iVar5;
  }
  param_9 = (int *)0x0;
  uVar8 = ftol();
  uVar8 = __aulldiv((uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20),10000,0);
  local_28 = __allmul((uint)uVar8,(int)((ulonglong)uVar8 >> 0x20),10000,0);
  local_10 = param_2 + 2;
  iStack_c = param_3 + (0xfffffffd < param_2);
  uVar8 = ftol();
  lVar9 = __aulldiv((uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20),10000,0);
  local_18 = __allmul((uint)(lVar9 + 1),(int)((ulonglong)(lVar9 + 1) >> 0x20),10000,0);
  local_20 = 0;
  local_1c = 0;
  local_10 = 0;
  iStack_c = 0;
  param_7 = (undefined4 *)0x0;
  param_6 = (int *)0x0;
  param_1 = (uint *)0x0;
  if ((((uVar6 & uVar1) != 0xffffffff) && ((int)uVar1 <= (int)param_3)) &&
     (((int)uVar1 < (int)param_3 || (uVar6 < param_2)))) {
    iVar5 = uVar1 + (0xffffffe7 < uVar6);
    if (((int)param_3 < iVar5) || (((int)param_3 <= iVar5 && (param_2 < uVar6 + 0x18))))
    goto LAB_00405b8b;
  }
  (**(code **)(*(int *)puVar4[0x59] + 0x14))
            ((int *)puVar4[0x59],(uint)local_28,(int)((ulonglong)local_28 >> 0x20),0,0);
LAB_00405b8b:
  local_4 = local_28._4_4_;
  uVar6 = (uint)local_28;
  do {
    if (param_9 != (int *)0x0) {
      (**(code **)(*param_9 + 8))(param_9);
    }
    param_9 = (int *)0x0;
    iVar5 = (**(code **)(*(int *)puVar4[0x59] + 0x1c))
                      ((int *)puVar4[0x59],0,&param_9,&local_20,&local_10,&param_7,&param_6,&param_1
                      );
    lVar9 = local_28;
    if (iVar5 < 0) goto LAB_00405caa;
    if ((local_18._4_4_ <= local_1c) &&
       ((local_1c != local_18._4_4_ || ((uint)local_18 < local_20)))) {
      bVar7 = 9999 < uVar6;
      uVar6 = uVar6 - 10000;
      local_4 = (local_4 - 1) + (uint)bVar7;
      iVar5 = (**(code **)(*(int *)puVar4[0x59] + 0x14))((int *)puVar4[0x59],uVar6,local_4,0,0);
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
  } while ((local_18._4_4_ < local_1c) ||
          ((lVar9 = local_28, lVar3 = local_18, local_18._4_4_ <= local_1c &&
           ((uint)local_18 < local_20))));
  do {
    local_18 = lVar3;
    if (iVar5 < 0) {
LAB_00405caa:
      local_28 = lVar9;
      if (param_9 != (int *)0x0) {
        (**(code **)(*param_9 + 8))(param_9);
      }
      param_9 = (int *)0x0;
      ReleaseMutex((HANDLE)puVar4[4]);
      return iVar5;
    }
    local_28._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
    local_28 = lVar9;
    if ((local_28._4_4_ < local_1c) ||
       ((local_28._4_4_ <= local_1c && (local_28._0_4_ = (uint)lVar9, (uint)local_28 <= local_20))))
    {
      if (-1 < iVar5) {
        local_18._4_4_ = (uint)((ulonglong)lVar3 >> 0x20);
        if ((local_18._4_4_ < local_1c) ||
           ((local_18._4_4_ <= local_1c && (local_18._0_4_ = (uint)lVar3, (uint)local_18 < local_20)
            ))) {
          if (param_9 != (int *)0x0) {
            (**(code **)(*param_9 + 8))(param_9);
          }
          param_9 = (int *)0x0;
          ReleaseMutex((HANDLE)puVar4[4]);
          iVar5 = -0x7fffbffb;
        }
        else {
          puVar13 = &local_28;
          ppiVar11 = &param_5;
          param_5 = (int *)0x0;
          local_28 = (ulonglong)local_28._4_4_ << 0x20;
          piVar10 = param_9;
          iVar5 = (**(code **)(*param_9 + 0x1c))();
          if (-1 < iVar5) {
            piVar2 = (int *)puVar4[0xb];
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 8))(piVar2,piVar10,ppiVar11,puVar13);
            }
            puVar4[0xb] = (uint)param_6;
            *param_1 = param_2;
            if (param_5 != (int *)0x0) {
              *param_5 = local_4;
              param_5[1] = unaff_retaddr;
            }
            puVar4[0x62] = local_4;
            puVar4[99] = unaff_retaddr;
            return iVar5;
          }
          ReleaseMutex((HANDLE)puVar4[4]);
          if (param_6 != (int *)0x0) {
            (**(code **)(*param_6 + 8))(param_6);
            return iVar5;
          }
        }
        return iVar5;
      }
      goto LAB_00405caa;
    }
    if (param_9 != (int *)0x0) {
      (**(code **)(*param_9 + 8))(param_9);
    }
    param_9 = (int *)0x0;
    iVar5 = (**(code **)(*(int *)puVar4[0x59] + 0x1c))
                      ((int *)puVar4[0x59],0,&param_9,&local_20,&local_10,&param_7,&param_6,&param_1
                      );
    lVar9 = local_28;
    lVar3 = local_18;
  } while( true );
}


