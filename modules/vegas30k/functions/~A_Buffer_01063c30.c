/* Module: vegas30k.dll
   Function: ~A_Buffer
   Address: 01063c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall A_Buffer::~A_Buffer(void) */

void __thiscall A_Buffer::~A_Buffer(A_Buffer *this)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
                    /* 0x63c30  6  ??1A_Buffer@@QAE@XZ */
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


