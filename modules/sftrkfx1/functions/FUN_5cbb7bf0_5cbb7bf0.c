/* Module: sftrkfx1.dll
   Function: FUN_5cbb7bf0
   Address: 5cbb7bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbb7bf0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  if ((DAT_5cc11480 == 0) || (DAT_5cc11488 < 1)) {
    uVar2 = FUN_5cba1960();
    if (uVar2 == 0) {
      *param_1 = DAT_5cc10020;
      param_1[1] = DAT_5cc10024;
      param_1[2] = DAT_5cc10028;
      goto LAB_5cbb7c52;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  param_1[1] = *(undefined4 *)((int)this + 0x20);
  param_1[2] = *(undefined4 *)((int)this + 0x24);
LAB_5cbb7c52:
  uVar1 = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x28) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return uVar1;
}


