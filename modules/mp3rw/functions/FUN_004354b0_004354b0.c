/* Module: mp3rw.dll
   Function: FUN_004354b0
   Address: 004354b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_004354b0(void *this,uchar *param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  uchar local_208 [260];
  uchar local_104 [260];
  
  pvVar1 = CreateFileA((LPCSTR)param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_0043c480(this,0xaaaaaaa4,(uchar *)"OpenMultiVol",(uchar *)0x0);
    return 0x8004e006;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar2 = FUN_00435d70(this,pvVar1);
  if ((int)uVar2 < 0) {
    FUN_0043c480(this,0xaaaaaaa5,(uchar *)"OpenMultiVol",(uchar *)0x0);
    return 0x8004e0b0;
  }
  FUN_0041caf0(param_1,local_104,0x104);
  FUN_0041c730((LPCSTR)param_1);
  FUN_00420fe0(local_208,(BYTE *)"%s~%s");
  pvVar1 = CreateFileA((LPCSTR)local_208,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
  ;
  if (pvVar1 == (HANDLE)0xffffffff) {
    FUN_0043c480(this,0xaaaaaaa2,local_208,(uchar *)0x0);
    return 0x8004e006;
  }
  _mbscpy((uchar *)((int)this + 0x77c),local_208);
  *(undefined4 *)((int)this + 0x89c) = *(undefined4 *)((int)this + 0x40);
  *(HANDLE *)((int)this + 0xc) = pvVar1;
  if (*(int *)((int)this + 0x890) != 0 || *(int *)((int)this + 0x894) != 0) {
    uVar2 = FUN_004357a0((int)this);
    return uVar2;
  }
  return uVar2;
}


