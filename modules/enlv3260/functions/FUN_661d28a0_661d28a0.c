/* Module: enlv3260.dll
   Function: FUN_661d28a0
   Address: 661d28a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_661d28a0(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  
  FUN_661d33c0((undefined4 *)((int)this + 4));
  FUN_661d3130((void *)((int)this + 0x18),10);
  *(undefined4 *)this = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,100000,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x48) = pvVar1;
  return this;
}


