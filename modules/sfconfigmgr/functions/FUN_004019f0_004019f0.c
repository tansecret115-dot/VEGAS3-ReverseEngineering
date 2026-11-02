/* Module: sfconfigmgr.dll
   Function: FUN_004019f0
   Address: 004019f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004019f0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  *(undefined ***)this = &PTR_FUN_0041a324;
  *(undefined4 *)((int)this + 4) = 1;
  InterlockedDecrement(&DAT_00422fe4);
  FUN_00401c50();
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}


