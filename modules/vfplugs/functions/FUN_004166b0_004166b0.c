/* Module: vfplugs.dll
   Function: FUN_004166b0
   Address: 004166b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004166b0(HWND param_1,int param_2)

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
  this = DAT_00494a40;
  GetDlgItemTextA(param_1,0x579,(LPSTR)local_40,0x19);
  iVar1 = FUN_00478d10(this,&local_44,(uint *)&param_1,local_40,(uint *)0x0,(undefined4 *)0x0);
  FUN_0047a140((int)this);
  iVar2 = param_2;
  if (iVar1 < 0) {
    if ((iVar1 == -0x7ffb1ecc) || (iVar1 == -0x7ffb1ecb)) {
      uType = 0x34;
      lpCaption = FUN_004164b0(0x52f);
      UVar3 = 0x52e;
    }
    else {
      uType = 0x34;
      lpCaption = FUN_004164b0(0x518);
      UVar3 = 0x517;
    }
    lpText = FUN_00416480(UVar3);
    iVar2 = MessageBoxA(hWnd,lpText,lpCaption,uType);
    if (iVar2 == 6) {
      SetWindowLongA(hWnd,0,1);
      return 2;
    }
  }
  else {
    _Dest = (uchar *)(param_2 + 0xb);
    _mbscpy(_Dest,(uchar *)local_40);
    FUN_00477d30(this,_Dest);
    iVar1 = FUN_00478e10(this,(int *)(iVar2 + 0x144),(int *)&param_1,1);
    if (-1 < iVar1) {
      **(undefined2 **)(iVar2 + 0x128) = param_1._0_2_;
      return 1;
    }
  }
  return 0;
}


