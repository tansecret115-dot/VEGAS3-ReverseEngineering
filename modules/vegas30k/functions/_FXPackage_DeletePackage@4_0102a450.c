/* Module: vegas30k.dll
   Function: _FXPackage_DeletePackage@4
   Address: 0102a450
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD _FXPackage_DeletePackage_4(GUID *param_1)

{
  BYTE BVar1;
  undefined4 uVar2;
  BYTE *lpPathName;
  DWORD DVar3;
  LSTATUS LVar4;
  BOOL BVar5;
  BYTE *lpsz;
  BYTE *pBVar6;
  int iVar7;
  ulong *puVar8;
  char *pcVar9;
  GUID *pGVar10;
  CHAR *pCVar11;
  undefined4 *puVar12;
  BYTE *pBVar13;
  bool bVar14;
  HKEY local_b10;
  BYTE *local_b0c;
  DWORD local_b08;
  DWORD local_b04;
  CHAR local_b00 [255];
  undefined1 local_a01;
  OLECHAR local_a00 [256];
  CHAR local_800 [41];
  undefined4 local_7d7;
  BYTE local_400 [1024];
  
                    /* 0x2a450  638  _FXPackage_DeletePackage@4 */
  if (param_1 == (GUID *)0x0) {
    return 0x80004003;
  }
  iVar7 = 4;
  bVar14 = true;
  puVar8 = &DAT_011dab90;
  pGVar10 = param_1;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar14 = *puVar8 == pGVar10->Data1;
    puVar8 = puVar8 + 1;
    pGVar10 = (GUID *)&pGVar10->Data2;
  } while (bVar14);
  if (bVar14) {
    return 0x80004003;
  }
  local_b10 = (HKEY)0x0;
  uVar2._0_2_ = param_1->Data2;
  uVar2._2_2_ = param_1->Data3;
  DVar3 = _FXPackage_OpenPackageRegKey_24
                    (param_1->Data1,uVar2,*(undefined4 *)param_1->Data4,
                     *(undefined4 *)(param_1->Data4 + 4),&local_b10,0);
  if (DVar3 == 0) {
    local_b04 = 0x400;
    local_b0c = (BYTE *)0x0;
    LVar4 = RegQueryValueExA(local_b10,"Stream",(LPDWORD)0x0,&local_b08,local_400,&local_b04);
    if (LVar4 != 0) {
      return 0x80004005;
    }
    if (local_b08 == 1) {
      local_b0c = local_400;
    }
    RegCloseKey(local_b10);
    pcVar9 = "Software\\DirectShow\\Presets\\FX Packages\\";
    pCVar11 = local_800;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pCVar11 = pCVar11 + 4;
    }
    *pCVar11 = *pcVar9;
    puVar12 = &local_7d7;
    for (iVar7 = 0xf5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = 0;
    *(undefined1 *)((int)puVar12 + 2) = 0;
    LVar4 = RegOpenKeyExA((HKEY)&DAT_80000001,local_800,0,0xf003f,&local_b10);
    DVar3 = 0;
    if (LVar4 == 0) {
      StringFromGUID2(param_1,local_a00,0x200);
      if ((&stack0x00000000 == (undefined1 *)0xa00) || (local_a00[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_a00,-1,local_b00,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0xb00) {
        local_b00[0] = '\0';
      }
      local_a01 = 0;
      LVar4 = RegDeleteKeyA(local_b10,local_b00);
      lpPathName = local_b0c;
      if (LVar4 == 0) {
        BVar5 = DeleteFileA((LPCSTR)local_b0c);
        if (BVar5 != 0) {
          pBVar6 = lpPathName;
          pBVar13 = (BYTE *)0x0;
          while( true ) {
            BVar1 = *pBVar6;
            lpsz = pBVar6;
            while ((BVar1 != '\0' && (BVar1 != '\\'))) {
              lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
              BVar1 = *lpsz;
            }
            if (*lpsz == '\0') break;
            pBVar6 = lpsz + 1;
            pBVar13 = lpsz;
          }
          *pBVar13 = '\0';
          BVar5 = RemoveDirectoryA((LPCSTR)lpPathName);
          if (BVar5 != 0) {
            RegCloseKey(local_b10);
            return 0;
          }
        }
        DVar3 = GetLastError();
      }
      RegCloseKey(local_b10);
    }
    return DVar3;
  }
  return DVar3;
}


