/* Module: vegas30k.dll
   Function: FUN_011c3050
   Address: 011c3050
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_011c3050(int param_1)

{
  UINT UVar1;
  
  _mbscpy((uchar *)(param_1 + 0xc),(uchar *)"Windows Classic Wave Driver");
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x21;
  *(undefined4 *)(param_1 + 8) = 1;
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xffffffdf;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  UVar1 = waveOutGetNumDevs();
  *(UINT *)(param_1 + 0x114) = UVar1;
  UVar1 = waveInGetNumDevs();
  *(UINT *)(param_1 + 0x11c) = UVar1;
  return *(int *)(param_1 + 0x114) == 0;
}


