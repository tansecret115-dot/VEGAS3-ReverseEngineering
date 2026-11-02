/* Module: sfppack1.dll
   Function: FUN_5cdd9460
   Address: 5cdd9460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdd9460(HWND param_1,int param_2)

{
  uchar *_Dest;
  void *this;
  HWND hWnd;
  int iVar1;
  LPCSTR lpCaption;
  LPCSTR lpText;
  int iVar2;
  UINT UVar3;
  UINT uType;
  int local_44;
  HKEY__ local_40 [16];
  
  hWnd = param_1;
  this = DAT_5ce237f0;
  GetDlgItemTextA(param_1,0x579,(LPSTR)local_40,0x19);
  iVar1 = FUN_5ce06090(this,&local_44,(uint *)&param_1,local_40,(uint *)0x0,(undefined4 *)0x0);
  FUN_5ce074c0((int)this);
  iVar2 = param_2;
  if (iVar1 < 0) {
    if ((iVar1 == -0x7ffb1ecc) || (iVar1 == -0x7ffb1ecb)) {
      uType = 0x34;
      lpCaption = FUN_5cdd9260(0x52f);
      UVar3 = 0x52e;
    }
    else {
      uType = 0x34;
      lpCaption = FUN_5cdd9260(0x518);
      UVar3 = 0x517;
    }
    lpText = FUN_5cdd9230(UVar3);
    iVar2 = MessageBoxA(hWnd,lpText,lpCaption,uType);
    if (iVar2 == 6) {
      SetWindowLongA(hWnd,0,1);
      return 2;
    }
  }
  else {
    _Dest = (uchar *)(param_2 + 0xb);
    _mbscpy(_Dest,(uchar *)local_40);
    FUN_5ce050b0(this,_Dest);
    iVar1 = FUN_5ce06190(this,(undefined4 *)(iVar2 + 0x144),&param_1,1);
    if (-1 < iVar1) {
      **(undefined2 **)(iVar2 + 0x128) = param_1._0_2_;
      FUN_5ce05ef0(this,(HKEY)0x2,(HKEY)0x0);
      return 1;
    }
  }
  return 0;
}


