/* Module: sfs4rw.dll
   Function: FUN_004351d0
   Address: 004351d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_004351d0(void *this,uchar *param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  int iVar3;
  uchar local_208 [260];
  uchar local_104 [260];
  
  pvVar1 = CreateFileA((LPCSTR)param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_0043c400(this,0xaaaaaaa4,(uchar *)"Open Delete",(uchar *)0x0);
    return 0x8004e006;
  }
  uVar2 = FUN_00435cf0(this,pvVar1);
  if ((int)uVar2 < 0) {
    FUN_0043c400(this,0xaaaaaaa5,(uchar *)"Open Delete",(uchar *)0x0);
    return 0x8004e0b0;
  }
  iVar3 = FUN_0043ad20((int)this);
  if (1 < iVar3) {
    FUN_0043c400(this,0xaaaaaaa1,(uchar *)"Open Delete",(uchar *)0x0);
    return 0x8004e0b0;
  }
  FUN_0041ca70(param_1,local_104,0x104);
  FUN_0041c6b0((LPCSTR)param_1);
  FUN_00420f60(local_208,(BYTE *)"%s~%s");
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
      uVar2 = FUN_00435720((int)this);
    }
    if (-1 < (int)uVar2) {
      uVar2 = FUN_00425040((int *)((int)this + 0x10),4,-1,-1,0x40000002);
      return uVar2;
    }
    return uVar2;
  }
  FUN_0043c400(this,0xaaaaaaa2,local_208,(uchar *)0x0);
  return 0x8004e006;
}


