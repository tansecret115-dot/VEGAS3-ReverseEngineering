/* Module: rv103260.dll
   Function: FUN_636a4970
   Address: 636a4970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_636a4970(void *this,undefined4 param_1,int *param_2)

{
  ushort uVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int *local_58;
  LARGE_INTEGER local_54;
  LARGE_INTEGER local_4c;
  LARGE_INTEGER local_44;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined1 local_c [4];
  uint local_8;
  
  uVar10 = 0;
  if (*(int *)((int)this + 0x9a) == 0) {
    return 0x80004005;
  }
  local_8 = 0;
  if ((*(int *)((int)this + 0x18) == 0) || (*(int *)((int)this + 0x1c) == 0)) {
    return 0x80004005;
  }
  local_18 = *(int *)((int)this + 0xbe);
  if (*(int *)((int)this + 0xb2) != 0) {
    (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(*(int *)((int)this + 0xb2));
    *(undefined4 *)((int)this + 0xb2) = 0;
  }
  uVar5 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_c);
  *(undefined4 *)((int)this + 0xb2) = uVar5;
  bVar11 = false;
  if (*(int *)((int)this + 0xae) == 0) {
    iVar6 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_c);
    *(int *)((int)this + 0xae) = iVar6;
    bVar11 = iVar6 == 0;
  }
  if ((bVar11) || (*(int *)((int)this + 0xb2) == 0)) goto LAB_636a51c0;
  local_64 = *param_2;
  local_60 = *(undefined4 *)((int)this + 0x50);
  local_5c = param_2[5] + -1;
  local_58 = param_2 + 6;
  uVar7 = param_2[2] - *(int *)((int)this + 0xbe);
  if (uVar7 < 100000) {
    local_54.s.HighPart = 0;
    *(double *)((int)this + 0xf2) =
         *(double *)((int)this + 0xf2) * _DAT_636a7298 + (double)uVar7 * _DAT_636a7298;
    local_54.s.LowPart = uVar7;
  }
  if (*(double *)((int)this + 0xf2) < _DAT_636a72a0) {
    *(undefined4 *)((int)this + 0xf2) = 0;
    *(undefined4 *)((int)this + 0xf6) = 0x40508000;
  }
  dVar2 = _DAT_636a72a8;
  if ((*(uint *)((int)this + 0xca) >> 2 <= *(uint *)((int)this + 0xc6)) &&
     (dVar2 = _DAT_636a72b0, *(uint *)((int)this + 0xc6) < *(uint *)((int)this + 0xca) >> 1)) {
    dVar2 = _DAT_636a7298;
  }
  dVar3 = (*(double *)((int)this + 0xea) + *(double *)((int)this + 0xe2) +
          *(double *)((int)this + 0xda)) / *(double *)((int)this + 0xf2);
  if (dVar3 <= dVar2) {
    if ((*(int *)((int)this + 0xfe) != 0) || (dVar2 * _DAT_636a72b8 <= dVar3)) {
      if ((*(int *)((int)this + 0x102) == 0) && (dVar3 < dVar2 * _DAT_636a7298)) {
        *(undefined4 *)((int)this + 0x102) = 1;
      }
    }
    else {
      *(undefined4 *)((int)this + 0xfe) = 1;
    }
  }
  else if (*(int *)((int)this + 0x102) == 0) {
    if (*(int *)((int)this + 0xfe) == 0) goto LAB_636a4af7;
    *(undefined4 *)((int)this + 0xfe) = 0;
  }
  else if (*(int *)((int)this + 0xfe) == 0) {
LAB_636a4af7:
    if (*(int *)((int)this + 0x102) != 0) {
      *(undefined4 *)((int)this + 0x102) = 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x102) = 0;
  }
  if (*(int *)((int)this + 0x102) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(undefined4 *)((int)this + 0xfa);
  }
  local_10 = (uint)(*(int *)((int)this + 0xfe) != 0);
  FUN_636a5340(this,0x1002,&local_10);
  FUN_636a5340(this,0x1004,&local_1c);
  if ((*(int *)((int)this + 0x7c) != 0) && (local_5c != -1)) {
    do {
      uVar7 = rand();
      local_3c = *(uint *)((int)this + 0x7c);
      uStack_38 = 0;
      if ((double)(uVar7 & 0xff) < (double)local_3c * _DAT_636a72c0) {
        local_58[uVar10 * 2] = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_5c + 1U);
  }
  QueryPerformanceFrequency(&local_54);
  QueryPerformanceCounter(&local_4c);
  local_8 = FUN_636a5200(this,param_2[1],*(undefined4 *)((int)this + 0xb2),
                         *(undefined4 *)((int)this + 0xae),&local_64,&local_20);
  QueryPerformanceCounter(&local_44);
  local_3c = local_54.s.LowPart;
  uStack_38 = 0;
  dVar2 = ((((double)local_44._0_4_ - (double)local_44.s.HighPart * _DAT_636a72c8) -
           ((double)local_4c._0_4_ - (double)local_4c.s.HighPart * _DAT_636a72c8)) * _DAT_636a72d0)
          / ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_636a72c8);
  if (_DAT_636a72d8 <= *(double *)((int)this + 0xda)) {
    dVar2 = *(double *)((int)this + 0xda) * _DAT_636a72e8 + dVar2 * _DAT_636a72e0;
  }
  *(double *)((int)this + 0xda) = dVar2;
  if ((local_8 == 0) && (local_20 != 0)) {
    (**(code **)(*(int *)this + 0x30))(0x10007,&local_10);
    if (local_10 == 0) {
      iVar6 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_c);
      FUN_636a5270(this,*(undefined4 *)((int)this + 0xb2),iVar6);
      *(double *)((int)this + 0xe2) = *(double *)((int)this + 0xe2) * _DAT_636a72e8;
    }
    else {
      QueryPerformanceCounter(&local_4c);
      iVar6 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_c);
      FUN_636a5240(this,*(undefined4 *)((int)this + 0xb2),iVar6);
      QueryPerformanceCounter(&local_44);
      local_3c = local_54.s.LowPart;
      uStack_38 = 0;
      dVar2 = ((((double)local_44._0_4_ - (double)local_44.s.HighPart * _DAT_636a72c8) -
               ((double)local_4c._0_4_ - (double)local_4c.s.HighPart * _DAT_636a72c8)) *
              _DAT_636a72d0) /
              ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_636a72c8);
      if (_DAT_636a72d8 <= *(double *)((int)this + 0xe2)) {
        dVar2 = *(double *)((int)this + 0xe2) * _DAT_636a72e8 + dVar2 * _DAT_636a72e0;
      }
      *(double *)((int)this + 0xe2) = dVar2;
    }
    (**(code **)(*(int *)this + 0x30))(0x10009,&local_24);
    if (local_24 == 0) {
      dVar2 = *(double *)((int)this + 0xea) * _DAT_636a72e8;
    }
    else {
      QueryPerformanceCounter(&local_4c);
      uVar10 = param_2[2] - *(int *)((int)this + 0xbe);
      if (((0x31 < uVar10) && (uVar10 < 5000)) &&
         (iVar8 = FUN_636a52a0(this,&local_2c,uVar10), iVar8 == 0)) {
        local_8 = 1;
        uVar10 = (uint)((param_2[2] + 0x10) * 3 + *(int *)((int)this + 0xbe) * -3) / 100;
        uStack_38 = uVar10;
        if (1 < uVar10) {
          local_14 = 0x100;
          do {
            local_28 = local_14 / uVar10;
            local_34 = ((param_2[2] - *(int *)((int)this + 0xbe)) * local_8) / uVar10;
            local_30 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_c);
            if ((local_30 != 0) &&
               (iVar8 = FUN_636a52d0(this,local_30,*(undefined4 *)((int)this + 0xba),iVar6,local_2c,
                                     local_28), iVar8 == 0)) {
              piVar9 = operator_new(0x28);
              *piVar9 = (int)((uint)*(ushort *)((int)this + 0x3e) *
                              (uint)*(ushort *)((int)this + 0x40) * 3) / 2;
              piVar9[1] = local_30;
              piVar9[2] = local_34 + *(int *)((int)this + 0xbe);
              *(short *)(piVar9 + 3) = (short)param_2[3];
              *(undefined2 *)((int)piVar9 + 0xe) = 0;
              *(ushort *)((int)piVar9 + 0xe) = *(ushort *)((int)param_2 + 0xe) | 1;
              *(ushort *)((int)piVar9 + 0xe) = *(ushort *)((int)param_2 + 0xe) | 0x40;
              piVar9[4] = param_2[4];
              piVar9[5] = 1;
              piVar9[7] = 0;
              piVar9[6] = 1;
              if (*(FILE **)((int)this + 0x78) != (FILE *)0x0) {
                fprintf(*(FILE **)((int)this + 0x78),s__d__d__d__d__c__c__ld__ld__ld_636a828c,
                        piVar9[2],piVar9[2] - local_18,0,*(byte *)param_2[1] & 0x1f,0x46,
                        (int)(char)((-(*(int *)((int)this + 0xfe) != 0) & 0x33U) + 0x20),
                        *(undefined4 *)((int)this + 0xc6),*(undefined4 *)((int)this + 0xca),
                        *(undefined4 *)((int)this + 0xd2));
              }
              local_18 = piVar9[2];
              (**(code **)((int)this + 0xc))(*(undefined4 *)((int)this + 8),this,piVar9);
              operator_delete(piVar9);
              uVar10 = uStack_38;
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 0x100;
          } while (local_8 < uVar10);
        }
      }
      QueryPerformanceCounter(&local_44);
      local_3c = local_54.s.LowPart;
      uStack_38 = 0;
      dVar2 = ((((double)local_44._0_4_ - (double)local_44.s.HighPart * _DAT_636a72c8) -
               ((double)local_4c._0_4_ - (double)local_4c.s.HighPart * _DAT_636a72c8)) *
              _DAT_636a72d0) /
              ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_636a72c8);
      if (dVar2 <= *(double *)((int)this + 0xea)) {
        dVar2 = *(double *)((int)this + 0xea) * _DAT_636a72e8 + dVar2 * _DAT_636a72e0;
      }
    }
    *(double *)((int)this + 0xea) = dVar2;
    if (*(int *)((int)this + 0xba) != 0) {
      (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(*(int *)((int)this + 0xba));
    }
    *(int *)((int)this + 0xba) = iVar6;
    (**(code **)(**(int **)((int)this + 0x10) + 0x18))(iVar6);
    uVar5 = *(undefined4 *)((int)this + 0xb2);
    *(undefined4 *)((int)this + 0xb2) = *(undefined4 *)((int)this + 0xae);
    *(undefined4 *)((int)this + 0xae) = uVar5;
    piVar9 = operator_new(0x28);
    *piVar9 = (int)((uint)*(ushort *)((int)this + 0x3e) * (uint)*(ushort *)((int)this + 0x40) * 3) /
              2;
    piVar9[1] = iVar6;
    piVar9[2] = param_2[2];
    *(short *)(piVar9 + 3) = (short)param_2[3];
    *(undefined2 *)((int)piVar9 + 0xe) = 0;
    uVar1 = *(ushort *)((int)param_2 + 0xe);
    uVar4 = uVar1 | 1;
    *(ushort *)((int)piVar9 + 0xe) = uVar4;
    if (local_10 != 0) {
      *(ushort *)((int)piVar9 + 0xe) = CONCAT11((char)(uVar1 >> 8),(char)uVar4) | 0x20;
    }
    iVar6 = param_2[4];
    piVar9[5] = 1;
    piVar9[4] = iVar6;
    piVar9[7] = 0;
    piVar9[6] = 1;
    if (*(int *)((int)this + 0x78) != 0) {
      fprintf(*(FILE **)((int)this + 0x78),s__d__d__d__d__c__c__d__d__d_time__636a8260,piVar9[2],
              piVar9[2] - local_18,*param_2 << 3,*(byte *)param_2[1] & 0x1f,
              (int)(char)((-((*(byte *)param_2[1] & 0x40) != 0) & 7U) + 0x49),
              (int)(char)((-(*(int *)((int)this + 0xfe) != 0) & 0x33U) + 0x20),
              *(undefined4 *)((int)this + 0xc6),*(undefined4 *)((int)this + 0xca),
              *(undefined4 *)((int)this + 0xd2),*(undefined4 *)((int)this + 0xda),
              *(undefined4 *)((int)this + 0xde),*(undefined4 *)((int)this + 0xe2),
              *(undefined4 *)((int)this + 0xe6),*(undefined4 *)((int)this + 0xea),
              *(undefined4 *)((int)this + 0xee));
    }
    *(int *)((int)this + 0xbe) = param_2[2];
    local_8 = (**(code **)((int)this + 0xc))(*(undefined4 *)((int)this + 8),this,piVar9);
    operator_delete(piVar9);
  }
LAB_636a51c0:
  if (*(int **)((int)this + 0x14) == (int *)0x0) {
    return local_8;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x1c))(param_2[1]);
  return local_8;
}


