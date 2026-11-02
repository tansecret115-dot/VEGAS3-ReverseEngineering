/* Module: mpgmux.dll
   Function: FUN_1000d883
   Address: 1000d883
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000d883(undefined4 param_1)

{
  DAT_1001c678 = HeapAlloc(DAT_1001c680,0,0x140);
  if (DAT_1001c678 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1001c670 = 0;
  DAT_1001c674 = 0;
  DAT_1001c66c = DAT_1001c678;
  DAT_1001c67c = param_1;
  DAT_1001c664 = 0x10;
  return 1;
}


