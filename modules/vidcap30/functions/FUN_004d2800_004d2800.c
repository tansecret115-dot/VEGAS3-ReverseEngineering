/* Module: vidcap30.exe
   Function: FUN_004d2800
   Address: 004d2800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004d2800(int param_1)

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
  
  if ((DAT_00642318 & 1) == 0) {
    DAT_00642318 = DAT_00642318 | 1;
    DAT_005b7ae8 = _SfGetString2_8(DAT_005c16d8,0x10ad);
    DAT_005b7afc._2_2_ = 6;
    DAT_005b7b30 = 6;
    DAT_005b7aec = 0;
    DAT_005b7af0 = 0;
    DAT_005b7af4 = 0x50210002;
    DAT_005b7af8 = 0;
    DAT_005b7afc._0_2_ = 0x37;
    DAT_005b7b00._0_2_ = 0x9a;
    DAT_005b7b00._2_2_ = 100;
    _DAT_005b7b04 = 0x12e;
    _DAT_005b7b08 = 0xffff;
    _DAT_005b7b0c = 0x85;
    _DAT_005b7b10 = 0;
    _DAT_005b7b14 = 0;
    _DAT_005b7b18 = 0;
    _DAT_005b7b1c = &DAT_00586c70;
    _DAT_005b7b20 = 0;
    _DAT_005b7b24 = 0;
    _DAT_005b7b28 = 0x50000000;
    _DAT_005b7b2c = 0;
    DAT_005b7b32 = 0x16;
    DAT_005b7b34 = 0x30;
    DAT_005b7b36 = 8;
    _DAT_005b7b38 = 0x12d;
    _DAT_005b7b3c = 0xffff;
    _DAT_005b7b40 = 0x82;
    _DAT_005b7b44 = 0;
    _DAT_005b7b48 = 0x5a530000;
    _DAT_005b7b4c = 0;
    _DAT_005b7b50 = _SfGetString2_8(DAT_005c16d8,0x10ae);
    _DAT_005b7b84 = &DAT_00586c70;
    _DAT_005b7b54 = 0;
    _DAT_005b7b58 = 0;
    _DAT_005b7b5c = 0x50810044;
    _DAT_005b7b60 = 0;
    DAT_005b7b64 = 0x37;
    DAT_005b7b66 = 0x17;
    DAT_005b7b68 = 0xbe;
    DAT_005b7b6a = 0x1e;
    _DAT_005b7b6c = 0x12f;
    _DAT_005b7b70 = 0xffff;
    _DAT_005b7b74 = 0x81;
    _DAT_005b7b78 = 0;
    _DAT_005b7b7c = 0;
    _DAT_005b7b80 = 0;
    _DAT_005b7b88 = 0;
    _DAT_005b7b8c = 0;
    _DAT_005b7b90 = 0x50030001;
    _DAT_005b7b94 = 0;
    _DAT_005b7b98 = 0x8d;
    _DAT_005b7b9a = 0x42;
    _DAT_005b7b9c = 0x32;
    _DAT_005b7b9e = 0xe;
    _DAT_005b7ba0 = 1;
    _DAT_005b7ba4 = 0xffff;
    _DAT_005b7ba8 = 0x80;
    _DAT_005b7bac = 0;
    _DAT_005b7bb0 = 0x5a530000;
    _DAT_005b7bb4 = 0;
    _DAT_005b7bb8 = _SfGetString2_8(DAT_005c16d8,0x10af);
    _DAT_005b7bbc = 0;
    _DAT_005b7bc0 = 0;
    _DAT_005b7bc4 = 0x50010000;
    _DAT_005b7bc8 = 0;
    _DAT_005b7bcc = 0xc3;
    _DAT_005b7bce = 0x42;
    _DAT_005b7bd0 = 0x32;
    _DAT_005b7bd2 = 0xe;
    _DAT_005b7bd4 = 2;
    _DAT_005b7bd8 = 0xffff;
    _DAT_005b7bdc = 0x80;
    _DAT_005b7be0 = 0;
    _DAT_005b7be4 = 0x5a530000;
    _DAT_005b7be8 = 0;
    _DAT_005b7bec = _SfGetString2_8(DAT_005c16d8,0x10b0);
    _DAT_005b7bf0 = 0;
    _DAT_005b7bf4 = 0;
  }
  uVar13 = 0xffffffff;
  pvVar3 = GlobalAlloc(0x40,0x400);
  pMem = GlobalLock(pvVar3);
  if (pMem != (undefined4 *)0x0) {
    uVar14 = 0;
    uVar9 = 0;
    psVar4 = &DAT_005b7b30;
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
    } while (psVar4 < &DAT_005b7c00);
    *pMem = 0x80c820c0;
    pMem[1] = 0x10000;
    local_48 = uVar14 << 0x10;
    pMem[2] = 6;
    pMem[3] = local_48;
    *(short *)(pMem + 4) = (short)uVar9;
    *(undefined2 *)((int)pMem + 0x12) = 0;
    *(undefined2 *)(pMem + 5) = 0;
    pCVar5 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x10ac);
    iVar6 = lstrlenA(pCVar5);
    pCVar5 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x10ac);
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
    local_58 = &DAT_005b7adc;
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
    } while (local_58 < &DAT_005b7c14);
    uVar13 = _SfDialogBoxIndirectParam_20
                       (DAT_005c16d8,pMem,*(undefined4 *)(param_1 + 0x20),&LAB_004d2d90,param_1);
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return uVar13;
}


