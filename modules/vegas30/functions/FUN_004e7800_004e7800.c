/* Module: vegas30.exe
   Function: FUN_004e7800
   Address: 004e7800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e7800(void)

{
  undefined4 uVar1;
  undefined1 local_10c [4];
  int local_108;
  undefined1 local_104 [260];
  
  uVar1 = _SfGetUIFont_4(100);
  _SfLoadString_16(DAT_00647204,0x4f7c,local_104,0x104);
  _SfGetTextExtent_16(uVar1,local_104,0xffffffff,local_10c);
  return local_108 + 7;
}


