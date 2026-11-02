/* Module: vidpcore.dll
   Function: FUN_5dea16c0
   Address: 5dea16c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dea16c0(HWND param_1,int param_2)

{
  uchar *_Dest;
  HWND hWnd;
  int iVar1;
  LPCSTR lpCaption;
  LPCSTR lpText;
  int iVar2;
  undefined4 uVar3;
  UINT uType;
  undefined1 local_44 [4];
  uchar local_40 [64];
  
  hWnd = param_1;
  GetDlgItemTextA(param_1,0x579,(LPSTR)local_40,0x19);
  iVar1 = FUN_5df0cd50(local_44,&param_1,local_40,0,0);
  FUN_5df0e180();
  iVar2 = param_2;
  if (iVar1 < 0) {
    if ((iVar1 == -0x7ffb1ecc) || (iVar1 == -0x7ffb1ecb)) {
      uType = 0x34;
      lpCaption = (LPCSTR)FUN_5dea14c0(0x52f);
      uVar3 = 0x52e;
    }
    else {
      uType = 0x34;
      lpCaption = (LPCSTR)FUN_5dea14c0(0x518);
      uVar3 = 0x517;
    }
    lpText = (LPCSTR)FUN_5dea1490(uVar3);
    iVar2 = MessageBoxA(hWnd,lpText,lpCaption,uType);
    if (iVar2 == 6) {
      SetWindowLongA(hWnd,0,1);
      return 2;
    }
  }
  else {
    _Dest = (uchar *)(param_2 + 0xb);
    _mbscpy(_Dest,local_40);
    FUN_5df0bd70(_Dest);
    iVar1 = FUN_5df0ce50(iVar2 + 0x144,&param_1,1);
    if (-1 < iVar1) {
      **(undefined2 **)(iVar2 + 0x128) = param_1._0_2_;
      return 1;
    }
  }
  return 0;
}


