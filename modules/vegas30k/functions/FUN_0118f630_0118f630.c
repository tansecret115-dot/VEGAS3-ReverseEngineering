/* Module: vegas30k.dll
   Function: FUN_0118f630
   Address: 0118f630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118f630(int param_1)

{
  byte bVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x54),*(DWORD *)(param_1 + 0x58));
  ResetEvent(*(HANDLE *)(param_1 + 0x54));
  bVar1 = *(byte *)(param_1 + 0x10);
  while ((bVar1 & 2) != 0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x54),*(DWORD *)(param_1 + 0x58));
    ResetEvent(*(HANDLE *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0118f540();
    }
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  return 0;
}


