/* Module: sfpaplug.dll
   Function: FUN_00449990
   Address: 00449990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00449990(int param_1)

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
  
  if ((DAT_00461868 & 1) == 0) {
    DAT_00461868 = DAT_00461868 | 1;
    DAT_0045bf28 = FUN_00416f60(DAT_0045c380,0x10ad);
    DAT_0045bf3c._2_2_ = 6;
    DAT_0045bf70 = 6;
    DAT_0045bf2c = 0;
    DAT_0045bf30 = 0;
    DAT_0045bf34 = 0x50210002;
    DAT_0045bf38 = 0;
    DAT_0045bf3c._0_2_ = 0x37;
    DAT_0045bf40._0_2_ = 0x9a;
    DAT_0045bf40._2_2_ = 100;
    _DAT_0045bf44 = 0x12e;
    _DAT_0045bf48 = 0xffff;
    _DAT_0045bf4c = 0x85;
    _DAT_0045bf50 = 0;
    _DAT_0045bf54 = 0;
    _DAT_0045bf58 = 0;
    _DAT_0045bf5c = &DAT_0044e4dc;
    _DAT_0045bf60 = 0;
    _DAT_0045bf64 = 0;
    _DAT_0045bf68 = 0x50000000;
    _DAT_0045bf6c = 0;
    DAT_0045bf72 = 0x16;
    DAT_0045bf74 = 0x30;
    DAT_0045bf76 = 8;
    _DAT_0045bf78 = 0x12d;
    _DAT_0045bf7c = 0xffff;
    _DAT_0045bf80 = 0x82;
    _DAT_0045bf84 = 0;
    _DAT_0045bf88 = 0x5a530000;
    _DAT_0045bf8c = 0;
    _DAT_0045bf90 = FUN_00416f60(DAT_0045c380,0x10ae);
    _DAT_0045bfc4 = &DAT_0044e4dc;
    _DAT_0045bf94 = 0;
    _DAT_0045bf98 = 0;
    _DAT_0045bf9c = 0x50810044;
    _DAT_0045bfa0 = 0;
    DAT_0045bfa4 = 0x37;
    DAT_0045bfa6 = 0x17;
    DAT_0045bfa8 = 0xbe;
    DAT_0045bfaa = 0x1e;
    _DAT_0045bfac = 0x12f;
    _DAT_0045bfb0 = 0xffff;
    _DAT_0045bfb4 = 0x81;
    _DAT_0045bfb8 = 0;
    _DAT_0045bfbc = 0;
    _DAT_0045bfc0 = 0;
    _DAT_0045bfc8 = 0;
    _DAT_0045bfcc = 0;
    _DAT_0045bfd0 = 0x50030001;
    _DAT_0045bfd4 = 0;
    _DAT_0045bfd8 = 0x8d;
    _DAT_0045bfda = 0x42;
    _DAT_0045bfdc = 0x32;
    _DAT_0045bfde = 0xe;
    _DAT_0045bfe0 = 1;
    _DAT_0045bfe4 = 0xffff;
    _DAT_0045bfe8 = 0x80;
    _DAT_0045bfec = 0;
    _DAT_0045bff0 = 0x5a530000;
    _DAT_0045bff4 = 0;
    _DAT_0045bff8 = FUN_00416f60(DAT_0045c380,0x10af);
    _DAT_0045bffc = 0;
    _DAT_0045c000 = 0;
    _DAT_0045c004 = 0x50010000;
    _DAT_0045c008 = 0;
    _DAT_0045c00c = 0xc3;
    _DAT_0045c00e = 0x42;
    _DAT_0045c010 = 0x32;
    _DAT_0045c012 = 0xe;
    _DAT_0045c014 = 2;
    _DAT_0045c018 = 0xffff;
    _DAT_0045c01c = 0x80;
    _DAT_0045c020 = 0;
    _DAT_0045c024 = 0x5a530000;
    _DAT_0045c028 = 0;
    _DAT_0045c02c = FUN_00416f60(DAT_0045c380,0x10b0);
    _DAT_0045c030 = 0;
    _DAT_0045c034 = 0;
  }
  uVar13 = 0xffffffff;
  pvVar3 = GlobalAlloc(0x40,0x400);
  pMem = GlobalLock(pvVar3);
  if (pMem != (LPCDLGTEMPLATEA)0x0) {
    uVar14 = 0;
    uVar9 = 0;
    psVar4 = &DAT_0045bf70;
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
    } while (psVar4 < &DAT_0045c040);
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
    pCVar5 = FUN_00416f60(DAT_0045c380,0x10ac);
    iVar6 = lstrlenA(pCVar5);
    pCVar5 = FUN_00416f60(DAT_0045c380,0x10ac);
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
    local_58 = &DAT_0045bf1c;
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
    } while (local_58 < &DAT_0045c054);
    uVar13 = FUN_004154b0(DAT_0045c380,pMem,*(HWND *)(param_1 + 0x20),(DLGPROC)&LAB_00449f20,param_1
                         );
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return uVar13;
}


