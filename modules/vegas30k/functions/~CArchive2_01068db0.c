/* Module: vegas30k.dll
   Function: ~CArchive2
   Address: 01068db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CArchive2::~CArchive2(void) */

void __thiscall CArchive2::~CArchive2(CArchive2 *this)

{
                    /* 0x68db0  7  ??1CArchive2@@UAE@XZ */
  *(undefined ***)this = &PTR_FUN_011e1e20;
  FUN_01070fc0();
  if (*(HANDLE *)(this + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


