/* Module: g2plug.dll
   Function: FUN_5f8668f0
   Address: 5f8668f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f8668f0(int param_1)

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
  
  if ((DAT_5f89ca48 & 1) == 0) {
    DAT_5f89ca48 = DAT_5f89ca48 | 1;
    DAT_5f877350 = FUN_5f818540(DAT_5f877520,0x10ac);
    DAT_5f877364._2_2_ = 6;
    DAT_5f877398 = 6;
    DAT_5f877354 = 0;
    DAT_5f877358 = 0;
    DAT_5f87735c = 0x50210002;
    DAT_5f877360 = 0;
    DAT_5f877364._0_2_ = 0x37;
    DAT_5f877368._0_2_ = 0x9a;
    DAT_5f877368._2_2_ = 100;
    _DAT_5f87736c = 0x12e;
    _DAT_5f877370 = 0xffff;
    _DAT_5f877374 = 0x85;
    _DAT_5f877378 = 0;
    _DAT_5f87737c = 0;
    _DAT_5f877380 = 0;
    _DAT_5f877384 = &DAT_5f86ac20;
    _DAT_5f877388 = 0;
    _DAT_5f87738c = 0;
    _DAT_5f877390 = 0x50000000;
    _DAT_5f877394 = 0;
    DAT_5f87739a = 0x16;
    DAT_5f87739c = 0x30;
    DAT_5f87739e = 8;
    _DAT_5f8773a0 = 0x12d;
    _DAT_5f8773a4 = 0xffff;
    _DAT_5f8773a8 = 0x82;
    _DAT_5f8773ac = 0;
    _DAT_5f8773b0 = 0x5a530000;
    _DAT_5f8773b4 = 0;
    _DAT_5f8773b8 = FUN_5f818540(DAT_5f877520,0x10ad);
    _DAT_5f8773ec = &DAT_5f86ac20;
    _DAT_5f8773bc = 0;
    _DAT_5f8773c0 = 0;
    _DAT_5f8773c4 = 0x50810044;
    _DAT_5f8773c8 = 0;
    DAT_5f8773cc = 0x37;
    DAT_5f8773ce = 0x17;
    DAT_5f8773d0 = 0xbe;
    DAT_5f8773d2 = 0x1e;
    _DAT_5f8773d4 = 0x12f;
    _DAT_5f8773d8 = 0xffff;
    _DAT_5f8773dc = 0x81;
    _DAT_5f8773e0 = 0;
    _DAT_5f8773e4 = 0;
    _DAT_5f8773e8 = 0;
    _DAT_5f8773f0 = 0;
    _DAT_5f8773f4 = 0;
    _DAT_5f8773f8 = 0x50030001;
    _DAT_5f8773fc = 0;
    _DAT_5f877400 = 0x8d;
    _DAT_5f877402 = 0x42;
    _DAT_5f877404 = 0x32;
    _DAT_5f877406 = 0xe;
    _DAT_5f877408 = 1;
    _DAT_5f87740c = 0xffff;
    _DAT_5f877410 = 0x80;
    _DAT_5f877414 = 0;
    _DAT_5f877418 = 0x5a530000;
    _DAT_5f87741c = 0;
    _DAT_5f877420 = FUN_5f818540(DAT_5f877520,0x10ae);
    _DAT_5f877424 = 0;
    _DAT_5f877428 = 0;
    _DAT_5f87742c = 0x50010000;
    _DAT_5f877430 = 0;
    _DAT_5f877434 = 0xc3;
    _DAT_5f877436 = 0x42;
    _DAT_5f877438 = 0x32;
    _DAT_5f87743a = 0xe;
    _DAT_5f87743c = 2;
    _DAT_5f877440 = 0xffff;
    _DAT_5f877444 = 0x80;
    _DAT_5f877448 = 0;
    _DAT_5f87744c = 0x5a530000;
    _DAT_5f877450 = 0;
    _DAT_5f877454 = FUN_5f818540(DAT_5f877520,0x10af);
    _DAT_5f877458 = 0;
    _DAT_5f87745c = 0;
  }
  uVar13 = 0xffffffff;
  pvVar3 = GlobalAlloc(0x40,0x400);
  pMem = GlobalLock(pvVar3);
  if (pMem != (LPCDLGTEMPLATEA)0x0) {
    uVar14 = 0;
    uVar9 = 0;
    psVar4 = &DAT_5f877398;
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
    } while (psVar4 < &DAT_5f877468);
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
    pCVar5 = FUN_5f818540(DAT_5f877520,0x10ab);
    iVar6 = lstrlenA(pCVar5);
    pCVar5 = FUN_5f818540(DAT_5f877520,0x10ab);
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
    local_58 = &DAT_5f877344;
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
    } while (local_58 < &DAT_5f87747c);
    uVar13 = FUN_5f816a90(DAT_5f877520,pMem,*(HWND *)(param_1 + 0x20),(DLGPROC)&LAB_5f866e80,param_1
                         );
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return uVar13;
}


