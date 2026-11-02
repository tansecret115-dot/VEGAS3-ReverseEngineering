/* Module: Setup.exe
   Function: FUN_00409a00
   Address: 00409a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00409a00(void *this,uchar *param_1)

{
  HANDLE pvVar1;
  long lVar2;
  int iVar3;
  uchar local_208 [260];
  uchar local_104 [260];
  
  pvVar1 = CreateFileA((LPCSTR)param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_00410c30(this,0xaaaaaaa4,(uchar *)"Open Delete",(uchar *)0x0);
    return -0x7ffb1ffa;
  }
  lVar2 = FUN_0040a520(this,pvVar1);
  if (lVar2 < 0) {
    FUN_00410c30(this,0xaaaaaaa5,(uchar *)"Open Delete",(uchar *)0x0);
    return -0x7ffb1f50;
  }
  iVar3 = CArchive2::GetMultiVolumeStatus();
  if (1 < iVar3) {
    FUN_00410c30(this,0xaaaaaaa1,(uchar *)"Open Delete",(uchar *)0x0);
    return -0x7ffb1f50;
  }
  _SfGetPathNameFromFilePath_12(param_1,local_104,0x104);
  _SfGetFileNamePtrA_4((LPCSTR)param_1);
  SfPrintF(local_208,(BYTE *)"%s~%s");
  pvVar1 = CreateFileA((LPCSTR)local_208,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
  ;
  if (pvVar1 != (HANDLE)0xffffffff) {
    _mbscpy((uchar *)((int)this + 0x77c),local_208);
    *(HANDLE *)((int)this + 0xc) = pvVar1;
    *(undefined4 *)((int)this + 0x89c) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    if ((-1 < *(int *)((int)this + 0x894)) &&
       ((0 < *(int *)((int)this + 0x894) || (*(int *)((int)this + 0x890) != 0)))) {
      lVar2 = FUN_00409f50((int)this);
    }
    if (-1 < lVar2) {
      iVar3 = _SfList_CreateExZ_32((int *)((int)this + 0x10),4,-1,-1,0x40000002);
      return iVar3;
    }
    return lVar2;
  }
  FUN_00410c30(this,0xaaaaaaa2,local_208,(uchar *)0x0);
  return -0x7ffb1ffa;
}


