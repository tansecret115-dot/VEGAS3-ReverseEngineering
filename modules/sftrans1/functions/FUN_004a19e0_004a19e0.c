/* Module: sftrans1.dll
   Function: FUN_004a19e0
   Address: 004a19e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004a19e0(int param_1)

{
  double dVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  HWND pHVar6;
  HWND hWnd;
  HWND pHVar7;
  int iVar8;
  HWND *ppHVar9;
  int iVar10;
  undefined *puVar11;
  float *pfVar12;
  int *piStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  double adStack_5c [2];
  CHAR aCStack_4c [16];
  CHAR aCStack_3c [16];
  HWND pHStack_2c;
  HWND pHStack_28;
  HWND pHStack_24;
  HWND pHStack_20;
  HWND pHStack_1c;
  HWND pHStack_18;
  HWND pHStack_14;
  HWND pHStack_10;
  HWND pHStack_c;
  HWND pHStack_4;
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_68 = (double)((ulonglong)local_68 & 0xffffffff00000000);
  piVar5 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00555130,&local_68);
    piVar5 = (int *)local_68;
  }
  (**(code **)(*piVar5 + 0xc))(piVar5,param_1 + 0x68);
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x710);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x712);
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x711);
  pHStack_2c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x713);
  pHStack_28 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x714);
  pHStack_24 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x715);
  pHStack_20 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x716);
  pHStack_1c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x717);
  pHStack_18 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x718);
  pHStack_14 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x719);
  pHStack_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71a);
  pHStack_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71b);
  uStack_60 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x71e);
  if ((pHStack_4 == (HWND)0x0) || (pHStack_4 == pHVar6)) {
    local_68 = (double)*(float *)(param_1 + 0x6c);
    FUN_004c6ae0(adStack_5c,&DAT_0055e6e4,local_68);
    bVar3 = false;
    iVar10 = 0;
    iVar8 = lstrlenA((LPCSTR)adStack_5c);
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      if ((*(char *)((int)adStack_5c + iVar8) != '0') || (bVar3)) {
        if (*(char *)((int)adStack_5c + iVar8) == '.') {
          if ((iVar10 == 2) || (iVar10 == 3)) {
            puVar11 = &DAT_00560ef0;
          }
          else {
            if (iVar10 != 1) break;
            puVar11 = &DAT_005649a8;
          }
          FUN_004c6ae0(adStack_5c,puVar11,(int *)local_68,local_68._4_4_);
          break;
        }
        bVar3 = true;
      }
      else {
        iVar10 = iVar10 + 1;
        bVar3 = false;
      }
    }
    GetWindowTextA(pHVar6,aCStack_4c,0xf);
    iVar10 = lstrcmpA(aCStack_4c,(LPCSTR)adStack_5c);
    if (iVar10 != 0) {
      SetWindowTextA(pHVar6,(LPCSTR)adStack_5c);
    }
  }
  if ((pHStack_4 == (HWND)0x0) || (pHStack_4 == pHVar7)) {
    dVar1 = (double)*(float *)(param_1 + 0x70);
    local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar4 = local_68._4_4_;
    local_68 = dVar1;
    FUN_004c6ae0(adStack_5c,&DAT_0055e6e4,dVar1);
    bVar3 = false;
    iVar10 = 0;
    iVar8 = lstrlenA((LPCSTR)adStack_5c);
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      if ((*(char *)((int)adStack_5c + iVar8) != '0') || (bVar3)) {
        if (*(char *)((int)adStack_5c + iVar8) == '.') {
          if ((iVar10 == 2) || (iVar10 == 3)) {
            puVar11 = &DAT_00560ef0;
          }
          else {
            if (iVar10 != 1) break;
            puVar11 = &DAT_005649a8;
          }
          FUN_004c6ae0(adStack_5c,puVar11,(int *)local_68,uVar4);
          break;
        }
        bVar3 = true;
      }
      else {
        iVar10 = iVar10 + 1;
        bVar3 = false;
      }
    }
    GetWindowTextA(pHVar7,aCStack_4c,0xf);
    iVar10 = lstrcmpA(aCStack_4c,(LPCSTR)adStack_5c);
    if (iVar10 != 0) {
      SetWindowTextA(pHVar7,(LPCSTR)adStack_5c);
    }
  }
  pHVar6 = pHStack_4;
  if (((pHStack_4 != (HWND)0x0) && (pHStack_4 != hWnd)) && (*(int *)(param_1 + 0x74) == 0))
  goto LAB_004a1d36;
  dVar1 = (double)*(float *)(param_1 + 0x68);
  local_68 = dVar1;
  FUN_004c6ae0(adStack_5c,&DAT_0055e6e4,dVar1);
  iVar10 = FUN_004a2790(adStack_5c);
  if ((iVar10 == 2) || (iVar10 == 3)) {
    puVar11 = &DAT_00560ef0;
LAB_004a1cf8:
    FUN_004c6ae0(adStack_5c,puVar11,dVar1);
  }
  else if (iVar10 == 1) {
    puVar11 = &DAT_005649a8;
    goto LAB_004a1cf8;
  }
  GetWindowTextA(hWnd,aCStack_4c,0xf);
  iVar10 = lstrcmpA(aCStack_4c,(LPCSTR)adStack_5c);
  if (iVar10 != 0) {
    SetWindowTextA(hWnd,(LPCSTR)adStack_5c);
  }
LAB_004a1d36:
  ppHVar9 = &pHStack_2c;
  pfVar12 = (float *)(param_1 + 0x78);
  local_68 = (double)CONCAT44(local_68._4_4_,9);
  do {
    if ((pHVar6 == (HWND)0x0) || (pHVar6 == *ppHVar9)) {
      pHVar7 = *ppHVar9;
      dVar1 = (double)*pfVar12;
      adStack_5c[0] = dVar1;
      FUN_004c6ae0(aCStack_4c,&DAT_0055e6e4,dVar1);
      iVar10 = FUN_004a2790(aCStack_4c);
      if ((iVar10 == 2) || (iVar10 == 3)) {
        puVar11 = &DAT_00560ef0;
LAB_004a1db6:
        FUN_004c6ae0(aCStack_4c,puVar11,dVar1);
      }
      else if (iVar10 == 1) {
        puVar11 = &DAT_005649a8;
        goto LAB_004a1db6;
      }
      GetWindowTextA(pHVar7,aCStack_3c,0xf);
      iVar10 = lstrcmpA(aCStack_3c,aCStack_4c);
      pHVar6 = pHStack_4;
      if (iVar10 != 0) {
        SetWindowTextA(pHVar7,aCStack_4c);
        pHVar6 = pHStack_4;
      }
    }
    pfVar12 = pfVar12 + 1;
    ppHVar9 = ppHVar9 + 1;
    iVar10 = (int)(int *)local_68 + -1;
    local_68 = (double)CONCAT44(local_68._4_4_,iVar10);
    if (iVar10 == 0) {
      EnableWindow(hWnd,(uint)(*(int *)(param_1 + 0x74) == 0));
      EnableWindow(uStack_60,(uint)(*(int *)(param_1 + 0x74) == 0));
      CheckDlgButton(*(HWND *)(param_1 + 0x30),0x728,*(UINT *)(param_1 + 0x74));
      if (piStack_70 != (int *)0x0) {
        (**(code **)(*piStack_70 + 8))(piStack_70);
      }
      return;
    }
  } while( true );
}


