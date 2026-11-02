/* Module: sftrans1.dll
   Function: FUN_00465450
   Address: 00465450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00465450(int param_1)

{
  WPARAM *pWVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  WPARAM WVar5;
  WPARAM WVar6;
  byte bVar7;
  undefined1 uVar8;
  byte bVar9;
  int *piVar10;
  HWND pHVar11;
  int iVar12;
  HWND pHVar13;
  HWND pHVar14;
  uint uVar15;
  code *pcVar16;
  uint nCmdShow;
  int nCmdShow_00;
  float10 fVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int *piVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  uint uStack_384;
  HWND pHStack_380;
  uint uStack_37c;
  HWND pHStack_378;
  undefined4 uStack_374;
  double dStack_370;
  double dStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  wchar_t awStack_344 [110];
  undefined1 auStack_268 [40];
  undefined4 uStack_240;
  uint uStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  char acStack_114 [272];
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  uStack_3a8 = (double)(ulonglong)(uint)uStack_3a8;
  piVar10 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00555130,(int)&uStack_3a8 + 4);
    piVar10 = uStack_3a8._4_4_;
  }
  pWVar1 = (WPARAM *)(param_1 + 0x68);
  (**(code **)(*piVar10 + 0xc))(piVar10,pWVar1);
  pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x573);
  pHStack_378 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59b);
  pHStack_380 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59c);
  pcVar16 = SendMessageA_exref;
  SendMessageA(pHVar11,0x80d,*pWVar1,0);
  SendMessageA(pHVar11,0x80e,2,0);
  SendMessageA(pHVar11,0x810,*pWVar1,0);
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  dStack_370 = 0.5;
  dStack_368 = 0.5;
  uStack_360 = 2;
  uStack_35c = 1;
  uStack_358 = 0xffffffff;
  uStack_354 = 0x3f800000;
  fStack_350 = 0.5;
  fStack_34c = 0.5;
  fStack_348 = 0.0;
  awStack_344[0] = L'\0';
  uStack_240 = 0;
  uStack_23c = 0xffffff;
  uStack_238 = 0;
  uStack_234 = 0x3f800000;
  uStack_224 = 0;
  uStack_220 = 1;
  uStack_21c = 0;
  uStack_3a8 = 100000000.0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  WVar6 = *pWVar1;
  while (WVar5 = WVar6 - 1, -1 < (int)WVar5) {
    fStack_350 = *(float *)((WVar6 + 7) * 0x10 + param_1);
    iVar18 = WVar5 * 0x10 + param_1;
    fStack_34c = *(float *)(iVar18 + 0x7c);
    fStack_348 = *(float *)(iVar18 + 0x78);
    dStack_370 = *(double *)(param_1 + 0x118 + WVar5 * 8);
    dStack_368 = *(double *)(param_1 + 0x168 + WVar5 * 8);
    uStack_35c = 1;
    if (WVar5 == 0) {
      fStack_350 = (float)(double)CONCAT44(uStack_38c,uStack_390);
      uStack_360 = 1;
      uStack_240 = 0;
      fStack_34c = (float)(double)CONCAT44(uStack_394,uStack_398);
      fStack_348 = (float)(double)CONCAT44(uStack_39c,uStack_3a0);
    }
    else {
      uStack_360 = 0;
      FUN_004c6ae0(acStack_114,&DAT_00560f08,WVar5);
      mbstowcs(awStack_344,acStack_114,0x82);
      uStack_240 = 2;
      bVar7 = ftol();
      uStack_37c = CONCAT31(uStack_37c._1_3_,bVar7);
      uVar8 = ftol();
      uStack_384 = CONCAT31(uStack_384._1_3_,uVar8);
      bVar9 = ftol();
      uStack_374 = CONCAT31(uStack_374._1_3_,bVar9);
      uVar15 = (uint)CONCAT21(CONCAT11(-(bVar9 < 0x80),-((byte)uStack_384 < 0x80)),-(bVar7 < 0x80));
      uStack_238 = (uVar15 & 0xff) + (uStack_37c & 0xff) >> 1 |
                   (uint)CONCAT11((char)((uint)(byte)-(bVar9 < 0x80) + (uint)bVar9 >> 1),
                                  (char)((uint)(byte)-((byte)uStack_384 < 0x80) +
                                         (uStack_384 & 0xff) >> 1)) << 8;
      if ((((_DAT_00555910 <= dStack_370) && (dStack_370 <= _DAT_00555908)) &&
          (_DAT_00555910 <= dStack_368)) && (dStack_368 <= _DAT_00555908)) {
        uStack_238 = uVar15;
      }
      dVar3 = *(double *)(param_1 + 0x118 + WVar5 * 8) - *(double *)(param_1 + 0x118);
      dVar4 = *(double *)(param_1 + 0x168 + WVar5 * 8) - *(double *)(param_1 + 0x168);
      dVar3 = dVar3 * dVar3 + dVar4 * dVar4;
      pcVar16 = SendMessageA_exref;
      uStack_23c = uStack_238;
      if ((dVar3 < uStack_3a8) || (*(int *)(param_1 + 0x68) - 1U == WVar5)) {
        uStack_3a0 = 0;
        uStack_3a8 = dVar3;
        if (fStack_348 + fStack_34c + fStack_350 <= (float)_DAT_00560f00) {
          uStack_39c = 0x3ff00000;
          uStack_398 = 0;
          uStack_394 = 0x3ff00000;
          uStack_390 = 0;
          uStack_38c = 0x3ff00000;
        }
        else {
          uStack_39c = 0;
          uStack_398 = 0;
          uStack_394 = 0;
          uStack_390 = 0;
          uStack_38c = 0;
        }
      }
    }
    (*pcVar16)(pHVar11,0x804,WVar5,&dStack_370);
    WVar6 = WVar5;
  }
  uVar23 = 0;
  pHVar14 = pHVar11;
  (*pcVar16)(pHVar11,0x805,0,&dStack_370);
  FUN_00466bc0(pHVar11,0,&pHStack_380);
  (*pcVar16)(pHVar11,0x81f,1,0);
  iVar12 = (*pcVar16)(pHVar11,0x806,0,0);
  lVar22 = (ulonglong)(uint)(iVar12 * 0x10 + 0x78 + param_1) << 0x20;
  piVar21 = (int *)0x703;
  pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59a);
  (*pcVar16)(pHVar11,piVar21,lVar22);
  uVar15 = (uint)(iVar12 != 0);
  uVar20 = 0;
  uVar19 = 10;
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59a);
  (*pcVar16)(pHVar13,uVar19,uVar15,uVar20);
  nCmdShow = -(uint)(iVar12 != 0) & 5;
  uVar15 = nCmdShow;
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59b);
  ShowWindow(pHVar13,uVar15);
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c9);
  ShowWindow(pHVar13,nCmdShow);
  nCmdShow_00 = (-(uint)(iVar12 != 0) & 0xfffffffb) + 5;
  iVar18 = nCmdShow_00;
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59e);
  ShowWindow(pHVar13,iVar18);
  iVar18 = nCmdShow_00;
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5ca);
  ShowWindow(pHVar13,iVar18);
  iVar18 = nCmdShow_00;
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59d);
  ShowWindow(pHVar13,iVar18);
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5cb);
  ShowWindow(pHVar13,nCmdShow_00);
  piVar10 = (int *)(param_1 + 0x68);
  fVar17 = (float10)FUN_00465050(piVar10,*(undefined4 *)(param_1 + 0x118 + iVar12 * 8),
                                 *(undefined4 *)(param_1 + 0x11c + iVar12 * 8),
                                 *(undefined4 *)(param_1 + 0x168 + iVar12 * 8),
                                 *(undefined4 *)(param_1 + 0x16c + iVar12 * 8));
  FUN_004c6ae0(auStack_268,&DAT_0055e6e4,SUB84((double)fVar17,0));
  FUN_004c84a0(uVar23);
  FUN_004c6ae0(auStack_268,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x118 + iVar12 * 8));
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59e);
  FUN_004c84a0(pHVar13);
  FUN_004c6ae0(auStack_268,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x168 + iVar12 * 8));
  pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59d);
  FUN_004c84a0(pHVar13);
  FUN_004c6ae0(auStack_268,&DAT_00560ef0,*(double *)(param_1 + 0x70) * _DAT_00560ef8);
  FUN_004c84a0(pHVar14);
  pHVar14 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x580);
  SendMessageA(pHVar14,0x14e,*(WPARAM *)(param_1 + 0x6c),0);
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_0052d240(0x9c43,*piVar10 < 10);
    if ((iVar12 == 0) || (*piVar10 < 3)) {
      uVar19 = 0;
    }
    else {
      uVar19 = 1;
    }
    FUN_0052d240(0x9c44,uVar19);
    FUN_0052d240(0x9c45,0 < iVar12);
    FUN_0052d240(0x9c46,iVar12 < *piVar10 + -1);
    FUN_0052d240(0x9c48,1 < iVar12);
    if ((iVar12 < 1) || (*piVar10 + -1 <= iVar12)) {
      uVar19 = 0;
    }
    else {
      uVar19 = 1;
    }
    FUN_0052d240(0x9c47,uVar19);
  }
  SendMessageA(pHVar11,0x80f,0,0);
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 8))();
  }
  return;
}


