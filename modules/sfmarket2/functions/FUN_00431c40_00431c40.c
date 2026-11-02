/* Module: sfmarket2.dll
   Function: FUN_00431c40
   Address: 00431c40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00431c40(void *this,LPCSTR param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  HANDLE pvVar2;
  uint uVar3;
  
  bVar1 = FUN_00420b70(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_004390e0(this,0xaaaaaaae,(uchar *)"open read",(uchar *)0x0);
    return 0x8004e032;
  }
  pvVar2 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (pvVar2 != (HANDLE)0xffffffff) {
    uVar3 = FUN_004329d0(this,pvVar2);
    if (-1 < (int)uVar3) {
      *(HANDLE *)((int)this + 0xc) = pvVar2;
      *(undefined4 *)((int)this + 0x89c) = *(undefined4 *)((int)this + 0x40);
      return uVar3;
    }
    FUN_004390e0(this,0xaaaaaaa5,(uchar *)"open read",(uchar *)0x0);
    return 0x8004e0b0;
  }
  FUN_004390e0(this,0xaaaaaaa2,(uchar *)"open read",(uchar *)0x0);
  return 0x8004e006;
}


