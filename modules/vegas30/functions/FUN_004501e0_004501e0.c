/* Module: vegas30.exe
   Function: FUN_004501e0
   Address: 004501e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004501e0(uint param_1,uint param_2,byte param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  
  cVar5 = (char)(param_1 >> 8);
  cVar1 = (char)(param_1 >> 0x10);
  if ((param_4 != 0) && (bVar2 = ftol(), param_3 <= bVar2)) {
    param_3 = bVar2;
  }
  uVar4 = (uint)param_3;
  iVar3 = ((param_2 & 0xff) - (param_1 & 0xff)) * uVar4;
  bVar2 = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + (char)param_1;
  iVar3 = ((param_2 >> 8 & 0xff) - (CONCAT11(bVar2,cVar5) & 0xff)) * uVar4;
  cVar5 = cVar5 + (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8);
  iVar3 = ((param_2 >> 0x10 & 0xff) - (CONCAT12(bVar2,CONCAT11(cVar5,cVar1)) & 0xff)) * uVar4;
  return ((uint)(byte)(cVar1 + (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8)) << 8 |
         CONCAT11(bVar2,cVar5) & 0xff) << 8 | (uint)bVar2;
}


