/* Module: vegas30k.dll
   Function: Cleanup
   Address: 01066700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall A_Buffer::Cleanup(void) */

void __thiscall A_Buffer::Cleanup(A_Buffer *this)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
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


