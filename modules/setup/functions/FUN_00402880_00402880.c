/* Module: Setup.exe
   Function: FUN_00402880
   Address: 00402880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402880(void)

{
  int iVar1;
  undefined4 *this;
  HGLOBAL pvVar2;
  undefined4 uVar3;
  uchar *_Dest;
  
  uVar3 = 0x80004005;
  iVar1 = FUN_00402930();
  if (iVar1 == 0) {
    return 0x80004005;
  }
  this = FUN_0042d000(iVar1);
  if (this == (undefined4 *)0x0) {
    return 0x80004005;
  }
  iVar1 = FUN_0042bde0(this,"AppGrade",&DAT_004474cc,0x104);
  if (iVar1 < 0) {
    _Dest = &DAT_004474cc;
  }
  else {
    uVar3 = 0;
    iVar1 = FUN_0042bde0(this,"AppStyle",&DAT_004475d0,0x104);
    if (-1 < iVar1) goto LAB_004028f5;
    _Dest = &DAT_004475d0;
  }
  _mbscpy(_Dest,"");
LAB_004028f5:
  FUN_00426530(this);
  pvVar2 = GlobalHandle(this);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(this);
  GlobalFree(pvVar2);
  return uVar3;
}


