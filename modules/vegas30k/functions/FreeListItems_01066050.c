/* Module: vegas30k.dll
   Function: FreeListItems
   Address: 01066050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall A_Buffer::FreeListItems(void) */

void __thiscall A_Buffer::FreeListItems(A_Buffer *this)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
                    /* 0x66050  73  ?FreeListItems@A_Buffer@@AAEXXZ */
  pMem = *(LPCVOID *)(this + 0x126bc);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(this + 0x126bc) = 0;
    return;
  }
  *(undefined4 *)(this + 0x126bc) = 0;
  return;
}


