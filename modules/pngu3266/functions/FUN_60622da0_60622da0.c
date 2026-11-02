/* Module: pngu3266.dll
   Function: FUN_60622da0
   Address: 60622da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_60622da0(void *this,LPCSTR param_1,BOOL param_2)

{
  HANDLE pvVar1;
  
  *(undefined ***)this = &PTR_FUN_6062d4f0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_2,0,param_1);
  *(HANDLE *)((int)this + 4) = pvVar1;
  return this;
}


