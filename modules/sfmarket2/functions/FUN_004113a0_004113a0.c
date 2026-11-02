/* Module: sfmarket2.dll
   Function: FUN_004113a0
   Address: 004113a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004113a0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040f630(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}


