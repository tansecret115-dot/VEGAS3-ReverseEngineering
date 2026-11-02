/* Module: sftrkfx1.dll
   Function: FUN_5cbbb3a0
   Address: 5cbbb3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbbb3a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  if ((DAT_5cc11480 == 0) || (DAT_5cc11488 < 1)) {
    uVar2 = FUN_5cba1960();
    if (uVar2 == 0) {
      *param_1 = DAT_5cc10180;
      param_1[1] = DAT_5cc10184;
      param_1[2] = DAT_5cc10188;
      goto LAB_5cbbb402;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 0x3c);
  param_1[1] = *(undefined4 *)((int)this + 0x40);
  param_1[2] = *(undefined4 *)((int)this + 0x44);
LAB_5cbbb402:
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x1c) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return uVar1;
}


