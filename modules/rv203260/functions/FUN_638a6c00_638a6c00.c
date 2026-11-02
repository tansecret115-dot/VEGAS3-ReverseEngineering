/* Module: rv203260.dll
   Function: FUN_638a6c00
   Address: 638a6c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_638a6c00(void *this,undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  uint *local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  double local_54;
  LARGE_INTEGER local_4c;
  undefined1 local_44 [4];
  LARGE_INTEGER local_40;
  LARGE_INTEGER local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  uint *local_10;
  ulonglong *local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x72) != 0) {
    *(undefined4 *)((int)this + 0x18a) = 0;
    uVar3 = 0;
    if (param_2[5] != 0) {
      puVar5 = param_2 + 6;
      do {
        if (*puVar5 == 1) {
          *(uint *)((int)this + 0x18e) = *(byte *)(param_2[1] + param_2[uVar3 * 2 + 7]) & 0x1f;
          *(uint *)((int)this + 0x18a) =
               (uint)((*(byte *)(param_2[1] + param_2[uVar3 * 2 + 7]) & 0xc0) != 0xc0);
          break;
        }
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar3 < param_2[5]);
    }
    if (*(int *)((int)this + 0x136) != 0) {
      FUN_638a7940(this,param_2[2],*(int *)((int)this + 0x18a));
    }
    FUN_638a78d0(this,*(int *)((int)this + 0x18a),param_2[2]);
    if ((*(int *)((int)this + 0x18a) == 0) &&
       ((((*(int *)((int)this + 0x16a) == 0 ||
          ((*(int *)((int)this + 0xba2) == 1 && (*(int *)((int)this + 0xb9e) == 2)))) ||
         ((*(int *)((int)this + 0xba2) == 2 && (*(int *)((int)this + 0xb9e) != 2)))) ||
        (*(int *)((int)this + 0x172) != 0)))) {
      FUN_638a7920(this,param_2[2]);
      FUN_638a7840(this,8,param_2[2]);
      if (*(int **)((int)this + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x1c))(param_2[1]);
      }
      return 0;
    }
    if ((*(int *)((int)this + 0x18) != 0) && (*(int *)((int)this + 0x1c) != 0)) {
      (**(code **)(*(int *)this + 0x30))(0x1000a,(int)this + 0x176);
      local_70 = *param_2;
      local_6c = *(undefined4 *)((int)this + 0x50);
      local_64 = param_2 + 6;
      local_5c = param_2[2];
      local_68 = param_2[5] - 1;
      local_60 = 0;
      if (*(uint *)((int)this + 0xaa) <= local_5c) {
        uVar3 = *(int *)((int)this + 0x13e) + 1;
        *(uint *)((int)this + 0x13e) = uVar3;
        if (uVar3 == 1) {
          *(uint *)((int)this + 0x16a) = (uint)(*(int *)((int)this + 0x182) == 0);
        }
        if (0x3c < uVar3) {
          *(undefined4 *)((int)this + 0x13a) = 1;
        }
      }
      if (*(int *)((int)this + 0x1c2) != 1) {
        *(undefined4 *)((int)this + 0x162) = 0;
      }
      FUN_638a74f0(this,(undefined4 *)param_2[1],&local_70);
      local_30 = 0x11;
      if (*(int *)((int)this + 0x162) == 0) {
        local_2c = 0;
        local_28 = 0;
      }
      else {
        local_2c = 1;
        local_28 = 0;
        FUN_638a7ff0(this,&local_30);
        local_28 = *(undefined4 *)((int)this + 0x15e);
        local_30 = 0x1e;
        local_2c = 3;
      }
      FUN_638a7ff0(this,&local_30);
      do {
        iVar10 = -0x7fffbffb;
        puVar4 = (ulonglong *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_44);
        local_c = puVar4;
        if (puVar4 != (ulonglong *)0x0) {
          QueryPerformanceFrequency(&local_4c);
          QueryPerformanceCounter(&local_40);
          iVar10 = FUN_638a7fc0(this,param_2[1],puVar4,&local_70,&local_24);
          QueryPerformanceCounter(&local_38);
          local_54 = ((((double)local_38._0_4_ - (double)local_38.s.HighPart * _DAT_638b32b0) -
                      ((double)local_40._0_4_ - (double)local_40.s.HighPart * _DAT_638b32b0)) *
                     _DAT_638b32b8) /
                     ((double)local_4c._0_4_ - (double)local_4c.s.HighPart * _DAT_638b32b0);
          *(double *)((int)this + 0xbc6) = local_54 + *(double *)((int)this + 0xbc6);
          if (((*(uint *)((int)this + 0x2e) & 0xf0000000) == 0x20000000) &&
             ((*(uint *)((int)this + 0x2e) & 0xff00000) == 0x100000)) {
            local_1c = local_5c;
          }
          if (1 < *(uint *)((int)this + 0x13e)) {
            uVar3 = *(uint *)((int)this + 0xa2);
            if (local_1c < uVar3) {
              uVar3 = (local_1c - uVar3) - 1;
            }
            else {
              uVar3 = local_1c - uVar3;
            }
            if (86400000 < uVar3) {
              iVar10 = -0x7fffbffb;
            }
          }
          if ((iVar10 == 0) && (local_24 != 0)) {
            QueryPerformanceCounter(&local_40);
            if ((*(int *)((int)this + 0x14a) != 0) && (*(int *)((int)this + 0x172) == 0)) {
              FUN_638abac0(this,(int)param_2,(uint)puVar4,(int)&local_70,(int)&local_24);
            }
            QueryPerformanceCounter(&local_38);
            if (*(int *)((int)this + 0xae) != 0) {
              (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(*(int *)((int)this + 0xae));
            }
            if (*(int *)((int)this + 0x14a) == 0) {
              *(undefined4 *)((int)this + 0xae) = 0;
              *(undefined4 *)((int)this + 0xb2) = 0;
              *(undefined4 *)((int)this + 0xb6) = 0;
              *(undefined4 *)((int)this + 0xba) = 0;
            }
            else {
              *(ulonglong **)((int)this + 0xae) = puVar4;
              if ((local_20 & 4) == 0) {
                if ((local_20 & 8) == 0) {
                  *(undefined4 *)((int)this + 0xb2) = 1;
                }
                else {
                  *(undefined4 *)((int)this + 0xb2) = 2;
                }
              }
              else {
                *(undefined4 *)((int)this + 0xb2) = 0;
              }
              *(uint *)((int)this + 0xba) = local_14;
              *(uint **)((int)this + 0xb6) = local_18;
              (**(code **)(**(int **)((int)this + 0x10) + 0x18))(puVar4);
            }
            if (*(int *)((int)this + 0xbce) == 0) {
              uVar3 = 0x28;
            }
            else {
              uVar3 = 0x30;
            }
            puVar5 = operator_new(uVar3);
            *(undefined2 *)((int)puVar5 + 0xe) = 0;
            local_10 = puVar5;
            iVar10 = (**(code **)(*(int *)this + 0x30))(0x10007,&local_58);
            if (iVar10 != 0) {
              return iVar10;
            }
            if (local_58 != 0) {
              *(ushort *)((int)puVar5 + 0xe) = *(ushort *)((int)param_2 + 0xe) | 0x20;
            }
            if (*(int *)((int)this + 0x176) != 0) {
              *(byte *)((int)puVar5 + 0xe) = *(byte *)((int)puVar5 + 0xe) | 0x10;
            }
            *puVar5 = *(uint *)((int)this + 0x24);
            puVar5[2] = local_1c;
            *(short *)(puVar5 + 3) = (short)param_2[3];
            *(ushort *)((int)puVar5 + 0xe) = *(ushort *)((int)puVar5 + 0xe) | 1;
            puVar5[4] = param_2[4];
            puVar5[5] = 1;
            puVar5[7] = 0;
            puVar5[6] = 1;
            if ((*(int *)((int)this + 0xbce) == 0) ||
               ((int)((uint)*(ushort *)((int)this + 0x3e) * (uint)*(ushort *)((int)this + 0x40)) <
                0x16440)) {
              if ((local_18 == (uint *)(uint)*(ushort *)((int)this + 0x3e)) &&
                 (local_14 == *(ushort *)((int)this + 0x40))) {
                puVar5[1] = (uint)local_c;
              }
              else {
                puVar6 = (uint *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_44);
                if (puVar6 == (uint *)0x0) {
                  return -0x7fffbffb;
                }
                FUN_638a56f0(*(void **)((int)this + 0x96),local_c,puVar6,local_18,local_14,
                             (uint)*(ushort *)((int)this + 0x3e),(uint)*(ushort *)((int)this + 0x40)
                             ,0);
                puVar5[1] = (uint)puVar6;
                (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(local_c);
              }
            }
            else {
              puVar5[5] = 2;
              puVar5[1] = (uint)local_c;
              puVar5[9] = (uint)local_18;
              puVar5[8] = local_14;
              *(byte *)((int)puVar5 + 0xf) = *(byte *)((int)puVar5 + 0xf) | 1;
              *puVar5 = (int)local_18 * local_14 * 3 >> 1;
            }
            if (*(int *)((int)this + 0x132) != 0) {
              *(undefined4 *)((int)this + 0x17e) = 1;
              local_c = (ulonglong *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_44);
              puVar5 = local_10;
              iVar10 = 0;
              if (*(short *)((int)this + 0x40) != 0) {
                do {
                  uVar7 = (uint)*(ushort *)((int)this + 0x3e);
                  puVar9 = (undefined4 *)((iVar10 >> 1) * uVar7 + local_10[1]);
                  puVar4 = (ulonglong *)(iVar10 * uVar7 + (int)local_c);
                  for (uVar3 = (uint)(*(ushort *)((int)this + 0x3e) >> 2); uVar3 != 0;
                      uVar3 = uVar3 - 1) {
                    *(undefined4 *)puVar4 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar4 = (ulonglong *)((int)puVar4 + 4);
                  }
                  iVar10 = iVar10 + 2;
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar4 = (ulonglong *)((int)puVar4 + 1);
                  }
                } while (iVar10 < (int)(uint)*(ushort *)((int)this + 0x40));
              }
              uVar1 = *(ushort *)((int)this + 0x40);
              local_8 = 0;
              if (uVar1 >> 1 != 0) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  uVar7 = (uint)(uVar2 >> 1);
                  puVar9 = (undefined4 *)
                           ((local_8 >> 1) * uVar7 + (uint)uVar1 * (uint)uVar2 + local_10[1]);
                  puVar11 = (undefined4 *)
                            ((int)local_c + (uint)uVar1 * (uint)uVar2 + local_8 * uVar7);
                  for (uVar3 = (uint)(uVar2 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar11 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  local_8 = local_8 + 2;
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                } while (local_8 < (int)(uint)(uVar1 >> 1));
              }
              local_8 = 0;
              uVar1 = *(ushort *)((int)this + 0x40);
              if (uVar1 >> 1 != 0) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  uVar7 = (uint)(uVar2 >> 1);
                  iVar10 = (uint)uVar1 * (uint)uVar2 * 5;
                  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
                  puVar9 = (undefined4 *)((local_8 >> 1) * uVar7 + iVar10 + local_10[1]);
                  puVar11 = (undefined4 *)((int)local_c + iVar10 + local_8 * uVar7);
                  for (uVar3 = (uint)(uVar2 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar11 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  local_8 = local_8 + 2;
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                } while (local_8 < (int)(uint)(uVar1 >> 1));
              }
              iVar10 = 1;
              uVar3 = (uint)*(ushort *)((int)this + 0x40);
              if (1 < uVar3 + 1) {
                do {
                  uVar8 = (uint)*(ushort *)((int)this + 0x3e);
                  puVar9 = (undefined4 *)(((uVar3 - (iVar10 >> 1)) + -1) * uVar8 + local_10[1]);
                  puVar4 = (ulonglong *)(iVar10 * uVar8 + (int)local_c);
                  for (uVar7 = (uint)(*(ushort *)((int)this + 0x3e) >> 2); uVar7 != 0;
                      uVar7 = uVar7 - 1) {
                    *(undefined4 *)puVar4 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar4 = (ulonglong *)((int)puVar4 + 4);
                  }
                  iVar10 = iVar10 + 2;
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar4 = (ulonglong *)((int)puVar4 + 1);
                  }
                  uVar3 = (uint)*(ushort *)((int)this + 0x40);
                } while (iVar10 < (int)(uVar3 + 1));
              }
              uVar1 = *(ushort *)((int)this + 0x40);
              local_8 = 1;
              uVar3 = (uint)(uVar1 >> 1);
              if (1 < uVar3 + 1) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  uVar8 = (uint)(uVar2 >> 1);
                  puVar9 = (undefined4 *)
                           (((uVar3 - (local_8 >> 1)) + -1) * uVar8 + (uint)uVar1 * (uint)uVar2 +
                           local_10[1]);
                  puVar11 = (undefined4 *)
                            ((int)local_c + (uint)uVar1 * (uint)uVar2 + local_8 * uVar8);
                  for (uVar7 = (uint)(uVar2 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                    *puVar11 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  local_8 = local_8 + 2;
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                  uVar3 = (uint)(uVar1 >> 1);
                } while (local_8 < (int)(uVar3 + 1));
              }
              local_8 = 1;
              uVar1 = *(ushort *)((int)this + 0x40);
              uVar3 = (uint)(uVar1 >> 1);
              if (1 < uVar3 + 1) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  iVar10 = (uint)uVar1 * (uint)uVar2 * 5;
                  uVar8 = (uint)(uVar2 >> 1);
                  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
                  puVar9 = (undefined4 *)
                           (((uVar3 - (local_8 >> 1)) + -1) * uVar8 + iVar10 + local_10[1]);
                  puVar11 = (undefined4 *)((int)local_c + iVar10 + local_8 * uVar8);
                  for (uVar7 = (uint)(uVar2 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                    *puVar11 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  local_8 = local_8 + 2;
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                  uVar3 = (uint)(uVar1 >> 1);
                } while (local_8 < (int)(uVar3 + 1));
              }
              (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(local_10[1]);
              puVar5[1] = (uint)local_c;
            }
            FUN_638a7840(this,(byte)local_20,local_1c);
            if ((local_20 & 8) == 0) {
              *(uint *)((int)this + 0x9e) = puVar5[2];
            }
            *(uint *)((int)this + 0xa6) = puVar5[2];
            *(uint *)((int)this + 0xa2) = puVar5[2];
            iVar10 = (**(code **)((int)this + 0xc))(*(undefined4 *)((int)this + 8),this,puVar5);
            operator_delete(puVar5);
          }
          else {
            (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(puVar4);
          }
        }
        local_60 = local_60 | 1;
        if ((iVar10 != 0) || ((local_20 & 1) == 0)) {
          if (*(int **)((int)this + 0x14) == (int *)0x0) {
            return iVar10;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x1c))(param_2[1]);
          return iVar10;
        }
      } while( true );
    }
  }
  return -0x7fffbffb;
}


