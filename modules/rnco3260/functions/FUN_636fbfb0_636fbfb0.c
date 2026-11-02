/* Module: rnco3260.dll
   Function: FUN_636fbfb0
   Address: 636fbfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fbfb0(undefined2 *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (param_4 != 0) {
    puVar7 = param_1 + 1;
    pbVar4 = param_3 + 3;
    uVar3 = (param_3[1] & 0xfc | (param_3[2] & 0xf8) << 5) << 3 | (uint)(*param_3 >> 3);
    param_4 = param_4 - 1;
    *param_1 = (short)uVar3;
    if (1 < (int)param_4) {
      param_3 = (byte *)(param_4 >> 1);
      pbVar5 = pbVar4;
      puVar6 = puVar7;
      do {
        pbVar4 = pbVar5 + 6;
        uVar2 = ((pbVar5[2] & 0xf8) << 5 | pbVar5[1] & 0xfc) << 3 | (uint)(*pbVar5 >> 3);
        uVar1 = (ushort)uVar2;
        puVar6[1] = uVar1;
        *puVar6 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar3);
        puVar7 = puVar6 + 4;
        uVar3 = (pbVar5[4] & 0xfc | (pbVar5[5] & 0xf8) << 5) << 3 | (uint)(pbVar5[3] >> 3);
        puVar6[3] = (ushort)uVar3;
        puVar6[2] = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar3);
        param_4 = param_4 - 2;
        param_3 = param_3 + -1;
        pbVar5 = pbVar4;
        puVar6 = puVar7;
      } while (param_3 != (byte *)0x0);
    }
    if (param_4 != 0) {
      uVar2 = ((pbVar4[2] & 0xf8) << 5 | pbVar4[1] & 0xfc) << 3 | (uint)(*pbVar4 >> 3);
      uVar1 = (ushort)uVar2;
      puVar7[1] = uVar1;
      puVar7[2] = uVar1;
      *puVar7 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar3);
      return;
    }
    *puVar7 = (ushort)uVar3;
  }
  return;
}


