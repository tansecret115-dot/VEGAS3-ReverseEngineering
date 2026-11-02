/* Module: vegas30.exe
   Function: FUN_004f1ae0
   Address: 004f1ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f1ae0(undefined4 *param_1,undefined4 *param_2)

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
  uchar *_Source;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  HWND hWnd;
  undefined4 uVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  bool bVar27;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined1 local_164 [16];
  CHAR local_154 [80];
  undefined1 local_104 [260];
  
  FUN_004f0c10(param_1);
  iVar20 = param_1[0x102];
  iVar1 = param_2[0x102];
  if ((param_1[0x103] == param_2[0x103]) && (param_1[0x104] == param_2[0x104])) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  iVar2 = param_1[0x3b3];
  iVar3 = param_2[0x3b3];
  iVar16 = lstrcmpiA((LPCSTR)(param_1 + 0x11d),(LPCSTR)(param_2 + 0x11d));
  iVar17 = lstrcmpiA((LPCSTR)(param_1 + 0x161),(LPCSTR)(param_2 + 0x161));
  iVar18 = lstrcmpiA((LPCSTR)(param_1 + 0x1a3),(LPCSTR)(param_2 + 0x1a3));
  iVar4 = param_2[0x393];
  iVar5 = param_1[0x393];
  iVar6 = param_1[0x7b8];
  iVar7 = param_2[0x7b8];
  if (((param_1[0x3ea] == param_2[0x3ea]) && (param_1[0x3eb] == param_2[0x3eb])) &&
     (param_1[0xce8] == param_2[0xce8])) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  iVar8 = param_1[0xcec];
  iVar9 = param_2[0xcec];
  iVar19 = lstrcmpA((LPCSTR)(param_1 + 0xb82),(LPCSTR)(param_2 + 0xb82));
  if (((iVar19 != 0) || (param_1[0xb81] != param_2[0xb81])) ||
     (bVar14 = false, param_1[0xbad] != param_2[0xbad])) {
    bVar14 = true;
  }
  if (((param_1[0x1ea] != param_2[0x1ea]) || (param_1[0x1ec] != param_2[0x1ec])) ||
     (bVar15 = false, param_1[0x1eb] != param_2[0x1eb])) {
    bVar15 = true;
  }
  bVar27 = param_1[0x9df] != DAT_00649e1c;
  iVar19 = param_1[0xb79];
  iVar10 = param_2[0xb79];
  if (((param_1[0x119] != param_2[0x119]) || (param_1[0x117] != param_2[0x117])) ||
     (bVar11 = false, param_1[0x118] != param_2[0x118])) {
    bVar11 = true;
  }
  FUN_004f2270(param_1,param_2);
  if ((((byte)DAT_0064761c & 0x10) == 0) && (bVar11)) {
    FUN_004eceb0(&DAT_0064b178);
  }
  puVar25 = param_1;
  puVar26 = param_2;
  for (iVar24 = 0xe9a; iVar24 != 0; iVar24 = iVar24 + -1) {
    *puVar26 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar26 = puVar26 + 1;
  }
  FUN_00401200(DAT_006471fc);
  FUN_005fd8b0(1);
  if (iVar5 != iVar4) {
    FUN_00589de0();
  }
  FUN_00589e40();
  if (iVar20 != iVar1) {
    DAT_00647aa8 = param_1[0x102];
    FUN_00453070(DAT_00647630);
  }
  if (iVar2 != iVar3) {
    FUN_004506e0(&DAT_0064b188,param_1[0x3b3]);
    FUN_0040fed0(param_1[0x3b3]);
  }
  if (bVar12) {
    FUN_00453070(DAT_00647630);
  }
  FUN_00453250(DAT_00647630,0);
  if (iVar19 != iVar10) {
    FUN_004dc940();
  }
  iVar20 = FUN_004e4c90();
  if (iVar20 != 0) {
    FUN_00453250(iVar20,0);
  }
  if (iVar16 != 0) {
    uVar21 = FUN_004f0910(param_1);
    param_1[0x15e] = uVar21;
  }
  if (iVar17 != 0) {
    uVar21 = FUN_004f0a00(param_1);
    param_1[0x1a2] = uVar21;
  }
  if (iVar18 != 0) {
    uVar21 = FUN_004f0b90(param_1);
    param_1[0x1e4] = uVar21;
  }
  if (iVar6 == iVar7) goto LAB_004f204f;
  GetModuleFileNameA(DAT_006471fc,local_154,0x50);
  _Source = (&PTR_DAT_00642d18)[param_1[0x7b8]];
  iVar20 = _SfGetFileNameExtensionPtrA_4(local_154);
  _mbscpy((uchar *)(iVar20 + 1),_Source);
  if ((1 < (int)param_1[0x7b8]) && (iVar20 = FUN_00553120(local_154,0), iVar20 == 0)) {
    uVar21 = _SfGetString_8(DAT_00647204,param_1[0x7b8] + 0x5b7);
    uVar22 = _SfGetString_8(DAT_00647204,0x6d7d);
    SfPrintF(local_104,uVar22,uVar21);
    SfMsgBox(DAT_00647634,0x40,local_104);
LAB_004f1efb:
    wParam = param_2[0x7b8];
    lParam = 0;
    Msg = 0x14e;
    hWnd = GetDlgItem(DAT_00647634,0xc4c6);
    SendMessageA(hWnd,Msg,wParam,lParam);
    _mbscpy((uchar *)(param_1 + 0x777),(uchar *)(param_2 + 0x777));
    param_1[0x7b8] = param_2[0x7b8];
    goto LAB_004f204f;
  }
  if (param_1[0x7b8] == 6) {
    iVar20 = FUN_004f0780();
    if (iVar20 != 0) {
      _SfSetLangID_4(param_1 + 0x777);
      uVar21 = _SfGetString_8(DAT_00647204,0x6d7e);
      iVar20 = SfMsgBox(DAT_00647634,0x14,uVar21);
      goto joined_r0x004f2034;
    }
    uVar22 = _SfGetString_8(DAT_00647204,param_1[0x7b8] + 0x5b7);
    uVar21 = uVar22;
    uVar23 = _SfGetString_8(DAT_00647204,0x5be);
    SfPrintF(local_104,uVar23,uVar22,uVar21);
    iVar20 = SfMsgBox(DAT_00647634,0x11,local_104);
    if (iVar20 != 1) goto LAB_004f1efb;
  }
  else {
    _SfSetLangID_4(param_1 + 0x777);
    uVar21 = _SfGetString_8(DAT_00647204,0x6d7e);
    iVar20 = SfMsgBox(DAT_00647624,0x14,uVar21);
joined_r0x004f2034:
    if (iVar20 != 6) goto LAB_004f204f;
  }
  DAT_0064b508 = 1;
  PostMessageA(DAT_00647624,0x10,0,0);
LAB_004f204f:
  uVar21 = DAT_0064b138;
  if (bVar13) {
    uVar22 = FUN_005ba4b0(DAT_0064b138,0);
    Transport_Suspend();
    iVar20 = FUN_005b9fc0(uVar21,uVar22,1);
    *(undefined4 *)(iVar20 + 0x80) = param_1[0x3ea];
    *(undefined4 *)(iVar20 + 0x84) = param_1[0x3eb];
    FUN_005ba030(uVar21,iVar20,1,1);
    FUN_00428fa0(uVar21,0);
    Transport_Resume(0);
  }
  if (bVar14) {
    _SfGuidFromString_8(param_1 + 0xb82,local_164);
    FUN_005621d0(&DAT_0064b538,local_164);
    if (param_1[0xb81] != 0) {
      FUN_005625c0(&DAT_0064b538);
    }
    FUN_00427f90(0xffffffff,0xffffffff,0,1);
  }
  if (bVar15) {
    FUN_00428f30(1,0);
  }
  if (bVar27) {
    FUN_005088e0();
  }
  if ((((byte)DAT_0064761c & 0x10) == 0) && (bVar11)) {
    FUN_004ed020(DAT_00647624,&DAT_0064b178);
  }
  if (iVar8 != iVar9) {
    FUN_0040cf00(DAT_0064762c);
  }
  InvalidateRect(DAT_00647624,(RECT *)0x0,1);
  FUN_00507c00(4);
  _SfWheel_UpdatePrefs_4(DAT_0064a47c);
  FUN_004f2180(param_1);
  return;
}


