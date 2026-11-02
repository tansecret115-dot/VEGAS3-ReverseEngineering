/* Module: sfs4rw.dll
   Function: FUN_0040b9d0
   Address: 0040b9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040b9d0(int param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  HPROPSHEETPAGE p_Var3;
  _union_1955 _Var4;
  int iVar5;
  _union_1935 *p_Var6;
  _union_1955 _Var7;
  PROPSHEETPAGEA_V4 *pPVar8;
  _union_1955 local_2b4;
  PROPSHEETHEADERA_V2 local_2b0;
  PROPSHEETPAGEA_V4 local_27c [2];
  CHAR local_208 [259];
  undefined1 local_105;
  CHAR local_104 [259];
  undefined1 local_1;
  
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  puVar1 = *(undefined **)(param_1 + 0x17c);
  lstrcpynA(local_104,(LPCSTR)(*(int *)(param_1 + 0x374) + 0x148),0x104);
  local_1 = 0;
  lstrcpynA(local_208,(LPCSTR)(*(int *)(param_1 + 0x374) + 0x350),0x104);
  local_105 = 0;
  FUN_00404920((int *)(param_1 + 0x1f0),(int *)(param_1 + 0x1ec),local_104,local_208,
               (undefined4 *)(param_1 + 500),(LPCSTR)0xe78,(undefined4 *)(param_1 + 0x1fc));
  if ((DAT_004a84f8 & 1) == 0) {
    DAT_004a84f8 = DAT_004a84f8 | 1;
    _DAT_004a538c = 0x271e;
    _DAT_004a5398 = 0x271e;
    _DAT_004a53b8 = &LAB_00406800;
    _DAT_004a53c4 = &LAB_00406800;
    _DAT_004a5390 = 0x1b80;
    _DAT_004a5394 = FUN_0040ad10;
    _DAT_004a539c = 0x1f5f;
    _DAT_004a53a0 = &LAB_0040b1c0;
    _DAT_004a53a4 = 0x271f;
    _DAT_004a53a8 = 0x1b7f;
    _DAT_004a53ac = FUN_0040a2d0;
    _DAT_004a53b0 = 0x271d;
    _DAT_004a53b4 = 0x1b5a;
    _DAT_004a53bc = 0x271d;
    _DAT_004a53c0 = 0x1b5b;
    _DAT_004a53c8 = 0x2756;
    _DAT_004a53cc = 0x1f72;
    _DAT_004a53d0 = FUN_00406f30;
    _DAT_004a53d4 = 0x2756;
    _DAT_004a53d8 = 0x1f73;
    _DAT_004a53dc = &LAB_00407100;
    _DAT_004a53e0 = 0x2756;
    _DAT_004a53e4 = 0x1f74;
    _DAT_004a53e8 = &LAB_004073d0;
  }
  _Var4.nStartPage = 0;
  ppuVar2 = (undefined **)&DAT_004a5324;
  do {
    _Var7 = _Var4;
    if (*ppuVar2 == puVar1) break;
    ppuVar2 = ppuVar2 + 3;
    _Var4.pStartPage = (LPCSTR)(_Var4.nStartPage + 1);
    _Var7 = local_2b4;
  } while (ppuVar2 < &PTR_s_The_number_that_you_have_entered_004a53f0);
  local_2b0.hwndParent = *(HWND *)(param_1 + 0x224);
  local_2b0.dwSize = 0x34;
  local_2b0.dwFlags = 0x20;
  local_2b0.hInstance = DAT_004a8110;
  local_2b0.pszCaption = FUN_0041f970(DAT_004a811c,0x271f);
  local_2b0.u3.ppsp = (LPCPROPSHEETPAGEA)&local_27c[0].hActCtx;
  local_2b0.nPages = 0;
  p_Var6 = (_union_1935 *)&local_27c[0].hActCtx;
  ppuVar2 = (undefined **)&DAT_004a5320;
  local_2b0.u2 = _Var7;
  do {
    pPVar8 = local_27c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pPVar8->dwSize = 0;
      pPVar8 = (PROPSHEETPAGEA_V4 *)&pPVar8->dwFlags;
    }
    local_27c[0].u._2_2_ = 0;
    local_27c[0].u._0_2_ = *(ushort *)(ppuVar2 + 1);
    local_27c[0].hInstance = DAT_004a8110;
    local_27c[0].dwSize = 0x30;
    local_27c[0].dwFlags = 8;
    local_27c[0].pszTitle = FUN_0041f970(DAT_004a811c,(uint)*ppuVar2);
    local_27c[0].lParam = param_1;
    local_27c[0].pfnDlgProc = (DLGPROC)ppuVar2[2];
    p_Var3 = CreatePropertySheetPageA(local_27c);
    p_Var6->hbmHeader = (HBITMAP)p_Var3;
    if (p_Var3 != (HPROPSHEETPAGE)0x0) {
      local_2b0.nPages = local_2b0.nPages + 1;
    }
    ppuVar2 = ppuVar2 + 3;
    p_Var6 = p_Var6 + 1;
  } while (ppuVar2 < &PTR_s_The_number_that_you_have_entered_004a53ec);
  PropertySheetA(&local_2b0);
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_00404a90((undefined4 *)(param_1 + 0x1f0),(undefined4 *)(param_1 + 0x1ec));
  }
  return *(undefined4 *)(param_1 + 0x1e0);
}


