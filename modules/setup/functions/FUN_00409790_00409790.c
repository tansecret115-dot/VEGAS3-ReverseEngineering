/* Module: Setup.exe
   Function: FUN_00409790
   Address: 00409790
   Source: Ghidra pseudocode (Stage 10 batch) */


long __thiscall FUN_00409790(void *this,LPCSTR param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  HANDLE pvVar2;
  long lVar3;
  
  bVar1 = _SfDoesFileExist_4(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_00410c30(this,0xaaaaaaae,(uchar *)"open read",(uchar *)0x0);
    return -0x7ffb1fce;
  }
  pvVar2 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (pvVar2 != (HANDLE)0xffffffff) {
    lVar3 = FUN_0040a520(this,pvVar2);
    if (-1 < lVar3) {
      *(HANDLE *)((int)this + 0xc) = pvVar2;
      *(undefined4 *)((int)this + 0x89c) = *(undefined4 *)((int)this + 0x40);
      return lVar3;
    }
    FUN_00410c30(this,0xaaaaaaa5,(uchar *)"open read",(uchar *)0x0);
    return -0x7ffb1f50;
  }
  FUN_00410c30(this,0xaaaaaaa2,(uchar *)"open read",(uchar *)0x0);
  return -0x7ffb1ffa;
}


