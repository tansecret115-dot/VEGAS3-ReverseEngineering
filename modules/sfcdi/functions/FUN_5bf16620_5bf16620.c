/* Module: sfcdi.dll
   Function: FUN_5bf16620
   Address: 5bf16620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf16620(int param_1)

{
  CSfReadAudio *this;
  HGLOBAL pvVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    CSfReadAudio::Stop();
    this = *(CSfReadAudio **)(param_1 + 0x28);
    if (this != (CSfReadAudio *)0x0) {
      CSfReadAudio::~CSfReadAudio(this);
      pvVar1 = GlobalHandle(this);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(this);
      GlobalFree(pvVar1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(HSFCD__ **)(param_1 + 0x2c) != (HSFCD__ *)0x0) {
    cdr_Close(*(HSFCD__ **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}


