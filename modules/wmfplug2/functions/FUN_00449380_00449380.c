/* Module: wmfplug2.dll
   Function: FUN_00449380
   Address: 00449380
   Source: Ghidra pseudocode (Stage 10 batch) */


HFONT FUN_00449380(int param_1)

{
  HDC pHVar1;
  DWORD DVar2;
  int iVar3;
  HFONT pHVar4;
  int iVar5;
  HFONT pHVar6;
  HFONT pHVar7;
  HFONT pHVar8;
  HFONT pHVar9;
  HFONT pHVar10;
  int iVar11;
  HFONT pHVar12;
  DWORD DVar13;
  HFONT pHVar14;
  DWORD DVar15;
  DWORD DVar16;
  DWORD DVar17;
  uchar *puVar18;
  char *pcVar19;
  HFONT local_214;
  uchar local_210 [128];
  LOGFONTA local_190;
  undefined4 local_154 [6];
  LOGFONTA local_13c;
  LOGFONTA local_f8;
  LOGFONTA local_b4;
  LOGFONTA local_78;
  LOGFONTA local_3c;
  
  pHVar6 = DAT_0048eb78;
  pHVar7 = DAT_0048eb48;
  pHVar8 = DAT_0048eb38;
  pHVar9 = DAT_0048eb28;
  pHVar10 = DAT_0048eb18;
  pHVar4 = DAT_0048eaf8;
  switch(param_1) {
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
    pHVar4 = GetStockObject(param_1);
    return pHVar4;
  default:
    pHVar4 = (HFONT)0x0;
    break;
  case 100:
    pHVar4 = DAT_0048eb98;
    if (DAT_0048eb98 == (HFONT)0x0) {
      iVar3 = FUN_00449cb0(0x11,(LPSTR)local_210,0x80,(undefined2 *)0x0);
      pHVar1 = GetDC((HWND)0x0);
      puVar18 = local_210;
      DVar16 = 0x22;
      DVar17 = 2;
      DVar15 = 0;
      DVar13 = 0;
      DVar2 = GetTextCharset(pHVar1);
      pHVar4 = CreateFontA(iVar3,0,0,0,0,0,0,0,DVar2,DVar13,DVar15,DVar17,DVar16,(LPCSTR)puVar18);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb98 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x66:
    pHVar4 = DAT_0048eb78;
    if (DAT_0048eb78 == (HFONT)0x0) {
      local_214 = DAT_0048eb78;
      FUN_00449cb0(0xb,(LPSTR)0x0,0,(undefined2 *)&local_214);
      pHVar1 = GetDC((HWND)0x0);
      pcVar19 = "Courier New";
      DVar17 = 0x31;
      DVar15 = 2;
      DVar13 = 4;
      pHVar14 = pHVar6;
      DVar2 = GetTextCharset(pHVar1);
      iVar5 = 0x48;
      pHVar4 = pHVar6;
      pHVar10 = pHVar6;
      pHVar9 = pHVar6;
      pHVar8 = pHVar6;
      pHVar7 = pHVar6;
      pHVar12 = pHVar6;
      iVar3 = GetDeviceCaps(pHVar1,0x5a);
      iVar3 = MulDiv(1 - ((uint)local_214 & 0xffff),iVar3,iVar5);
      pHVar4 = CreateFontA(iVar3,(int)pHVar6,(int)pHVar4,(int)pHVar10,(int)pHVar9,(DWORD)pHVar8,
                           (DWORD)pHVar7,(DWORD)pHVar12,DVar2,DVar13,(DWORD)pHVar14,DVar15,DVar17,
                           pcVar19);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0xb);
      }
      DAT_0048eb78 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x68:
    pHVar4 = DAT_0048eb88;
    if (DAT_0048eb88 == (HFONT)0x0) {
      iVar3 = FUN_00449cb0(0x11,(LPSTR)local_210,0x80,(undefined2 *)0x0);
      pHVar1 = GetDC((HWND)0x0);
      puVar18 = local_210;
      DVar16 = 0x22;
      DVar17 = 2;
      DVar15 = 0;
      DVar13 = 0;
      DVar2 = GetTextCharset(pHVar1);
      pHVar4 = CreateFontA(iVar3,0,0,0,700,0,0,0,DVar2,DVar13,DVar15,DVar17,DVar16,(LPCSTR)puVar18);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb88 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x6e:
    pHVar4 = DAT_0048eb68;
    if (DAT_0048eb68 == (HFONT)0x0) {
      local_214 = DAT_0048eb68;
      FUN_00449cb0(0x11,(LPSTR)local_210,0x80,(undefined2 *)&local_214);
      pHVar1 = GetDC((HWND)0x0);
      iVar5 = 0x48;
      iVar3 = GetDeviceCaps(pHVar1,0x5a);
      iVar3 = MulDiv(1 - ((uint)local_214 & 0xffff),iVar3,iVar5);
      if (-10 < iVar3) {
        _mbscpy(local_210,(uchar *)"Small Fonts");
      }
      puVar18 = local_210;
      DVar16 = 0x22;
      DVar17 = 2;
      DVar15 = 0;
      DVar13 = 4;
      DVar2 = GetTextCharset(pHVar1);
      pHVar4 = CreateFontA(iVar3,0,0,0,0,0,0,0,DVar2,DVar13,DVar15,DVar17,DVar16,(LPCSTR)puVar18);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb68 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x70:
    pHVar4 = DAT_0048eb58;
    if (DAT_0048eb58 == (HFONT)0x0) {
      local_214 = DAT_0048eb58;
      pHVar1 = GetDC((HWND)0x0);
      FUN_00449cb0(0x11,(LPSTR)local_210,0x80,(undefined2 *)&local_214);
      iVar5 = 0x48;
      iVar3 = GetDeviceCaps(pHVar1,0x5a);
      iVar3 = MulDiv(1 - ((uint)local_214 & 0xffff),iVar3,iVar5);
      if (-10 < iVar3) {
        _mbscpy(local_210,(uchar *)"Small Fonts");
      }
      puVar18 = local_210;
      DVar16 = 0x22;
      DVar17 = 2;
      DVar15 = 0;
      DVar13 = 4;
      DVar2 = GetTextCharset(pHVar1);
      pHVar4 = CreateFontA(iVar3,0,0,0,700,0,0,0,DVar2,DVar13,DVar15,DVar17,DVar16,(LPCSTR)puVar18);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb58 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x78:
    pHVar4 = DAT_0048eb48;
    if (DAT_0048eb48 == (HFONT)0x0) {
      FUN_00449cb0(0xb,(LPSTR)local_210,0x80,(undefined2 *)&local_214);
      pHVar1 = GetDC((HWND)0x0);
      pcVar19 = "Courier New";
      DVar17 = 0x31;
      DVar15 = 2;
      DVar13 = 4;
      pHVar14 = pHVar7;
      DVar2 = GetTextCharset(pHVar1);
      iVar5 = 0x48;
      pHVar4 = pHVar7;
      pHVar10 = pHVar7;
      pHVar9 = pHVar7;
      pHVar8 = pHVar7;
      pHVar6 = pHVar7;
      pHVar12 = pHVar7;
      iVar3 = GetDeviceCaps(pHVar1,0x5a);
      iVar3 = MulDiv(2 - ((uint)local_214 & 0xffff),iVar3,iVar5);
      pHVar4 = CreateFontA(iVar3,(int)pHVar7,(int)pHVar4,(int)pHVar10,(int)pHVar9,(DWORD)pHVar8,
                           (DWORD)pHVar6,(DWORD)pHVar12,DVar2,DVar13,(DWORD)pHVar14,DVar15,DVar17,
                           pcVar19);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0xb);
      }
      DAT_0048eb48 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x81:
    pHVar4 = DAT_0048eb18;
    if (DAT_0048eb18 == (HFONT)0x0) {
      pHVar1 = GetDC((HWND)0x0);
      pcVar19 = "Tahoma";
      DVar17 = 2;
      DVar15 = 2;
      DVar13 = 7;
      pHVar12 = pHVar10;
      DVar2 = GetTextCharset(pHVar1);
      iVar11 = 700;
      iVar5 = 0x48;
      pHVar4 = pHVar10;
      pHVar9 = pHVar10;
      pHVar8 = pHVar10;
      pHVar7 = pHVar10;
      pHVar6 = pHVar10;
      iVar3 = GetDeviceCaps(pHVar1,0x5a);
      iVar3 = MulDiv(-0xb,iVar3,iVar5);
      pHVar4 = CreateFontA(iVar3,(int)pHVar10,(int)pHVar4,(int)pHVar9,iVar11,(DWORD)pHVar8,
                           (DWORD)pHVar7,(DWORD)pHVar6,DVar2,DVar13,(DWORD)pHVar12,DVar15,DVar17,
                           pcVar19);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb18 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x82:
    pHVar4 = DAT_0048eb38;
    if (DAT_0048eb38 == (HFONT)0x0) {
      FUN_00449cb0(0x11,(LPSTR)local_210,0x80,(undefined2 *)0x0);
      pHVar1 = GetDC((HWND)0x0);
      puVar18 = local_210;
      DVar17 = 0x22;
      DVar15 = 2;
      DVar13 = 7;
      pHVar12 = pHVar8;
      DVar2 = GetTextCharset(pHVar1);
      iVar11 = 500;
      iVar5 = 0x48;
      pHVar4 = pHVar8;
      pHVar10 = pHVar8;
      pHVar9 = pHVar8;
      pHVar7 = pHVar8;
      pHVar6 = pHVar8;
      iVar3 = GetDeviceCaps(pHVar1,0x5a);
      iVar3 = MulDiv(-0xc,iVar3,iVar5);
      pHVar4 = CreateFontA(iVar3,(int)pHVar8,(int)pHVar4,(int)pHVar10,iVar11,(DWORD)pHVar9,
                           (DWORD)pHVar7,(DWORD)pHVar6,DVar2,DVar13,(DWORD)pHVar12,DVar15,DVar17,
                           (LPCSTR)puVar18);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb38 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x86:
    pHVar4 = DAT_0048eb28;
    if (DAT_0048eb28 == (HFONT)0x0) {
      FUN_00449cb0(0x11,(LPSTR)local_210,0x80,(undefined2 *)0x0);
      pHVar1 = GetDC((HWND)0x0);
      puVar18 = local_210;
      DVar17 = 2;
      DVar15 = 2;
      DVar13 = 7;
      pHVar12 = pHVar9;
      DVar2 = GetTextCharset(pHVar1);
      iVar11 = 700;
      iVar5 = 0x48;
      pHVar4 = pHVar9;
      pHVar10 = pHVar9;
      pHVar8 = pHVar9;
      pHVar7 = pHVar9;
      pHVar6 = pHVar9;
      iVar3 = GetDeviceCaps(pHVar1,0x5a);
      iVar3 = MulDiv(-0xc,iVar3,iVar5);
      pHVar4 = CreateFontA(iVar3,(int)pHVar9,(int)pHVar4,(int)pHVar10,iVar11,(DWORD)pHVar8,
                           (DWORD)pHVar7,(DWORD)pHVar6,DVar2,DVar13,(DWORD)pHVar12,DVar15,DVar17,
                           (LPCSTR)puVar18);
      ReleaseDC((HWND)0x0,pHVar1);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb28 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x8c:
    pHVar4 = DAT_0048eae8;
    if (DAT_0048eae8 == (HFONT)0x0) {
      local_154[0] = 0x154;
      SystemParametersInfoA(0x29,0x154,local_154,0);
      pHVar4 = CreateFontIndirectA(&local_13c);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eae8 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x8d:
    pHVar4 = DAT_0048ead8;
    if (DAT_0048ead8 == (HFONT)0x0) {
      local_154[0] = 0x154;
      SystemParametersInfoA(0x29,0x154,local_154,0);
      pHVar4 = CreateFontIndirectA(&local_f8);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048ead8 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x8e:
    pHVar4 = DAT_0048eac8;
    if (DAT_0048eac8 == (HFONT)0x0) {
      local_154[0] = 0x154;
      SystemParametersInfoA(0x29,0x154,local_154,0);
      pHVar4 = CreateFontIndirectA(&local_b4);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eac8 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x8f:
    pHVar4 = DAT_0048eab8;
    if (DAT_0048eab8 == (HFONT)0x0) {
      local_154[0] = 0x154;
      SystemParametersInfoA(0x29,0x154,local_154,0);
      pHVar4 = CreateFontIndirectA(&local_78);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eab8 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x90:
    pHVar4 = DAT_0048eaa8;
    if (DAT_0048eaa8 == (HFONT)0x0) {
      local_154[0] = 0x154;
      SystemParametersInfoA(0x29,0x154,local_154,0);
      pHVar4 = CreateFontIndirectA(&local_3c);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eaa8 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x91:
    pHVar4 = DAT_0048eb08;
    if (DAT_0048eb08 == (HFONT)0x0) {
      SystemParametersInfoA(0x1f,0x3c,&local_190,0);
      pHVar4 = CreateFontIndirectA(&local_190);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eb08 = pHVar4;
      return pHVar4;
    }
    break;
  case 0x92:
    if (DAT_0048eaf8 == (HFONT)0x0) {
      SystemParametersInfoA(0x1f,0x3c,&local_190,0);
      local_190.lfWidth = (LONG)pHVar4;
      local_190.lfWeight = ((699 < local_190.lfWeight) - 1 & 0xffffff9c) + 800;
      pHVar4 = CreateFontIndirectA(&local_190);
      if (pHVar4 == (HFONT)0x0) {
        pHVar4 = GetStockObject(0x11);
      }
      DAT_0048eaf8 = pHVar4;
      return pHVar4;
    }
  }
  return pHVar4;
}


