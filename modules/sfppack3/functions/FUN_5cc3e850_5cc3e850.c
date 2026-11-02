/* Module: sfppack3.dll
   Function: FUN_5cc3e850
   Address: 5cc3e850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc3e850(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  uVar1 = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return uVar1;
}


