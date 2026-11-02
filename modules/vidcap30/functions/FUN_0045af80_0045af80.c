/* Module: vidcap30.exe
   Function: FUN_0045af80
   Address: 0045af80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0045af80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte *param_5)

{
  byte bVar1;
  undefined4 local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_11c = 0;
  FUN_0045aec0(param_1,param_2,param_3,param_4,local_104,0x104);
  local_11c = 0;
  _SFSMPTE_TextToSMPTE_8(local_104,&local_11c);
  param_5[0] = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  bVar1 = ((byte)(local_118 / 10) & 3) << 4 | param_5[3] & 0xcf;
  param_5[3] = ((byte)((ulonglong)local_118 % 10) ^ bVar1) & 0xf ^ bVar1;
  bVar1 = ((byte)(local_114 / 10) & 7) << 4 | param_5[2] & 0x8f;
  param_5[2] = ((byte)((ulonglong)local_114 % 10) ^ bVar1) & 0xf ^ bVar1;
  bVar1 = ((byte)(local_110 / 10) & 7) << 4 | param_5[1] & 0x8f;
  param_5[1] = ((byte)((ulonglong)local_110 % 10) ^ bVar1) & 0xf ^ bVar1;
  bVar1 = ((byte)(local_10c / 10) & 3) << 4 | *param_5 & 0xcf;
  *param_5 = ((byte)((ulonglong)local_10c % 10) ^ bVar1) & 0xf ^ bVar1;
  return local_10c / 10;
}


