/* Module: vegas30.exe
   Function: FUN_00483b00
   Address: 00483b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483b00(HWND param_1,undefined4 param_2,int ***param_3,int ***param_4)

{
  int ***pppiVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  HWND pHVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  ulong uVar9;
  LRESULT LVar10;
  LRESULT LVar11;
  HWND pHVar12;
  int **ppiVar13;
  int ***pppiVar14;
  code *pcVar15;
  undefined4 uVar16;
  ulong wParam;
  WPARAM wParam_00;
  int ***pppiVar17;
  UINT UVar18;
  WPARAM WVar19;
  LPARAM LVar20;
  int ****ppppiVar21;
  ulong uStack_358;
  int **ppiStack_348;
  HWND pHStack_344;
  int **ppiStack_340;
  HWND pHStack_33c;
  int ***pppiStack_338;
  int **local_324 [34];
  undefined1 auStack_29c [87];
  undefined1 uStack_245;
  WCHAR aWStack_244 [230];
  int iStack_78;
  int iStack_74;
  int iStack_3c;
  HWND pHStack_38;
  int iStack_30;
  int **ppiStack_2c;
  int **ppiStack_28;
  
  pppiStack_338 = local_324;
  pHStack_33c = param_1;
  local_324[0] = (int **)0x0;
  ppiStack_340 = (int **)0x483b24;
  iVar3 = FUN_00483810();
  if (iVar3 != 0) goto LAB_00484015;
  pppiStack_338 = (int ***)local_324[0];
  pHStack_33c = (HWND)0x483b36;
  uVar4 = (*(code *)(*local_324[0])[4])();
  pHStack_33c = (HWND)0x1;
  ppiStack_340 = (int **)(param_3 + 0x276);
  pHStack_344 = (HWND)param_3[0x286];
  ppiStack_348 = (int **)(param_3 + 0x61);
  pppiVar1 = param_3 + 0x53;
  (**(code **)(*(int *)DAT_0064b510 + 0x74))();
  pcVar15 = GetDlgItem_exref;
  LVar20 = 0;
  WVar19 = 0;
  UVar18 = 0x14b;
  pHVar5 = GetDlgItem(param_1,0x63f);
  SendMessageA(pHVar5,UVar18,WVar19,LVar20);
  ppppiVar21 = &pppiStack_338;
  pHStack_344 = (HWND)0x0;
  ppiStack_340 = (int **)0x0;
  pppiStack_338 = (int ***)0x0;
  iVar3 = (*(code *)param_3[0x58][9])();
  if (iVar3 == -0x7ffb1fb9) {
    SfShowFioInstallWizard(param_1,DAT_0064b510,uVar4,0,0,0);
    (*(code *)(*pppiVar1)[2])();
    return;
  }
  iVar3 = (**(code **)(*(int *)DAT_0064b510 + 0x78))();
  param_4 = param_3;
  if ((-1 < iVar3) && (pppiVar1 != (int ***)0x0)) {
    pppiVar14 = (int ***)0x0;
    uStack_358 = uVar4;
    if (pppiVar1 != (int ***)0x0) {
      do {
        bVar2 = true;
        (**(code **)(*(int *)DAT_0064b510 + 0x90))();
        uVar6 = (**(code **)(*(int *)DAT_0064b510 + 0x90))(DAT_0064b510,uVar4);
        uVar16 = 0;
        (**(code **)(*(int *)DAT_0064b510 + 0x90))(DAT_0064b510,uVar4,pppiVar14,8,0,0);
        if ((uVar6 <= *(uint *)(iStack_74 + 0xa18)) && (*(uint *)(iStack_74 + 0xa18) == uVar6)) {
          uVar6 = FUN_004809a0(2,uVar16,pppiVar14);
          uVar7 = FUN_004809a0(1,uVar16,pppiVar14);
          iVar3 = *(int *)(iStack_78 + 0x22c);
          if (((((iVar3 != 3) || ((uVar6 == 0 || (299999 < uVar6)))) &&
               ((iVar3 != 2 || ((uVar6 == 0x1122b8 && (uVar7 == 0x36b00)))))) &&
              ((iVar3 != 4 ||
               ((((uVar6 < 0x124f81 && (uVar7 < 0x493e1)) &&
                 ((uVar6 != 0 || (*(int *)(iStack_74 + 0xa18) == 0)))) &&
                ((uVar7 != 0 || (*(int *)(iStack_74 + 0x180) == 0)))))))) && (iVar3 == 7)) {
            if (uVar6 == 0) {
              if (uVar7 != 0) {
                FUN_00578840(uVar16,uVar7);
              }
            }
            else {
              FUN_005787d0(uVar16,uVar7 + uVar6);
            }
          }
        }
        (**(code **)(*(int *)DAT_0064b510 + 0x8c))(DAT_0064b510,uVar4,pppiVar14,&stack0xfffffc68);
        iVar3 = (**(code **)(*(int *)DAT_0064b510 + 0x80))
                          (DAT_0064b510,uVar4,pppiVar14,auStack_29c,0x104);
        if ((&stack0x00000000 == (undefined1 *)0x244) || (aWStack_244[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_244,-1,(LPSTR)&ppiStack_348,0x104,(LPCSTR)0x0,(LPBOOL)0x0)
          ;
        }
        else if (&stack0x00000000 != (undefined1 *)0x348) {
          ppiStack_348 = (int **)((uint)ppiStack_348 & 0xffffff00);
        }
        uStack_245 = 0;
        if ((*(int *)(iStack_30 + 0x22c) == 2) &&
           (puVar8 = _mbsstr((uchar *)&ppiStack_348,"NTSC"), puVar8 == (uchar *)0x0)) {
          bVar2 = false;
        }
        if ((-1 < iVar3) && (bVar2)) {
          pppiVar17 = &ppiStack_348;
          WVar19 = 0;
          UVar18 = 0x143;
          pHVar5 = GetDlgItem(param_1,0x63f);
          uVar9 = SendMessageA(pHVar5,UVar18,WVar19,(LPARAM)pppiVar17);
          UVar18 = 0x151;
          wParam = uVar9;
          pppiVar17 = pppiVar14;
          pHVar5 = GetDlgItem(param_1,0x63f);
          SendMessageA(pHVar5,UVar18,wParam,(LPARAM)pppiVar17);
          if ((int ***)ppiStack_28 == (int ***)0xffffffff) {
            iVar3 = lstrcmpA(&DAT_00648cc8,(LPCSTR)&ppiStack_348);
            if (iVar3 == 0) {
              uStack_358 = uVar9;
              ppiStack_28 = (int **)pppiVar14;
            }
          }
          else if ((int ***)ppiStack_28 == pppiVar14) {
            uStack_358 = uVar9;
          }
        }
        pppiVar14 = (int ***)((int)pppiVar14 + 1);
      } while (pppiVar14 < pppiVar1);
      if ((uStack_358 != 0) &&
         (pcVar15 = GetDlgItem_exref, param_4 = (int ***)ppiStack_2c,
         *(int *)(iStack_30 + 0x22c) != 1)) goto LAB_00483f47;
    }
    iVar3 = FUN_00480a30();
    LVar20 = 0;
    WVar19 = 0;
    UVar18 = 0x146;
    pHVar5 = GetDlgItem(param_1,0x63f);
    LVar10 = SendMessageA(pHVar5,UVar18,WVar19,LVar20);
    WVar19 = 0;
    param_1 = pHStack_38;
    pcVar15 = GetDlgItem_exref;
    param_4 = (int ***)ppiStack_2c;
    if (0 < LVar10) {
      do {
        LVar20 = 0;
        UVar18 = 0x150;
        wParam_00 = WVar19;
        pHVar5 = GetDlgItem(pHStack_38,0x63f);
        LVar11 = SendMessageA(pHVar5,UVar18,wParam_00,LVar20);
        param_1 = pHStack_38;
        pcVar15 = GetDlgItem_exref;
        param_4 = (int ***)ppiStack_2c;
        if (iVar3 == LVar11) break;
        WVar19 = WVar19 + 1;
      } while ((int)WVar19 < LVar10);
    }
  }
LAB_00483f47:
  (*(code *)(*ppppiVar21)[2])();
  LVar20 = 0x146;
  WVar19 = 0x63f;
  pHVar5 = param_1;
  pHVar12 = (HWND)(*pcVar15)();
  LVar10 = SendMessageA(pHVar12,(UINT)pHVar5,WVar19,LVar20);
  if (LVar10 == 0) {
    *(undefined4 *)(iStack_3c + 0x218) = 1;
    pHVar5 = param_1;
    pHVar12 = (HWND)(*pcVar15)();
    EnableWindow(pHVar12,(BOOL)pHVar5);
    (**(code **)(*(int *)DAT_0064b510 + 0x7c))();
    param_4[0x289] = (int **)0x0;
  }
  else {
    *(undefined4 *)(iStack_3c + 0x218) = 0;
    pHVar5 = param_1;
    pHVar12 = (HWND)(*pcVar15)();
    EnableWindow(pHVar12,(BOOL)pHVar5);
    LVar20 = 0x14e;
    WVar19 = 0x63f;
    pHVar5 = param_1;
    pHVar12 = (HWND)(*pcVar15)();
    SendMessageA(pHVar12,(UINT)pHVar5,WVar19,LVar20);
    LVar20 = 0x150;
    WVar19 = 0x63f;
    pHVar5 = param_1;
    pHVar12 = (HWND)(*pcVar15)();
    ppiVar13 = (int **)SendMessageA(pHVar12,(UINT)pHVar5,WVar19,LVar20);
    (**(code **)(*(int *)DAT_0064b510 + 0x7c))(DAT_0064b510,uVar4);
    param_4[0x289] = ppiVar13;
  }
LAB_00484015:
  pHStack_33c = (HWND)param_3;
  ppiStack_340 = (int **)param_2;
  ppiStack_348 = (int **)0x48402c;
  pHStack_344 = param_1;
  pppiStack_338 = param_4;
  FUN_00483220();
  return;
}


