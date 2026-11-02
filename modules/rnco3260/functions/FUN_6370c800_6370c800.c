/* Module: rnco3260.dll
   Function: FUN_6370c800
   Address: 6370c800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370c800(ushort *param_1,undefined2 *param_2,ushort *param_3,undefined4 param_4,ushort *param_5,
            ushort *param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  
  if (param_6 != (ushort *)0x0) {
    puVar8 = param_1 + 2;
    uVar1 = *param_1;
    param_1 = (ushort *)((int)param_6 - 1);
    uVar5 = (((byte)param_5[1] & 0xf8) << 5 | *(byte *)((int)param_5 + 1) & 0xfc) << 3 |
            (uint)(byte)((byte)*param_5 >> 3);
    uVar6 = ((uVar1 ^ uVar5) >> 1 & 0x7bef) + (uVar1 & uVar5);
    pbVar9 = (byte *)((int)param_5 + 3);
    puVar7 = param_2 + 1;
    *param_3 = (ushort)uVar5;
    *param_2 = (short)uVar6;
    param_6 = param_3 + 1;
    param_5 = puVar8;
    if (1 < (int)param_1) {
      param_2 = (undefined2 *)((uint)param_1 >> 1);
      param_3 = puVar7;
      do {
        uVar3 = (pbVar9[1] & 0xfc | (pbVar9[2] & 0xf8) << 5) << 3 | (uint)(*pbVar9 >> 3);
        uVar1 = (ushort)uVar3;
        *param_6 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar5);
        param_6[1] = uVar1;
        uVar4 = ((*param_5 ^ uVar3) >> 1 & 0x7bef) + (*param_5 & uVar3);
        uVar2 = (ushort)uVar4;
        *param_3 = ((ushort)((uVar4 ^ uVar6) >> 1) & 0x7bef) + (uVar2 & (ushort)uVar6);
        param_3[1] = uVar2;
        uVar5 = ((pbVar9[5] & 0xf8) << 5 | pbVar9[4] & 0xfc) << 3 | (uint)(pbVar9[3] >> 3);
        param_6[2] = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar5);
        param_6[3] = (ushort)uVar5;
        uVar6 = (param_5[2] & uVar5) + ((param_5[2] ^ uVar5) >> 1 & 0x7bef);
        param_3[2] = ((ushort)((uVar4 ^ uVar6) >> 1) & 0x7bef) + (uVar2 & (ushort)uVar6);
        param_5 = param_5 + 4;
        param_3[3] = (ushort)uVar6;
        param_6 = param_6 + 4;
        puVar7 = param_3 + 4;
        pbVar9 = pbVar9 + 6;
        param_1 = param_1 + -1;
        param_2 = (undefined2 *)((int)param_2 + -1);
        param_3 = puVar7;
      } while (param_2 != (undefined2 *)0x0);
    }
    if (param_1 != (ushort *)0x0) {
      uVar3 = (pbVar9[1] & 0xfc | (pbVar9[2] & 0xf8) << 5) << 3 | (uint)(*pbVar9 >> 3);
      uVar1 = (ushort)uVar3;
      *param_6 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar5);
      param_6[1] = uVar1;
      param_6[2] = uVar1;
      uVar5 = ((*param_5 ^ uVar3) >> 1 & 0x7bef) + (*param_5 & uVar3);
      uVar1 = (ushort)uVar5;
      puVar7[1] = uVar1;
      puVar7[2] = uVar1;
      *puVar7 = ((ushort)((uVar5 ^ uVar6) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar6);
      return;
    }
    *param_6 = (ushort)uVar5;
    *puVar7 = (ushort)uVar6;
  }
  return;
}


