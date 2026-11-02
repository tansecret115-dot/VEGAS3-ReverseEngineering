/* Module: vegas30.exe
   Function: FUN_005fc5f0
   Address: 005fc5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005fc5f0(void)

{
  ulong uVar1;
  
  uVar1 = Transport_GetStatus();
  return uVar1 >> 0x12 & 1;
}


