/* Module: sfppack1.dll
   Function: FUN_5cdd1bf0
   Address: 5cdd1bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd1bf0(void *this,int param_1,byte *param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
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
        pbVar10 = (byte *)local_58;
        local_40 = (double)(int)(char)(*(byte *)local_58 ^ 0x80) * _DAT_5ce13240 *
                   *(double *)((int)this + 0x90);
        dVar4 = *(double *)((int)this + 0xa0) * *(double *)((int)this + 0xa8) +
                local_40 * *(double *)((int)this + 0x98);
        local_58._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
        uVar7 = local_58._4_4_ & 0x7ff00000;
        local_58 = dVar4;
        if (uVar7 < 0x3df00000) {
          local_58 = 0.0;
        }
        *(byte **)((int)this + 0xa8) = (byte *)local_58;
        *(uint *)((int)this + 0xac) = local_58._4_4_;
        if (*(int *)((int)this + 0x38) != 0) {
          FUN_5cdd3320((double *)&local_58,(double *)((int)this + 0x460));
        }
        iVar6 = 0;
        dVar4 = _DAT_5ce12bf0;
        if (0 < *(int *)((int)this + 0x88)) {
          puVar8 = (uint *)((int)this + 0xb4);
          do {
            dVar4 = dVar4 + *(double *)*puVar8;
            dVar3 = *(double *)((int)this + 0xa0) * *(double *)(puVar8 + 5) +
                    *(double *)*puVar8 * *(double *)((int)this + 0x98);
            *(double *)(puVar8 + 5) = dVar3;
            *(double *)*puVar8 = (dVar3 + local_58) * *(double *)(puVar8 + 3);
            uVar7 = *puVar8;
            *puVar8 = uVar7 + 8;
            if (puVar8[1] <= uVar7 + 8) {
              *puVar8 = puVar8[-1];
            }
            iVar6 = iVar6 + 1;
            puVar8 = puVar8 + 10;
          } while (iVar6 < *(int *)((int)this + 0x88));
        }
        **(double **)((int)this + 0x3d4) = dVar4;
        uVar7 = *(int *)((int)this + 0x3d4) + 8;
        *(uint *)((int)this + 0x3d4) = uVar7;
        if (*(uint *)((int)this + 0x3d0) <= uVar7) {
          *(undefined4 *)((int)this + 0x3d4) = *(undefined4 *)((int)this + 0x3d8);
        }
        puVar2 = *(undefined4 **)((int)this + 0x424);
        *puVar2 = (undefined4)local_40;
        puVar2[1] = local_40._4_4_;
        uVar9 = *(int *)((int)this + 0x41c) + 8;
        *(uint *)((int)this + 0x41c) = uVar9;
        uVar7 = *(uint *)((int)this + 0x428);
        if (uVar7 <= uVar9) {
          *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x418);
        }
        uVar9 = *(int *)((int)this + 0x420) + 8;
        *(uint *)((int)this + 0x420) = uVar9;
        if (uVar7 <= uVar9) {
          *(undefined4 *)((int)this + 0x420) = *(undefined4 *)((int)this + 0x418);
        }
        uVar9 = *(int *)((int)this + 0x424) + 8;
        *(uint *)((int)this + 0x424) = uVar9;
        if (uVar7 <= uVar9) {
          *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 0x418);
        }
        iVar6 = ftol();
        if (iVar6 < -0x80) {
          bVar5 = 0;
        }
        else if (iVar6 < 0x80) {
          bVar5 = (byte)iVar6 ^ 0x80;
        }
        else {
          bVar5 = 0xff;
        }
        *pbVar10 = bVar5;
        pbVar10 = pbVar10 + local_4c;
        iVar6 = local_48._0_4_ + -1;
        local_48 = (double)CONCAT44(local_48._4_4_,iVar6);
        local_58._0_4_ = pbVar10;
      } while (iVar6 != 0);
LAB_5cdd1f8c:
    }
  }
  else {
    uVar7 = local_60;
    if (local_60 != 0) {
      do {
        pbVar10 = (byte *)local_58;
        local_40 = (double)(int)(char)(*(byte *)local_58 ^ 0x80) * _DAT_5ce13240;
        local_48 = (double)(int)(char)(((byte *)local_58)[1] ^ 0x80) * _DAT_5ce13240;
        FUN_5cdd3390(this,(double *)&local_40,&local_48);
        iVar6 = ftol();
        if (iVar6 < -0x80) {
          bVar5 = 0;
        }
        else if (iVar6 < 0x80) {
          bVar5 = (byte)iVar6 ^ 0x80;
        }
        else {
          bVar5 = 0xff;
        }
        *pbVar10 = bVar5;
        iVar6 = ftol();
        if (iVar6 < -0x80) {
          bVar5 = 0;
        }
        else if (iVar6 < 0x80) {
          bVar5 = (byte)iVar6 ^ 0x80;
        }
        else {
          bVar5 = 0xff;
        }
        pbVar10[1] = bVar5;
        local_58._0_4_ = pbVar10 + local_4c;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      goto LAB_5cdd1f8c;
    }
  }
  if (DAT_5ce237e8 != 0) goto LAB_5cdd2041;
  piVar1 = (int *)((int)this + 0x494);
  local_48._0_4_ = local_60;
  local_48._0_4_ = local_60;
  uVar7 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  if (*(int *)((int)this + 0x4a8) == 0) {
    iVar6 = *piVar1;
    *piVar1 = iVar6 - local_60;
    if ((int)(iVar6 - local_60) < 1) {
      uVar9 = rand();
      *piVar1 = (uVar9 & 3) * (uVar7 >> 4) + uVar7 * 4;
      uVar9 = rand();
      *(uint *)((int)this + 0x4a0) = (uVar9 & 0x1f) + 1;
      uVar9 = rand();
      *(uint *)((int)this + 0x4a4) = (uVar9 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a8) = uVar7 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdd200e;
    }
    uVar7 = 0;
  }
  else {
LAB_5cdd200e:
    uVar7 = *(uint *)((int)this + 0x4a8);
    if (uVar7 <= local_60) {
      local_48._0_4_ = uVar7;
    }
    *(uint *)((int)this + 0x4a8) = uVar7 - local_48._0_4_;
    uVar7 = local_48._0_4_;
  }
  FUN_5cdd37f0(param_2,uVar7,(uint)*(ushort *)(*(int *)((int)this + 0x68) + 2),
               *(undefined4 *)(*(int *)((int)this + 0x68) + 4),(int)piVar1);
LAB_5cdd2041:
  *param_3 = local_60;
  return local_5c;
}


