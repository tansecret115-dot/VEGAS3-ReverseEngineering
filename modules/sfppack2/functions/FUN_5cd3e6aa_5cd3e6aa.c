/* Module: sfppack2.dll
   Function: FUN_5cd3e6aa
   Address: 5cd3e6aa
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cd3e6aa(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  FUN_5cd3bd15(this,param_1,param_2,(LPCRITICAL_SECTION)((int)this + 0x5c),param_3);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x74));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  return this;
}


