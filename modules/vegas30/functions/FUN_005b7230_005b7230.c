/* Module: vegas30.exe
   Function: FUN_005b7230
   Address: 005b7230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005b7230(uint *param_1,uint param_2,uint param_3,uchar *param_4)

{
  *param_1 = *param_1 | 0x20;
  _mbscpy((uchar *)(param_1 + 0x50),param_4);
  param_1[0x4e] = param_3;
  param_1[0x4d] = param_2;
  param_1[0x4c] = 0xac;
  param_1[0x71] = 0;
  param_1[0x4f] = 0;
  FUN_005b5960();
  FUN_005b5990(param_1 + 0x47);
  return;
}


