/* Module: vegas30k.dll
   Function: FUN_011c0880
   Address: 011c0880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c0880(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x14) = DVar1;
  return 0;
}


