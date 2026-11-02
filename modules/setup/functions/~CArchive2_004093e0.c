/* Module: Setup.exe
   Function: ~CArchive2
   Address: 004093e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CArchive2::~CArchive2(void) */

void __thiscall CArchive2::~CArchive2(CArchive2 *this)

{
                    /* 0x93e0  2  ??1CArchive2@@UAE@XZ */
  *(undefined ***)this = &PTR_FUN_00438fa0;
  FUN_004115f0((int)this);
  if (*(HANDLE *)(this + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


