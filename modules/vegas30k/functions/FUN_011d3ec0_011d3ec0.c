/* Module: vegas30k.dll
   Function: FUN_011d3ec0
   Address: 011d3ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_011d3ec0(int param_1)

{
  MMRESULT MVar1;
  
  MVar1 = midiInGetDevCapsA(*(UINT_PTR *)(param_1 + 0x164),(LPMIDIINCAPSA)(param_1 + 0x134),0x2c);
  if (MVar1 == 0) {
    _mbscpy((uchar *)(param_1 + 0x30),(uchar *)(param_1 + 0x13c));
    *(uint *)(param_1 + 0x174) = (uint)((LPMIDIINCAPSA)(param_1 + 0x134))->wMid;
    *(uint *)(param_1 + 0x178) = (uint)*(ushort *)(param_1 + 0x136);
    *(uint *)(param_1 + 0x17c) = (uint)*(byte *)(param_1 + 0x139);
    *(uint *)(param_1 + 0x180) = (uint)*(byte *)(param_1 + 0x138);
  }
  return MVar1 != 0;
}


