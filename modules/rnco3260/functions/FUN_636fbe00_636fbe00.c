/* Module: rnco3260.dll
   Function: FUN_636fbe00
   Address: 636fbe00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fbe00(ushort *param_1,uint param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint uVar5;
  
  for (; ((((uint)param_1 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    pbVar3 = param_3 + 2;
    pbVar1 = param_3 + 1;
    bVar2 = *param_3;
    param_3 = param_3 + 3;
    *param_1 = ((*pbVar3 & 0xf8) << 5 | *pbVar1 & 0xfc) << 3 | (ushort)(bVar2 >> 3);
    param_1 = param_1 + 1;
  }
  if (3 < (int)param_2) {
    uVar5 = param_2 >> 2;
    pbVar3 = param_3;
    puVar4 = param_1;
    do {
      param_3 = pbVar3 + 0xc;
      param_2 = param_2 - 4;
      *puVar4 = (pbVar3[1] & 0xfc | (pbVar3[2] & 0xf8) << 5) << 3 | (ushort)(*pbVar3 >> 3);
      param_1 = puVar4 + 4;
      puVar4[1] = (pbVar3[4] & 0xfc | (pbVar3[5] & 0xf8) << 5) << 3 | (ushort)(pbVar3[3] >> 3);
      puVar4[2] = (pbVar3[7] & 0xfc | (pbVar3[8] & 0xf8) << 5) << 3 | (ushort)(pbVar3[6] >> 3);
      uVar5 = uVar5 - 1;
      puVar4[3] = (pbVar3[10] & 0xfc | (pbVar3[0xb] & 0xf8) << 5) << 3 | (ushort)(pbVar3[9] >> 3);
      pbVar3 = param_3;
      puVar4 = param_1;
    } while (uVar5 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pbVar3 = param_3 + 2;
    pbVar1 = param_3 + 1;
    bVar2 = *param_3;
    param_3 = param_3 + 3;
    *param_1 = (*pbVar1 & 0xfc | (*pbVar3 & 0xf8) << 5) << 3 | (ushort)(bVar2 >> 3);
    param_1 = param_1 + 1;
  }
  return;
}


