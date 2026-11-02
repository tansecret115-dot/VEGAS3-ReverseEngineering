/* Module: sfpublish.dll
   Function: FUN_00404830
   Address: 00404830
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_00404830(HWND param_1,UINT param_2,WPARAM param_3,int *param_4)

{
  HWND hWnd;
  int *piVar1;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  HWND hWnd_00;
  LRESULT LVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  LPCSTR lpString;
  undefined1 *puVar8;
  LONG local_10;
  LPCSTR local_c;
  LPSTREAM local_8;
  
  hWnd = param_1;
  if (param_2 != 1) {
    if (param_2 == 0x82) {
      piVar1 = (int *)GetWindowLongA(param_1,-0x15);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      OleUninitialize();
    }
LAB_00404a21:
    LVar4 = DefWindowProcA(hWnd,param_2,param_3,(LPARAM)param_4);
    return LVar4;
  }
  OleInitialize((LPVOID)0x0);
  iVar2 = GetWindowTextLengthA(hWnd);
  FUN_004328f0();
  local_c = &stack0xffffffe0;
  GetWindowTextA(hWnd,&stack0xffffffe0,iVar2 + 1);
  SetWindowTextA(hWnd,"");
  uVar6 = 0;
  local_10 = 0;
  if ((param_4 != (int *)0x0) && ((ushort *)*param_4 != (ushort *)0x0)) {
    uVar6 = (uint)*(ushort *)*param_4;
  }
  hMem = GlobalAlloc(0x42,uVar6);
  local_8 = (IStream *)0x0;
  lpString = &stack0xffffffe0;
  if ((hMem != (HGLOBAL)0x0) && (lpString = &stack0xffffffe0, uVar6 != 0)) {
    puVar3 = GlobalLock(hMem);
    puVar7 = (undefined4 *)(*param_4 + 2);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    GlobalUnlock(hMem);
    CreateStreamOnHGlobal(hMem,1,&local_8);
    lpString = local_c;
  }
  param_1 = (HWND)0x0;
  puVar8 = (undefined1 *)0x0;
  if (lpString != (LPCSTR)0x0) {
    puVar8 = &stack0xffffffe0;
    iVar2 = lstrlenA(lpString);
    FUN_004328f0();
    MultiByteToWideChar(0,0,local_c,-1,(LPWSTR)&stack0xffffffe0,iVar2 + 1);
  }
  iVar2 = FUN_004058d0(puVar8,hWnd,local_8,&param_1,(undefined4 *)0x0);
  if (iVar2 < 0) {
    if (param_1 != (HWND)0x0) {
      (**(code **)(param_1->unused + 8))(param_1);
    }
    if (local_8 != (IStream *)0x0) {
      (*local_8->lpVtbl->Release)(local_8);
      return -1;
    }
  }
  else {
    iVar2 = (**(code **)param_1->unused)(param_1,&DAT_00435620,&local_10);
    if (-1 < iVar2) {
      SetWindowLongA(hWnd,-0x15,local_10);
      hWnd_00 = GetWindow(hWnd,5);
      if (hWnd_00 != (HWND)0x0) {
        uVar6 = GetWindowLongA(hWnd_00,-0x14);
        if ((uVar6 & 0x10000) != 0) {
          uVar6 = GetWindowLongA(hWnd,-0x14);
          SetWindowLongA(hWnd,-0x14,uVar6 | 0x10000);
        }
      }
      if (param_1 != (HWND)0x0) {
        (**(code **)(param_1->unused + 8))(param_1);
      }
      if (local_8 != (IStream *)0x0) {
        (*local_8->lpVtbl->Release)(local_8);
      }
      goto LAB_00404a21;
    }
    if (param_1 != (HWND)0x0) {
      (**(code **)(param_1->unused + 8))(param_1);
    }
    if (local_8 != (IStream *)0x0) {
      (*local_8->lpVtbl->Release)(local_8);
    }
  }
  return -1;
}


