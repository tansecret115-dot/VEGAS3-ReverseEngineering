/* Module: vegas30k.dll
   Function: FUN_010733e0
   Address: 010733e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010733e0(int param_1,int param_2,int param_3)

{
  uchar uVar1;
  LPCSTR pCVar2;
  uint uVar3;
  uchar *puVar4;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  int iVar8;
  uchar *puVar9;
  int iVar10;
  undefined4 uVar11;
  int local_52c;
  CHAR local_520 [12];
  uchar local_514 [260];
  uchar local_410 [260];
  uchar local_30c [260];
  uchar local_208 [8];
  undefined1 local_200;
  uchar local_104 [260];
  
  puVar4 = local_30c;
  for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4 = puVar4 + 4;
  }
  puVar4 = local_514;
  for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4 = puVar4 + 4;
  }
  puVar9 = (uchar *)0x0;
  puVar4 = (uchar *)(param_3 + 0xc);
  _mbscpy(local_208,puVar4);
  puVar6 = (uchar *)(param_3 + 0x110);
  _mbscpy(local_410,puVar6);
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      pCVar2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_410);
      if (pCVar2 != (LPCSTR)0x0) {
        puVar9 = (uchar *)CharNextA(pCVar2);
        *pCVar2 = '\0';
      }
      uVar3 = lstrlenA((LPCSTR)local_410);
      local_52c = lstrlenA((LPCSTR)puVar9);
      if (param_2 != 0) {
        if (param_2 == 4) {
          _mbscpy(local_514,local_410);
          puVar9 = local_514;
          goto LAB_010739d7;
        }
        if (param_2 == 5) {
          uVar7 = local_52c + -0x1e + uVar3;
          goto LAB_01073565;
        }
        if (param_2 == 1) {
          uVar3 = 0;
          puVar4 = local_410;
          while ((local_410[0] != '\0' && (uVar3 < 0x1e))) {
            iVar8 = _ismbcalpha((int)(char)*puVar4);
            if (iVar8 == 0) {
              iVar8 = _ismbcdigit((int)(char)*puVar4);
              if ((iVar8 != 0) || (*puVar4 == '_')) {
                local_514[uVar3] = *puVar4;
                goto LAB_0107364e;
              }
            }
            else {
              uVar7 = _mbctoupper((int)(char)*puVar4);
              local_514[uVar3] = (uchar)uVar7;
LAB_0107364e:
              uVar3 = uVar3 + 1;
            }
            puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
            local_410[0] = *puVar4;
          }
          if ((local_52c != 0) && (uVar3 < 0x1e)) {
            if ((*(uint *)(param_3 + 8) & 0x10) == 0) {
              local_514[uVar3] = '.';
              uVar3 = uVar3 + 1;
            }
            if (*puVar9 != '\0') {
              do {
                if (0x1d < uVar3) goto LAB_010734bd;
                iVar8 = _ismbcalpha((int)(char)*puVar9);
                if (iVar8 == 0) {
                  iVar8 = _ismbcdigit((int)(char)*puVar9);
                  if (iVar8 != 0) {
                    local_514[uVar3] = *puVar9;
                    goto LAB_010736d6;
                  }
                }
                else {
                  uVar7 = _mbctoupper((int)(char)*puVar9);
                  local_514[uVar3] = (uchar)uVar7;
LAB_010736d6:
                  uVar3 = uVar3 + 1;
                }
                puVar9 = (uchar *)CharNextA((LPCSTR)puVar9);
              } while (*puVar9 != '\0');
              puVar9 = local_514;
              goto LAB_010739d7;
            }
          }
          goto LAB_010734bd;
        }
        goto LAB_010738f4;
      }
      uVar11 = *(undefined4 *)(param_3 + 0x220);
LAB_010734b5:
      SfPrintF(local_514,&DAT_011e2208,uVar11);
    }
    else {
      if (iVar8 != 2) {
LAB_010738f4:
        if (param_2 != 6) {
          return 0;
        }
        SfPrintF(local_520,&DAT_011e21fc,*(undefined4 *)(param_3 + 0x220));
        uVar3 = lstrlenA(local_520);
        if ((*(uint *)(param_3 + 0x218) & 0x40) == 0) {
          return 0;
        }
        iVar8 = 0;
        _mbscpy(local_104,puVar6);
        pCVar2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_104);
        if (*pCVar2 == '.') {
          puVar9 = (uchar *)CharNextA(pCVar2);
          *pCVar2 = '\0';
          iVar8 = lstrlenA((LPCSTR)puVar9);
        }
        uVar7 = lstrlenA((LPCSTR)local_104);
        if (0x40 < iVar8 + uVar3 + uVar7) {
          if ((0x3f < iVar8 + uVar3) || (uVar7 < uVar3)) {
            return 0x8004e032;
          }
          local_104[uVar7 - uVar3] = '\0';
        }
        SfPrintF(local_514,"%s%s.%s",local_104,local_520,puVar9);
        puVar9 = local_514;
        goto LAB_010739d7;
      }
      pCVar2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_410);
      if (pCVar2 != (LPCSTR)0x0) {
        puVar9 = (uchar *)CharNextA(pCVar2);
        *pCVar2 = '\0';
      }
      uVar3 = lstrlenA((LPCSTR)local_410);
      local_52c = lstrlenA((LPCSTR)puVar9);
      if (param_2 == 0) {
        uVar11 = *(undefined4 *)(param_3 + 0x220);
        goto LAB_010734b5;
      }
      if (param_2 != 5) goto LAB_010736fb;
      uVar7 = local_52c + -0x40 + uVar3;
LAB_01073565:
      if (uVar3 < uVar7) {
        SfPrintF(local_410,&DAT_011e2208,*(undefined4 *)(param_3 + 0x220));
      }
      else {
        uVar3 = uVar3 - uVar7;
      }
      local_410[uVar3] = '\0';
      _mbscpy(local_514,local_410);
      if (puVar9 != (uchar *)0x0) {
        puVar9[local_52c] = '\0';
        _mbscat(local_514,".");
        _mbscat(local_514,puVar9);
        puVar9 = local_514;
        goto LAB_010739d7;
      }
    }
LAB_010734bd:
    puVar9 = local_514;
    goto LAB_010739d7;
  }
LAB_010736fb:
  pCVar2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_208);
  if (*pCVar2 == '.') {
    puVar9 = (uchar *)CharNextA(pCVar2);
    *pCVar2 = '\0';
  }
  lstrlenA((LPCSTR)local_208);
  iVar8 = lstrlenA((LPCSTR)puVar9);
  if (param_2 == 0) {
    SfPrintF(local_30c,&DAT_011e2208,*(undefined4 *)(param_3 + 0x220));
    puVar9 = local_30c;
    puVar6 = puVar4;
    goto LAB_010739d7;
  }
  if (param_2 == 2) {
    local_200 = 0;
    if (puVar9 == (uchar *)0x0) {
      _mbscpy(local_30c,local_208);
      puVar9 = local_30c;
      puVar6 = puVar4;
      goto LAB_010739d7;
    }
LAB_0107378d:
    SfPrintF(local_30c,"%s.%s",local_208,puVar9);
  }
  else {
    if (param_2 == 3) {
      puVar9[3] = '\0';
      goto LAB_0107378d;
    }
    if (param_2 != 1) goto LAB_010738f4;
    iVar10 = 0;
    puVar6 = local_208;
    while (local_208[0] != '\0') {
      iVar5 = _ismbcalpha((int)(char)*puVar6);
      if (iVar5 == 0) {
        iVar5 = _ismbcdigit((int)(char)*puVar6);
        if ((((iVar5 != 0) || (uVar1 = *puVar6, uVar1 == '~')) || (uVar1 == '_')) || (uVar1 == '\'')
           ) {
          local_30c[iVar10] = *puVar6;
          goto LAB_01073861;
        }
      }
      else {
        uVar3 = _mbctoupper((int)(char)*puVar6);
        local_30c[iVar10] = (uchar)uVar3;
LAB_01073861:
        iVar10 = iVar10 + 1;
      }
      puVar6 = (uchar *)CharNextA((LPCSTR)puVar6);
      local_208[0] = *puVar6;
    }
    if ((iVar8 != 0) && (local_30c[iVar10] = '.', *puVar9 != '\0')) {
      puVar6 = local_30c + iVar10 + 1;
      do {
        iVar8 = _ismbcalpha((int)(char)*puVar9);
        if (iVar8 == 0) {
          iVar8 = _ismbcdigit((int)(char)*puVar9);
          if (iVar8 != 0) {
            *puVar6 = *puVar9;
            goto LAB_010738cc;
          }
        }
        else {
          uVar3 = _mbctoupper((int)(char)*puVar9);
          *puVar6 = (uchar)uVar3;
LAB_010738cc:
          puVar6 = puVar6 + 1;
        }
        puVar9 = (uchar *)CharNextA((LPCSTR)puVar9);
      } while (*puVar9 != '\0');
      puVar9 = local_30c;
      puVar6 = puVar4;
      goto LAB_010739d7;
    }
  }
  puVar9 = local_30c;
  puVar6 = puVar4;
LAB_010739d7:
  _mbscpy(puVar6,puVar9);
  return 0;
}


