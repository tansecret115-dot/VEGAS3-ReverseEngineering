/* Module: rv103260.dll
   Function: FUN_636a14a0
   Address: 636a14a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int __thiscall FUN_636a14a0(void *this,uint param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 local_42c [33];
  int local_40b;
  undefined1 local_3e4 [24];
  int local_3cc;
  int local_39c [3];
  undefined1 local_390 [4];
  undefined1 uStack_38c;
  undefined1 local_18c [62];
  int local_14e;
  int local_14a;
  uint local_144 [10];
  int local_11c [8];
  int local_fc [8];
  undefined1 local_dc [24];
  int local_c4;
  int local_9e;
  int local_9a;
  int local_94 [10];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  int local_64 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  undefined1 local_34;
  int local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  void *local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  local_c = -0x7fffbffb;
  local_40 = 0;
  if (*(uint *)(param_1 + 200) < 10) {
    *(int **)(param_1 + 0xa0 + *(uint *)(param_1 + 200) * 4) = param_3;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  }
  uVar10 = (uint)*(ushort *)((int)this + 0x32);
  bVar5 = true;
  if (uVar10 != 0) {
    piVar6 = (int *)((int)this + 0x34);
    uVar13 = uVar10;
    bVar5 = true;
    do {
      if (*(int *)(*piVar6 + 200) == 0) {
        bVar5 = false;
      }
      piVar6 = piVar6 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = 0;
  *(undefined2 *)((int)this + 8) = 0;
  if ((bVar5) && (uVar10 != 0)) {
    puVar8 = (undefined4 *)((int)this + 0x34);
    do {
      uVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      *(undefined4 *)((int)this + (uint)*(ushort *)((int)this + 8) * 4 + 10) = uVar3;
      *(short *)((int)this + 8) = *(short *)((int)this + 8) + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ushort *)((int)this + 0x32));
  }
  piVar6 = param_3;
  local_14 = this;
  if (bVar5) {
    uVar10 = 0;
    if (*(short *)((int)this + 8) != 0) {
      piVar7 = (int *)((int)this + 10);
      do {
        piVar6 = (int *)*piVar7;
        piVar7 = piVar7 + 1;
        piVar6[0x38] = *(int *)((int)this + 0x180) * -10 + 100;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)((int)this + 8));
    }
    if (*(int *)((int)this + 0x184) < *(int *)((int)this + 0x180)) {
      *(int *)((int)this + 0x184) = *(int *)((int)this + 0x184) + 1;
      param_1 = 0;
      if (*(short *)((int)this + 8) != 0) {
        local_8 = (int *)((int)this + 10);
        do {
          piVar6 = (int *)*local_8;
          piVar7 = local_11c;
          for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
            *piVar7 = 0;
            piVar7 = piVar7 + 1;
          }
          local_11c[2] = param_3[2];
          local_c = (*(code *)piVar6[3])(piVar6[2],piVar6,local_11c);
          param_1 = param_1 + 1;
          local_8 = local_8 + 1;
        } while (param_1 < *(ushort *)((int)this + 8));
      }
      bVar5 = false;
      *(int *)((int)this + 400) = *(int *)((int)this + 400) + 1;
    }
    else {
      *(undefined4 *)((int)this + 0x184) = 0;
    }
  }
  if (!bVar5) {
    return 0;
  }
  *(int *)((int)this + 400) = *(int *)((int)this + 400) + 1;
  FUN_636a1d10((int)param_3,local_94,&local_40,local_144);
  if ((*(ushort *)((int)piVar6 + 0x2d92) == *(ushort *)((int)piVar6 + 0x3e)) &&
     ((short)piVar6[0xb65] == (short)piVar6[0x10])) {
    if (*(int *)((int)piVar6 + 0x2d8e) != 0x59555632) {
      local_8 = (int *)*(int *)((int)this + 0x5c);
      goto LAB_636a16e7;
    }
    local_8 = (int *)param_3[1];
  }
  else {
    if (*(int *)((int)piVar6 + 0x2d8e) == 0x59555632) {
      uVar1 = *(ushort *)(piVar6 + 0x10);
      puVar14 = *(undefined1 **)((int)this + 0x60);
      uVar2 = *(ushort *)(piVar6 + 0xb65);
      iVar11 = param_3[1];
    }
    else {
      uVar1 = *(ushort *)(piVar6 + 0x10);
      puVar14 = *(undefined1 **)((int)this + 0x60);
      uVar2 = *(ushort *)(piVar6 + 0xb65);
      iVar11 = *(int *)((int)this + 0x5c);
    }
    FUN_636a2d30(iVar11,puVar14,(uint)*(ushort *)((int)piVar6 + 0x2d92),(uint)uVar2,
                 (uint)*(ushort *)((int)piVar6 + 0x3e),(uint)uVar1);
    local_8 = *(int **)((int)this + 0x60);
  }
LAB_636a16e7:
  uVar10 = 0;
  local_28 = 1;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  if (*(short *)((int)this + 8) != 0) {
    piVar7 = (int *)((int)this + 10);
    do {
      iVar11 = *piVar7;
      uVar10 = uVar10 + 1;
      piVar7 = piVar7 + 1;
      *(undefined4 *)(iVar11 + 0x98) = *(undefined4 *)(iVar11 + 0x9c);
    } while (uVar10 < *(ushort *)((int)this + 8));
  }
  param_1 = 0;
  if (*(short *)((int)this + 8) != 0) {
    piVar7 = local_94;
    do {
      piVar6 = *(int **)((int)this + *piVar7 * 4 + 10);
      FUN_636a34f0(piVar6,1,local_18c);
      if ((local_14a == 0) && (local_14e == 0)) {
        local_28 = 0;
        break;
      }
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 1;
    } while (param_1 < *(ushort *)((int)this + 8));
  }
  param_1 = 0;
  if (*(short *)((int)this + 8) != 0) {
    do {
      piVar6 = *(int **)((int)this + local_94[param_1] * 4 + 10);
      if (piVar6[0x32] == 0) {
        param_3 = (int *)0x0;
      }
      else {
        param_3 = (int *)piVar6[0x28];
        piVar7 = piVar6 + 0x28;
        iVar11 = piVar6[0x32] + -1;
        uVar10 = 0;
        piVar6[0x32] = iVar11;
        if (iVar11 != 0) {
          do {
            uVar10 = uVar10 + 1;
            *piVar7 = piVar7[1];
            piVar7 = piVar7 + 1;
          } while (uVar10 < (uint)piVar6[0x32]);
        }
      }
      if ((param_3 == (int *)0x0) || (uVar10 = param_3[5], uVar10 == 0)) {
        return 0;
      }
      uVar13 = 0;
      if (uVar10 != 0) {
        piVar7 = param_3 + 6;
        do {
          if (*piVar7 == 0) {
            return local_c;
          }
          uVar13 = uVar13 + 1;
          piVar7 = piVar7 + 2;
        } while (uVar13 < uVar10);
      }
      if ((((piVar6[6] != 0) && (piVar6[7] != 0)) && (*param_3 != 0)) && (param_3[1] != 0)) {
        FUN_636a34f0(piVar6,1,local_dc);
        FUN_636a34f0(*(void **)((int)this + *(int *)((int)piVar6 + 0x2e) * 4 + 10),1,local_3e4);
        piVar7 = local_64;
        for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_64[0] = *param_3;
        if ((((*(byte *)((int)param_3 + 0xe) & 2) == 0) && ((local_30 == 0 || (local_9a != 0)))) &&
           (local_9a == 0)) {
          local_64[1] = 0;
        }
        else {
          local_64[1] = 1;
        }
        local_54 = 0;
        local_50 = 0;
        local_64[2] = 1;
        local_64[3] = param_3[2] - piVar6[0x3c];
        local_48 = local_24;
        local_44 = *(undefined4 *)((int)this + 0x194);
        if ((local_144[*(int *)((int)piVar6 + 0x2e)] != 0) || (local_64[1] != 0)) {
          local_64[2] = 0;
        }
        if ((*(int *)((int)piVar6 + 0x2e) != local_94[param_1]) && (local_64[1] == 0)) {
          if (local_2c == 1) {
            local_64[1] = 1;
          }
          else if (piVar6[0x34] == 0) {
            puVar8 = *(undefined4 **)(local_3cc + 0x1200);
            puVar9 = *(undefined4 **)(local_c4 + 0x1200);
            for (iVar11 = 0xf420; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            local_50 = 1;
            this = local_14;
          }
        }
        if ((local_9e != 0) && (*(int *)((int)this + 0x170) == 0)) {
          local_64[2] = 0;
          local_64[1] = 1;
        }
        piVar7 = local_39c;
        for (iVar11 = 0x83; iVar11 != 0; iVar11 = iVar11 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        piVar4 = (int *)piVar6[4];
        *(undefined1 *)piVar7 = 0;
        local_10 = (**(code **)(*piVar4 + 0xc))(local_6c);
        if (local_10 != 0) {
          iVar11 = FUN_636a3470(piVar6,local_8,local_10,local_64,local_39c);
          if ((iVar11 == 0) && (local_39c[0] == 0)) {
            puVar8 = operator_new(((uint)local_390 & 0xff) * 8 + 0x20);
            local_3c = puVar8;
            *puVar8 = local_39c[1];
            puVar8[1] = local_10;
            puVar8[2] = param_3[2];
            *(short *)(puVar8 + 3) = (short)piVar6[0xb];
            *(short *)(piVar6 + 0xb) = (short)piVar6[0xb] + 1;
            *(ushort *)((int)puVar8 + 0xe) = -(ushort)(local_39c[2] != 0) & 2;
            puVar8[4] = param_3[4];
            puVar8[5] = ((uint)local_390 & 0xff) + 1;
            piVar6[0x27] = param_3[2];
            if (local_390[0] == '\0') {
              puVar8[6] = 1;
              puVar8[7] = CONCAT13(uStack_38c,local_390._1_3_);
            }
            else {
              local_10 = 0;
              if (puVar8[5] != 0) {
                puVar12 = (undefined4 *)((int)local_390 + 1);
                puVar9 = puVar8 + 6;
                do {
                  uVar3 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar9[1] = uVar3;
                  *puVar9 = 1;
                  local_10 = local_10 + 1;
                  puVar9 = puVar9 + 2;
                } while (local_10 < (uint)puVar8[5]);
              }
            }
            local_c = (*(code *)piVar6[3])(piVar6[2],piVar6,puVar8);
            (*(code *)piVar6[0x1b])(1,local_42c,piVar6[0x24]);
            if ((local_40b != 0) &&
               (*(uint *)((int)this + local_94[param_1] * 4 + 0x11c) =
                     (uint)*(ushort *)((int)puVar8 + 0xe), *(short *)((int)puVar8 + 0xe) == 2)) {
              uVar10 = *(int *)((int)local_14 + 0x6c) * *(int *)((int)local_14 + 0x70) * 3;
              puVar9 = *(undefined4 **)((int)local_14 + 0x5c);
              puVar12 = *(undefined4 **)((int)local_14 + local_94[param_1] * 4 + 0x144);
              for (uVar13 = uVar10 >> 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar12 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar12 = puVar12 + 1;
              }
              for (uVar10 = uVar10 >> 1 & 3; this = local_14, puVar8 = local_3c, uVar10 != 0;
                  uVar10 = uVar10 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
            }
            operator_delete(puVar8);
          }
          else {
            (**(code **)(*(int *)piVar6[4] + 0x1c))(local_10);
            piVar7 = local_fc;
            for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
              *piVar7 = 0;
              piVar7 = piVar7 + 1;
            }
            local_fc[2] = param_3[2];
            local_c = (*(code *)piVar6[3])(piVar6[2],piVar6,local_fc);
          }
          if (*(int *)((int)piVar6 + 0x2e) == local_94[param_1]) {
            local_2c = (uint)(local_39c[2] != 0);
          }
          if (param_1 == 0) {
            *(int *)((int)this + 0x16c) = *(int *)((int)this + 0x16c) + (param_3[2] - piVar6[0x3c]);
            uVar10 = *(int *)((int)this + 0x170) + (param_3[2] - piVar6[0x3c]);
            *(uint *)((int)this + 0x170) = uVar10;
            if (((local_9a != 0) || (local_9e != 0)) ||
               (((*(uint *)((int)this + 0x16c) < 0xfa1 || ((uVar10 < 0xfb || (local_39c[0] != 0))))
                && ((*(uint *)((int)this + 0x16c) < 0x2711 || (local_39c[0] != 0))))))
            goto LAB_636a1bd3;
            if (local_39c[2] != 0) {
              local_30 = 1;
              FUN_636a2740((int)this);
              *(undefined4 *)((int)this + 0x16c) = 0;
              *(undefined4 *)((int)this + 400) = 0;
              goto LAB_636a1bd3;
            }
          }
          else {
LAB_636a1bd3:
            if (((local_39c[2] != 0) && (local_39c[0] == 0)) &&
               ((local_24 = 1, local_9a == 0 || (local_28 != 0)))) {
              *(undefined4 *)((int)this + 0x170) = 0;
            }
          }
          piVar6[0x3c] = param_3[2];
        }
        if ((((piVar6[0x15] != 0) && (local_39c[0] == 0)) &&
            (*(short *)((int)piVar6 + 0x2d92) == *(short *)((int)piVar6 + 0x3e))) &&
           (((short)piVar6[0xb65] == (short)piVar6[0x10] &&
            (iVar11 = (**(code **)(*(int *)piVar6[0x14] + 0xc))(local_68), iVar11 != 0)))) {
          local_c = FUN_636a34a0(piVar6,iVar11,0,&local_38);
          if (local_c == 0) {
            local_18 = local_34;
            local_1c = param_3[2];
            local_20 = iVar11;
            (*(code *)piVar6[0x15])(piVar6[0x13],piVar6,&local_20);
            if (local_38 == 2) {
              local_20 = 0;
              local_18 = local_34;
              local_1c = param_3[2];
              (*(code *)piVar6[0x15])(piVar6[0x13],piVar6,&local_20);
            }
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(ushort *)((int)this + 8));
  }
  if ((int *)piVar6[5] == (int *)0x0) {
    return local_c;
  }
  (**(code **)(*(int *)piVar6[5] + 0x1c))(param_3[1]);
  return local_c;
}


