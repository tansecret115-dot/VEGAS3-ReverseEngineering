/* Module: pncrt.dll
   Function: FUN_780025e0
   Address: 780025e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x780028a8) */
/* WARNING: Removing unreachable block (ram,0x78002784) */
/* WARNING: Removing unreachable block (ram,0x78002885) */
/* WARNING: Removing unreachable block (ram,0x78002895) */
/* WARNING: Removing unreachable block (ram,0x7800286c) */
/* WARNING: Removing unreachable block (ram,0x7800285c) */
/* WARNING: Removing unreachable block (ram,0x780028b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_780025e0(uint *param_1,DName *param_2)

{
  undefined3 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  DName *pDVar5;
  undefined4 *puVar6;
  void *pvVar7;
  DName *pDVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint *puVar14;
  char cVar15;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  DName local_18 [8];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  local_44 = local_44 & 0xffffff80;
  local_48 = 0;
  uVar2 = 0;
  if (*DAT_78041aac == '_') {
    DAT_78041aac = DAT_78041aac + 1;
    uVar2 = 0x4000;
  }
  cVar15 = *DAT_78041aac;
  if ((cVar15 < 'A') || ('Z' < cVar15)) {
    if (cVar15 == '$') {
      iVar3 = (int)DAT_78041aac[1];
      switch(iVar3) {
      case 0:
        uVar2 = 0xfffe;
        pcVar10 = DAT_78041aac + 2;
        break;
      default:
switchD_780026bb_default:
        DAT_78041aac = DAT_78041aac + 1;
        uVar2 = 0xffff;
        goto LAB_78002903;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
        uVar9 = iVar3 - 0x30;
        if ((uVar9 & 1) == 0) {
          uVar2 = uVar2 | 0x8d00;
        }
        else {
          uVar2 = uVar2 | 0xad00;
        }
        uVar9 = uVar9 & 6;
        uVar1 = (undefined3)(uVar2 >> 8);
        if (uVar9 == 0) {
          if ((uVar2 & 0x8000) == 0) {
            uVar2 = uVar2 | 0x800;
            pcVar10 = DAT_78041aac + 2;
          }
          else {
            uVar2 = CONCAT31(uVar1,0x40);
            pcVar10 = DAT_78041aac + 2;
          }
        }
        else if (uVar9 == 2) {
          if ((uVar2 & 0x8000) == 0) {
            uVar2 = uVar2 & 0xfffff7ff | 0x1000;
            pcVar10 = DAT_78041aac + 2;
          }
          else {
            uVar2 = CONCAT31(uVar1,0x80);
            pcVar10 = DAT_78041aac + 2;
          }
        }
        else {
          if (uVar9 != 4) {
            uVar2 = 0xffff;
            DAT_78041aac = DAT_78041aac + 1;
            goto LAB_78002903;
          }
          if ((uVar2 & 0x8000) == 0) {
            uVar2 = uVar2 & 0xffffe7ff;
            pcVar10 = DAT_78041aac + 2;
          }
          else {
            pcVar10 = DAT_78041aac + 2;
          }
        }
        break;
      case 0x41:
        uVar2 = uVar2 | 0x9000;
        pcVar10 = DAT_78041aac + 2;
        break;
      case 0x42:
        uVar2 = uVar2 | 0x9800;
        pcVar10 = DAT_78041aac + 2;
        break;
      case 0x44:
        uVar2 = uVar2 | 0x9100;
        pcVar10 = DAT_78041aac + 2;
        break;
      case 0x45:
        uVar2 = uVar2 | 0x9200;
        pcVar10 = DAT_78041aac + 2;
      }
    }
    else if ((cVar15 < '0') || ('8' < cVar15)) {
      uVar2 = (cVar15 != '\0') + 0xfffe;
      pcVar10 = DAT_78041aac;
    }
    else {
      pcVar10 = DAT_78041aac + 1;
      switch(cVar15) {
      case '0':
        uVar2 = 0x800;
        break;
      case '1':
        uVar2 = 0x1000;
        break;
      case '2':
        uVar2 = 0;
        break;
      case '3':
        uVar2 = 0x4000;
        break;
      case '4':
        uVar2 = 0x2000;
        break;
      case '5':
        uVar2 = 0x6000;
        break;
      case '6':
        uVar2 = 0x6800;
        break;
      case '7':
        uVar2 = 0x7000;
        break;
      case '8':
        uVar2 = 0x7800;
        break;
      default:
        goto switchD_780026bb_default;
      }
    }
switchD_780026bb_caseD_0:
    DAT_78041aac = pcVar10;
  }
  else {
    uVar9 = (int)cVar15 - 0x41;
    pcVar10 = DAT_78041aac + 1;
    if ((uVar9 & 1) == 0) {
      uVar2 = uVar2 | 0x8000;
    }
    else {
      uVar2 = uVar2 | 0xa000;
    }
    if (0x17 < (int)uVar9) goto switchD_780026bb_caseD_0;
    if ((uVar2 & 0x8000) == 0) {
      uVar2 = uVar2 & 0xffff9fff;
    }
    else {
      uVar2 = uVar2 | 0x800;
    }
    uVar11 = uVar9 & 0x18;
    uVar1 = (undefined3)(uVar2 >> 8);
    if (uVar11 == 0) {
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 | 0x800;
      }
      else {
        uVar2 = CONCAT31(uVar1,0x40);
      }
LAB_780026af:
      switch(uVar9 & 6) {
      case 0:
        break;
      case 2:
        if ((uVar2 & 0x8000) == 0) {
          uVar2 = uVar2 & 0xffff9fff;
        }
        else {
          uVar2 = uVar2 | 0x200;
        }
        break;
      case 4:
        uVar2 = uVar2 | 0x100;
        break;
      case 6:
        uVar2 = uVar2 | 0x400;
        break;
      default:
        goto switchD_780026bb_default;
      }
      goto switchD_780026bb_caseD_0;
    }
    if (uVar11 == 8) {
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 & 0xfffff7ff | 0x1000;
      }
      else {
        uVar2 = CONCAT31(uVar1,0x80);
      }
      goto LAB_780026af;
    }
    if (uVar11 == 0x10) {
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 & 0xffffe7ff;
      }
      goto LAB_780026af;
    }
    uVar2 = 0xffff;
    DAT_78041aac = pcVar10;
  }
LAB_78002903:
  iVar3 = DName::isEmpty(param_2);
  if ((iVar3 != 0) || (bVar13 = true, ((byte)param_2[4] & 0x20) == 0)) {
    bVar13 = false;
  }
  if (uVar2 == 0xffff) {
    FUN_78006450(param_1,1);
    return param_1;
  }
  if (uVar2 == 0xfffe) {
    puVar14 = param_1;
    puVar4 = FUN_78006450(local_18,2);
    FUN_78006750(puVar4,puVar14,param_2);
    return param_1;
  }
  local_50 = uVar2 & 0x8000;
  if (local_50 == 0) {
LAB_78002f82:
    FUN_780069e0(&local_48,param_2);
    uVar9 = local_50;
    if (local_50 == 0) {
      if ((uVar2 & 0x7800) == 0x6800) {
        local_4c = local_4c ^ ((int)(local_44 << 0x1c) >> 0x1c ^ local_4c) & 0xf;
        local_4c = local_4c ^ (local_4c ^ local_44) & 0x10;
        local_4c = local_4c ^ (local_4c ^ local_44) & 0x20;
        local_4c = local_4c ^ (local_4c ^ local_44) & 0x40;
        local_50 = local_48;
        iVar3 = DName::isValid((DName *)&local_50);
        if ((iVar3 == 0) || (*DAT_78041aac == '\0')) {
          iVar3 = DName::isValid((DName *)&local_50);
          if (iVar3 != 0) {
            puVar4 = FUN_78006140(local_8,2,(DName *)&local_50);
            FUN_78006b80(&local_50,puVar4);
          }
        }
        else {
          FUN_78005d50((undefined4 *)local_18);
          pDVar5 = (DName *)&local_50;
          puVar4 = local_8;
          pvVar7 = (void *)FUN_780065f0(local_18,local_10,' ');
          puVar4 = (undefined4 *)FUN_78006750(pvVar7,puVar4,pDVar5);
          FUN_78006b80(&local_50,puVar4);
          iVar3 = DName::isValid((DName *)&local_50);
          if (iVar3 != 0) {
            if (*DAT_78041aac != '@') {
              FUN_78006950(&local_50,"{for ");
              iVar3 = DName::isValid((DName *)&local_50);
              while (((iVar3 != 0 && (*DAT_78041aac != '\0')) && (*DAT_78041aac != '@'))) {
                puVar4 = local_8;
                cVar15 = '\'';
                pDVar5 = (DName *)FUN_78001c40(local_10);
                puVar6 = FUN_78006110((undefined4 *)local_18,'`',pDVar5);
                pDVar5 = (DName *)FUN_780065f0(puVar6,puVar4,cVar15);
                FUN_780069e0(&local_50,pDVar5);
                if (*DAT_78041aac == '@') {
                  DAT_78041aac = DAT_78041aac + 1;
                }
                iVar3 = DName::isValid((DName *)&local_50);
                if ((iVar3 != 0) && (*DAT_78041aac != '@')) {
                  FUN_78006950(&local_50,"s ");
                }
                iVar3 = DName::isValid((DName *)&local_50);
              }
              iVar3 = DName::isValid((DName *)&local_50);
              if (iVar3 != 0) {
                if (*DAT_78041aac == '\0') {
                  FUN_78006a60(&local_50,2);
                }
                FUN_780068d0(&local_50,'}');
              }
            }
            if (*DAT_78041aac == '@') {
              DAT_78041aac = DAT_78041aac + 1;
            }
          }
        }
        FUN_780061f0(param_1,&local_50);
        return param_1;
      }
      if ((uVar2 & 0x7800) == 0x7000) {
        FUN_78005da0(param_1,&local_48);
        return param_1;
      }
      if ((uVar2 & 0x7800) == 0x6000) {
        FUN_78001fb0(local_18);
        pDVar5 = local_18;
        puVar4 = local_8;
        pcVar10 = "}\'";
        puVar14 = param_1;
        pvVar7 = (void *)FUN_780065f0(&local_48,local_10,'{');
        pvVar7 = (void *)FUN_78006750(pvVar7,puVar4,pDVar5);
        FUN_780066a0(pvVar7,puVar14,pcVar10);
        return param_1;
      }
      bVar13 = (uVar2 & 0x6000) == 0;
    }
    else {
      bVar13 = (uVar2 & 0x1800) == 0x800;
    }
    if (bVar13) {
      uVar11 = uVar2 & 0x400;
    }
    else {
      uVar11 = uVar2 & 0x1000;
    }
    if ((uVar11 == 0) || (local_50 == 0 || (uVar2 & 0x1b00) != 0x1000)) {
      if (local_50 == 0) {
        bVar13 = (uVar2 & 0x6000) == 0;
      }
      else {
        bVar13 = (uVar2 & 0x1800) == 0x800;
      }
      if (bVar13) {
        uVar11 = uVar2 & 0x400;
      }
      else {
        uVar11 = uVar2 & 0x1000;
      }
      if ((uVar11 != 0) && (local_50 != 0 && (uVar2 & 0x1b00) == 0x1100)) {
        FUN_78006950(&local_48,"`template static data member constructor helper\'");
        goto LAB_7800337c;
      }
      if (local_50 == 0) {
        bVar13 = (uVar2 & 0x6000) == 0;
      }
      else {
        bVar13 = (uVar2 & 0x1800) == 0x800;
      }
      if (bVar13) {
        uVar11 = uVar2 & 0x400;
      }
      else {
        uVar11 = uVar2 & 0x1000;
      }
      if ((uVar11 != 0) && (local_50 != 0 && (uVar2 & 0x1b00) == 0x1200)) {
        FUN_78006950(&local_48,"`template static data member destructor helper\'");
        goto LAB_7800337c;
      }
      if (local_50 == 0) {
        if ((uVar2 & 0x7800) == 0x7800) goto LAB_78003848;
        goto LAB_7800337c;
      }
LAB_78003380:
      bVar13 = (uVar2 & 0x1800) == 0x800;
    }
    else {
      FUN_78006950(&local_48,"`local static destructor helper\'");
LAB_7800337c:
      if (uVar9 != 0) goto LAB_78003380;
      bVar13 = (uVar2 & 0x6000) == 0;
    }
    if (bVar13) {
      uVar11 = uVar2 & 0x400;
    }
    else {
      uVar11 = uVar2 & 0x1000;
    }
    if ((uVar11 == 0) ||
       ((uVar9 == 0 || (uVar2 & 0x1b00) != 0x1100 && (uVar9 == 0 || (uVar2 & 0x1b00) != 0x1200)))) {
      puVar4 = (undefined4 *)FUN_78006050(&DAT_78041a90,8,0);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = puVar4[1] & 0xffffff80;
      }
      FUN_78003cc0(&local_20,(int)puVar4);
      iVar3 = 0;
      pDVar5 = (DName *)FUN_780061a0(local_8);
      cVar15 = '\0';
      pDVar8 = (DName *)FUN_780061a0(local_10);
      FUN_78005780((undefined4 *)local_18,pDVar8,cVar15,pDVar5,iVar3);
      pDVar5 = (DName *)&local_48;
      puVar6 = &local_30;
      pvVar7 = (void *)FUN_780065f0(local_18,&local_38,' ');
      puVar6 = (undefined4 *)FUN_78006750(pvVar7,puVar6,pDVar5);
      FUN_78006b80(puVar4,puVar6);
      FUN_780061f0(&local_28,&local_20);
      pDVar5 = (DName *)&local_28;
    }
    else {
      pDVar5 = (DName *)&local_48;
      pDVar8 = local_18;
      puVar4 = FUN_780062b0(local_8," ");
      FUN_78006750(puVar4,(undefined4 *)pDVar8,pDVar5);
      pDVar5 = local_18;
    }
LAB_780034b2:
    FUN_78006b80(&local_48,(undefined4 *)pDVar5);
  }
  else {
    bVar12 = (uVar2 & 0x1800) != 0x800;
    if (bVar12) {
      uVar9 = uVar2 & 0x1000;
    }
    else {
      uVar9 = uVar2 & 0x400;
    }
    if ((uVar9 != 0) && ((uVar2 & 0x1b00) == 0x1000)) goto LAB_78002f82;
    if (bVar12) {
      uVar9 = uVar2 & 0x1000;
    }
    else {
      uVar9 = uVar2 & 0x400;
    }
    if ((uVar9 != 0) && (((uVar2 & 0x1b00) == 0x1100 || ((uVar2 & 0x1b00) == 0x1200))))
    goto LAB_78002f82;
    if ((uVar2 & 0x4000) != 0) {
      if (((~_DAT_78041abc & 2) == 0) || ((~_DAT_78041abc & 8) == 0)) {
        pDVar5 = (DName *)FUN_78003940((undefined4 *)local_18);
        FUN_78006af0(&local_48,pDVar5);
      }
      else {
        pDVar5 = (DName *)FUN_78003940((undefined4 *)local_18);
        puVar4 = &local_20;
        puVar6 = FUN_780061c0(&local_28,' ');
        FUN_78006750(puVar6,puVar4,pDVar5);
        FUN_78006b80(&local_48,&local_20);
      }
    }
    if (bVar12) {
      uVar9 = uVar2 & 0x1000;
    }
    else {
      uVar9 = uVar2 & 0x400;
    }
    if ((uVar9 != 0) && ((uVar2 & 0x1800) == 0x1800)) {
      FUN_78001fb0(&local_20);
      pDVar5 = local_18;
      pDVar8 = (DName *)&local_20;
      puVar4 = &local_28;
      cVar15 = ',';
      pvVar7 = (void *)FUN_780065f0(param_2,&local_30,'{');
      pvVar7 = (void *)FUN_78006750(pvVar7,puVar4,pDVar8);
      pDVar5 = (DName *)FUN_780065f0(pvVar7,(undefined4 *)pDVar5,cVar15);
      FUN_780069e0(&local_48,pDVar5);
      if (*DAT_78041aac == '\0') {
        uVar9 = 2;
LAB_78002af1:
        FUN_78006450(&local_28,uVar9);
      }
      else {
        if (*DAT_78041aac != 'A') {
          uVar9 = 1;
          goto LAB_78002af1;
        }
        DAT_78041aac = DAT_78041aac + 1;
        FUN_780062b0(&local_28,"{flat}");
      }
      pDVar5 = (DName *)FUN_780066a0(&local_28,(undefined4 *)local_18,"}\' ");
      FUN_780069e0(&local_48,pDVar5);
      if (((~_DAT_78041abc & 2) == 0) || ((~_DAT_78041abc & 0x10) == 0)) {
        pDVar5 = (DName *)FUN_78003b60((undefined4 *)local_18);
        FUN_78006af0(&local_48,pDVar5);
        goto LAB_780034bb;
      }
      pDVar5 = (DName *)FUN_78003b60((undefined4 *)local_18);
      puVar4 = &local_20;
      puVar6 = FUN_780061c0(&local_28,' ');
      FUN_78006750(puVar6,puVar4,pDVar5);
      pDVar5 = (DName *)&local_48;
      puVar4 = &local_30;
      pvVar7 = (void *)FUN_780065f0(&local_20,&local_38,' ');
      pDVar5 = (DName *)FUN_78006750(pvVar7,puVar4,pDVar5);
      goto LAB_780034b2;
    }
    local_38 = 0;
    local_30 = 0;
    local_40 = 0;
    local_34 = local_34 & 0xffffff80;
    local_2c = local_2c & 0xffffff80;
    local_3c = local_3c & 0xffffff80;
    if (bVar12) {
      uVar9 = uVar2 & 0x1000;
    }
    else {
      uVar9 = uVar2 & 0x400;
    }
    if (uVar9 != 0) {
      if ((!bVar12) && ((uVar2 & 0x700) == 0x500)) {
        FUN_78001fb0(&local_20);
        FUN_78006b80(&local_38,&local_20);
      }
      FUN_78001fb0(&local_20);
      FUN_78006b80(&local_30,&local_20);
    }
    if ((!bVar12) && ((uVar2 & 0x700) != 0x200)) {
      if ((DAT_78041abc & 0x60) == 0x60) {
        pDVar5 = (DName *)&local_20;
        iVar3 = 1;
        cVar15 = '\0';
        local_1c = local_1c & 0xffffff80;
        local_20 = 0;
        pDVar8 = (DName *)FUN_780061a0(local_10);
        FUN_78005780((undefined4 *)local_18,pDVar8,cVar15,pDVar5,iVar3);
        FUN_78006af0(&local_40,local_18);
      }
      else {
        pDVar5 = (DName *)&local_20;
        iVar3 = 1;
        cVar15 = '\0';
        local_1c = local_1c & 0xffffff80;
        local_20 = 0;
        pDVar8 = (DName *)FUN_780061a0(local_10);
        FUN_78005780((undefined4 *)local_18,pDVar8,cVar15,pDVar5,iVar3);
        FUN_78006b80(&local_40,(undefined4 *)local_18);
      }
    }
    if (((~_DAT_78041abc & 2) == 0) || ((~_DAT_78041abc & 0x10) == 0)) {
      pDVar5 = (DName *)FUN_78003b60(local_10);
      FUN_78006af0(&local_48,pDVar5);
    }
    else {
      pDVar5 = (DName *)&local_48;
      puVar4 = local_10;
      puVar6 = FUN_78003b60((undefined4 *)local_18);
      puVar4 = (undefined4 *)FUN_78006750(puVar6,puVar4,pDVar5);
      FUN_78006b80(&local_48,puVar4);
    }
    iVar3 = DName::isEmpty(param_2);
    if (iVar3 == 0) {
      iVar3 = DName::isEmpty((DName *)&local_48);
      if ((iVar3 == 0) && ((_DAT_78041abc & 0x1000) == 0)) {
        pDVar5 = local_18;
        puVar4 = FUN_780061c0(local_10,' ');
        FUN_78006750(puVar4,(undefined4 *)pDVar5,param_2);
        FUN_780069e0(&local_48,local_18);
      }
      else {
        FUN_78006b80(&local_48,(undefined4 *)param_2);
      }
    }
    puVar4 = (undefined4 *)0x0;
    local_28 = 0;
    local_24 = local_24 & 0xffffff80;
    if (bVar13) {
      pDVar8 = FUN_78003c80(local_10,0);
      pDVar5 = local_18;
      puVar6 = FUN_780062b0(&local_20," ");
      FUN_78006750(puVar6,(undefined4 *)pDVar5,pDVar8);
      FUN_780069e0(&local_48,local_18);
      if ((_DAT_78041abc & 0x1000) != 0) goto LAB_78003848;
    }
    else {
      puVar4 = (undefined4 *)FUN_78006050(&DAT_78041a90,8,0);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = puVar4[1] & 0xffffff80;
      }
      puVar6 = FUN_78003c80(local_10,(int)puVar4);
      FUN_78006b80(&local_28,puVar6);
    }
    if (bVar12) {
      uVar9 = uVar2 & 0x1000;
    }
    else {
      uVar9 = uVar2 & 0x400;
    }
    if (uVar9 != 0) {
      if ((bVar12) || ((uVar2 & 0x700) != 0x500)) {
        FUN_78006950(&local_48,"`adjustor{");
      }
      else {
        pDVar5 = (DName *)&local_38;
        pDVar8 = local_18;
        puVar6 = FUN_780062b0(local_10,"`vtordisp{");
        FUN_78006750(puVar6,(undefined4 *)pDVar8,pDVar5);
        pDVar5 = (DName *)FUN_780065f0(local_18,&local_20,',');
        FUN_780069e0(&local_48,pDVar5);
      }
      pDVar5 = (DName *)FUN_780066a0(&local_30,local_10,"}\' ");
      FUN_780069e0(&local_48,pDVar5);
    }
    pDVar8 = (DName *)FUN_78004140(local_10);
    pDVar5 = local_18;
    puVar6 = FUN_780061c0(&local_20,'(');
    FUN_78006750(puVar6,(undefined4 *)pDVar5,pDVar8);
    pDVar5 = (DName *)FUN_780065f0(local_18,local_8,')');
    FUN_780069e0(&local_48,pDVar5);
    if ((!bVar12) && ((uVar2 & 0x700) != 0x200)) {
      FUN_780069e0(&local_48,(DName *)&local_40);
    }
    if ((~_DAT_78041abc & 0x100) == 0) {
      pDVar5 = (DName *)FUN_78004470(local_8);
      FUN_78006af0(&local_48,pDVar5);
    }
    else {
      pDVar5 = (DName *)FUN_78004470(local_8);
      FUN_780069e0(&local_48,pDVar5);
    }
    if (((~DAT_78041abc & 4) != 0) && (puVar4 != (undefined4 *)0x0)) {
      FUN_78006b80(puVar4,&local_48);
      pDVar5 = (DName *)&local_28;
      goto LAB_780034b2;
    }
  }
LAB_780034bb:
  uVar9 = local_50;
  if (local_50 == 0) {
    bVar13 = (uVar2 & 0x6000) == 0;
  }
  else {
    bVar13 = (uVar2 & 0x1800) == 0x800;
  }
  if (bVar13) {
    if ((~_DAT_78041abc & 0x200) != 0) {
      if (local_50 == 0) {
        bVar13 = (uVar2 & 0x6000) == 0;
      }
      else {
        bVar13 = (uVar2 & 0x1800) == 0x800;
      }
      if ((bVar13) && (local_50 == 0 || (uVar2 & 0x700) == 0x200)) {
        pDVar5 = (DName *)&local_48;
        pDVar8 = local_18;
        puVar4 = FUN_780062b0(local_8,"static ");
        FUN_78006750(puVar4,(undefined4 *)pDVar8,pDVar5);
        FUN_78006b80(&local_48,(undefined4 *)local_18);
      }
      if (uVar9 == 0) {
LAB_780035a2:
        bVar13 = (uVar2 & 0x6000) == 0;
LAB_780035ae:
        if (bVar13) {
          uVar11 = uVar2 & 0x400;
        }
        else {
          uVar11 = uVar2 & 0x1000;
        }
        if (uVar11 == 0) goto LAB_78003665;
        if (uVar9 == 0) {
          bVar13 = (uVar2 & 0x6000) == 0;
        }
        else {
          bVar13 = (uVar2 & 0x1800) == 0x800;
        }
        if ((!bVar13) || ((uVar2 & 0x700) != 0x500)) {
          if (uVar9 == 0) {
            bVar13 = (uVar2 & 0x6000) == 0;
          }
          else {
            bVar13 = (uVar2 & 0x1800) == 0x800;
          }
          if ((!bVar13) || ((uVar2 & 0x700) != 0x400)) goto LAB_78003665;
        }
      }
      else if ((uVar2 & 0x700) != 0x100) {
        if (uVar9 == 0) goto LAB_780035a2;
        bVar13 = (uVar2 & 0x1800) == 0x800;
        goto LAB_780035ae;
      }
      pDVar5 = (DName *)&local_48;
      pDVar8 = local_18;
      puVar4 = FUN_780062b0(local_8,"virtual ");
      FUN_78006750(puVar4,(undefined4 *)pDVar8,pDVar5);
      FUN_78006b80(&local_48,(undefined4 *)local_18);
    }
LAB_78003665:
    if ((~DAT_78041abc & 0x80) != 0) {
      if (uVar9 == 0) {
        bVar13 = (uVar2 & 0x6000) == 0;
      }
      else {
        bVar13 = (uVar2 & 0x1800) == 0x800;
      }
      if (bVar13) {
        if (uVar9 == 0) {
          bVar13 = (uVar2 & 0x1800) == 0x800;
        }
        else {
          bVar13 = ((byte)uVar2 & 0xc0) == 0x40;
        }
        if (!bVar13) goto LAB_780036f1;
        pDVar5 = (DName *)&local_48;
        pDVar8 = local_18;
        puVar4 = FUN_780062b0(local_8,"private: ");
        FUN_78006750(puVar4,(undefined4 *)pDVar8,pDVar5);
LAB_780037d9:
        FUN_78006b80(&local_48,(undefined4 *)local_18);
      }
      else {
LAB_780036f1:
        if (uVar9 == 0) {
          bVar13 = (uVar2 & 0x6000) == 0;
        }
        else {
          bVar13 = (uVar2 & 0x1800) == 0x800;
        }
        if (bVar13) {
          if (uVar9 == 0) {
            bVar13 = (uVar2 & 0x1800) == 0x1000;
          }
          else {
            bVar13 = ((byte)uVar2 & 0xc0) == 0x80;
          }
          if (bVar13) {
            pDVar5 = (DName *)&local_48;
            pDVar8 = local_18;
            puVar4 = FUN_780062b0(local_8,"protected: ");
            FUN_78006750(puVar4,(undefined4 *)pDVar8,pDVar5);
            goto LAB_780037d9;
          }
        }
        if (uVar9 == 0) {
          bVar13 = (uVar2 & 0x6000) == 0;
        }
        else {
          bVar13 = (uVar2 & 0x1800) == 0x800;
        }
        if (bVar13) {
          if (uVar9 == 0) {
            uVar11 = uVar2 & 0x1800;
          }
          else {
            uVar11 = uVar2 & 0xc0;
          }
          if (uVar11 == 0) {
            pDVar5 = (DName *)&local_48;
            pDVar8 = local_18;
            puVar4 = FUN_780062b0(local_8,"public: ");
            FUN_78006750(puVar4,(undefined4 *)pDVar8,pDVar5);
            goto LAB_780037d9;
          }
        }
      }
    }
  }
  if (uVar9 == 0) {
    bVar13 = (uVar2 & 0x6000) == 0;
  }
  else {
    bVar13 = (uVar2 & 0x1800) == 0x800;
  }
  if (bVar13) {
    uVar2 = uVar2 & 0x400;
  }
  else {
    uVar2 = uVar2 & 0x1000;
  }
  if (uVar2 != 0) {
    pDVar5 = (DName *)&local_48;
    pDVar8 = local_18;
    puVar4 = FUN_780062b0(local_8,"[thunk]:");
    FUN_78006750(puVar4,(undefined4 *)pDVar8,pDVar5);
    FUN_78006b80(&local_48,(undefined4 *)local_18);
  }
LAB_78003848:
  uVar2 = ((int)(local_44 << 0x1c) >> 0x1c ^ param_1[1]) & 0xf ^ param_1[1];
  uVar2 = (uVar2 ^ local_44) & 0x10 ^ uVar2;
  uVar2 = (uVar2 ^ local_44) & 0x20 ^ uVar2;
  param_1[1] = (uVar2 ^ local_44) & 0x40 ^ uVar2;
  *param_1 = local_48;
  return param_1;
}


