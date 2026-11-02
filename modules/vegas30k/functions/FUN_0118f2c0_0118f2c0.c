/* Module: vegas30k.dll
   Function: FUN_0118f2c0
   Address: 0118f2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118f2c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    syncoutStopSmpte(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x1c) != 0)) {
      ResetEvent(*(HANDLE *)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    }
    uVar1 = 0;
  }
  return uVar1;
}


