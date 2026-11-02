/* Module: sfs4rw.dll
   Function: FUN_004353a0
   Address: 004353a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_004353a0(void *this,LPCSTR param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_0043c400(this,0xaaaaaaa4,(uchar *)"Open SEA",(uchar *)0x0);
    return 0x8004e006;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar2 = FUN_00435cf0(this,pvVar1);
  if (-1 < (int)uVar2) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x89c) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x1c) = 0;
    return uVar2;
  }
  FUN_0043c400(this,0xaaaaaaa5,(uchar *)"Open SEA",(uchar *)0x0);
  return 0x8004e0b0;
}


