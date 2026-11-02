/* Module: pncrt.dll
   Function: FUN_780164b0
   Address: 780164b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_780164b0(LPSTR param_1,wchar_t *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  size_t sVar6;
  int *piVar7;
  wchar_t *pwVar8;
  int iVar9;
  BOOL local_4;
  
  uVar4 = param_3;
  pwVar8 = param_2;
  uVar2 = 0;
  local_4 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPSTR)0x0) {
    if (DAT_78042438 == 0) {
      sVar6 = wcslen(param_2);
      return sVar6;
    }
    iVar3 = WideCharToMultiByte(__lc_codepage,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar3 != 0) && (local_4 == 0)) {
      return iVar3 - 1;
    }
  }
  else if (DAT_78042438 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while ((ushort)*pwVar8 < 0x100) {
      param_1[uVar2] = (CHAR)*pwVar8;
      if (*pwVar8 == L'\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pwVar8 = pwVar8 + 1;
      if (param_3 <= uVar2) {
        return uVar2;
      }
    }
  }
  else if (__mb_cur_max == 1) {
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = FUN_780166a0(param_2,param_3);
    }
    uVar4 = WideCharToMultiByte(__lc_codepage,0x220,pwVar8,iVar3,param_1,iVar3,(LPCSTR)0x0,&local_4)
    ;
    if ((uVar4 != 0) && (local_4 == 0)) {
      if (param_1[uVar4 - 1] != '\0') {
        return uVar4;
      }
      return uVar4 - 1;
    }
  }
  else {
    iVar3 = WideCharToMultiByte(__lc_codepage,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_4)
    ;
    if (iVar3 == 0) {
      if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            iVar3 = WideCharToMultiByte(__lc_codepage,0,pwVar8,1,(LPSTR)&param_2,__mb_cur_max,
                                        (LPCSTR)0x0,&local_4);
            if ((iVar3 == 0) || (local_4 != 0)) goto LAB_78016686;
            if (uVar4 < iVar3 + uVar2) {
              return uVar2;
            }
            iVar9 = 0;
            if (0 < iVar3) {
              do {
                cVar1 = *(char *)((int)&param_2 + iVar9);
                param_1[uVar2] = cVar1;
                if (cVar1 == '\0') {
                  return uVar2;
                }
                iVar9 = iVar9 + 1;
                uVar2 = uVar2 + 1;
              } while (iVar9 < iVar3);
            }
            pwVar8 = pwVar8 + 1;
          } while (uVar2 < uVar4);
        }
        return uVar2;
      }
    }
    else if (local_4 == 0) {
      return iVar3 - 1;
    }
  }
LAB_78016686:
  piVar7 = _errno();
  *piVar7 = 0x2a;
  return 0xffffffff;
}


