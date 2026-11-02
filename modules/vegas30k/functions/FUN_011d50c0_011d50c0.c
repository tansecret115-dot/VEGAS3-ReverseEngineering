/* Module: vegas30k.dll
   Function: FUN_011d50c0
   Address: 011d50c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_011d50c0(int param_1)

{
  MMRESULT MVar1;
  
  MVar1 = midiOutGetDevCapsA(*(UINT_PTR *)(param_1 + 0x13c),(LPMIDIOUTCAPSA)(param_1 + 0x140),0x34);
  if (MVar1 == 0) {
    _mbscpy((uchar *)(param_1 + 0x38),(uchar *)(param_1 + 0x148));
    *(uint *)(param_1 + 0x174) = (uint)((LPMIDIOUTCAPSA)(param_1 + 0x140))->wMid;
    *(uint *)(param_1 + 0x178) = (uint)*(ushort *)(param_1 + 0x142);
    *(uint *)(param_1 + 0x17c) = (uint)*(byte *)(param_1 + 0x145);
    *(uint *)(param_1 + 0x180) = (uint)*(byte *)(param_1 + 0x144);
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return MVar1 != 0;
}


