/* Module: vidcap30.exe
   Function: ~CArchive2
   Address: 0052f620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CArchive2::~CArchive2(void) */

void __thiscall CArchive2::~CArchive2(CArchive2 *this)

{
                    /* 0x12f620  2  ??1CArchive2@@UAE@XZ */
  *(undefined ***)this = &PTR_FUN_0059d7f0;
  FUN_00537830();
  if (*(HANDLE *)(this + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


