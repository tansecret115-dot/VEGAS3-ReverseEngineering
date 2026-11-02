/* Module: vegas30k.dll
   Function: FUN_011c5150
   Address: 011c5150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c5150(int param_1)

{
  HANDLE *lpHandles;
  uint uVar1;
  HANDLE hEvent;
  
  if ((*(byte *)(param_1 + 0x228) & 4) == 0) {
    return 0;
  }
  lpHandles = (HANDLE *)(param_1 + 0x138);
  do {
    WaitForMultipleObjects(*(DWORD *)(param_1 + 0x1b8),lpHandles,0,*(DWORD *)(param_1 + 0x1bc));
    ResetEvent(*lpHandles);
    uVar1 = *(uint *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1bc) = 0xffffffff;
    if (uVar1 < 0x3bc) {
      if (uVar1 == 0x3bb) {
        hEvent = *lpHandles;
      }
      else {
        if (uVar1 == 1) goto LAB_011c51db;
        if (uVar1 == 3) goto LAB_011c51e0;
        *(undefined4 *)(param_1 + 0x1bc) = 0xffffffff;
        hEvent = *lpHandles;
      }
LAB_011c51de:
      ResetEvent(hEvent);
    }
    else {
      if (uVar1 == 0x3bc) {
LAB_011c51db:
        hEvent = *lpHandles;
        goto LAB_011c51de;
      }
      if (uVar1 != 0x3bd) {
        *(undefined4 *)(param_1 + 0x1bc) = 0xffffffff;
        hEvent = *lpHandles;
        goto LAB_011c51de;
      }
      FUN_011c50f0();
    }
LAB_011c51e0:
    if ((*(byte *)(param_1 + 0x228) & 4) == 0) {
      return 0;
    }
  } while( true );
}


