/* Module: sfnetmedia.dll
   Function: FUN_00403a60
   Address: 00403a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00403a60(void *this,byte param_1)

{
  HANDLE pvVar1;
  HGLOBAL pvVar2;
  
  *(undefined ***)this = &PTR_LAB_0043569c;
  if (*(int *)((int)this + 0x1c) != 0) {
    pvVar1 = *(HANDLE *)(*(int *)((int)this + 0x1c) + 0xda4);
    if (pvVar1 != (HANDLE)0x0) {
      CloseHandle(pvVar1);
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0xda4) = 0;
    }
    pvVar1 = *(HANDLE *)(*(int *)((int)this + 0x1c) + 0xdac);
    if (pvVar1 != (HANDLE)0x0) {
      CloseHandle(pvVar1);
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0xdac) = 0;
    }
  }
  if ((param_1 & 1) != 0) {
    pvVar2 = GlobalHandle(this);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this);
    GlobalFree(pvVar2);
  }
  return this;
}


