/* Module: aviplug.dll
   Function: FUN_5f959200
   Address: 5f959200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f959200(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f955450(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}


