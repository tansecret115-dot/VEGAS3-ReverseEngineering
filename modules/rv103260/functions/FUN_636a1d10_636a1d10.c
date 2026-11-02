/* Module: rv103260.dll
   Function: FUN_636a1d10
   Address: 636a1d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_636a1d10(int param_1,int *param_2,int *param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  void *this;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float unaff_ESI;
  byte unaff_DI;
  uint uVar17;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined1 local_6cc4 [7504];
  uint local_4f74;
  undefined4 *****local_48e8 [1856];
  undefined4 local_2be8;
  uint local_2b98;
  undefined1 local_250c [7432];
  double local_804;
  double local_7fc;
  int local_7a1;
  float local_130 [10];
  float local_108 [32];
  undefined4 ******local_88 [7];
  int local_6b;
  int local_67;
  int local_62;
  int local_4a;
  int local_46;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  undefined4 uStackY_24;
  undefined4 ******ppppppuVar18;
  undefined1 *puVar19;
  undefined4 *******pppppppuVar20;
  undefined4 *puVar21;
  uint *puVar22;
  undefined4 *****pppppuVar23;
  
  FUN_636a5cd0();
  puVar21 = (undefined4 *)((int)this + 10);
  FUN_636a34f0(*(void **)((int)this + 10),1,local_88);
  iVar14 = 0;
  if (local_62 != 0) {
    puVar19 = (undefined1 *)0x0;
    if (*(short *)((int)this + 8) != 0) {
      do {
        puVar19 = local_3c;
        FUN_636a34f0((void *)*puVar21,4,puVar19);
        if (local_30 == 0) {
          puVar19 = (undefined1 *)0x1;
          break;
        }
        iVar14 = iVar14 + 1;
        puVar21 = puVar21 + 1;
      } while (iVar14 < (int)(uint)*(ushort *)((int)this + 8));
    }
    if (puVar19 != (undefined1 *)0x0) {
      iVar14 = 0;
      if (*(short *)((int)this + 8) != 0) {
        pfVar15 = local_130;
        piVar12 = (int *)((int)this + 10);
        do {
          FUN_636a34f0((void *)*piVar12,4,local_3c);
          if (local_38 == 0) {
            *pfVar15 = 0.0;
          }
          else {
            iVar8 = *piVar12;
            fVar6 = (float)local_28 / (float)local_38;
            fVar5 = (float)local_28 /
                    (((float)(*(int *)((int)this + 0x180) + 1) * (float)_DAT_636a70b8) /
                    *(float *)(iVar8 + 0xec));
            if (fVar5 <= fVar6) {
              fVar6 = fVar5;
            }
            *pfVar15 = fVar6;
            *(float *)(iVar8 + 0xe8) = fVar6;
          }
          iVar14 = iVar14 + 1;
          piVar12 = piVar12 + 1;
          pfVar15 = pfVar15 + 1;
        } while (iVar14 < (int)(uint)*(ushort *)((int)this + 8));
      }
      FUN_636a27d0(this,local_130);
    }
    for (uVar11 = (uint)*(ushort *)((int)this + 8); uVar11 != 0; uVar11 = uVar11 - 1) {
    }
  }
  if (local_67 == 0) {
    iVar14 = 0;
    iVar8 = 0;
    if (*(short *)((int)this + 8) != 0) {
      puVar21 = (undefined4 *)((int)this + 10);
      puVar10 = param_4;
      do {
        if (*(int *)((int)*puVar21 + 0x2e) == iVar8) {
          FUN_636a34f0((void *)*puVar21,4,local_3c);
          pppppppuVar20 = local_88;
          FUN_636a34f0((void *)*puVar21,1,pppppppuVar20);
          if ((local_46 == 0) || (local_6b == 0)) {
            iVar2 = *(int *)(param_1 + 8);
            pppppuVar23 = (*pppppppuVar20)[0x3c];
            puVar21 = (undefined4 *)0x636a2420;
            iVar9 = ftol();
            uVar11 = (uint)(iVar9 < (iVar2 - (int)pppppuVar23) + local_30);
            *puVar10 = uVar11;
            if (((*(byte *)(param_1 + 0xe) & 2) != 0) || (uVar13 = 0, uVar11 != 0)) {
              uVar13 = 1;
            }
            *puVar10 = uVar13;
            if ((local_34 != 0) || (uVar11 = 0, uVar13 != 0)) {
              uVar11 = 1;
            }
            *puVar10 = uVar11;
            if ((local_4a == 0) && (uVar11 != 0)) {
              uVar11 = 1;
            }
            else {
              uVar11 = 0;
            }
            *puVar10 = uVar11;
          }
          else {
            *puVar10 = 1;
          }
          if (*puVar10 != 0) {
            iVar14 = iVar14 + 1;
          }
        }
        iVar8 = iVar8 + 1;
        puVar21 = puVar21 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar8 < (int)(uint)*(ushort *)((int)this + 8));
    }
    iVar8 = 0;
    if (*(short *)((int)this + 8) != 0) {
      piVar12 = (int *)((int)this + 10);
      puVar10 = param_4;
      do {
        if (*(int *)(*piVar12 + 0x2e) != iVar8) {
          FUN_636a34f0((void *)*piVar12,4,local_3c);
          FUN_636a34f0((void *)*piVar12,1,local_88);
          if ((local_46 == 0) || (local_6b == 0)) {
            *puVar10 = param_4[*(int *)(*piVar12 + 0x2e)];
          }
          else {
            *puVar10 = 1;
          }
          if (*puVar10 != 0) {
            iVar14 = iVar14 + 1;
          }
        }
        iVar8 = iVar8 + 1;
        piVar12 = piVar12 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar8 < (int)(uint)*(ushort *)((int)this + 8));
    }
    if ((iVar14 != 0) && (*(int *)((int)*(void **)((int)this + 10) + 0x2d8e) != 0x59555632)) {
      FUN_636a3400(*(void **)((int)this + 10),*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)((int)this + 0x5c));
    }
  }
  else {
    pppppppuVar20 = (undefined4 *******)0x0;
    local_40 = 0;
    local_108[0] = 75000.0;
    local_108[1] = 75000.0;
    local_108[2] = 47500.0;
    local_108[3] = 35000.0;
    local_108[4] = 28000.0;
    local_108[5] = 22000.0;
    local_108[6] = 18000.0;
    local_108[7] = 16000.0;
    local_108[8] = 15000.0;
    local_108[9] = 13500.0;
    local_108[10] = 12500.0;
    local_108[0xb] = 12000.0;
    local_108[0xc] = 11500.0;
    local_108[0xd] = 11000.0;
    local_108[0xe] = 10500.0;
    local_108[0xf] = 10000.0;
    local_108[0x10] = 9500.0;
    local_108[0x11] = 9000.0;
    local_108[0x12] = 8500.0;
    local_108[0x13] = 8000.0;
    local_108[0x14] = 7750.0;
    local_108[0x15] = 7550.0;
    local_108[0x16] = 7250.0;
    local_108[0x17] = 7150.0;
    local_108[0x18] = 7050.0;
    local_108[0x19] = 7000.0;
    local_108[0x1a] = 6950.0;
    local_108[0x1b] = 6900.0;
    local_108[0x1c] = 6850.0;
    local_108[0x1d] = 6800.0;
    local_108[0x1e] = 6750.0;
    local_108[0x1f] = 6700.0;
    iVar14 = 0;
    if (*(short *)((int)this + 8) != 0) {
      do {
        if (iVar14 == 0) {
          if (*(int *)((int)this + 100) == 0) {
            FUN_636a11d0((int)this);
          }
          uVar1 = **(undefined4 **)((int)this + 100);
          iVar8 = 0;
          if (*(int *)((int)this + 0x74) != 1 && -1 < *(int *)((int)this + 0x74) + -1) {
            do {
              iVar8 = iVar8 + 1;
              *(undefined4 *)(*(int *)((int)this + 100) + -4 + iVar8 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 100) + iVar8 * 4);
            } while (iVar8 < *(int *)((int)this + 0x74) + -1);
          }
          *(undefined4 *)(*(int *)((int)this + 100) + -4 + *(int *)((int)this + 0x74) * 4) = uVar1;
          iVar8 = *(int *)((int)*(void **)((int)this + 10) + 0x2d8e);
          if ((iVar8 == 0x52474233) || (iVar8 == 0x52474256)) {
            pppppppuVar20 = (undefined4 *******)0x1;
          }
          else {
            pppppppuVar20 = (undefined4 *******)0x0;
          }
          FUN_636a3400(*(void **)((int)this + 10),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)
                        (*(int *)((int)this + 100) + -4 + *(int *)((int)this + 0x74) * 4));
          iVar8 = *(int *)((int)this + 0x74);
          iVar9 = iVar8 - *(int *)((int)this + 0x68);
          iVar2 = *(int *)((int)this + 100);
          *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iVar2 + -4 + iVar9 * 4);
          iVar16 = *(int *)((int)this + 0x78) + 1;
          *(int *)((int)this + 0x78) = iVar16;
          if (iVar8 <= iVar16) {
            *(int *)((int)this + 0x78) = iVar8;
            pppppppuVar20 = (undefined4 *******)&stack0xffffffe8;
            uStackY_24 = 0x636a2063;
            FUN_636a3430(*(void **)((int)this + 10),*(undefined4 *)(iVar2 + -4 + iVar9 * 4),
                         *(undefined4 *)(iVar2 + -8 + iVar9 * 4),&stack0xffffffec,pppppppuVar20);
          }
        }
        if (*(int *)((int)this + iVar14 * 4 + 0xa4) == 0) {
          bVar7 = false;
        }
        else if (*(int *)((int)this + iVar14 * 4 + 0x11c) == 0) {
          bVar7 = true;
          if ((int)pppppppuVar20 < 1) {
LAB_636a21cc:
            if (*(int *)((int)this + iVar14 * 4 + 0x7c) < 1) {
              bVar7 = false;
            }
            else {
              unaff_ESI = 0.25;
              if (0 < (int)pppppppuVar20) goto LAB_636a21e3;
            }
          }
          else {
            iVar8 = *(int *)((int)this + iVar14 * 4 + 0x7c);
            if (iVar8 < 1) {
              if ((int)pppppppuVar20 < 1) goto LAB_636a21cc;
LAB_636a21e3:
              unaff_ESI = 4.0;
            }
            else {
              unaff_ESI = (float)(int)pppppppuVar20 / (float)iVar8;
              if ((float)_DAT_636a7168 < unaff_ESI) {
                unaff_ESI = 4.0;
              }
              if (unaff_ESI < (float)_DAT_636a7178) {
                unaff_ESI = 0.25;
              }
            }
          }
          if (bVar7) {
            FUN_636a34f0(*(void **)((int)this + 10),9,local_6cc4);
            unaff_DI = (byte)local_4f74;
            if ((float)_DAT_636a7158 < unaff_ESI) {
              uVar11 = local_4f74 & 0xff;
              do {
                unaff_DI = (char)uVar11 + 1;
                uVar11 = (uint)unaff_DI;
                if (0x1e < unaff_DI) break;
              } while (local_108[local_4f74 & 0xff] <
                       unaff_ESI * _DAT_636a7184 * local_108[unaff_DI]);
              unaff_ESI = 2.0;
            }
          }
        }
        else {
          uStackY_24 = 0x636a20ac;
          iVar8 = FUN_636a3430(*(void **)((int)this + 10),
                               *(undefined4 *)
                                (*(int *)((int)this + 100) + -4 +
                                (*(int *)((int)this + 0x74) - *(int *)((int)this + 0x68)) * 4),
                               *(undefined4 *)((int)this + iVar14 * 4 + 0x144),&local_40,
                               &stack0xffffffe0);
          if (iVar8 == 0) {
            bVar7 = false;
          }
          else {
            FUN_636a34f0(*(void **)((int)this + 10),9,local_250c);
            unaff_DI = ftol();
            if (0x1f < unaff_DI) {
              unaff_DI = 0x1f;
            }
            if (unaff_DI < 2) {
              unaff_DI = 2;
            }
            unaff_ESI = (float)(((float10)local_7fc /
                                ((float10)local_7fc * (float10)local_804 - (float10)unaff_DI)) /
                               ((float10)local_7a1 * (float10)_DAT_636a7150));
            if ((800 < local_7a1) && ((float)_DAT_636a7158 < unaff_ESI)) {
              unaff_ESI = 2.0;
            }
            bVar7 = true;
          }
        }
        FUN_636a34f0(*(void **)((int)this + iVar14 * 4 + 10),4,local_3c);
        FUN_636a34f0(*(void **)((int)this + iVar14 * 4 + 10),1,local_88);
        iVar8 = *(int *)(param_1 + 8);
        iVar2 = *(int *)(*(int *)((int)this + iVar14 * 4 + 10) + 0xf0);
        if (bVar7) {
          pppppppuVar20 = (undefined4 *******)0x636a22b5;
          iVar8 = ftol();
          if (extraout_ST0 <= extraout_ST1 - (float10)iVar8) {
            param_4[iVar14] = 0;
          }
          else {
            param_4[iVar14] = 1;
          }
        }
        else {
          pppppppuVar20 = (undefined4 *******)0x636a22ea;
          iVar9 = ftol();
          param_4[iVar14] = (uint)(local_38 - iVar9 < (iVar8 - iVar2) + local_30);
        }
        if (((*(byte *)(param_1 + 0xe) & 2) == 0) && (param_4[iVar14] == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
        param_4[iVar14] = uVar11;
        if (uVar11 != 0) {
          pppppppuVar20 = local_88;
          FUN_636a34f0(*(void **)((int)this + 10),1,pppppppuVar20);
          if (local_67 != 0) {
            pppppppuVar20 = (undefined4 *******)local_48e8;
            FUN_636a34f0(*(void **)((int)this + 10),9,pppppppuVar20);
            if (bVar7) {
              local_2b98 = CONCAT31(local_2b98._1_3_,unaff_DI);
            }
            *(undefined4 *)((int)this + iVar14 * 4 + 0xa4) = 1;
            *(undefined4 ********)((int)this + iVar14 * 4 + 0x7c) = pppppppuVar20;
            *(undefined4 *)((int)this + iVar14 * 4 + 0xcc) = local_2be8;
            *(uint *)((int)this + iVar14 * 4 + 0xf4) = local_2b98 & 0xff;
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)(uint)*(ushort *)((int)this + 8));
    }
  }
  uVar11 = 0;
  iVar14 = 1;
  *param_3 = 0;
  param_1 = 0;
  iVar8 = 0;
  pppppuVar23 = (undefined4 *****)0x0;
  if (*(ushort *)((int)this + 8) != 0) {
    ppppppuVar18 = (undefined4 ******)(param_2 + (*(ushort *)((int)this + 8) - 1));
    puVar10 = (uint *)((int)this + 10);
    piVar12 = param_2;
    puVar22 = param_4;
    do {
      param_4 = puVar10;
      if (*puVar22 == 0) {
        *ppppppuVar18 = pppppuVar23;
        ppppppuVar18 = ppppppuVar18 + -1;
        *param_3 = *param_3 + 1;
      }
      else {
        pppppppuVar20 = local_88;
        ppppppuVar18 = (undefined4 ******)0x1;
        FUN_636a34f0((void *)*param_4,1,pppppppuVar20);
        if ((iVar14 == 0) || (local_46 != 0)) {
          uVar13 = *(uint *)(*param_4 + 0xcc);
          if (uVar11 < uVar13) {
            if (iVar14 == 0) {
LAB_636a25f3:
              if (local_46 != 0) goto LAB_636a25f7;
            }
            else if (local_46 == 0) {
              if (iVar14 != 0) goto LAB_636a25f7;
              goto LAB_636a25f3;
            }
          }
          else {
LAB_636a25f7:
            if (local_88[0] <= pppppppuVar20) goto LAB_636a2629;
            if (iVar14 == 0) {
LAB_636a260e:
              if (local_46 != 0) goto LAB_636a2629;
            }
            else if (local_46 == 0) {
              if (iVar14 != 0) goto LAB_636a2629;
              goto LAB_636a260e;
            }
            if (uVar11 != uVar13) goto LAB_636a2629;
          }
          uVar11 = uVar13;
          iVar14 = local_46;
          iVar8 = param_1;
        }
        else {
          uVar11 = *(uint *)(*param_4 + 0xcc);
          iVar14 = 0;
          iVar8 = param_1;
        }
LAB_636a2629:
        *piVar12 = (int)pppppuVar23;
        param_1 = param_1 + 1;
        piVar12 = piVar12 + 1;
      }
      pppppuVar23 = (undefined4 *****)((int)pppppuVar23 + 1);
      puVar22 = puVar22 + 1;
      puVar10 = param_4 + 1;
    } while ((int)pppppuVar23 < (int)(uint)*(ushort *)((int)this + 8));
  }
  uVar11 = 0;
  iVar14 = *param_2;
  *param_2 = param_2[iVar8];
  param_2[iVar8] = iVar14;
  uVar13 = (uint)*(ushort *)((int)this + 8) - *param_3;
  if (uVar13 != 0) {
    param_4 = (uint *)param_2;
    do {
      uVar3 = *param_4;
      uVar4 = *(uint *)(*(int *)((int)this + uVar3 * 4 + 10) + 0x2e);
      if (uVar4 != uVar3) {
        uVar17 = 0;
        puVar10 = (uint *)param_2;
LAB_636a26c3:
        if (uVar4 != *puVar10) goto code_r0x636a26c7;
        uVar4 = uVar13 - 1;
        if (uVar11 < uVar4) {
          iVar14 = uVar4 - uVar11;
          puVar10 = param_4;
          do {
            *puVar10 = puVar10[1];
            puVar10 = puVar10 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        uVar17 = uVar17 + 1;
        if (uVar17 < uVar4) {
          piVar12 = param_2 + uVar4;
          iVar14 = uVar4 - uVar17;
          do {
            *piVar12 = piVar12[-1];
            piVar12 = piVar12 + -1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        param_2[uVar17] = uVar3;
      }
LAB_636a2714:
      uVar11 = uVar11 + 1;
      param_4 = param_4 + 1;
    } while (uVar11 < uVar13);
  }
  return 0;
code_r0x636a26c7:
  uVar17 = uVar17 + 1;
  puVar10 = puVar10 + 1;
  if (uVar13 <= uVar17) goto LAB_636a2714;
  goto LAB_636a26c3;
}


