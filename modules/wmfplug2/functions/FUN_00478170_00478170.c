/* Module: wmfplug2.dll
   Function: FUN_00478170
   Address: 00478170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00478170(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  HGLOBAL pvVar3;
  LPCDLGTEMPLATEA pMem;
  short *psVar4;
  LPCSTR pCVar5;
  int iVar6;
  size_t sVar7;
  HDC hdc;
  HGDIOBJ pvVar8;
  uint uVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *local_58;
  int local_48;
  CHAR local_40 [64];
  
  if ((DAT_004af358 & 1) == 0) {
    DAT_004af358 = DAT_004af358 | 1;
    DAT_00489c38 = FUN_00420d00(DAT_00489e30,0x10ad);
    DAT_00489c4c._2_2_ = 6;
    DAT_00489c80 = 6;
    DAT_00489c3c = 0;
    DAT_00489c40 = 0;
    DAT_00489c44 = 0x50210002;
    DAT_00489c48 = 0;
    DAT_00489c4c._0_2_ = 0x37;
    DAT_00489c50._0_2_ = 0x9a;
    DAT_00489c50._2_2_ = 100;
    _DAT_00489c54 = 0x12e;
    _DAT_00489c58 = 0xffff;
    _DAT_00489c5c = 0x85;
    _DAT_00489c60 = 0;
    _DAT_00489c64 = 0;
    _DAT_00489c68 = 0;
    _DAT_00489c6c = &DAT_0047b988;
    _DAT_00489c70 = 0;
    _DAT_00489c74 = 0;
    _DAT_00489c78 = 0x50000000;
    _DAT_00489c7c = 0;
    DAT_00489c82 = 0x16;
    DAT_00489c84 = 0x30;
    DAT_00489c86 = 8;
    _DAT_00489c88 = 0x12d;
    _DAT_00489c8c = 0xffff;
    _DAT_00489c90 = 0x82;
    _DAT_00489c94 = 0;
    _DAT_00489c98 = 0x5a530000;
    _DAT_00489c9c = 0;
    _DAT_00489ca0 = FUN_00420d00(DAT_00489e30,0x10ae);
    _DAT_00489cd4 = &DAT_0047b988;
    _DAT_00489ca4 = 0;
    _DAT_00489ca8 = 0;
    _DAT_00489cac = 0x50810044;
    _DAT_00489cb0 = 0;
    DAT_00489cb4 = 0x37;
    DAT_00489cb6 = 0x17;
    DAT_00489cb8 = 0xbe;
    DAT_00489cba = 0x1e;
    _DAT_00489cbc = 0x12f;
    _DAT_00489cc0 = 0xffff;
    _DAT_00489cc4 = 0x81;
    _DAT_00489cc8 = 0;
    _DAT_00489ccc = 0;
    _DAT_00489cd0 = 0;
    _DAT_00489cd8 = 0;
    _DAT_00489cdc = 0;
    _DAT_00489ce0 = 0x50030001;
    _DAT_00489ce4 = 0;
    _DAT_00489ce8 = 0x8d;
    _DAT_00489cea = 0x42;
    _DAT_00489cec = 0x32;
    _DAT_00489cee = 0xe;
    _DAT_00489cf0 = 1;
    _DAT_00489cf4 = 0xffff;
    _DAT_00489cf8 = 0x80;
    _DAT_00489cfc = 0;
    _DAT_00489d00 = 0x5a530000;
    _DAT_00489d04 = 0;
    _DAT_00489d08 = FUN_00420d00(DAT_00489e30,0x10af);
    _DAT_00489d0c = 0;
    _DAT_00489d10 = 0;
    _DAT_00489d14 = 0x50010000;
    _DAT_00489d18 = 0;
    _DAT_00489d1c = 0xc3;
    _DAT_00489d1e = 0x42;
    _DAT_00489d20 = 0x32;
    _DAT_00489d22 = 0xe;
    _DAT_00489d24 = 2;
    _DAT_00489d28 = 0xffff;
    _DAT_00489d2c = 0x80;
    _DAT_00489d30 = 0;
    _DAT_00489d34 = 0x5a530000;
    _DAT_00489d38 = 0;
    _DAT_00489d3c = FUN_00420d00(DAT_00489e30,0x10b0);
    _DAT_00489d40 = 0;
    _DAT_00489d44 = 0;
  }
  uVar13 = 0xffffffff;
  pvVar3 = GlobalAlloc(0x40,0x400);
  pMem = GlobalLock(pvVar3);
  if (pMem != (LPCDLGTEMPLATEA)0x0) {
    uVar14 = 0;
    uVar9 = 0;
    psVar4 = &DAT_00489c80;
    do {
      uVar1 = psVar4[2] + 6 + (int)*psVar4;
      if (uVar14 <= uVar1) {
        uVar14 = uVar1;
      }
      uVar1 = psVar4[3] + 6 + (int)psVar4[1];
      if (uVar9 <= uVar1) {
        uVar9 = uVar1;
      }
      psVar4 = psVar4 + 0x1a;
    } while (psVar4 < &DAT_00489d50);
    pMem->style = 0x80c820c0;
    pMem->dwExtendedStyle = 0x10000;
    local_48 = uVar14 << 0x10;
    pMem->cdit = 6;
    pMem->x = 0;
    pMem->y = (undefined2)local_48;
    pMem->cx = local_48._2_2_;
    pMem->cy = (short)uVar9;
    *(undefined2 *)&pMem[1].style = 0;
    *(undefined2 *)((int)&pMem[1].style + 2) = 0;
    pCVar5 = FUN_00420d00(DAT_00489e30,0x10ac);
    iVar6 = lstrlenA(pCVar5);
    pCVar5 = FUN_00420d00(DAT_00489e30,0x10ac);
    MultiByteToWideChar(0,1,pCVar5,-1,(LPWSTR)&pMem[1].dwExtendedStyle,iVar6 + 1);
    *(undefined2 *)((int)&pMem[1].dwExtendedStyle + iVar6 * 2) = 0;
    sVar7 = wcslen((wchar_t *)&pMem[1].dwExtendedStyle);
    puVar2 = (undefined2 *)((int)&pMem[1].dwExtendedStyle + sVar7 * 2 + 2);
    *puVar2 = 8;
    hdc = GetDC((HWND)0x0);
    pvVar8 = GetStockObject(0x11);
    pvVar8 = SelectObject(hdc,pvVar8);
    GetTextFaceA(hdc,0x40,local_40);
    SelectObject(hdc,pvVar8);
    iVar6 = lstrlenA(local_40);
    MultiByteToWideChar(0,1,local_40,-1,puVar2 + 1,iVar6 + 1);
    puVar2[iVar6 + 1] = 0;
    sVar7 = wcslen(puVar2 + 1);
    pwVar11 = puVar2 + sVar7 + 2;
    local_58 = &DAT_00489c2c;
    do {
      puVar10 = (undefined4 *)((int)pwVar11 + (-((int)pwVar11 - (int)pMem & 3U) & 3));
      pwVar11 = (wchar_t *)((int)puVar10 + 0x12);
      *puVar10 = local_58[-7];
      puVar10[1] = local_58[-6];
      puVar10[2] = local_58[-5];
      puVar10[3] = local_58[-4];
      *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(local_58 + -3);
      if (local_58[-2] == 0xffff) {
        *pwVar11 = L'\xffff';
        *(undefined2 *)(puVar10 + 5) = *(undefined2 *)(local_58 + -1);
        pwVar12 = (wchar_t *)((int)puVar10 + 0x16);
      }
      else {
        iVar6 = lstrlenA((LPCSTR)*local_58);
        MultiByteToWideChar(0,1,(LPCSTR)*local_58,-1,pwVar11,iVar6 + 1);
        *(undefined2 *)((int)puVar10 + (iVar6 + 1) * 2 + 0x10) = 0;
        sVar7 = wcslen(pwVar11);
        pwVar12 = (wchar_t *)((int)puVar10 + sVar7 * 2 + 0x14);
      }
      if (local_58[1] == 0xffff) {
        *pwVar12 = L'\xffff';
        pwVar12[1] = *(wchar_t *)(local_58 + 2);
        pwVar12 = pwVar12 + 2;
      }
      else {
        iVar6 = lstrlenA((LPCSTR)local_58[3]);
        MultiByteToWideChar(0,1,(LPCSTR)local_58[3],-1,pwVar12,iVar6 + 1);
        pwVar12[iVar6] = L'\0';
        sVar7 = wcslen(pwVar12);
        pwVar12 = pwVar12 + sVar7 + 1;
      }
      *pwVar12 = *(wchar_t *)(local_58 + 4);
      pwVar11 = pwVar12 + 1;
      if (local_58[4] != 0) {
        uVar9 = local_58[4] - 2;
        puVar10 = (undefined4 *)local_58[5];
        for (uVar14 = uVar9 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pwVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          pwVar11 = pwVar11 + 2;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)pwVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          pwVar11 = (wchar_t *)((int)pwVar11 + 1);
        }
        pwVar11 = (wchar_t *)((int)pwVar12 + local_58[4]);
      }
      local_58 = local_58 + 0xd;
    } while (local_58 < &DAT_00489d64);
    uVar13 = FUN_0041f250(DAT_00489e30,pMem,*(HWND *)(param_1 + 0x20),(DLGPROC)&LAB_00478700,param_1
                         );
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return uVar13;
}


