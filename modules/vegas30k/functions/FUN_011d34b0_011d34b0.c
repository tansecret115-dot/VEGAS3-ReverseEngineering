/* Module: vegas30k.dll
   Function: FUN_011d34b0
   Address: 011d34b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011d34b0(int param_1)

{
  uint uVar1;
  HANDLE hEvent;
  
  if ((*(byte *)(param_1 + 0x154) & 1) == 0) {
    return 0;
  }
  do {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x16c),*(DWORD *)(param_1 + 0x170));
    uVar1 = *(uint *)(param_1 + 0x158);
    if (uVar1 < 0x3bc) {
      if (uVar1 == 0x3bb) {
        hEvent = *(HANDLE *)(param_1 + 0x16c);
        goto LAB_011d3526;
      }
      if (uVar1 == 1) goto LAB_011d351f;
      if (uVar1 != 3) goto LAB_011d350d;
      FUN_011d34a0();
    }
    else {
      if (uVar1 == 0x3bc) {
LAB_011d351f:
        hEvent = *(HANDLE *)(param_1 + 0x16c);
      }
      else {
        if (uVar1 == 0x3bd) {
          FUN_011d3320();
          goto LAB_011d3528;
        }
LAB_011d350d:
        hEvent = *(HANDLE *)(param_1 + 0x16c);
      }
LAB_011d3526:
      ResetEvent(hEvent);
    }
LAB_011d3528:
    if ((*(byte *)(param_1 + 0x154) & 1) == 0) {
      return 0;
    }
  } while( true );
}


