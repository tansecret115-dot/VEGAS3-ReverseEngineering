/* Module: vegas30k.dll
   Function: FUN_011c7540
   Address: 011c7540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c7540(int param_1)

{
  uint uVar1;
  HANDLE hEvent;
  
  if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
    return 0;
  }
  do {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x21c),*(DWORD *)(param_1 + 0x220));
    uVar1 = *(uint *)(param_1 + 0x22c);
    if (uVar1 < 0x3bc) {
      if (uVar1 == 0x3bb) {
        hEvent = *(HANDLE *)(param_1 + 0x21c);
      }
      else {
        if (uVar1 == 1) goto LAB_011c75ac;
        if (uVar1 == 3) goto LAB_011c75b5;
        hEvent = *(HANDLE *)(param_1 + 0x21c);
      }
LAB_011c75b3:
      ResetEvent(hEvent);
    }
    else {
      if (uVar1 == 0x3bc) {
LAB_011c75ac:
        hEvent = *(HANDLE *)(param_1 + 0x21c);
        goto LAB_011c75b3;
      }
      if (uVar1 != 0x3bd) {
        hEvent = *(HANDLE *)(param_1 + 0x21c);
        goto LAB_011c75b3;
      }
      FUN_011c73f0();
    }
LAB_011c75b5:
    if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
      return 0;
    }
  } while( true );
}


