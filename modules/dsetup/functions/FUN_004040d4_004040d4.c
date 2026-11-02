/* Module: dsetup.dll
   Function: FUN_004040d4
   Address: 004040d4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004040d4(undefined4 param_1)

{
  DAT_0040b03c = HeapAlloc(DAT_0040b044,0,0x140);
  if (DAT_0040b03c == (LPVOID)0x0) {
    return 0;
  }
  DAT_0040b034 = 0;
  DAT_0040b038 = 0;
  DAT_0040b030 = DAT_0040b03c;
  DAT_0040b040 = param_1;
  DAT_0040b028 = 0x10;
  return 1;
}


