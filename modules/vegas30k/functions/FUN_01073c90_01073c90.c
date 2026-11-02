/* Module: vegas30k.dll
   Function: FUN_01073c90
   Address: 01073c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01073c90(ushort *param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar3 = param_1;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (ushort *)((int)puVar3 + 1);
  }
  iVar1 = DtGetWideCharFromTstring(param_1,param_2 >> 1,param_3);
  DtSwapEndianWideChar(param_1,param_2 >> 1);
  return iVar1;
}


