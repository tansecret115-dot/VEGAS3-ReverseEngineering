/* Module: sfnetmedia.dll
   Function: FUN_004278d0
   Address: 004278d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004278d0(void *this,undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = 0x80004005;
  if ((*(int *)((int)this + 0x60) != 0) && (param_1 != (undefined4 *)0x0)) {
    if (*(int *)((int)this + 0x38) == 0) {
      *param_1 = *(undefined4 *)((int)this + 0x20);
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    uVar1 = 0x8004e0ac;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}


