/* Module: vegas30.exe
   Function: FUN_00460550
   Address: 00460550
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00460550(uint param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = param_1;
  bVar6 = (byte)(param_1 >> 8);
  iVar3 = (0x20 - (param_1 & 0xff)) * 0x80;
  param_1 = (uint)bVar6;
  bVar2 = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + (char)uVar1;
  iVar3 = (0x20 - param_1) * 0x80;
  bVar5 = (byte)(uVar1 >> 0x10);
  param_1 = (uint)bVar5;
  iVar4 = (0x20 - param_1) * 0x80;
  return (uint)bVar2 |
         ((uint)(byte)((char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + bVar5) << 8 |
         CONCAT11(bVar2,(char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar6) & 0xff) << 8;
}


