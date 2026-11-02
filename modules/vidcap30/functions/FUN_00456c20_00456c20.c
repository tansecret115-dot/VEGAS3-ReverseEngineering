/* Module: vidcap30.exe
   Function: FUN_00456c20
   Address: 00456c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00456c20(HWND param_1,LPCSTR param_2)

{
  LPCSTR lpString2;
  undefined4 uVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  LPCSTR lpString;
  int iVar4;
  int iVar5;
  uchar *_Source;
  int iVar6;
  uint iMaxLength;
  int *piVar7;
  bool bVar8;
  int local_34c;
  undefined4 local_330;
  int local_32c [4];
  uchar *local_31c;
  undefined4 local_318;
  int local_310;
  uchar local_308 [127];
  CHAR local_289 [129];
  uchar local_208 [260];
  CHAR local_104 [260];
  
  uVar1 = DAT_005bb838;
  local_34c = 1;
  hWnd = GetDlgItem(param_1,0x9c80);
  LVar2 = SendMessageA(hWnd,0x1004,0,0);
  piVar7 = local_32c;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_31c = local_308;
  local_330 = 5;
  local_318 = 0x80;
  local_32c[0] = 0;
  if (LVar2 < 1) {
    return 1;
  }
  do {
    SendMessageA(hWnd,0x1005,0,(LPARAM)&local_330);
    iVar6 = local_310;
    lpString2 = (LPCSTR)(local_310 + 0x134);
    iVar3 = local_310 + 0x238;
    do {
      bVar8 = true;
      _SfGetPathNameFromFilePath_12(lpString2,local_104,0x104);
      lpString = (LPCSTR)_SfGetFileNameExtensionPtrA_4(lpString2);
      iVar4 = lstrlenA(local_104);
      iVar5 = lstrlenA(lpString);
      iMaxLength = (0xfa - iVar4) - iVar5;
      if ((int)iMaxLength < 0) {
        iMaxLength = 0;
      }
      else if (0x80 < iMaxLength) {
        iMaxLength = 0x80;
      }
      lstrcpynA(local_289 + 1,param_2,iMaxLength);
      local_289[iMaxLength] = '\0';
      SfPrintF(local_308,"%s $.03d",local_289 + 1,local_34c);
      iVar4 = FUN_004436d0(uVar1,iVar3,0);
      if (iVar4 == 0) {
LAB_00456d96:
        _SfGetPathNameFromFilePath_12(lpString2,local_208,0x104);
        _mbscat(local_208,local_308);
        _Source = (uchar *)_SfGetFileNameExtensionPtrA_4(lpString2);
        _mbscat(local_208,_Source);
        iVar4 = lstrcmpiA((LPCSTR)local_208,lpString2);
        if (iVar4 != 0) {
          iVar4 = _SfDoesFileExist_4(local_208);
          bVar8 = iVar4 == 0;
        }
      }
      else {
        iVar4 = FUN_004444d0(uVar1,iVar4,local_308,0);
        bVar8 = iVar4 == 0;
        if (bVar8) goto LAB_00456d96;
      }
      local_34c = local_34c + 1;
    } while (!bVar8);
    SendMessageA(hWnd,0x1006,0,(LPARAM)&local_330);
    lstrcpynA((LPSTR)(iVar6 + 0x30),(LPCSTR)local_31c,0x104);
    *(undefined1 *)(iVar6 + 0x133) = 0;
    local_32c[0] = local_32c[0] + 1;
    if (LVar2 <= local_32c[0]) {
      return 1;
    }
  } while( true );
}


