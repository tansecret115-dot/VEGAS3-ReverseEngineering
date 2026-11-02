/* Module: sfcdi.dll
   Function: ~CSfReadAudio
   Address: 5bf05b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CSfReadAudio::~CSfReadAudio(void) */

void __thiscall CSfReadAudio::~CSfReadAudio(CSfReadAudio *this)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
                    /* 0x5b90  2  ??1CSfReadAudio@@QAE@XZ */
  Stop();
  pMem = *(LPCVOID *)(this + 0x30);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    FUN_5bf18da0(*(int *)(this + 0x2c));
    pvVar1 = GlobalHandle(*(LPCVOID *)(this + 0x2c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(this + 0x2c));
    GlobalFree(pvVar1);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (*(HANDLE *)(this + 0x38) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 0x38));
    *(undefined4 *)(this + 0x38) = 0;
  }
  return;
}


