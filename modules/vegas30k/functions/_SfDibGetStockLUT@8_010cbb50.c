/* Module: vegas30k.dll
   Function: _SfDibGetStockLUT@8
   Address: 010cbb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDibGetStockLUT_8(int param_1,int param_2)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  
                    /* 0xcbb50  859  _SfDibGetStockLUT@8 */
  if ((((param_2 < 1) || (0x10 < param_2)) || (param_1 < 1)) || (8 < param_1)) {
    return 0;
  }
  iVar4 = param_1 * 0x10 + param_2;
  iVar7 = iVar4 * 8;
  puVar1 = (undefined4 *)(&DAT_0128eb28 + iVar7);
  if (0 < *(int *)(&DAT_0128eb2c + iVar4 * 8)) {
    *(int *)(&DAT_0128eb2c + iVar7) = *(int *)(&DAT_0128eb2c + iVar4 * 8) + 1;
    return *puVar1;
  }
  bVar8 = (byte)param_2;
  uVar13 = 1 << (bVar8 & 0x1f);
  iVar12 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  iVar4 = uVar13 - 1;
  psVar5 = GlobalAlloc(0,iVar12 * uVar13);
  if (psVar5 == (short *)0x0) {
    return 0;
  }
  *puVar1 = psVar5;
  *(int *)(&DAT_0128eb2c + iVar7) = *(int *)(&DAT_0128eb2c + iVar7) + 1;
  if (iVar12 == 1) {
    param_2._0_1_ = (char)iVar4;
    switch(param_1) {
    case 1:
      if (0 < (int)uVar13) {
LAB_010cbc17:
        for (uVar9 = uVar13 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          psVar5[0] = 0;
          psVar5[1] = 0;
          psVar5 = psVar5 + 2;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)psVar5 = 0;
          psVar5 = (short *)((int)psVar5 + 1);
        }
        return *puVar1;
      }
      break;
    case 2:
      iVar7 = 0;
      if (0 < (int)uVar13) {
        do {
          *(char *)(iVar7 + (int)psVar5) = (char)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar13);
        return *puVar1;
      }
      break;
    case 3:
      if (0 < (int)uVar13) {
LAB_010cbc61:
        for (uVar9 = uVar13 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(uint *)psVar5 =
               CONCAT22(CONCAT11((char)param_2,(char)param_2),CONCAT11((char)param_2,(char)param_2))
          ;
          psVar5 = psVar5 + 2;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(char *)psVar5 = (char)param_2;
          psVar5 = (short *)((int)psVar5 + 1);
        }
        return *puVar1;
      }
      break;
    case 4:
      iVar7 = 0;
      if (0 < (int)uVar13) {
        do {
          *(char *)(iVar7 + (int)psVar5) = (char)param_2 - (char)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar13);
        return *puVar1;
      }
      break;
    case 5:
      uVar6 = (int)uVar13 / 2;
      uVar9 = 0;
      if (0 < (int)uVar6) {
        psVar11 = psVar5;
        for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          psVar11[0] = 0;
          psVar11[1] = 0;
          psVar11 = psVar11 + 2;
        }
        for (uVar10 = uVar6 & 3; uVar9 = uVar6, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)psVar11 = 0;
          psVar11 = (short *)((int)psVar11 + 1);
        }
      }
      if ((int)uVar9 < (int)uVar13) {
        psVar5 = (short *)((int)psVar5 + uVar9);
        uVar13 = uVar13 - uVar9;
        goto LAB_010cbc61;
      }
      break;
    case 6:
      uVar6 = (int)uVar13 / 2;
      uVar9 = 0;
      if (0 < (int)uVar6) {
        psVar11 = psVar5;
        for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(uint *)psVar11 =
               CONCAT22(CONCAT11((char)param_2,(char)param_2),CONCAT11((char)param_2,(char)param_2))
          ;
          psVar11 = psVar11 + 2;
        }
        for (uVar10 = uVar6 & 3; uVar9 = uVar6, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(char *)psVar11 = (char)param_2;
          psVar11 = (short *)((int)psVar11 + 1);
        }
      }
      if ((int)uVar9 < (int)uVar13) {
        psVar5 = (short *)((int)psVar5 + uVar9);
        uVar13 = uVar13 - uVar9;
        goto LAB_010cbc17;
      }
      break;
    case 7:
      iVar7 = 0;
      if (0 < (int)uVar13) {
        do {
          iVar12 = iVar7 + 1;
          *(char *)(iVar7 + (int)psVar5) = (char)(iVar7 * iVar7 >> (bVar8 & 0x1f));
          iVar7 = iVar12;
        } while (iVar12 < (int)uVar13);
      }
      *(char *)(iVar4 + (int)psVar5) = (char)param_2;
      return *puVar1;
    case 8:
      iVar7 = 0;
      if (0 < (int)uVar13) {
        do {
          *(char *)(iVar7 + (int)psVar5) =
               (char)iVar7 * '\x02' - (char)(iVar7 * iVar7 >> (bVar8 & 0x1f));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar13);
      }
      *(char *)(iVar4 + (int)psVar5) = (char)param_2;
      return *puVar1;
    }
    goto switchD_010cbc06_default;
  }
  if (iVar12 != 2) goto switchD_010cbc06_default;
  sVar3 = (short)iVar4;
  switch(param_1) {
  case 1:
    if (0 < (int)uVar13) {
      for (uVar9 = uVar13 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        psVar5[0] = 0;
        psVar5[1] = 0;
        psVar5 = psVar5 + 2;
      }
      for (uVar13 = (uint)((uVar13 & 1) != 0); uVar13 != 0; uVar13 = uVar13 - 1) {
        *psVar5 = 0;
        psVar5 = psVar5 + 1;
      }
      return *puVar1;
    }
    break;
  case 2:
    iVar7 = 0;
    if (0 < (int)uVar13) {
      do {
        *psVar5 = (short)iVar7;
        iVar7 = iVar7 + 1;
        psVar5 = psVar5 + 1;
      } while (iVar7 < (int)uVar13);
      return *puVar1;
    }
    break;
  case 3:
    if (0 < (int)uVar13) {
      for (uVar9 = uVar13 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(uint *)psVar5 = CONCAT22(sVar3,sVar3);
        psVar5 = psVar5 + 2;
      }
      for (uVar13 = (uint)((uVar13 & 1) != 0); uVar13 != 0; uVar13 = uVar13 - 1) {
        *psVar5 = sVar3;
        psVar5 = psVar5 + 1;
      }
      return *puVar1;
    }
    break;
  case 4:
    iVar7 = 0;
    if (0 < (int)uVar13) {
      do {
        sVar2 = (short)iVar7;
        iVar7 = iVar7 + 1;
        *psVar5 = sVar3 - sVar2;
        psVar5 = psVar5 + 1;
      } while (iVar7 < (int)uVar13);
      return *puVar1;
    }
    break;
  case 5:
    uVar6 = (int)uVar13 / 2;
    uVar9 = 0;
    if (0 < (int)uVar6) {
      psVar11 = psVar5;
      for (uVar9 = uVar6 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        psVar11[0] = 0;
        psVar11[1] = 0;
        psVar11 = psVar11 + 2;
      }
      for (uVar10 = (uint)((uVar6 & 1) != 0); uVar9 = uVar6, uVar10 != 0; uVar10 = uVar10 - 1) {
        *psVar11 = 0;
        psVar11 = psVar11 + 1;
      }
    }
    if ((int)uVar9 < (int)uVar13) {
      psVar5 = psVar5 + uVar9;
      for (uVar6 = uVar13 - uVar9 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)psVar5 = CONCAT22(sVar3,sVar3);
        psVar5 = psVar5 + 2;
      }
      for (uVar13 = (uint)((uVar13 - uVar9 & 1) != 0); uVar13 != 0; uVar13 = uVar13 - 1) {
        *psVar5 = sVar3;
        psVar5 = psVar5 + 1;
      }
      return *puVar1;
    }
    break;
  case 6:
    uVar6 = (int)uVar13 / 2;
    uVar9 = 0;
    if (0 < (int)uVar6) {
      psVar11 = psVar5;
      for (uVar9 = uVar6 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(uint *)psVar11 = CONCAT22(sVar3,sVar3);
        psVar11 = psVar11 + 2;
      }
      for (uVar10 = (uint)((uVar6 & 1) != 0); uVar9 = uVar6, uVar10 != 0; uVar10 = uVar10 - 1) {
        *psVar11 = sVar3;
        psVar11 = psVar11 + 1;
      }
    }
    if ((int)uVar9 < (int)uVar13) {
      psVar5 = psVar5 + uVar9;
      for (uVar6 = uVar13 - uVar9 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        psVar5[0] = 0;
        psVar5[1] = 0;
        psVar5 = psVar5 + 2;
      }
      for (uVar13 = (uint)((uVar13 - uVar9 & 1) != 0); uVar13 != 0; uVar13 = uVar13 - 1) {
        *psVar5 = 0;
        psVar5 = psVar5 + 1;
      }
      return *puVar1;
    }
    break;
  case 7:
    iVar7 = 0;
    psVar11 = psVar5;
    if (0 < (int)uVar13) {
      do {
        iVar12 = iVar7 * iVar7;
        iVar7 = iVar7 + 1;
        *psVar11 = (short)(iVar12 >> (bVar8 & 0x1f));
        psVar11 = psVar11 + 1;
      } while (iVar7 < (int)uVar13);
      psVar5[iVar4] = sVar3;
      return *puVar1;
    }
    goto LAB_010cbf5d;
  case 8:
    iVar7 = 0;
    psVar11 = psVar5;
    if (0 < (int)uVar13) {
      do {
        iVar12 = iVar7 * iVar7;
        sVar2 = (short)iVar7;
        iVar7 = iVar7 + 1;
        *psVar11 = sVar2 * 2 - (short)(iVar12 >> (bVar8 & 0x1f));
        psVar11 = psVar11 + 1;
      } while (iVar7 < (int)uVar13);
    }
LAB_010cbf5d:
    psVar5[iVar4] = sVar3;
  }
switchD_010cbc06_default:
  return *puVar1;
}


