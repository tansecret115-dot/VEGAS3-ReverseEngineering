/* Module: mpegin.dll
   Function: FUN_1000ffdb
   Address: 1000ffdb
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000ffdb(undefined4 param_1)

{
  DAT_1001da88 = HeapAlloc(DAT_1001da90,0,0x140);
  if (DAT_1001da88 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1001da80 = 0;
  DAT_1001da84 = 0;
  DAT_1001da7c = DAT_1001da88;
  DAT_1001da8c = param_1;
  DAT_1001da74 = 0x10;
  return 1;
}


