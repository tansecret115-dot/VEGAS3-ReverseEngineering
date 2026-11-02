/* Module: rnco3260.dll
   Function: FUN_636ff7e0
   Address: 636ff7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636ff7e0(undefined1 *param_1,uint param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  for (; ((((uint)param_1 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    *param_1 = (&DAT_63795aa0)[(uint)(*param_3 >> 4) | param_3[1] & 0xf0 | (param_3[2] & 0xf0) << 4]
    ;
    param_1 = param_1 + 1;
    param_3 = param_3 + 3;
  }
  if (3 < (int)param_2) {
    uVar5 = param_2 >> 2;
    pbVar3 = param_3;
    puVar4 = param_1;
    do {
      param_3 = pbVar3 + 0xc;
      param_1 = puVar4 + 4;
      param_2 = param_2 - 4;
      *puVar4 = (&DAT_63795aa0)[pbVar3[1] & 0xf0 | (uint)(*pbVar3 >> 4) | (pbVar3[2] & 0xf0) << 4];
      puVar4[1] = (&DAT_63795aa0)
                  [pbVar3[4] & 0xf0 | (uint)(pbVar3[3] >> 4) | (pbVar3[5] & 0xf0) << 4];
      puVar4[2] = (&DAT_63795aa0)
                  [pbVar3[7] & 0xf0 | (uint)(pbVar3[6] >> 4) | (pbVar3[8] & 0xf0) << 4];
      uVar5 = uVar5 - 1;
      puVar4[3] = (&DAT_63795aa0)
                  [pbVar3[10] & 0xf0 | (uint)(pbVar3[9] >> 4) | (pbVar3[0xb] & 0xf0) << 4];
      pbVar3 = param_3;
      puVar4 = param_1;
    } while (uVar5 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pbVar3 = param_3 + 1;
    bVar2 = *param_3;
    pbVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    *param_1 = (&DAT_63795aa0)[*pbVar3 & 0xf0 | (uint)(bVar2 >> 4) | (*pbVar1 & 0xf0) << 4];
    param_1 = param_1 + 1;
  }
  return;
}


