/* Module: stl2plg.dll
   Function: FUN_00402050
   Address: 00402050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00402050(void *this,undefined4 param_1,int param_2,int param_3)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  
  FUN_004020c0((int)this);
  uVar2 = 0x8004e003;
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0xc) = pvVar1;
  if (pvVar1 != (HANDLE)0x0) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(int *)((int)this + 0x20) = param_2;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x1b0) = 0;
    uVar2 = FUN_004027f0((void *)((int)this + 0x28),param_3);
  }
  FUN_00402100(this);
  return uVar2;
}


