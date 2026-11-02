/* Module: mcplug.dll
   Function: FUN_0046de80
   Address: 0046de80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046de80(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_0046e080(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_00472930();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


