/* Module: vegas30.exe
   Function: FUN_005fcc60
   Address: 005fcc60
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fcc60(void)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_430;
  uchar local_42c [260];
  undefined4 local_328;
  undefined4 local_310 [6];
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8 [6];
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8 [6];
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_290;
  uchar local_28c [260];
  undefined4 local_188;
  double local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_148;
  uchar local_144 [260];
  undefined4 local_40 [6];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = &local_430;
  for (iVar2 = 0x68; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_430 = 0;
  _mbscpy(local_42c,&DAT_006495e0);
  local_2f8 = DAT_006496e4;
  local_328 = DAT_006496e4;
  local_310[0] = DAT_006496e4;
  _SFSMPTE_NanoToSMPTE_12(DAT_006496f0,DAT_006496f4,local_310);
  local_2f4 = DAT_006496f8;
  local_2f0 = DAT_00649700;
  local_2ec = DAT_00649704;
  local_2e8[0] = DAT_006496e4;
  _SFSMPTE_NanoToSMPTE_12(DAT_006496e8,DAT_006496ec,local_2e8);
  local_2c8[0] = DAT_006496e4;
  local_2d0 = DAT_00649708;
  local_2cc = DAT_0064970c;
  _SFSMPTE_NanoToSMPTE_12(DAT_00649708,DAT_0064970c,local_2c8);
  local_2b0 = DAT_00649710;
  local_2ac = DAT_00649714;
  local_2a4 = DAT_0064971c;
  local_2a8 = DAT_00649718;
  local_2a0 = 0;
  local_29c = DAT_00649720;
  local_298 = DAT_00649724;
  Transport_SetMetric(0x10,&local_430);
  puVar3 = &local_148;
  for (iVar2 = 0x52; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _mbscpy(local_144,&DAT_00649728);
  local_28 = DAT_0064982c;
  local_40[0] = DAT_0064982c;
  _SFSMPTE_NanoToSMPTE_12(DAT_00649830,DAT_00649834,local_40);
  local_24 = DAT_00649838;
  local_20 = DAT_0064983c;
  local_14 = DAT_00649844;
  local_18 = DAT_00649840;
  local_1c = 0;
  local_10 = DAT_00649848;
  local_c = DAT_0064984c;
  local_8 = 0;
  local_4 = 0;
  Transport_SetMetric(0x20,&local_148);
  puVar3 = &local_290;
  for (iVar2 = 0x52; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _mbscpy(local_28c,&DAT_00649850);
  local_188 = (undefined4)(60000000 / (ulonglong)DAT_00649954);
  local_178 = DAT_00649958;
  local_174 = DAT_0064995c;
  local_180 = (double)DAT_00649954;
  local_16c = DAT_00649964;
  local_168 = DAT_00649968;
  local_160 = DAT_00649970;
  local_15c = 0;
  local_158 = DAT_00649974;
  local_154 = 0;
  local_150 = 0;
  local_170 = DAT_00649960;
  local_164 = DAT_0064996c;
  lVar1 = Transport_SetMetric(0x50,&local_290);
  if (DAT_0064b138 != 0) {
    Transport_SetOffset(*(__int64 *)(DAT_0064b138 + 0x470));
  }
  return lVar1;
}


