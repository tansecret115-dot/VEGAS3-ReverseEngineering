/* Module: sfppack2.dll
   Function: FUN_5cd3f3cf
   Address: 5cd3f3cf
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cd3f3cf(void *this,BOOL param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}


