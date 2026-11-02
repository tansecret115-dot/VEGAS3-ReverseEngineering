/* Module: sfxpfx1.dll
   Function: FUN_5c97b358
   Address: 5c97b358
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c97b358(void *this,BOOL param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}


