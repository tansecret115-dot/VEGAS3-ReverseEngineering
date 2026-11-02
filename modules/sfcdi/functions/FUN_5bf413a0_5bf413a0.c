/* Module: sfcdi.dll
   Function: FUN_5bf413a0
   Address: 5bf413a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf413a0(int param_1,int param_2,int param_3)

{
  uchar uVar1;
  LPCSTR pCVar2;
  uint uVar3;
  uchar *puVar4;
  int iVar5;
  uchar *puVar6;
  LPSTR lpString;
  uint uVar7;
  int iVar8;
  uchar *puVar9;
  int iVar10;
  int local_52c;
  uchar local_520 [12];
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
      pCVar2 = FUN_5bf23120((LPCSTR)local_410);
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
          goto LAB_5bf41997;
        }
        if (param_2 == 5) {
          uVar7 = local_52c + -0x1e + uVar3;
          goto LAB_5bf41525;
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
                goto LAB_5bf4160e;
              }
            }
            else {
              uVar7 = _mbctoupper((int)(char)*puVar4);
              local_514[uVar3] = (uchar)uVar7;
LAB_5bf4160e:
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
                if (0x1d < uVar3) goto LAB_5bf4147d;
                iVar8 = _ismbcalpha((int)(char)*puVar9);
                if (iVar8 == 0) {
                  iVar8 = _ismbcdigit((int)(char)*puVar9);
                  if (iVar8 != 0) {
                    local_514[uVar3] = *puVar9;
                    goto LAB_5bf41696;
                  }
                }
                else {
                  uVar7 = _mbctoupper((int)(char)*puVar9);
                  local_514[uVar3] = (uchar)uVar7;
LAB_5bf41696:
                  uVar3 = uVar3 + 1;
                }
                puVar9 = (uchar *)CharNextA((LPCSTR)puVar9);
              } while (*puVar9 != '\0');
              puVar9 = local_514;
              goto LAB_5bf41997;
            }
          }
          goto LAB_5bf4147d;
        }
        goto LAB_5bf418b4;
      }
LAB_5bf41475:
      FUN_5bf25750(local_514,"%u");
    }
    else {
      if (iVar8 != 2) {
LAB_5bf418b4:
        if (param_2 != 6) {
          return 0;
        }
        FUN_5bf25750(local_520,"~%u");
        uVar3 = lstrlenA((LPCSTR)local_520);
        if ((*(uint *)(param_3 + 0x218) & 0x40) == 0) {
          return 0;
        }
        iVar8 = 0;
        _mbscpy(local_104,puVar6);
        pCVar2 = FUN_5bf23120((LPCSTR)local_104);
        if (*pCVar2 == '.') {
          lpString = CharNextA(pCVar2);
          *pCVar2 = '\0';
          iVar8 = lstrlenA(lpString);
        }
        uVar7 = lstrlenA((LPCSTR)local_104);
        if (0x40 < iVar8 + uVar3 + uVar7) {
          if ((0x3f < iVar8 + uVar3) || (uVar7 < uVar3)) {
            return 0x8004e032;
          }
          local_104[uVar7 - uVar3] = '\0';
        }
        FUN_5bf25750(local_514,(BYTE *)"%s%s.%s");
        puVar9 = local_514;
        goto LAB_5bf41997;
      }
      pCVar2 = FUN_5bf23120((LPCSTR)local_410);
      if (pCVar2 != (LPCSTR)0x0) {
        puVar9 = (uchar *)CharNextA(pCVar2);
        *pCVar2 = '\0';
      }
      uVar3 = lstrlenA((LPCSTR)local_410);
      local_52c = lstrlenA((LPCSTR)puVar9);
      if (param_2 == 0) goto LAB_5bf41475;
      if (param_2 != 5) goto LAB_5bf416bb;
      uVar7 = local_52c + -0x40 + uVar3;
LAB_5bf41525:
      if (uVar3 < uVar7) {
        FUN_5bf25750(local_410,"%u");
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
        goto LAB_5bf41997;
      }
    }
LAB_5bf4147d:
    puVar9 = local_514;
    goto LAB_5bf41997;
  }
LAB_5bf416bb:
  pCVar2 = FUN_5bf23120((LPCSTR)local_208);
  if (*pCVar2 == '.') {
    puVar9 = (uchar *)CharNextA(pCVar2);
    *pCVar2 = '\0';
  }
  lstrlenA((LPCSTR)local_208);
  iVar8 = lstrlenA((LPCSTR)puVar9);
  if (param_2 == 0) {
    FUN_5bf25750(local_30c,"%u");
    puVar9 = local_30c;
    puVar6 = puVar4;
    goto LAB_5bf41997;
  }
  if (param_2 == 2) {
    local_200 = 0;
    if (puVar9 == (uchar *)0x0) {
      _mbscpy(local_30c,local_208);
      puVar9 = local_30c;
      puVar6 = puVar4;
      goto LAB_5bf41997;
    }
LAB_5bf4174d:
    FUN_5bf25750(local_30c,(BYTE *)"%s.%s");
  }
  else {
    if (param_2 == 3) {
      puVar9[3] = '\0';
      goto LAB_5bf4174d;
    }
    if (param_2 != 1) goto LAB_5bf418b4;
    iVar10 = 0;
    puVar6 = local_208;
    while (local_208[0] != '\0') {
      iVar5 = _ismbcalpha((int)(char)*puVar6);
      if (iVar5 == 0) {
        iVar5 = _ismbcdigit((int)(char)*puVar6);
        if ((((iVar5 != 0) || (uVar1 = *puVar6, uVar1 == '~')) || (uVar1 == '_')) || (uVar1 == '\'')
           ) {
          local_30c[iVar10] = *puVar6;
          goto LAB_5bf41821;
        }
      }
      else {
        uVar3 = _mbctoupper((int)(char)*puVar6);
        local_30c[iVar10] = (uchar)uVar3;
LAB_5bf41821:
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
            goto LAB_5bf4188c;
          }
        }
        else {
          uVar3 = _mbctoupper((int)(char)*puVar9);
          *puVar6 = (uchar)uVar3;
LAB_5bf4188c:
          puVar6 = puVar6 + 1;
        }
        puVar9 = (uchar *)CharNextA((LPCSTR)puVar9);
      } while (*puVar9 != '\0');
      puVar9 = local_30c;
      puVar6 = puVar4;
      goto LAB_5bf41997;
    }
  }
  puVar9 = local_30c;
  puVar6 = puVar4;
LAB_5bf41997:
  _mbscpy(puVar6,puVar9);
  return 0;
}


