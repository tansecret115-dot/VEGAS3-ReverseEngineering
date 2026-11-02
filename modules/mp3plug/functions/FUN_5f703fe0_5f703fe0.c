/* Module: mp3plug.dll
   Function: FUN_5f703fe0
   Address: 5f703fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __cdecl FUN_5f703fe0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined4 extraout_ECX;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  double dVar16;
  uint uStack_94;
  uint uStack_90;
  uint uStack_84;
  uint uStack_80;
  uint uStack_74;
  uint uStack_70;
  int iStack_3c;
  
  *param_1 = 0;
  if (param_2 == 0) {
    ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,(char *)0x291,
                            (undefined *)0x0,s_invalid_function_parameters_5f760350);
    return ppuVar10;
  }
  puVar8 = FUN_5f6d9720(0x934,1);
  if (puVar8 == (uint *)0x0) {
    ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,(char *)0x297,
                            (undefined *)0x0,s_out_of_memory_5f75c330);
    return ppuVar10;
  }
  uVar9 = FUN_5f6d9760(0x1cc);
  puVar8[0xec] = uVar9;
  uVar9 = FUN_5f6d9760(0x1cc);
  puVar8[0xeb] = uVar9;
  uVar9 = FUN_5f6d9760(0x1cc);
  puVar8[0xed] = uVar9;
  uVar9 = FUN_5f6d9760(0x1cc);
  puVar8[0xee] = uVar9;
  uVar9 = FUN_5f6d9760(0x1cc);
  puVar8[0xf0] = uVar9;
  uVar9 = FUN_5f6d9760(0x1cc);
  puVar8[0xf1] = uVar9;
  uVar9 = FUN_5f6d9760(0x1cc);
  puVar8[0xf2] = uVar9;
  uVar9 = puVar8[0xec];
  if (((((uVar9 == 0) || (puVar8[0xeb] == 0)) || (puVar8[0xed] == 0)) ||
      ((puVar8[0xee] == 0 || (puVar8[0xf0] == 0)))) || ((puVar8[0xf1] == 0 || (puVar8[0xf2] == 0))))
  {
    if (uVar9 != 0) {
      FUN_5f6d97a0(uVar9);
    }
    if (puVar8[0xeb] != 0) {
      FUN_5f6d97a0(puVar8[0xeb]);
    }
    if (puVar8[0xed] != 0) {
      FUN_5f6d97a0(puVar8[0xed]);
    }
    if (puVar8[0xee] != 0) {
      FUN_5f6d97a0(puVar8[0xee]);
    }
    if (puVar8[0xf0] != 0) {
      FUN_5f6d97a0(puVar8[0xf0]);
    }
    if (puVar8[0xf1] != 0) {
      FUN_5f6d97a0(puVar8[0xf1]);
    }
    if (puVar8[0xf2] != 0) {
      FUN_5f6d97a0(puVar8[0xf2]);
    }
    uVar9 = *puVar8;
    if (0 < (int)uVar9) {
      iVar15 = 0;
      puVar14 = puVar8;
      do {
        if (puVar14[0xf5] != 0) {
          FUN_5f6d97a0(puVar14[0xf5]);
          uVar9 = *puVar8;
        }
        iVar15 = iVar15 + 1;
        puVar14 = puVar14 + 3;
      } while (iVar15 < (int)uVar9);
    }
    FUN_5f6d97a0((int)puVar8);
    ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,(char *)0x2a7,
                            (undefined *)0x0,s_out_of_memory_5f75c330);
    return ppuVar10;
  }
  if (param_3 == 0) {
    ppuVar10 = FUN_5f702f80(*(int *)(param_2 + 0x14),*(int *)(param_2 + 0xc));
    if (ppuVar10 != (undefined **)0x0) {
      if (puVar8[0xec] != 0) {
        FUN_5f6d97a0(puVar8[0xec]);
      }
      if (puVar8[0xeb] != 0) {
        FUN_5f6d97a0(puVar8[0xeb]);
      }
      if (puVar8[0xed] != 0) {
        FUN_5f6d97a0(puVar8[0xed]);
      }
      if (puVar8[0xee] != 0) {
        FUN_5f6d97a0(puVar8[0xee]);
      }
      if (puVar8[0xf0] != 0) {
        FUN_5f6d97a0(puVar8[0xf0]);
      }
      if (puVar8[0xf1] != 0) {
        FUN_5f6d97a0(puVar8[0xf1]);
      }
      if (puVar8[0xf2] != 0) {
        FUN_5f6d97a0(puVar8[0xf2]);
      }
      uVar9 = *puVar8;
      iVar15 = 0;
      puVar14 = puVar8;
      if (0 < (int)uVar9) {
        do {
          if (puVar14[0xf5] != 0) {
            FUN_5f6d97a0(puVar14[0xf5]);
            uVar9 = *puVar8;
          }
          iVar15 = iVar15 + 1;
          puVar14 = puVar14 + 3;
        } while (iVar15 < (int)uVar9);
      }
      FUN_5f6d97a0((int)puVar8);
      ppuVar10 = (undefined **)
                 FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,0x2c3,0,(int)ppuVar10);
      return ppuVar10;
    }
  }
  else {
    ppuVar10 = FUN_5f7032b0(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x14));
    if (ppuVar10 != (undefined **)0x0) {
      if (puVar8[0xec] != 0) {
        FUN_5f6d97a0(puVar8[0xec]);
      }
      if (puVar8[0xeb] != 0) {
        FUN_5f6d97a0(puVar8[0xeb]);
      }
      if (puVar8[0xed] != 0) {
        FUN_5f6d97a0(puVar8[0xed]);
      }
      if (puVar8[0xee] != 0) {
        FUN_5f6d97a0(puVar8[0xee]);
      }
      if (puVar8[0xf0] != 0) {
        FUN_5f6d97a0(puVar8[0xf0]);
      }
      if (puVar8[0xf1] != 0) {
        FUN_5f6d97a0(puVar8[0xf1]);
      }
      if (puVar8[0xf2] != 0) {
        FUN_5f6d97a0(puVar8[0xf2]);
      }
      uVar9 = *puVar8;
      if (0 < (int)uVar9) {
        iVar15 = 0;
        puVar14 = puVar8;
        do {
          if (puVar14[0xf5] != 0) {
            FUN_5f6d97a0(puVar14[0xf5]);
            uVar9 = *puVar8;
          }
          iVar15 = iVar15 + 1;
          puVar14 = puVar14 + 3;
        } while (iVar15 < (int)uVar9);
      }
      FUN_5f6d97a0((int)puVar8);
      ppuVar10 = (undefined **)
                 FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,0x2b7,0,(int)ppuVar10);
      return ppuVar10;
    }
  }
  uVar9 = *puVar8;
  uVar2 = puVar8[0xeb];
  iVar15 = 0;
  if (1 < (int)uVar9) {
    iVar12 = 0;
    iStack_3c = 1;
    while ((iVar15 = iVar12,
           _DAT_5f7602c0 <
           *(float *)(uVar2 + iStack_3c * 4) - *(float *)((uVar2 - 4) + iStack_3c * 4) &&
           (iVar12 = iStack_3c + 1, iVar15 = iStack_3c, iVar12 < (int)uVar9))) {
      if ((*(float *)(uVar2 + iVar12 * 4) - *(float *)((uVar2 - 4) + iVar12 * 4) <= _DAT_5f7602c4)
         || (iStack_3c = iStack_3c + 2, iVar15 = iVar12, (int)uVar9 <= iStack_3c)) break;
    }
  }
  puVar8[0x24c] = iVar15 + 1;
  uVar2 = *(uint *)(*(int *)(param_2 + 0x1c) + 0xe4);
  if ((int)uVar2 < (int)uVar9) {
    uVar9 = uVar2;
  }
  *(uint *)(*(int *)(param_2 + 0x1c) + 0xe4) = uVar9;
  uVar9 = *puVar8;
  uVar2 = puVar8[0xeb];
  fVar1 = *(float *)(*(int *)(param_2 + 0x1c) + 4);
  iVar15 = *(int *)(param_2 + 0x1c);
  iVar12 = *(int *)(param_2 + 0x1c);
  iVar3 = *(int *)(param_2 + 0x1c);
  uVar4 = puVar8[0xec];
  uVar5 = puVar8[0xed];
  uVar6 = puVar8[0xee];
  if (0 < (int)uVar9) {
    iVar13 = 0;
    do {
      dVar16 = (double)*(float *)(uVar2 + iVar13 * 4);
      uStack_90 = (uint)((ulonglong)dVar16 >> 0x20);
      uStack_94 = SUB84(dVar16,0);
      uVar11 = uStack_90 >> 0x14 & 0x7ff;
      if (uVar11 < 0x3ff) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uStack_90 << 0xb | uStack_94 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar11 & 0x1f);
        if ((longlong)dVar16 < 0) {
          uVar11 = -uVar11;
        }
      }
      *(undefined4 *)(uVar5 + iVar13 * 4) = *(undefined4 *)(iVar12 + 0x6c + uVar11 * 4);
      dVar16 = (double)*(float *)(uVar2 + iVar13 * 4);
      uStack_80 = (uint)((ulonglong)dVar16 >> 0x20);
      uStack_84 = SUB84(dVar16,0);
      uVar11 = uStack_80 >> 0x14 & 0x7ff;
      if (uVar11 < 0x3ff) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uStack_80 << 0xb | uStack_84 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar11 & 0x1f);
        if ((longlong)dVar16 < 0) {
          uVar11 = -uVar11;
        }
      }
      *(undefined4 *)(uVar6 + iVar13 * 4) = *(undefined4 *)(iVar3 + 0x170 + uVar11 * 4);
      dVar16 = (double)*(float *)(uVar2 + iVar13 * 4);
      uStack_70 = (uint)((ulonglong)dVar16 >> 0x20);
      uStack_74 = SUB84(dVar16,0);
      uVar11 = uStack_70 >> 0x14 & 0x7ff;
      if (uVar11 < 0x3ff) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uStack_70 << 0xb | uStack_74 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar11 & 0x1f);
        if ((longlong)dVar16 < 0) {
          uVar11 = -uVar11;
        }
      }
      dVar16 = pow(_DAT_5f7602c8,
                   (double)((*(float *)(iVar15 + 8 + uVar11 * 4) - fVar1) * _DAT_5f7602d0));
      *(float *)(uVar4 + iVar13 * 4) = (float)dVar16;
      iVar7 = iVar13 + 5;
      iVar13 = iVar13 + 1;
      *(float *)((uVar4 - 4) + iVar13 * 4) =
           (float)(int)puVar8[iVar7] * (float)dVar16 * _DAT_5f7602bc;
    } while (iVar13 < (int)uVar9);
  }
  if (param_4 != 0) {
    FUN_5f6d8bb0(0,puVar8[0xed],*puVar8);
  }
  ppuVar10 = FUN_5f703800(*(int *)(*(int *)(param_2 + 0x1c) + 0xd4),
                          *(int *)(*(int *)(param_2 + 0x1c) + 0xd0));
  if (ppuVar10 == (undefined **)0x0) {
    FUN_5f703c30(extraout_ECX,param_2);
    *param_1 = puVar8;
    return (undefined **)0x0;
  }
  if (puVar8 != (uint *)0x0) {
    if (puVar8[0xec] != 0) {
      FUN_5f6d97a0(puVar8[0xec]);
    }
    if (puVar8[0xeb] != 0) {
      FUN_5f6d97a0(puVar8[0xeb]);
    }
    if (puVar8[0xed] != 0) {
      FUN_5f6d97a0(puVar8[0xed]);
    }
    if (puVar8[0xee] != 0) {
      FUN_5f6d97a0(puVar8[0xee]);
    }
    if (puVar8[0xf0] != 0) {
      FUN_5f6d97a0(puVar8[0xf0]);
    }
    if (puVar8[0xf1] != 0) {
      FUN_5f6d97a0(puVar8[0xf1]);
    }
    if (puVar8[0xf2] != 0) {
      FUN_5f6d97a0(puVar8[0xf2]);
    }
    uVar9 = *puVar8;
    if (0 < (int)uVar9) {
      iVar15 = 0;
      puVar14 = puVar8;
      do {
        if (puVar14[0xf5] != 0) {
          FUN_5f6d97a0(puVar14[0xf5]);
          uVar9 = *puVar8;
        }
        iVar15 = iVar15 + 1;
        puVar14 = puVar14 + 3;
      } while (iVar15 < (int)uVar9);
    }
    FUN_5f6d97a0((int)puVar8);
  }
  ppuVar10 = (undefined **)
             FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7602e0,0x2f8,0,(int)ppuVar10);
  return ppuVar10;
}


