/* Module: vegas30.exe
   Function: FUN_005fb100
   Address: 005fb100
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005fb100(void)

{
  ulong uVar1;
  
  uVar1 = Transport_GetStatus();
  return (uVar1 & 0x402) != 0;
}


