/* Module: encn3260.dll
   Function: FUN_664b3460
   Address: 664b3460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664b3460(void *this,undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (*(int *)((int)this + 0x28) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)((int)this + 0x28) == 1) {
    uVar1 = FUN_664b34b0(this,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
    return uVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  return uVar1;
}


