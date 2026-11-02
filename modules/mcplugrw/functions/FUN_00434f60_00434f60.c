/* Module: mcplugrw.dll
   Function: FUN_00434f60
   Address: 00434f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00434f60(void *this,uchar *param_1)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  
  pvVar1 = CreateFileA((LPCSTR)param_1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *(HANDLE *)((int)this + 0xc) = pvVar1;
    *(HANDLE *)((int)this + 8) = pvVar1;
    *(undefined4 *)((int)this + 0x89c) = 0;
    *(undefined4 *)((int)this + 0x898) = 1;
    *(undefined4 *)((int)this + 0x8a8) = 1;
    uVar2 = FUN_004250c0((int *)((int)this + 0x10),4,-1,-1,0x40000002);
    return uVar2;
  }
  FUN_0043c480(this,0xaaaaaaa2,param_1,(uchar *)0x0);
  return 0x8004e006;
}


