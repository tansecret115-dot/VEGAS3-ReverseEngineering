/* Module: vegas30k.dll
   Function: FUN_011b8bc0
   Address: 011b8bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b8bc0(int param_1)

{
  _SfList_CreateExZ_32(param_1 + 0x14,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  _SfList_CreateExZ_32(param_1 + 0xc,0x230,0x10,0x10,0x40000002,0,0,0);
  *(undefined4 *)(param_1 + 8) = 0;
  CoCreateInstance((IID *)&DAT_011ef1a0,(LPUNKNOWN)0x0,3,(IID *)&DAT_011eed40,
                   (LPVOID *)(param_1 + 0x18));
  return;
}


