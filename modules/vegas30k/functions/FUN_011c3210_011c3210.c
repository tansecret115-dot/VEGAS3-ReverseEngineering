/* Module: vegas30k.dll
   Function: FUN_011c3210
   Address: 011c3210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c3210(int param_1)

{
  UINT UVar1;
  
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xffffffdf;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x24;
  _mbscpy((uchar *)(param_1 + 0xc),(uchar *)"Microsoft Sound Mapper");
  *(undefined4 *)(param_1 + 0x114) = 1;
  UVar1 = waveOutGetNumDevs();
  if (UVar1 == 0) {
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffdf;
  }
  UVar1 = waveInGetNumDevs();
  *(uint *)(param_1 + 0x11c) = (uint)(UVar1 != 0);
  return 0;
}


