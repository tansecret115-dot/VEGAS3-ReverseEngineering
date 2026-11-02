/* Module: Setup.exe
   Function: FUN_00409bd0
   Address: 00409bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __thiscall FUN_00409bd0(void *this,LPCSTR param_1)

{
  HANDLE pvVar1;
  long lVar2;
  
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_00410c30(this,0xaaaaaaa4,(uchar *)"Open SEA",(uchar *)0x0);
    return -0x7ffb1ffa;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  lVar2 = FUN_0040a520(this,pvVar1);
  if (-1 < lVar2) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x89c) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x1c) = 0;
    return lVar2;
  }
  FUN_00410c30(this,0xaaaaaaa5,(uchar *)"Open SEA",(uchar *)0x0);
  return -0x7ffb1f50;
}


