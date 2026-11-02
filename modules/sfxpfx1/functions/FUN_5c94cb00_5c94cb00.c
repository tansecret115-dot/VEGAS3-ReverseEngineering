/* Module: sfxpfx1.dll
   Function: FUN_5c94cb00
   Address: 5c94cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c94cb00(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  param_1[1] = *(undefined4 *)((int)this + 0x20);
  param_1[2] = *(undefined4 *)((int)this + 0x24);
  param_1[3] = *(undefined4 *)((int)this + 0x28);
  uVar1 = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x2c) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return uVar1;
}


