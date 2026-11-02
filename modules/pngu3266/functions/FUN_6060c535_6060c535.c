/* Module: pngu3266.dll
   Function: FUN_6060c535
   Address: 6060c535
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6060c535(XPNTimer *param_1)

{
  if (*(int *)(param_1 + 0x30) % 2 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x141) = 0;
    XPNTimer::SetPending(param_1,0);
    return;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x2c) + -1;
  return;
}


