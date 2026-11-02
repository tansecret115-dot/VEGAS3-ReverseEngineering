/* Module: mp3rw.dll
   Function: FUN_0044dfb0
   Address: 0044dfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0044dfb0(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar1 = ~param_1;
  if (7 < param_3) {
    uVar2 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar1 = *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)*param_2) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)param_2[1]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)param_2[2]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)param_2[3]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)param_2[4]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)param_2[5]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)param_2[6]) * 4) ^ uVar1 >> 8;
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)param_2[7]) * 4);
      param_2 = param_2 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_0049e008 + (uVar1 & 0xff ^ (uint)*param_2) * 4);
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}


