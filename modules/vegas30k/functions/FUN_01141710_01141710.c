/* Module: vegas30k.dll
   Function: FUN_01141710
   Address: 01141710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01141710(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  HGLOBAL pvVar3;
  undefined4 *pMem;
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
  
  if ((DAT_012af7d0 & 1) == 0) {
    DAT_012af7d0 = DAT_012af7d0 | 1;
    DAT_012071a8 = _SfGetString2_8(DAT_0120e5c8,0x10ad);
    DAT_012071bc._2_2_ = 6;
    DAT_012071f0 = 6;
    DAT_012071ac = 0;
    DAT_012071b0 = 0;
    DAT_012071b4 = 0x50210002;
    DAT_012071b8 = 0;
    DAT_012071bc._0_2_ = 0x37;
    DAT_012071c0._0_2_ = 0x9a;
    DAT_012071c0._2_2_ = 100;
    _DAT_012071c4 = 0x12e;
    _DAT_012071c8 = 0xffff;
    _DAT_012071cc = 0x85;
    _DAT_012071d0 = 0;
    _DAT_012071d4 = 0;
    _DAT_012071d8 = 0;
    _DAT_012071dc = &DAT_011db13c;
    _DAT_012071e0 = 0;
    _DAT_012071e4 = 0;
    _DAT_012071e8 = 0x50000000;
    _DAT_012071ec = 0;
    DAT_012071f2 = 0x16;
    DAT_012071f4 = 0x30;
    DAT_012071f6 = 8;
    _DAT_012071f8 = 0x12d;
    _DAT_012071fc = 0xffff;
    _DAT_01207200 = 0x82;
    _DAT_01207204 = 0;
    _DAT_01207208 = 0x5a530000;
    _DAT_0120720c = 0;
    _DAT_01207210 = _SfGetString2_8(DAT_0120e5c8,0x10ae);
    _DAT_01207244 = &DAT_011db13c;
    _DAT_01207214 = 0;
    _DAT_01207218 = 0;
    _DAT_0120721c = 0x50810044;
    _DAT_01207220 = 0;
    DAT_01207224 = 0x37;
    DAT_01207226 = 0x17;
    DAT_01207228 = 0xbe;
    DAT_0120722a = 0x1e;
    _DAT_0120722c = 0x12f;
    _DAT_01207230 = 0xffff;
    _DAT_01207234 = 0x81;
    _DAT_01207238 = 0;
    _DAT_0120723c = 0;
    _DAT_01207240 = 0;
    _DAT_01207248 = 0;
    _DAT_0120724c = 0;
    _DAT_01207250 = 0x50030001;
    _DAT_01207254 = 0;
    _DAT_01207258 = 0x8d;
    _DAT_0120725a = 0x42;
    _DAT_0120725c = 0x32;
    _DAT_0120725e = 0xe;
    _DAT_01207260 = 1;
    _DAT_01207264 = 0xffff;
    _DAT_01207268 = 0x80;
    _DAT_0120726c = 0;
    _DAT_01207270 = 0x5a530000;
    _DAT_01207274 = 0;
    _DAT_01207278 = _SfGetString2_8(DAT_0120e5c8,0x10af);
    _DAT_0120727c = 0;
    _DAT_01207280 = 0;
    _DAT_01207284 = 0x50010000;
    _DAT_01207288 = 0;
    _DAT_0120728c = 0xc3;
    _DAT_0120728e = 0x42;
    _DAT_01207290 = 0x32;
    _DAT_01207292 = 0xe;
    _DAT_01207294 = 2;
    _DAT_01207298 = 0xffff;
    _DAT_0120729c = 0x80;
    _DAT_012072a0 = 0;
    _DAT_012072a4 = 0x5a530000;
    _DAT_012072a8 = 0;
    _DAT_012072ac = _SfGetString2_8(DAT_0120e5c8,0x10b0);
    _DAT_012072b0 = 0;
    _DAT_012072b4 = 0;
  }
  uVar13 = 0xffffffff;
  pvVar3 = GlobalAlloc(0x40,0x400);
  pMem = GlobalLock(pvVar3);
  if (pMem != (undefined4 *)0x0) {
    uVar14 = 0;
    uVar9 = 0;
    psVar4 = &DAT_012071f0;
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
    } while (psVar4 < &DAT_012072c0);
    *pMem = 0x80c820c0;
    pMem[1] = 0x10000;
    local_48 = uVar14 << 0x10;
    pMem[2] = 6;
    pMem[3] = local_48;
    *(short *)(pMem + 4) = (short)uVar9;
    *(undefined2 *)((int)pMem + 0x12) = 0;
    *(undefined2 *)(pMem + 5) = 0;
    pCVar5 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10ac);
    iVar6 = lstrlenA(pCVar5);
    pCVar5 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10ac);
    MultiByteToWideChar(0,1,pCVar5,-1,(wchar_t *)((int)pMem + 0x16),iVar6 + 1);
    *(undefined2 *)((int)pMem + (iVar6 + 1) * 2 + 0x14) = 0;
    sVar7 = wcslen((wchar_t *)((int)pMem + 0x16));
    puVar2 = (undefined2 *)((int)pMem + sVar7 * 2 + 0x18);
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
    local_58 = &DAT_0120719c;
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
    } while (local_58 < &DAT_012072d4);
    uVar13 = _SfDialogBoxIndirectParam_20
                       (DAT_0120e5c8,pMem,*(undefined4 *)(param_1 + 0x20),&LAB_01141ca0,param_1);
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return uVar13;
}


