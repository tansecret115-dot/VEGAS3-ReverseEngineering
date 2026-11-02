/* Module: vegas30.exe
   Function: FUN_004645e0
   Address: 004645e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004645e0(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = (char)(param_1 >> 8);
  param_3 = param_3 & 0xff;
  iVar2 = ((param_2 & 0xff) - (param_1 & 0xff)) * param_3;
  bVar1 = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + (char)param_1;
  iVar2 = ((param_2 >> 8 & 0xff) - (CONCAT11(bVar1,cVar4) & 0xff)) * param_3;
  cVar4 = cVar4 + (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8);
  cVar3 = (char)(param_1 >> 0x10);
  iVar2 = ((param_2 >> 0x10 & 0xff) - (CONCAT12(bVar1,CONCAT11(cVar4,cVar3)) & 0xff)) * param_3;
  return ((uint)(byte)(cVar3 + (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8)) << 8 |
         CONCAT11(bVar1,cVar4) & 0xff) << 8 | (uint)bVar1;
}


