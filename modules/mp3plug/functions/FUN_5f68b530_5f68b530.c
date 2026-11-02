/* Module: mp3plug.dll
   Function: FUN_5f68b530
   Address: 5f68b530
   Source: Ghidra pseudocode (Stage 10 batch) */


char FUN_5f68b530(int param_1)

{
  return ((*(ushort *)(param_1 + 2) & 0x300) != 0x300) + '\x01';
}


