/* Module: rmme3260.dll
   Function: FUN_66257210
   Address: 66257210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66257210(void *this,LPCSTR param_1,BOOL param_2)

{
  HANDLE pvVar1;
  
  *(undefined ***)this = &PTR_FUN_6626ce60;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_2,0,param_1);
  *(HANDLE *)((int)this + 4) = pvVar1;
  return this;
}


