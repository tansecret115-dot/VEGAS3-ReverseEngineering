/* Module: vegas30.exe
   Function: FUN_005e1260
   Address: 005e1260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e1260(uchar *param_1,uchar *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *lpString1;
  uchar *puVar4;
  int iVar5;
  LPCSTR lpString1_00;
  LPCSTR pCVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 local_264;
  uchar *local_260;
  int local_258 [6];
  uchar local_240 [32];
  int local_220 [3];
  uchar local_214 [30];
  uchar local_1f6 [30];
  uchar local_1d8 [32];
  undefined4 local_1b8;
  int local_1b4 [6];
  int local_19c [6];
  int local_184 [6];
  int local_16c [6];
  int local_154 [6];
  int local_13c [79];
  
  local_264 = 0;
  iVar1 = _ismbcspace((int)(char)*param_1);
  puVar2 = param_1;
  while (iVar1 != 0) {
    puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
    iVar1 = _ismbcspace((int)(char)*puVar2);
  }
  local_260 = param_1;
  puVar3 = (uchar *)FUN_005e3c20(param_1,0);
  if (puVar3 == (uchar *)0x0) {
    return 0;
  }
  iVar1 = lstrcmpA("TITLE:",(LPCSTR)puVar2);
  if (iVar1 == 0) {
    _mbscpy(param_2,puVar3);
    return 1;
  }
  iVar1 = lstrcmpA("FCM:",(LPCSTR)puVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_005e3c20(puVar3,0);
    if (iVar1 != 0) {
      iVar1 = lstrcmpA((LPCSTR)puVar3,"DROP");
      *param_3 = 2 - (uint)(iVar1 != 0);
      return 1;
    }
    return 1;
  }
  iVar1 = lstrcmpA("M/S",(LPCSTR)puVar2);
  if (((iVar1 != 0) && (iVar1 = lstrcmpA((LPCSTR)&PTR_DAT_0062ab50,(LPCSTR)puVar2), iVar1 != 0)) &&
     (iVar1 = lstrcmpA("M2",(LPCSTR)puVar2), iVar1 != 0)) {
    puVar4 = puVar3;
    if (*(int *)(param_2 + 0x104) == 0xb) {
      iVar1 = lstrcmpA("EFFECTS",(LPCSTR)puVar2);
      if (iVar1 == 0) {
        lpString1 = (uchar *)FUN_005e3c20(puVar3,0);
        if (lpString1 == (uchar *)0x0) {
          return 0;
        }
        iVar1 = lstrcmpA((LPCSTR)puVar3,"NAME");
        puVar4 = lpString1;
        local_260 = puVar3;
        if (iVar1 == 0) {
          puVar4 = (uchar *)FUN_005e3c20(lpString1,0);
          if (puVar4 == (uchar *)0x0) {
            return 0;
          }
          iVar1 = lstrcmpA((LPCSTR)lpString1,"IS");
          local_260 = lpString1;
          if (iVar1 == 0) {
            local_264 = 1;
            iVar1 = **(int **)(param_2 + 0x108);
            do {
              if (iVar1 < 1) goto LAB_005e13de;
              iVar1 = iVar1 + -1;
              iVar9 = *(int *)(*(int *)(param_2 + 0x108) + 4) * iVar1 +
                      *(int *)(*(int *)(param_2 + 0x108) + 8);
              iVar5 = lstrcmpA((LPCSTR)(iVar9 + 0x48),"C");
            } while (iVar5 == 0);
            _mbscpy((uchar *)(iVar9 + 0xfc),puVar4);
          }
        }
      }
LAB_005e13de:
      iVar1 = lstrcmpA("REEL",(LPCSTR)puVar2);
      if (iVar1 == 0) {
        pCVar6 = (LPCSTR)FUN_005e3c20(puVar4,0);
        if (pCVar6 == (LPCSTR)0x0) {
          return local_264;
        }
        _mbscpy(local_240,puVar4);
        lpString1_00 = (LPCSTR)FUN_005e3c20(pCVar6,0);
        if (lpString1_00 == (LPCSTR)0x0) {
          return local_264;
        }
        iVar1 = lstrcmpA(pCVar6,"IS");
        if (iVar1 != 0) {
          return local_264;
        }
        puVar2 = (uchar *)FUN_005e3c20(lpString1_00,0);
        if (puVar2 != (uchar *)0x0) {
          iVar1 = lstrcmpA(lpString1_00,"CLIP");
          if (iVar1 != 0) {
            return local_264;
          }
          iVar1 = **(int **)(param_2 + 0x108);
          if (0 < iVar1) {
            do {
              iVar1 = iVar1 + -1;
              iVar9 = *(int *)(*(int *)(param_2 + 0x108) + 4) * iVar1 +
                      *(int *)(*(int *)(param_2 + 0x108) + 8);
              iVar5 = lstrcmpA((LPCSTR)(iVar9 + 0xc),(LPCSTR)local_240);
              if (iVar5 == 0) {
                _mbscpy((uchar *)(iVar9 + 0x11a),puVar2);
              }
            } while (0 < iVar1);
            return 1;
          }
          return 1;
        }
        return local_264;
      }
      iVar1 = lstrcmpA("SPLIT:",(LPCSTR)puVar2);
      if (iVar1 == 0) {
        puVar2 = (uchar *)FUN_005e3c20(puVar4,0);
        if (puVar2 == (uchar *)0x0) {
          return local_264;
        }
        iVar1 = lstrcmpA((LPCSTR)puVar4,"AUDIO");
        if (iVar1 == 0) {
          puVar3 = (uchar *)FUN_005e3c20(puVar2,0);
          if (puVar3 == (uchar *)0x0) {
            return local_264;
          }
          iVar1 = lstrcmpA((LPCSTR)puVar2,"DELAY=");
          puVar4 = puVar2;
          puVar2 = puVar3;
          if (iVar1 == 0) {
            puVar2 = (uchar *)FUN_005e3c20(puVar3,0);
            if (puVar2 == (uchar *)0x0) {
              return local_264;
            }
            _SFSMPTE_TextToSMPTE_8(puVar3,param_5);
            local_264 = 1;
            puVar4 = puVar3;
          }
        }
        iVar1 = lstrcmpA((LPCSTR)puVar4,"VIDEO");
        if (iVar1 != 0) {
          return local_264;
        }
        iVar1 = FUN_005e3c20(puVar2,0);
        if (iVar1 == 0) {
          return local_264;
        }
        iVar5 = lstrcmpA((LPCSTR)puVar2,"DELAY=");
        if (iVar5 == 0) {
          iVar5 = FUN_005e3c20(iVar1,0);
          if (iVar5 != 0) {
            _SFSMPTE_TextToSMPTE_8(iVar1,param_4);
            return 1;
          }
          return local_264;
        }
        return local_264;
      }
    }
    puVar3 = puVar4;
    if ((*(int *)(param_2 + 0x104) == 0xc) && (iVar1 = lstrcmpA("*",(LPCSTR)puVar2), iVar1 == 0)) {
      local_264 = 1;
      puVar3 = (uchar *)FUN_005e3c20(puVar4,0);
      if (puVar3 == (uchar *)0x0) {
        return 1;
      }
      iVar1 = lstrcmpA((LPCSTR)puVar4,"FROM");
      if ((iVar1 == 0) || (iVar1 = lstrcmpA((LPCSTR)puVar4,"TO"), iVar1 == 0)) {
        iVar1 = lstrcmpA((LPCSTR)puVar4,"TO");
        pCVar6 = (LPCSTR)FUN_005e3c20(puVar3,0);
        if (pCVar6 == (LPCSTR)0x0) {
          return 1;
        }
        iVar5 = lstrcmpA((LPCSTR)puVar3,"CLIP");
        if (iVar5 != 0) {
          return 1;
        }
        puVar2 = (uchar *)FUN_005e3c20(pCVar6,0);
        if (puVar2 == (uchar *)0x0) {
          return 1;
        }
        iVar5 = lstrcmpA(pCVar6,"NAME:");
        if (iVar5 == 0) {
          iVar5 = **(int **)(param_2 + 0x108);
          if (**(int **)(param_2 + 0x108) < 1) {
            return 1;
          }
          while( true ) {
            iVar11 = iVar5 + -1;
            iVar8 = *(int *)(*(int *)(param_2 + 0x108) + 4) * iVar11 +
                    *(int *)(*(int *)(param_2 + 0x108) + 8);
            iVar9 = lstrcmpA((LPCSTR)(iVar8 + 0x48),"C");
            if (((iVar9 == 0) && (iVar1 != 0)) ||
               ((iVar9 = lstrcmpA((LPCSTR)(iVar8 + 0x48),"C"), iVar9 != 0 && (iVar1 == 0)))) break;
            iVar5 = iVar11;
            if (iVar11 < 1) {
              return 1;
            }
          }
          iVar1 = lstrcmpA((LPCSTR)(iVar8 + 0x11a),"");
          if (iVar1 == 0) {
            _mbscpy((uchar *)(iVar8 + 0x11a),puVar2);
          }
          if (0 < iVar11) {
            iVar5 = *(int *)(*(int *)(param_2 + 0x108) + 4) * (iVar5 + -2) +
                    *(int *)(*(int *)(param_2 + 0x108) + 8);
            iVar1 = lstrcmpA((LPCSTR)(iVar8 + 0xc),(LPCSTR)(iVar5 + 0xc));
            if (iVar1 != 0) {
              return 1;
            }
            puVar3 = (uchar *)(iVar5 + 0x11a);
            iVar1 = lstrcmpA((LPCSTR)puVar3,"");
            if (iVar1 == 0) {
              _mbscpy(puVar3,puVar2);
              return 1;
            }
            return 1;
          }
          return 1;
        }
        return 1;
      }
      iVar1 = lstrcmpA((LPCSTR)puVar4,"REEL");
      local_260 = puVar4;
      if (iVar1 == 0) {
        local_260 = (uchar *)FUN_005e3c20(puVar3,0);
        if (local_260 == (uchar *)0x0) {
          return 1;
        }
        _mbscpy(local_240,puVar3);
        puVar2 = (uchar *)FUN_005e3c20(local_260,0);
        if (puVar2 == (uchar *)0x0) {
          return 1;
        }
        iVar1 = lstrcmpA((LPCSTR)local_260,"IS");
        puVar3 = puVar2;
        if (iVar1 == 0) {
          puVar3 = (uchar *)FUN_005e3c20(puVar2,0);
          if (puVar3 == (uchar *)0x0) {
            return 1;
          }
          iVar1 = lstrcmpA((LPCSTR)puVar2,"CLIP");
          local_260 = puVar2;
          if (iVar1 == 0) {
            piVar7 = *(int **)(param_2 + 0x108);
            iVar1 = *piVar7;
            if (0 < iVar1) {
              iVar9 = piVar7[1] * (iVar1 + -1) + piVar7[2];
              pCVar6 = (LPCSTR)(iVar9 + 0xc);
              iVar5 = lstrcmpA(pCVar6,(LPCSTR)local_240);
              if (iVar5 == 0) {
                _mbscpy((uchar *)(iVar9 + 0x11a),puVar3);
              }
              if (0 < iVar1 + -1) {
                iVar5 = *(int *)(*(int *)(param_2 + 0x108) + 4) * (iVar1 + -2) +
                        *(int *)(*(int *)(param_2 + 0x108) + 8);
                iVar1 = lstrcmpA(pCVar6,(LPCSTR)(iVar5 + 0xc));
                if (iVar1 == 0) {
                  puVar2 = (uchar *)(iVar5 + 0x11a);
                  iVar1 = lstrcmpA((LPCSTR)puVar2,"");
                  if (iVar1 == 0) {
                    _mbscpy(puVar2,puVar3);
                  }
                }
              }
            }
          }
        }
      }
      iVar1 = lstrcmpA("EFFECT",(LPCSTR)local_260);
      if (iVar1 == 0) {
        puVar2 = (uchar *)FUN_005e3c20(puVar3,0);
        if (puVar2 == (uchar *)0x0) {
          return 1;
        }
        iVar1 = lstrcmpA((LPCSTR)puVar3,"NAME:");
        if (iVar1 == 0) {
          iVar1 = **(int **)(param_2 + 0x108);
          if (iVar1 < 1) {
            return 1;
          }
          do {
            iVar1 = iVar1 + -1;
            iVar9 = *(int *)(*(int *)(param_2 + 0x108) + 4) * iVar1 +
                    *(int *)(*(int *)(param_2 + 0x108) + 8);
            iVar5 = lstrcmpA((LPCSTR)(iVar9 + 0x48),"C");
            if (iVar5 != 0) {
              _mbscpy((uchar *)(iVar9 + 0xfc),puVar2);
              return 1;
            }
          } while (0 < iVar1);
          return 1;
        }
        return 1;
      }
    }
    piVar7 = local_220;
    for (iVar1 = 0x88; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_220[0] = *param_3;
    iVar1 = _ismbcdigit((int)(char)*local_260);
    if (iVar1 != 0) {
      local_220[2] = _SfTextToLongToken_8(local_260,0);
      puVar2 = (uchar *)FUN_005e3c20(puVar3,0);
      if (puVar2 == (uchar *)0x0) {
        return local_264;
      }
      _mbscpy(local_214,puVar3);
      puVar3 = (uchar *)FUN_005e3c20(puVar2,0);
      if (puVar3 == (uchar *)0x0) {
        return local_264;
      }
      iVar1 = lstrcmpA((LPCSTR)local_214,"BL");
      if ((iVar1 != 0) || (iVar1 = lstrcmpA((LPCSTR)puVar2,"V"), iVar1 != 0)) {
        _mbscpy(local_1f6,puVar2);
        puVar2 = (uchar *)FUN_005e3c20(puVar3,0);
        if (puVar2 == (uchar *)0x0) {
          return local_264;
        }
        _mbscpy(local_1d8,puVar3);
        iVar1 = lstrcmpA("C",(LPCSTR)puVar3);
        puVar4 = puVar2;
        if ((iVar1 != 0) && (iVar1 = lstrcmpA("K",(LPCSTR)puVar3), iVar1 != 0)) {
          puVar4 = (uchar *)FUN_005e3c20(puVar2,0);
          if (puVar4 == (uchar *)0x0) {
            return local_264;
          }
          local_1b8 = _SfTextToLongToken_8(puVar2,0);
          puVar3 = puVar2;
        }
        iVar1 = lstrcmpA("K",(LPCSTR)puVar3);
        if ((iVar1 == 0) && (puVar4 = (uchar *)FUN_005e3c20(puVar4,0), puVar4 == (uchar *)0x0)) {
          return local_264;
        }
        piVar7 = param_4;
        piVar10 = local_1b4;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar10 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar10 = piVar10 + 1;
        }
        local_1b4[0] = local_220[0];
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *param_4 = 0;
          param_4 = param_4 + 1;
        }
        piVar7 = param_5;
        piVar10 = local_19c;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar10 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar10 = piVar10 + 1;
        }
        local_19c[0] = local_220[0];
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *param_5 = 0;
          param_5 = param_5 + 1;
        }
        iVar1 = FUN_005e3c20(puVar4,0);
        if (iVar1 == 0) {
          return local_264;
        }
        _SFSMPTE_TextToSMPTE_8(puVar4,local_258);
        piVar7 = local_258;
        piVar10 = local_184;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar10 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar10 = piVar10 + 1;
        }
        local_184[0] = *param_3;
        iVar5 = FUN_005e3c20(iVar1,0);
        if (iVar5 != 0) {
          _SFSMPTE_TextToSMPTE_8(iVar1,local_258);
          local_16c[0] = *param_3;
          piVar7 = local_258;
          piVar10 = local_16c;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar10 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar10 = piVar10 + 1;
          }
          iVar1 = FUN_005e3c20(iVar5,0);
          if (iVar1 == 0) {
            return local_264;
          }
          _SFSMPTE_TextToSMPTE_8(iVar5,local_258);
          piVar7 = local_258;
          piVar10 = local_154;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar10 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar10 = piVar10 + 1;
          }
          local_154[0] = 1;
          iVar5 = FUN_005e3c20(iVar1,0);
          if (iVar5 != 0) {
            _SFSMPTE_TextToSMPTE_8(iVar1,local_258);
            piVar7 = local_258;
            piVar10 = local_13c;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar10 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar10 = piVar10 + 1;
            }
            local_13c[0] = 1;
            _SfList_InsertList_16(*(undefined4 *)(param_2 + 0x108),0xffffffff,local_220,1);
            return 1;
          }
          return local_264;
        }
        return local_264;
      }
    }
  }
  return 1;
}


