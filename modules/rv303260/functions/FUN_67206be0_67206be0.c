/* Module: rv303260.dll
   Function: FUN_67206be0
   Address: 67206be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_67206be0(void *this,undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  uint *local_60;
  uint local_5c;
  uint local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint local_34;
  double local_30;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  LARGE_INTEGER local_18;
  int local_10;
  uint *local_c;
  ulonglong *local_8;
  
  if (*(int *)((int)this + 0x72) != 0) {
    *(undefined4 *)((int)this + 0x116) = 0;
    uVar3 = 0;
    if (param_2[5] != 0) {
      puVar5 = param_2 + 6;
      do {
        if (*puVar5 == 1) {
          *(uint *)((int)this + 0x11a) =
               (uint)(((byte *)(param_2[1] + param_2[uVar3 * 2 + 7]))[1] >> 5) +
               (*(byte *)(param_2[1] + param_2[uVar3 * 2 + 7]) & 3) * 8;
          *(uint *)((int)this + 0x116) =
               (uint)((*(byte *)(param_2[1] + param_2[uVar3 * 2 + 7]) & 0x18) != 0x18);
          break;
        }
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar3 < param_2[5]);
    }
    if (*(int *)((int)this + 0xda) != 0) {
      FUN_67207a30(this,param_2[2],*(int *)((int)this + 0x116));
    }
    FUN_672079c0(this,*(int *)((int)this + 0x116),param_2[2]);
    if ((*(int *)((int)this + 0x116) == 0) &&
       (((*(int *)((int)this + 0xfa) == 0 ||
         ((*(int *)((int)this + 0xb42) == 1 && (*(int *)((int)this + 0xb3e) == 2)))) ||
        ((*(int *)((int)this + 0xb42) == 2 && (*(int *)((int)this + 0xb3e) != 2)))))) {
      FUN_67207a10(this,param_2[2]);
      FUN_67207930(this,8,param_2[2]);
      if (*(int **)((int)this + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x1c))(param_2[1]);
      }
      return 0;
    }
    if ((*(int *)((int)this + 0x18) != 0) && (*(int *)((int)this + 0x1c) != 0)) {
      (**(code **)(*(int *)this + 0x30))(0x1000a,(int)this + 0x102);
      local_6c = *param_2;
      local_68 = *(undefined4 *)((int)this + 0x50);
      local_60 = param_2 + 6;
      local_58 = param_2[2];
      uVar3 = *(uint *)((int)this + 0xaa);
      local_64 = param_2[5] - 1;
      local_5c = 0;
      if (uVar3 < local_58) {
        uVar3 = (uVar3 - local_58) - 1;
      }
      else {
        uVar3 = uVar3 - local_58;
      }
      if (86400000 < uVar3) {
        uVar3 = *(int *)((int)this + 0xe2) + 1;
        *(uint *)((int)this + 0xe2) = uVar3;
        if (uVar3 == 1) {
          *(uint *)((int)this + 0xfa) = (uint)(*(int *)((int)this + 0x10e) == 0);
          *(undefined4 *)((int)this + 0xda) = 1;
          *(uint *)((int)this + 0xf2) = (uint)(*(int *)((int)this + 0x106) == 0);
        }
        if (0x3c < uVar3) {
          *(undefined4 *)((int)this + 0xde) = 1;
        }
      }
      FUN_672075e0(this,(undefined4 *)param_2[1],&local_6c);
      local_50 = 0x11;
      if (*(int *)((int)this + 0xf2) == 0) {
        local_4c = 0;
        local_48 = 0;
      }
      else {
        local_4c = 1;
        local_48 = 0;
        FUN_67208090(this,&local_50);
        local_48 = *(undefined4 *)((int)this + 0xee);
        local_50 = 0x1e;
        local_4c = 3;
      }
      FUN_67208090(this,&local_50);
      do {
        iVar11 = -0x7fffbffb;
        puVar4 = (ulonglong *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_54);
        local_8 = puVar4;
        if (puVar4 != (ulonglong *)0x0) {
          QueryPerformanceFrequency(&local_28);
          QueryPerformanceCounter(&local_20);
          iVar11 = FUN_67208060(this,param_2[1],puVar4,&local_6c,&local_44);
          QueryPerformanceCounter(&local_18);
          local_30 = ((((double)local_18._0_4_ - (double)local_18.s.HighPart * _DAT_672132b0) -
                      ((double)local_20._0_4_ - (double)local_20.s.HighPart * _DAT_672132b0)) *
                     _DAT_672132b8) /
                     ((double)local_28._0_4_ - (double)local_28.s.HighPart * _DAT_672132b0);
          *(double *)((int)this + 0xb66) = local_30 + *(double *)((int)this + 0xb66);
          if (1 < *(uint *)((int)this + 0xe2)) {
            uVar3 = *(uint *)((int)this + 0xa2);
            if (local_3c < uVar3) {
              uVar3 = (local_3c - uVar3) - 1;
            }
            else {
              uVar3 = local_3c - uVar3;
            }
            if (86400000 < uVar3) {
              iVar11 = -0x7fffbffb;
            }
          }
          if (local_58 != local_3c) {
            *(undefined4 *)((int)this + 0x112) = 1;
          }
          if ((iVar11 == 0) && (local_44 != 0)) {
            QueryPerformanceCounter(&local_20);
            if (*(int *)((int)this + 0xf6) != 0) {
              FUN_6720b630(this,(int)param_2,(uint)puVar4,(int)&local_6c,(int)&local_44);
            }
            QueryPerformanceCounter(&local_18);
            if (*(int *)((int)this + 0xae) != 0) {
              (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(*(int *)((int)this + 0xae));
            }
            if (*(int *)((int)this + 0xf6) == 0) {
              *(undefined4 *)((int)this + 0xae) = 0;
              *(undefined4 *)((int)this + 0xb2) = 0;
              *(undefined4 *)((int)this + 0xb6) = 0;
              *(undefined4 *)((int)this + 0xba) = 0;
            }
            else {
              *(ulonglong **)((int)this + 0xae) = puVar4;
              if ((local_40 & 4) == 0) {
                if ((local_40 & 8) == 0) {
                  *(undefined4 *)((int)this + 0xb2) = 1;
                }
                else {
                  *(undefined4 *)((int)this + 0xb2) = 2;
                }
              }
              else {
                *(undefined4 *)((int)this + 0xb2) = 0;
              }
              *(uint *)((int)this + 0xba) = local_34;
              *(uint **)((int)this + 0xb6) = local_38;
              (**(code **)(**(int **)((int)this + 0x10) + 0x18))(puVar4);
            }
            if (*(int *)((int)this + 0xb6e) == 0) {
              uVar3 = 0x28;
            }
            else {
              uVar3 = 0x30;
            }
            puVar5 = operator_new(uVar3);
            *(undefined2 *)((int)puVar5 + 0xe) = 0;
            local_c = puVar5;
            iVar11 = (**(code **)(*(int *)this + 0x30))(0x10007,&local_70);
            if (iVar11 != 0) {
              return iVar11;
            }
            if (local_70 != 0) {
              *(ushort *)((int)puVar5 + 0xe) = *(ushort *)((int)param_2 + 0xe) | 0x20;
            }
            if (*(int *)((int)this + 0x102) != 0) {
              *(byte *)((int)puVar5 + 0xe) = *(byte *)((int)puVar5 + 0xe) | 0x10;
            }
            *puVar5 = *(uint *)((int)this + 0x24);
            puVar5[2] = local_3c;
            *(short *)(puVar5 + 3) = (short)param_2[3];
            *(ushort *)((int)puVar5 + 0xe) = *(ushort *)((int)puVar5 + 0xe) | 1;
            uVar3 = param_2[4];
            puVar5[7] = 0;
            pcVar12 = QueryPerformanceCounter_exref;
            puVar5[4] = uVar3;
            puVar5[5] = 1;
            puVar5[6] = 1;
            QueryPerformanceCounter(&local_20);
            if ((*(int *)((int)this + 0xb6e) == 0) ||
               ((int)((uint)*(ushort *)((int)this + 0x40) * (uint)*(ushort *)((int)this + 0x3e)) <
                0x16440)) {
              if ((local_38 == (uint *)(uint)*(ushort *)((int)this + 0x3e)) &&
                 (local_34 == *(ushort *)((int)this + 0x40))) {
                puVar5[1] = (uint)local_8;
              }
              else {
                puVar6 = (uint *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_54);
                if (puVar6 == (uint *)0x0) {
                  return -0x7fffbffb;
                }
                FUN_67205ac0(*(void **)((int)this + 0x96),local_8,puVar6,local_38,local_34,
                             (uint)*(ushort *)((int)this + 0x3e),(uint)*(ushort *)((int)this + 0x40)
                             ,0);
                puVar5[1] = (uint)puVar6;
                (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(local_8);
                pcVar12 = QueryPerformanceCounter_exref;
              }
            }
            else {
              puVar5[5] = 2;
              puVar5[1] = (uint)local_8;
              puVar5[9] = (uint)local_38;
              puVar5[8] = local_34;
              *(byte *)((int)puVar5 + 0xf) = *(byte *)((int)puVar5 + 0xf) | 1;
              *puVar5 = (int)local_38 * local_34 * 3 >> 1;
            }
            (*pcVar12)(&local_18);
            local_30 = ((((double)local_18._0_4_ - (double)local_18.s.HighPart * _DAT_672132b0) -
                        ((double)local_20._0_4_ - (double)local_20.s.HighPart * _DAT_672132b0)) *
                       _DAT_672132b8) /
                       ((double)local_28._0_4_ - (double)local_28.s.HighPart * _DAT_672132b0) +
                       local_30;
            if (*(int *)((int)this + 0xd6) != 0) {
              (*pcVar12)(&local_20);
              *(undefined4 *)((int)this + 0x10a) = 1;
              local_8 = (ulonglong *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_54);
              puVar5 = local_c;
              iVar11 = 0;
              if (*(short *)((int)this + 0x40) != 0) {
                do {
                  uVar7 = (uint)*(ushort *)((int)this + 0x3e);
                  puVar10 = (undefined4 *)((iVar11 >> 1) * uVar7 + local_c[1]);
                  puVar4 = (ulonglong *)(iVar11 * uVar7 + (int)local_8);
                  for (uVar3 = (uint)(*(ushort *)((int)this + 0x3e) >> 2); uVar3 != 0;
                      uVar3 = uVar3 - 1) {
                    *(undefined4 *)puVar4 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar4 = (ulonglong *)((int)puVar4 + 4);
                  }
                  iVar11 = iVar11 + 2;
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                    puVar4 = (ulonglong *)((int)puVar4 + 1);
                  }
                } while (iVar11 < (int)(uint)*(ushort *)((int)this + 0x40));
              }
              iVar11 = 0;
              uVar1 = *(ushort *)((int)this + 0x40);
              if (uVar1 >> 1 != 0) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  uVar7 = (uint)(uVar2 >> 1);
                  iVar9 = iVar11 >> 1;
                  iVar13 = iVar11 * uVar7;
                  iVar11 = iVar11 + 2;
                  puVar10 = (undefined4 *)(iVar9 * uVar7 + (uint)uVar2 * (uint)uVar1 + local_c[1]);
                  puVar14 = (undefined4 *)((int)local_8 + (uint)uVar2 * (uint)uVar1 + iVar13);
                  for (uVar3 = (uint)(uVar2 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar14 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                    puVar14 = (undefined4 *)((int)puVar14 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                } while (iVar11 < (int)(uint)(uVar1 >> 1));
              }
              local_10 = 0;
              uVar1 = *(ushort *)((int)this + 0x40);
              if (uVar1 >> 1 != 0) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  uVar7 = (uint)(uVar2 >> 1);
                  iVar11 = (uint)uVar2 * (uint)uVar1 * 5;
                  iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
                  puVar10 = (undefined4 *)((local_10 >> 1) * uVar7 + iVar11 + local_c[1]);
                  puVar14 = (undefined4 *)((int)local_8 + iVar11 + local_10 * uVar7);
                  for (uVar3 = (uint)(uVar2 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar14 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_10 = local_10 + 2;
                  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                    puVar14 = (undefined4 *)((int)puVar14 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                } while (local_10 < (int)(uint)(uVar1 >> 1));
              }
              iVar11 = 1;
              uVar3 = (uint)*(ushort *)((int)this + 0x40);
              if (1 < uVar3 + 1) {
                do {
                  uVar8 = (uint)*(ushort *)((int)this + 0x3e);
                  puVar10 = (undefined4 *)(((uVar3 - (iVar11 >> 1)) + -1) * uVar8 + local_c[1]);
                  puVar4 = (ulonglong *)(iVar11 * uVar8 + (int)local_8);
                  for (uVar7 = (uint)(*(ushort *)((int)this + 0x3e) >> 2); uVar7 != 0;
                      uVar7 = uVar7 - 1) {
                    *(undefined4 *)puVar4 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar4 = (ulonglong *)((int)puVar4 + 4);
                  }
                  iVar11 = iVar11 + 2;
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                    puVar4 = (ulonglong *)((int)puVar4 + 1);
                  }
                  uVar3 = (uint)*(ushort *)((int)this + 0x40);
                } while (iVar11 < (int)(uVar3 + 1));
              }
              iVar11 = 1;
              uVar1 = *(ushort *)((int)this + 0x40);
              uVar3 = (uint)(uVar1 >> 1);
              if (1 < uVar3 + 1) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  iVar9 = iVar11 >> 1;
                  uVar8 = (uint)(uVar2 >> 1);
                  iVar13 = iVar11 * uVar8;
                  iVar11 = iVar11 + 2;
                  puVar10 = (undefined4 *)
                            (((uVar3 - iVar9) + -1) * uVar8 + (uint)uVar2 * (uint)uVar1 + local_c[1]
                            );
                  puVar14 = (undefined4 *)((int)local_8 + (uint)uVar2 * (uint)uVar1 + iVar13);
                  for (uVar7 = (uint)(uVar2 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                    *puVar14 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                    puVar14 = (undefined4 *)((int)puVar14 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                  uVar3 = (uint)(uVar1 >> 1);
                } while (iVar11 < (int)(uVar3 + 1));
              }
              local_10 = 1;
              uVar1 = *(ushort *)((int)this + 0x40);
              uVar3 = (uint)(uVar1 >> 1);
              if (1 < uVar3 + 1) {
                do {
                  uVar2 = *(ushort *)((int)this + 0x3e);
                  iVar11 = (uint)uVar2 * (uint)uVar1 * 5;
                  uVar8 = (uint)(uVar2 >> 1);
                  iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
                  puVar10 = (undefined4 *)
                            (((uVar3 - (local_10 >> 1)) + -1) * uVar8 + iVar11 + local_c[1]);
                  puVar14 = (undefined4 *)((int)local_8 + iVar11 + local_10 * uVar8);
                  for (uVar7 = (uint)(uVar2 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                    *puVar14 = *puVar10;
                    puVar10 = puVar10 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_10 = local_10 + 2;
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                    puVar14 = (undefined4 *)((int)puVar14 + 1);
                  }
                  uVar1 = *(ushort *)((int)this + 0x40);
                  uVar3 = (uint)(uVar1 >> 1);
                } while (local_10 < (int)(uVar3 + 1));
              }
              (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(local_c[1]);
              puVar5[1] = (uint)local_8;
              QueryPerformanceCounter(&local_18);
              local_30 = ((((double)local_18._0_4_ - (double)local_18.s.HighPart * _DAT_672132b0) -
                          ((double)local_20._0_4_ - (double)local_20.s.HighPart * _DAT_672132b0)) *
                         _DAT_672132b8) /
                         ((double)local_28._0_4_ - (double)local_28.s.HighPart * _DAT_672132b0) +
                         local_30;
            }
            FUN_67207930(this,(byte)local_40,local_3c);
            if ((local_40 & 8) == 0) {
              *(uint *)((int)this + 0x9e) = puVar5[2];
            }
            *(uint *)((int)this + 0xa6) = puVar5[2];
            *(uint *)((int)this + 0xa2) = puVar5[2];
            iVar11 = (**(code **)((int)this + 0xc))(*(undefined4 *)((int)this + 8),this,puVar5);
            operator_delete(puVar5);
          }
          else {
            (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(puVar4);
          }
        }
        local_5c = local_5c | 1;
        if ((iVar11 != 0) || ((local_40 & 1) == 0)) {
          if (*(int **)((int)this + 0x14) == (int *)0x0) {
            return iVar11;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x1c))(param_2[1]);
          return iVar11;
        }
      } while( true );
    }
  }
  return -0x7fffbffb;
}


