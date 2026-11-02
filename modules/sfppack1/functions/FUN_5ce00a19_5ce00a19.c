/* Module: sfppack1.dll
   Function: FUN_5ce00a19
   Address: 5ce00a19
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5ce00a19(void *this,BOOL param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}


