/* Module: sfppack1.dll
   Function: FUN_5cdd2060
   Address: 5cdd2060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd2060(void *this,int param_1,short *param_2,uint *param_3)

{
  int *piVar1;
  short *psVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  uint local_4c;
  double local_48;
  undefined8 local_40;
  int local_34 [12];
  
  local_5c = 0;
  local_4c = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  local_60 = *param_3;
  local_58._0_4_ = param_2;
  iVar6 = FUN_5cdce840(this,local_34);
  if ((param_1 == 0) && (*(int *)((int)this + 0x54) != 0)) {
    local_5c = FUN_5cdd1930(this);
    if (local_5c < 0) {
      return local_5c;
    }
  }
  else if (((iVar6 != 0) || (*(int *)((int)this + 0x6c) == 0)) &&
          ((param_1 != 2 && (local_5c = FUN_5cdd0ed0(this,local_34), local_5c < 0)))) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x54) = 1;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0x78) <= local_60) {
      local_60 = *(uint *)((int)this + 0x78);
    }
    iVar6 = *(int *)((int)this + 0x78) - local_60;
    *(int *)((int)this + 0x78) = iVar6;
    if (iVar6 == 0) {
      local_5c = 1;
    }
  }
  if (local_4c < 2) {
    if (local_60 != 0) {
      local_48 = (double)CONCAT44(local_48._4_4_,local_60);
      do {
        psVar2 = (short *)local_58;
        local_40 = (double)(int)*(short *)local_58 * _DAT_5ce13270 * *(double *)((int)this + 0x90);
        dVar4 = local_40 * *(double *)((int)this + 0x98) +
                *(double *)((int)this + 0xa8) * *(double *)((int)this + 0xa0);
        local_58._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
        uVar9 = local_58._4_4_ & 0x7ff00000;
        local_58 = dVar4;
        if (uVar9 < 0x3df00000) {
          local_58 = 0.0;
        }
        *(short **)((int)this + 0xa8) = (short *)local_58;
        *(uint *)((int)this + 0xac) = local_58._4_4_;
        if (*(int *)((int)this + 0x38) != 0) {
          FUN_5cdd3320((double *)&local_58,(double *)((int)this + 0x460));
        }
        iVar6 = 0;
        dVar4 = _DAT_5ce12bf0;
        if (0 < *(int *)((int)this + 0x88)) {
          puVar7 = (uint *)((int)this + 0xb4);
          do {
            dVar4 = dVar4 + *(double *)*puVar7;
            dVar5 = *(double *)(puVar7 + 5) * *(double *)((int)this + 0xa0) +
                    *(double *)*puVar7 * *(double *)((int)this + 0x98);
            *(double *)(puVar7 + 5) = dVar5;
            *(double *)*puVar7 = (dVar5 + local_58) * *(double *)(puVar7 + 3);
            uVar9 = *puVar7;
            *puVar7 = uVar9 + 8;
            if (puVar7[1] <= uVar9 + 8) {
              *puVar7 = puVar7[-1];
            }
            iVar6 = iVar6 + 1;
            puVar7 = puVar7 + 10;
          } while (iVar6 < *(int *)((int)this + 0x88));
        }
        **(double **)((int)this + 0x3d4) = dVar4;
        uVar9 = *(int *)((int)this + 0x3d4) + 8;
        *(uint *)((int)this + 0x3d4) = uVar9;
        if (*(uint *)((int)this + 0x3d0) <= uVar9) {
          *(undefined4 *)((int)this + 0x3d4) = *(undefined4 *)((int)this + 0x3d8);
        }
        puVar3 = *(undefined4 **)((int)this + 0x424);
        *puVar3 = (undefined4)local_40;
        puVar3[1] = local_40._4_4_;
        uVar8 = *(int *)((int)this + 0x41c) + 8;
        *(uint *)((int)this + 0x41c) = uVar8;
        uVar9 = *(uint *)((int)this + 0x428);
        if (uVar9 <= uVar8) {
          *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x418);
        }
        uVar8 = *(int *)((int)this + 0x420) + 8;
        *(uint *)((int)this + 0x420) = uVar8;
        if (uVar9 <= uVar8) {
          *(undefined4 *)((int)this + 0x420) = *(undefined4 *)((int)this + 0x418);
        }
        uVar8 = *(int *)((int)this + 0x424) + 8;
        *(uint *)((int)this + 0x424) = uVar8;
        if (uVar9 <= uVar8) {
          *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 0x418);
        }
        iVar6 = ftol();
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        *psVar2 = (short)iVar6;
        psVar2 = psVar2 + local_4c;
        iVar6 = local_48._0_4_ + -1;
        local_48 = (double)CONCAT44(local_48._4_4_,iVar6);
        local_58._0_4_ = psVar2;
      } while (iVar6 != 0);
LAB_5cdd2413:
    }
  }
  else if (local_60 != 0) {
    local_4c = local_4c * 2;
    uVar9 = local_60;
    do {
      psVar2 = (short *)local_58;
      local_40 = (double)(int)*(short *)local_58 * _DAT_5ce13270;
      local_48 = (double)(int)((short *)local_58)[1] * _DAT_5ce13270;
      FUN_5cdd3390(this,(double *)&local_40,&local_48);
      iVar6 = ftol();
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      *psVar2 = (short)iVar6;
      iVar6 = ftol();
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      psVar2[1] = (short)iVar6;
      local_58._0_4_ = (short *)((int)psVar2 + local_4c);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    goto LAB_5cdd2413;
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd24cb;
  piVar1 = (int *)((int)this + 0x494);
  uVar9 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  local_48._0_4_ = local_60;
  local_48._0_4_ = local_60;
  if (*(int *)((int)this + 0x4a8) == 0) {
    iVar6 = *piVar1;
    *piVar1 = iVar6 - local_60;
    if ((int)(iVar6 - local_60) < 1) {
      uVar8 = rand();
      *piVar1 = (uVar8 & 3) * (uVar9 >> 4) + uVar9 * 4;
      uVar8 = rand();
      *(uint *)((int)this + 0x4a0) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x4a4) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a8) = uVar9 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdd2498;
    }
    uVar9 = 0;
  }
  else {
LAB_5cdd2498:
    uVar9 = *(uint *)((int)this + 0x4a8);
    if (uVar9 <= local_60) {
      local_48._0_4_ = uVar9;
    }
    *(uint *)((int)this + 0x4a8) = uVar9 - local_48._0_4_;
    uVar9 = local_48._0_4_;
  }
  FUN_5cdd38e0(param_2,uVar9,(uint)*(ushort *)(*(int *)((int)this + 0x68) + 2),
               *(undefined4 *)(*(int *)((int)this + 0x68) + 4),(int)piVar1);
LAB_5cdd24cb:
  *param_3 = local_60;
  return local_5c;
}


