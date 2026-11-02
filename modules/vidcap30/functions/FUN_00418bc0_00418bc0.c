/* Module: vidcap30.exe
   Function: FUN_00418bc0
   Address: 00418bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uchar *_Source;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  int iVar42;
  int iVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  HWND hWnd;
  undefined4 uVar46;
  int iVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  CHAR local_154 [80];
  undefined1 local_104 [260];
  
  iVar42 = DAT_005bb838;
  FUN_00418370(param_1,param_2);
  iVar43 = param_2[0x120];
  iVar1 = param_2[0x166];
  iVar2 = param_3[0x120];
  iVar3 = param_3[0x166];
  iVar4 = param_3[0x40c];
  iVar5 = param_2[0x40b];
  iVar6 = param_3[0x40b];
  iVar7 = param_3[0x3c6];
  iVar8 = param_2[0x40c];
  iVar9 = param_2[0x3c6];
  iVar10 = param_2[0x336];
  iVar11 = param_3[0x336];
  iVar12 = param_2[0x3c7];
  iVar13 = param_3[0x3c7];
  if ((param_2[0x3c0] == param_3[0x3c0]) &&
     (*(double *)(param_2 + 0x3c2) == *(double *)(param_3 + 0x3c2))) {
    bVar40 = false;
  }
  else {
    bVar40 = true;
  }
  iVar14 = param_2[0x3c9];
  iVar15 = param_3[0x3c9];
  iVar16 = param_2[999];
  iVar17 = param_3[999];
  iVar18 = param_2[0x3e1];
  iVar19 = param_3[0x3e1];
  iVar20 = param_2[0x40d];
  iVar21 = param_3[0x40d];
  iVar22 = param_2[0x410];
  iVar23 = param_3[0x410];
  iVar24 = param_2[0x411];
  iVar25 = param_3[0x411];
  iVar26 = param_2[1000];
  iVar27 = param_3[1000];
  iVar28 = param_2[0x3e9];
  iVar29 = param_3[0x3e9];
  iVar30 = param_2[0x3ea];
  iVar31 = param_3[0x3ea];
  iVar32 = param_2[0x3eb];
  iVar33 = param_3[0x3eb];
  iVar34 = param_2[0x3cc];
  iVar35 = param_3[0x3cc];
  if ((param_2[0x3ec] == param_3[0x3ec]) && (param_2[0x3ed] == param_3[0x3ed])) {
    bVar41 = false;
  }
  else {
    bVar41 = true;
  }
  iVar36 = param_2[0x49c];
  iVar37 = param_3[0x49c];
  if ((*(double *)(param_2 + 0x402) != *(double *)(param_3 + 0x402)) ||
     (bVar39 = false, param_2[0x404] != param_3[0x404])) {
    bVar39 = true;
  }
  if (((param_2[0x11a] != param_3[0x11a]) || (param_2[0x118] != param_3[0x118])) ||
     (bVar38 = false, param_2[0x119] != param_3[0x119])) {
    bVar38 = true;
  }
  if ((((byte)DAT_005ba4b4 & 0x10) == 0) && (bVar38)) {
    FUN_00417ff0(&DAT_005bb848);
  }
  puVar48 = param_2;
  puVar49 = param_3;
  for (iVar47 = 0x4b6; iVar47 != 0; iVar47 = iVar47 + -1) {
    *puVar49 = *puVar48;
    puVar48 = puVar48 + 1;
    puVar49 = puVar49 + 1;
  }
  if (iVar36 != iVar37) {
    **(uint **)(iVar42 + 4) = **(uint **)(iVar42 + 4) | 4;
  }
  if (bVar39) {
    **(uint **)(iVar42 + 4) = **(uint **)(iVar42 + 4) | 2;
  }
  if (iVar5 != iVar6) {
    DAT_005ba50c = DAT_005ba50c | 2;
  }
  if (iVar8 != iVar4) {
    DAT_005ba50c = DAT_005ba50c | 4;
  }
  if (iVar9 != iVar7) {
    DAT_005ba50c = DAT_005ba50c | 8;
  }
  if (((bVar40) || (iVar12 != iVar13)) ||
     ((iVar18 != iVar19 || ((iVar20 != iVar21 || (iVar10 != iVar11)))))) {
    DAT_005ba50c = DAT_005ba50c | 0x10;
    **(uint **)(iVar42 + 4) = **(uint **)(iVar42 + 4) | 1;
  }
  if (((iVar22 != iVar23) || (iVar24 != iVar25)) || (iVar26 != iVar27)) {
    DAT_005ba50c = DAT_005ba50c | 0x40;
  }
  if (((iVar16 != iVar17) || (iVar28 != iVar29)) || ((iVar30 != iVar31 || (iVar32 != iVar33)))) {
    DAT_005ba50c = DAT_005ba50c | 0x80;
  }
  if (iVar14 != iVar15) {
    DAT_005ba50c = DAT_005ba50c | 0x20;
  }
  if (iVar34 != iVar35) {
    FUN_004348d0(*(undefined4 *)(DAT_005ba4c0 + 0x6c),0);
    FUN_004348d0(*(undefined4 *)(DAT_005ba4c0 + 0x6c),1);
  }
  FUN_00401170(DAT_005ba298);
  if (iVar43 != iVar2) {
    FUN_00413c10(&DAT_005bb858,param_2[0x120]);
    FUN_00407f20(param_2[0x120]);
  }
  if (iVar1 == iVar3) goto LAB_004191fe;
  GetModuleFileNameA(DAT_005ba298,local_154,0x50);
  _Source = (&PTR_DAT_005b3dd8)[param_2[0x166]];
  iVar43 = _SfGetFileNameExtensionPtrA_4(local_154);
  _mbscpy((uchar *)(iVar43 + 1),_Source);
  if ((-0x35 < (int)param_2[0x166]) && (iVar43 = FUN_0041d980(local_154,0), iVar43 == 0)) {
    uVar44 = _SfGetString_8(DAT_005ba2a0,param_2[0x166] + 0x8c);
    uVar45 = _SfGetString_8(DAT_005ba2a0,0x9a);
    SfPrintF(local_104,uVar45,uVar44);
    SfMsgBox(DAT_005ba4c4,0x40,local_104);
LAB_004190a7:
    wParam = param_3[0x166];
    lParam = 0;
    Msg = 0x14e;
    hWnd = GetDlgItem(DAT_005ba4c4,0x9c4a);
    SendMessageA(hWnd,Msg,wParam,lParam);
    _mbscpy((uchar *)(param_2 + 0x125),(uchar *)(param_3 + 0x125));
    param_2[0x166] = param_3[0x166];
    goto LAB_004191fe;
  }
  if (param_2[0x166] == -0x2e) {
    iVar43 = FUN_00418310();
    if (iVar43 != 0) {
      _SfSetLangID_4(param_2 + 0x125);
      uVar44 = _SfGetString_8(DAT_005ba2a0,0x9b);
      iVar43 = SfMsgBox(DAT_005ba4c4,0x14,uVar44);
      goto joined_r0x004191e0;
    }
    uVar45 = _SfGetString_8(DAT_005ba2a0,param_2[0x166] + 0x8c);
    uVar44 = uVar45;
    uVar46 = _SfGetString_8(DAT_005ba2a0,0x5f);
    SfPrintF(local_104,uVar46,uVar45,uVar44);
    iVar43 = SfMsgBox(DAT_005ba4c4,0x11,local_104);
    if (iVar43 != 1) goto LAB_004190a7;
  }
  else {
    _SfSetLangID_4(param_2 + 0x125);
    uVar44 = _SfGetString_8(DAT_005ba2a0,0x9b);
    iVar43 = SfMsgBox(DAT_005ba4bc,0x14,uVar44);
joined_r0x004191e0:
    if (iVar43 != 6) goto LAB_004191fe;
  }
  DAT_005bba64 = 1;
  PostMessageA(DAT_005ba4bc,0x10,0,0);
LAB_004191fe:
  if ((((byte)DAT_005ba4b4 & 0x10) == 0) && (bVar38)) {
    FUN_00418140(DAT_005ba4bc,&DAT_005bb848);
  }
  if ((bVar41) && (*(int *)(DAT_005ba4c0 + 0x1c) != 0)) {
    **(uint **)(iVar42 + 4) = **(uint **)(iVar42 + 4) | 0x400;
  }
  InvalidateRect(DAT_005ba4bc,(RECT *)0x0,1);
  FUN_0041e030(4);
  return;
}


