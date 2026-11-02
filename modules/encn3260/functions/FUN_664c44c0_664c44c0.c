/* Module: encn3260.dll
   Function: FUN_664c44c0
   Address: 664c44c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c44c0(void *this,LPCSTR param_1,BOOL param_2)

{
  HANDLE pvVar1;
  
  *(undefined ***)this = &PTR_FUN_664df9e0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_2,0,param_1);
  *(HANDLE *)((int)this + 4) = pvVar1;
  return this;
}


