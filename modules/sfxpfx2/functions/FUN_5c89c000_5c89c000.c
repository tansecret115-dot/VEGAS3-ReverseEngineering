/* Module: sfxpfx2.dll
   Function: FUN_5c89c000
   Address: 5c89c000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c89c000(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  param_1[1] = *(undefined4 *)((int)this + 0x20);
  param_1[2] = *(undefined4 *)((int)this + 0x24);
  uVar1 = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x28) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return uVar1;
}


