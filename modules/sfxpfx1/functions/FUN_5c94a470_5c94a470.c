/* Module: sfxpfx1.dll
   Function: FUN_5c94a470
   Address: 5c94a470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c94a470(void *this,int param_1,byte *param_2,uint *param_3)

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
  undefined4 local_38 [13];
  
  local_5c = 0;
  local_4c = (uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2);
  local_60 = *param_3;
  local_58._0_4_ = param_2;
  iVar6 = FUN_5c9476d0(this,local_38);
  if ((param_1 == 0) && (*(int *)((int)this + 0x58) != 0)) {
    local_5c = FUN_5c94a1c0(this);
    if (local_5c < 0) {
      return local_5c;
    }
  }
  else if (((iVar6 != 0) || (*(int *)((int)this + 0x70) == 0)) &&
          ((param_1 != 2 && (local_5c = FUN_5c9497d0(this,(int)local_38), local_5c < 0)))) {
    return local_5c;
  }
  *(undefined4 *)((int)this + 0x58) = 1;
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
        local_40 = (double)(int)(char)(*(byte *)local_58 ^ 0x80) * _DAT_5c98b9d8 *
                   *(double *)((int)this + 0x88);
        dVar4 = *(double *)((int)this + 0x98) * *(double *)((int)this + 0xa0) +
                local_40 * *(double *)((int)this + 0x90);
        local_58._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
        uVar7 = local_58._4_4_ & 0x7ff00000;
        local_58 = dVar4;
        if (uVar7 < 0x3df00000) {
          local_58 = 0.0;
        }
        *(byte **)((int)this + 0xa0) = (byte *)local_58;
        *(uint *)((int)this + 0xa4) = local_58._4_4_;
        if (*(int *)((int)this + 0x38) != 0) {
          FUN_5c94ba60((double *)&local_58,(double *)((int)this + 0x458));
        }
        iVar6 = 0;
        dVar4 = _DAT_5c98b970;
        if (0 < *(int *)((int)this + 0x80)) {
          puVar8 = (uint *)((int)this + 0xac);
          do {
            dVar4 = dVar4 + *(double *)*puVar8;
            dVar3 = *(double *)(puVar8 + 5) * *(double *)((int)this + 0x98) +
                    *(double *)*puVar8 * *(double *)((int)this + 0x90);
            *(double *)(puVar8 + 5) = dVar3;
            *(double *)*puVar8 = (dVar3 + local_58) * *(double *)(puVar8 + 3);
            uVar7 = *puVar8;
            *puVar8 = uVar7 + 8;
            if (puVar8[1] <= uVar7 + 8) {
              *puVar8 = puVar8[-1];
            }
            iVar6 = iVar6 + 1;
            puVar8 = puVar8 + 10;
          } while (iVar6 < *(int *)((int)this + 0x80));
        }
        **(double **)((int)this + 0x3cc) = dVar4;
        uVar7 = *(int *)((int)this + 0x3cc) + 8;
        *(uint *)((int)this + 0x3cc) = uVar7;
        if (*(uint *)((int)this + 0x3c8) <= uVar7) {
          *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)((int)this + 0x3d0);
        }
        puVar2 = *(undefined4 **)((int)this + 0x41c);
        *puVar2 = (undefined4)local_40;
        puVar2[1] = local_40._4_4_;
        uVar9 = *(int *)((int)this + 0x414) + 8;
        *(uint *)((int)this + 0x414) = uVar9;
        uVar7 = *(uint *)((int)this + 0x420);
        if (uVar7 <= uVar9) {
          *(undefined4 *)((int)this + 0x414) = *(undefined4 *)((int)this + 0x410);
        }
        uVar9 = *(int *)((int)this + 0x418) + 8;
        *(uint *)((int)this + 0x418) = uVar9;
        if (uVar7 <= uVar9) {
          *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + 0x410);
        }
        uVar9 = *(int *)((int)this + 0x41c) + 8;
        *(uint *)((int)this + 0x41c) = uVar9;
        if (uVar7 <= uVar9) {
          *(undefined4 *)((int)this + 0x41c) = *(undefined4 *)((int)this + 0x410);
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
LAB_5c94a80c:
    }
  }
  else {
    uVar7 = local_60;
    if (local_60 != 0) {
      do {
        pbVar10 = (byte *)local_58;
        local_40 = (double)(int)(char)(*(byte *)local_58 ^ 0x80) * _DAT_5c98b9d8;
        local_48 = (double)(int)(char)(((byte *)local_58)[1] ^ 0x80) * _DAT_5c98b9d8;
        FUN_5c94ba90(this,(double *)&local_40,&local_48);
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
      goto LAB_5c94a80c;
    }
  }
  if (DAT_5c998760 != 0) goto LAB_5c94a8c1;
  piVar1 = (int *)((int)this + 0x48c);
  local_48._0_4_ = local_60;
  local_48._0_4_ = local_60;
  uVar7 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
  if (*(int *)((int)this + 0x4a0) == 0) {
    iVar6 = *piVar1;
    *piVar1 = iVar6 - local_60;
    if ((int)(iVar6 - local_60) < 1) {
      uVar9 = rand();
      *piVar1 = (uVar9 & 3) * (uVar7 >> 4) + uVar7 * 4;
      uVar9 = rand();
      *(uint *)((int)this + 0x498) = (uVar9 & 0x1f) + 1;
      uVar9 = rand();
      *(uint *)((int)this + 0x49c) = (uVar9 & 0x1f) + 1;
      *(uint *)((int)this + 0x4a0) = uVar7 >> 3;
      _DAT_5c99f074 = 0;
      _DAT_5c99f078 = 0;
      goto LAB_5c94a88e;
    }
    uVar7 = 0;
  }
  else {
LAB_5c94a88e:
    uVar7 = *(uint *)((int)this + 0x4a0);
    if (uVar7 <= local_60) {
      local_48._0_4_ = uVar7;
    }
    *(uint *)((int)this + 0x4a0) = uVar7 - local_48._0_4_;
    uVar7 = local_48._0_4_;
  }
  FUN_5c94bea0(param_2,uVar7,(uint)*(ushort *)(*(int *)((int)this + 0x6c) + 2),
               *(undefined4 *)(*(int *)((int)this + 0x6c) + 4),(int)piVar1);
LAB_5c94a8c1:
  *param_3 = local_60;
  return local_5c;
}


