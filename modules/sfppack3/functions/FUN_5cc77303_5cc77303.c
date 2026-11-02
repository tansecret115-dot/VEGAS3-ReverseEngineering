/* Module: sfppack3.dll
   Function: FUN_5cc77303
   Address: 5cc77303
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc77303(void *this,BOOL param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}


