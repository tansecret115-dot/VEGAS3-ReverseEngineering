/* Module: mp3plug.dll
   Function: FUN_5f684ad0
   Address: 5f684ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f684ad0(HWND param_1,int *param_2)

{
  int *pMem;
  HGLOBAL pvVar1;
  HWND hWnd;
  int iVar2;
  WPARAM WVar3;
  uint uVar4;
  uint uVar5;
  uint local_c48;
  uint uStack_c44;
  CHAR aCStack_c40 [4];
  CHAR aCStack_c3c [12];
  CHAR aCStack_c30 [12];
  CHAR aCStack_c24 [4];
  CHAR aCStack_c20 [8];
  CHAR aCStack_c18 [12];
  CHAR aCStack_c0c [12];
  CHAR aCStack_c00 [952];
  WCHAR aWStack_848 [6];
  WCHAR aWStack_83c [6];
  WCHAR aWStack_830 [6];
  WCHAR aWStack_824 [6];
  WCHAR aWStack_818 [6];
  WCHAR aWStack_80c [6];
  WCHAR local_800 [992];
  undefined4 *puStack_40;
  undefined4 *puStack_34;
  undefined4 *puStack_28;
  undefined4 *puStack_1c;
  undefined4 *puStack_10;
  undefined4 *puStack_4;
  
  local_c48 = local_c48 & 0xffffff00;
  if ((int *)*param_2 != (int *)0x0) {
    (**(code **)(*(int *)*param_2 + 0x2c))(0xe,local_800,0x400);
    if (aWStack_80c[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_80c,-1,aCStack_c0c,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x3ea,aCStack_c0c);
    }
    (**(code **)(*(int *)*puStack_4 + 0x2c))(1,aWStack_80c,0x400);
    if (aWStack_818[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_818,-1,aCStack_c18,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x3eb,aCStack_c18);
    }
    (**(code **)(*(int *)*puStack_10 + 0x2c))(0x14,aWStack_818,0x400);
    if (aWStack_824[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_824,-1,aCStack_c24,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x406,aCStack_c24);
    }
    (**(code **)(*(int *)*puStack_1c + 0x2c))(3,aWStack_824,0x400);
    if (aWStack_830[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_830,-1,aCStack_c30,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x3ed,aCStack_c30);
    }
    (**(code **)(*(int *)*puStack_28 + 0x2c))(5,aWStack_830,0x400);
    if (aWStack_83c[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_83c,-1,aCStack_c3c,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x407,aCStack_c3c);
    }
    (**(code **)(*(int *)*puStack_34 + 0x2c))(4,aWStack_83c,0x400);
    if (aWStack_848[0] != L'\0') {
      WideCharToMultiByte(0,0,aWStack_848,-1,(LPSTR)&local_c48,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x3ec,(LPCSTR)&local_c48);
    }
    (**(code **)(*(int *)*puStack_40 + 0x2c))(10,aWStack_848,0x400);
    if (local_800[0] != L'\0') {
      WideCharToMultiByte(0,0,local_800,-1,aCStack_c00,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      FUN_5f6869f0(aCStack_c00,(char *)&local_c48);
    }
  }
  if ((undefined4 *)param_2[0x11] != (undefined4 *)0x0) {
    pMem = (int *)FUN_5f6820b0((undefined4 *)param_2[0x11]);
    if (*pMem == 0x80a) {
      CheckDlgButton(param_1,0x416,pMem[1]);
      *(undefined1 *)((int)pMem + 0x26) = 0;
      *(undefined1 *)((int)pMem + 0x125) = 0;
      *(undefined1 *)(pMem + 0x89) = 0;
      *(undefined1 *)((int)pMem + 0x323) = 0;
      *(undefined1 *)((int)pMem + 0x427) = 0;
      *(undefined1 *)(pMem + 0x102) = 0;
      SetDlgItemTextA(param_1,0x3ea,(LPCSTR)(pMem + 2));
      SetDlgItemTextA(param_1,0x3eb,(LPCSTR)((int)pMem + 0x107));
      SetDlgItemTextA(param_1,0x406,(LPCSTR)((int)pMem + 0x305));
      SetDlgItemTextA(param_1,0x3ed,(LPCSTR)((int)pMem + 0x409));
      SetDlgItemTextA(param_1,0x3ec,(LPCSTR)((int)pMem + 0x206));
      SetDlgItemTextA(param_1,0x407,(LPCSTR)(pMem + 0x101));
      SendDlgItemMessageA(param_1,0x3ea,0xc5,0x1e,0);
      SendDlgItemMessageA(param_1,0x3eb,0xc5,0x1e,0);
      SendDlgItemMessageA(param_1,0x406,0xc5,0x1e,0);
      SendDlgItemMessageA(param_1,0x3ed,0xc5,0x1e,0);
      SendDlgItemMessageA(param_1,0x3ec,0xc5,0x80,0);
      SendDlgItemMessageA(param_1,0x407,0xc5,4,0);
      local_c48 = CONCAT31(local_c48._1_3_,*(undefined1 *)((int)pMem + 0x809));
    }
    else {
      pvVar1 = GlobalHandle((LPCVOID)param_2[0x11]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_2[0x11]);
      GlobalFree(pvVar1);
      param_2[0x11] = 0;
      param_2[0x12] = 0;
    }
    if (pMem != (int *)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
  }
  aCStack_c40[0] = '\0';
  hWnd = GetDlgItem(param_1,0x432);
  uStack_c44 = 1000;
  do {
    uVar4 = uStack_c44;
    iVar2 = FUN_5f69dd80(DAT_5f74d2f4,uStack_c44,aCStack_c20,0x1f);
    uVar5 = uVar4;
    if (((iVar2 != 0) && (WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)aCStack_c20), -1 < (int)WVar3))
       && (SendMessageA(hWnd,0x151,WVar3,uVar4 - 1000), uVar5 = uStack_c44,
          uVar4 - 1000 == (local_c48 & 0xff))) {
      lstrcpyA(aCStack_c40,aCStack_c20);
      uVar5 = uStack_c44;
    }
    uStack_c44 = uVar5 + 1;
  } while ((int)uStack_c44 < 0x466);
  WVar3 = 0;
  if ((aCStack_c40[0] == '\0') ||
     (WVar3 = SendMessageA(hWnd,0x158,0,(LPARAM)aCStack_c40), WVar3 != 0xffffffff)) {
    SendMessageA(hWnd,0x14e,WVar3,0);
  }
  uVar4 = param_2[0x16] & 4;
  if ((uVar4 == 0) || ((param_2[0x16] & 2U) == 0)) {
    iVar2 = (uVar4 != 0) + 0x448;
  }
  else {
    iVar2 = 0x44a;
  }
  CheckRadioButton(param_1,0x448,0x44a,iVar2);
  return;
}


