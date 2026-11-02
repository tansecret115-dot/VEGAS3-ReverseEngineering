/* Module: vidcap30.exe
   Function: FUN_00441da0
   Address: 00441da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441da0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  LPSTR pCVar5;
  char *pcVar6;
  LPCSTR lpsz;
  LPCSTR lpsz_00;
  int iVar7;
  code *pcVar8;
  char local_208 [259];
  undefined1 local_105;
  CHAR local_104 [260];
  
  uVar2 = DAT_005bb838;
  GetWindowTextA(*(HWND *)(param_1 + 0x14e0),local_208,0x104);
  iVar3 = FUN_004436d0(uVar2,local_208,0);
  if (iVar3 != 0) {
    iVar4 = GetWindowTextA(*(HWND *)(param_1 + 0x14dc),local_208,0x104);
    if (iVar4 == 0) {
      lstrcpynA(local_208,"Clip",0x104);
      local_105 = 0;
    }
    iVar4 = lstrlenA(local_208);
    pCVar5 = local_208 + iVar4;
    if (pCVar5 != local_208) {
      do {
        pCVar5 = CharPrevA(local_208,pCVar5);
        iVar4 = _ismbcspace((int)*pCVar5);
        if (iVar4 == 0) {
          pCVar5 = CharNextA(pCVar5);
          break;
        }
      } while (pCVar5 != local_208);
    }
    *pCVar5 = '\0';
    pcVar6 = (char *)FUN_00441d50(local_208);
    iVar4 = _ismbcspace((int)*pcVar6);
    lpsz = pcVar6;
    while (iVar4 != 0) {
      lpsz = CharNextA(lpsz);
      iVar4 = _ismbcspace((int)*lpsz);
    }
    cVar1 = *lpsz;
    lpsz_00 = lpsz;
    while ((cVar1 != '\0' && (iVar4 = _ismbcdigit((int)*lpsz_00), iVar4 != 0))) {
      lpsz_00 = CharNextA(lpsz_00);
      cVar1 = *lpsz_00;
    }
    if (*lpsz_00 == '\0') {
      iVar4 = _SfTextToLongToken_8(lpsz,0);
      *pcVar6 = '\0';
    }
    else {
      iVar4 = 0;
    }
    iVar7 = lstrlenA(local_208);
    pCVar5 = local_208 + iVar7;
    pcVar8 = CharNextA_exref;
    if (pCVar5 != local_208) {
      do {
        pCVar5 = CharPrevA(local_208,pCVar5);
        iVar7 = _ismbcspace((int)*pCVar5);
        pcVar8 = CharNextA_exref;
        if (iVar7 == 0) {
          pCVar5 = CharNextA(pCVar5);
          break;
        }
      } while (pCVar5 != local_208);
    }
    *pCVar5 = '\0';
    do {
      iVar4 = iVar4 + 1;
      pcVar6 = local_208;
      iVar7 = _ismbcspace((int)local_208[0]);
      while (iVar7 != 0) {
        pcVar6 = (char *)(*pcVar8)(pcVar6);
        iVar7 = _ismbcspace((int)*pcVar6);
      }
      SfPrintF(local_104,"%s %03d",pcVar6,iVar4);
      iVar7 = FUN_004444d0(uVar2,iVar3,local_104,0);
    } while (iVar7 != 0);
    SetWindowTextA(*(HWND *)(param_1 + 0x14dc),local_104);
  }
  return;
}


