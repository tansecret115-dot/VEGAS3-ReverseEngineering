/* Module: vegas30k.dll
   Function: FUN_011af200
   Address: 011af200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011af200(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b0) = 0;
  SetEvent(*(HANDLE *)(param_1 + 0x810));
  SetEvent(*(HANDLE *)(param_1 + 0x82c));
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x694) = 0;
  return 0;
}


