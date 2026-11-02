/* Module: aviplug.dll
   Function: FUN_5f955450
   Address: 5f955450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f955450(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f9d8d20;
  if ((LPVOID)param_1[6] != (LPVOID)0x0) {
    FUN_5f967300((LPVOID)param_1[6]);
    param_1[6] = 0;
  }
  FUN_5f955e70(param_1);
  return;
}


