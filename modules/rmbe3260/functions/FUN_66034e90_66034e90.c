/* Module: rmbe3260.dll
   Function: FUN_66034e90
   Address: 66034e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66034e90(void *this,byte *param_1,byte *param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  void *pvVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint local_10;
  int local_c;
  int local_8;
  
  param_2 = (byte *)FUN_66034080(this,param_1,param_2);
  *(undefined4 *)((int)this + 8) = 0;
  if (-1 < (int)param_2) {
    pbVar13 = *(byte **)((int)this + 0x42);
    iVar6 = *(int *)((int)this + 0x3e);
    if ((pbVar13 != (byte *)0x0) && (iVar6 != 0)) {
      bVar3 = *pbVar13;
      *(uint *)((int)this + 0x46) = (uint)bVar3 << 0x18;
      uVar12 = (uint)pbVar13[1] << 0x10 | (uint)bVar3 << 0x18;
      *(uint *)((int)this + 0x46) = uVar12;
      *(uint *)((int)this + 0x46) = uVar12 | (uint)pbVar13[2] << 8;
      *(uint *)((int)this + 0x46) = *(uint *)((int)this + 0x46) | (uint)pbVar13[3];
      *(ushort *)((int)this + 0x4a) = (ushort)pbVar13[4] << 8;
      *(ushort *)((int)this + 0x4a) = *(ushort *)((int)this + 0x4a) | (ushort)pbVar13[5];
      if (*(short *)((int)this + 0x4a) == 0) {
        *(ushort *)((int)this + 0x4c) = (ushort)pbVar13[6] << 8;
        *(ushort *)((int)this + 0x4c) = *(ushort *)((int)this + 0x4c) | (ushort)pbVar13[7];
        pbVar13 = pbVar13 + 8;
        pvVar8 = operator_new((uint)*(ushort *)((int)this + 0x4c) << 1);
        *(void **)((int)this + 0x4e) = pvVar8;
        iVar9 = 0;
        if (*(short *)((int)this + 0x4c) != 0) {
          do {
            *(ushort *)(*(int *)((int)this + 0x4e) + iVar9 * 2) = (ushort)*pbVar13 << 8;
            puVar1 = (ushort *)(*(int *)((int)this + 0x4e) + iVar9 * 2);
            *puVar1 = *puVar1 | (ushort)pbVar13[1];
            pbVar13 = pbVar13 + 2;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)*(ushort *)((int)this + 0x4c));
        }
        pvVar8 = operator_new((uint)*(ushort *)((int)this + 0x4c) << 2);
        *(void **)((int)this + 0x52) = pvVar8;
        iVar9 = 0;
        if (*(short *)((int)this + 0x4c) != 0) {
          do {
            *(uint *)(*(int *)((int)this + 0x52) + iVar9 * 4) = (uint)*pbVar13 << 0x18;
            puVar10 = (uint *)(*(int *)((int)this + 0x52) + iVar9 * 4);
            *puVar10 = *puVar10 | (uint)pbVar13[1] << 0x10;
            pbVar14 = pbVar13 + 3;
            *(uint *)(*(int *)((int)this + 0x52) + iVar9 * 4) =
                 *(uint *)(*(int *)((int)this + 0x52) + iVar9 * 4) | (uint)pbVar13[2] << 8;
            pbVar13 = pbVar13 + 4;
            *(uint *)(*(int *)((int)this + 0x52) + iVar9 * 4) =
                 *(uint *)(*(int *)((int)this + 0x52) + iVar9 * 4) | (uint)*pbVar14;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)*(ushort *)((int)this + 0x4c));
        }
        *(ushort *)((int)this + 0x56) = (ushort)*pbVar13 << 8;
        *(ushort *)((int)this + 0x56) = *(ushort *)((int)this + 0x56) | (ushort)pbVar13[1];
        pbVar13 = pbVar13 + 2;
        pvVar8 = operator_new((uint)*(ushort *)((int)this + 0x56) << 1);
        *(void **)((int)this + 0x58) = pvVar8;
        iVar9 = 0;
        if (*(short *)((int)this + 0x56) != 0) {
          do {
            *(ushort *)(*(int *)((int)this + 0x58) + iVar9 * 2) = (ushort)*pbVar13 << 8;
            puVar1 = (ushort *)(*(int *)((int)this + 0x58) + iVar9 * 2);
            *puVar1 = *puVar1 | (ushort)pbVar13[1];
            pbVar13 = pbVar13 + 2;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)*(ushort *)((int)this + 0x56));
        }
        *(ushort *)((int)this + 0x5c) = (ushort)*pbVar13 << 8;
        *(ushort *)((int)this + 0x5c) = *(ushort *)((int)this + 0x5c) | (ushort)pbVar13[1];
        pvVar8 = operator_new((uint)*(ushort *)((int)this + 0x5c) * 0x15);
        *(void **)((int)this + 0x5e) = pvVar8;
        local_8 = 0;
        if (*(short *)((int)this + 0x5c) != 0) {
          local_c = 0;
          pbVar13 = pbVar13 + 2;
          do {
            puVar10 = (uint *)(local_c + *(int *)((int)this + 0x5e));
            if (pbVar13 == (byte *)0x0) {
LAB_66035143:
              pbVar14 = (byte *)0x0;
            }
            else {
              bVar3 = *pbVar13;
              *puVar10 = (uint)bVar3 << 0x18;
              uVar12 = (uint)pbVar13[1] << 0x10 | (uint)bVar3 << 0x18;
              *puVar10 = uVar12;
              *puVar10 = uVar12 | (uint)pbVar13[2] << 8;
              *puVar10 = *puVar10 | (uint)pbVar13[3];
              *(ushort *)(puVar10 + 1) = (ushort)pbVar13[4] << 8;
              *(ushort *)(puVar10 + 1) = (ushort)puVar10[1] | (ushort)pbVar13[5];
              pbVar14 = pbVar13 + 6;
              if ((short)puVar10[1] == 0) {
                bVar3 = *pbVar14;
                *(byte *)((int)puVar10 + 6) = bVar3;
                pbVar2 = pbVar13 + 7 + bVar3;
                if ((int)pbVar2 - (int)pbVar13 <= iVar6) {
                  *(byte **)((int)puVar10 + 7) = pbVar13 + 7;
                  bVar3 = *pbVar2;
                  *(uint *)((int)puVar10 + 0xb) = (uint)bVar3 << 0x18;
                  *(uint *)((int)puVar10 + 0xb) = (uint)bVar3 << 0x18 | (uint)pbVar2[1] << 0x10;
                  *(uint *)((int)puVar10 + 0xb) =
                       *(uint *)((int)puVar10 + 0xb) | (uint)pbVar2[2] << 8;
                  *(uint *)((int)puVar10 + 0xb) = *(uint *)((int)puVar10 + 0xb) | (uint)pbVar2[3];
                  *(ushort *)((int)puVar10 + 0xf) = (ushort)pbVar2[4] << 8;
                  *(ushort *)((int)puVar10 + 0xf) =
                       *(ushort *)((int)puVar10 + 0xf) | (ushort)pbVar2[5];
                  pbVar14 = pbVar2 + 6 + *(ushort *)((int)puVar10 + 0xf);
                  if ((int)pbVar14 - (int)pbVar13 <= iVar6) {
                    *(byte **)((int)puVar10 + 0x11) = pbVar2 + 6;
                    goto LAB_66035145;
                  }
                }
                goto LAB_66035143;
              }
            }
LAB_66035145:
            local_8 = local_8 + 1;
            local_c = local_c + 0x15;
            pbVar13 = pbVar14;
          } while (local_8 < (int)(uint)*(ushort *)((int)this + 0x5c));
        }
      }
    }
    uVar4 = *(ushort *)((int)this + 0x5c);
    uVar7 = 0;
    if (uVar4 != 0) {
      do {
        if (param_2 != (byte *)0x0) break;
        iVar6 = (uint)uVar7 * 0x15;
        bVar3 = *(byte *)(*(int *)((int)this + 0x5e) + 6 + iVar6);
        puVar11 = operator_new((uint)bVar3);
        if (puVar11 == (undefined4 *)0x0) {
          param_2 = (byte *)0x8007000e;
        }
        if (-1 < (int)param_2) {
          puVar15 = *(undefined4 **)(*(int *)((int)this + 0x5e) + 7 + iVar6);
          puVar16 = puVar11;
          for (uVar12 = (uint)(bVar3 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
          }
          for (uVar12 = bVar3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          *(undefined4 **)(*(int *)((int)this + 0x5e) + 7 + iVar6) = puVar11;
          if (-1 < (int)param_2) {
            uVar5 = *(ushort *)(*(int *)((int)this + 0x5e) + 0xf + iVar6);
            local_10 = (uint)uVar5;
            puVar11 = operator_new((uint)uVar5);
            if (puVar11 == (undefined4 *)0x0) {
              param_2 = (byte *)0x8007000e;
            }
          }
        }
        if (-1 < (int)param_2) {
          puVar15 = *(undefined4 **)(*(int *)((int)this + 0x5e) + 0x11 + iVar6);
          puVar16 = puVar11;
          for (uVar12 = (local_10 & 0xffff) >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
          }
          for (uVar12 = local_10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          *(undefined4 **)(*(int *)((int)this + 0x5e) + 0x11 + iVar6) = puVar11;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  if (*(void **)((int)this + 0x42) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x42));
    *(undefined4 *)((int)this + 0x42) = 0;
    *(undefined4 *)((int)this + 0x3e) = 0;
  }
  return (int)param_2;
}


