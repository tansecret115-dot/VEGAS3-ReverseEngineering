/* Module: mcmpgdec.dll
   Function: FUN_1002035c
   Address: 1002035c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1002035c(uint *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar1 = param_3 - param_5 >> 1;
  iVar2 = 0;
  pbVar3 = (byte *)*param_4;
  pbVar7 = (byte *)param_4[2];
  pbVar4 = (byte *)param_4[1];
  if (0 < param_6) {
    iVar5 = param_5 >> 1;
    do {
      iVar6 = 0;
      iVar2 = iVar2 + 1;
      if (0 < iVar5 + -7) {
        do {
          *param_1 = (uint)*pbVar7 << 0x10 | (uint)*pbVar4 | (uint)*pbVar3 << 8 |
                     (uint)pbVar3[1] << 0x18;
          param_1[1] = (uint)pbVar7[1] << 0x10 | (uint)pbVar4[1] | (uint)pbVar3[2] << 8 |
                       (uint)pbVar3[3] << 0x18;
          param_1[2] = (uint)pbVar7[2] << 0x10 | (uint)pbVar4[2] | (uint)pbVar3[4] << 8 |
                       (uint)pbVar3[5] << 0x18;
          param_1[3] = (uint)pbVar7[3] << 0x10 | (uint)pbVar4[3] | (uint)pbVar3[6] << 8 |
                       (uint)pbVar3[7] << 0x18;
          param_1[4] = (uint)pbVar7[4] << 0x10 | (uint)pbVar4[4] | (uint)pbVar3[8] << 8 |
                       (uint)pbVar3[9] << 0x18;
          param_1[5] = (uint)pbVar7[5] << 0x10 | (uint)pbVar4[5] | (uint)pbVar3[10] << 8 |
                       (uint)pbVar3[0xb] << 0x18;
          param_1[6] = (uint)pbVar7[6] << 0x10 | (uint)pbVar4[6] | (uint)pbVar3[0xc] << 8 |
                       (uint)pbVar3[0xd] << 0x18;
          param_1[7] = (uint)pbVar7[7] << 0x10 | (uint)pbVar4[7] | (uint)pbVar3[0xe] << 8 |
                       (uint)pbVar3[0xf] << 0x18;
          pbVar3 = pbVar3 + 0x10;
          pbVar7 = pbVar7 + 8;
          pbVar4 = pbVar4 + 8;
          param_1 = param_1 + 8;
          iVar6 = iVar6 + 8;
        } while (iVar6 < iVar5 + -7);
      }
      if (iVar6 < iVar5) {
        iVar6 = iVar5 - iVar6;
        do {
          *param_1 = (uint)*pbVar7 << 0x10 | (uint)*pbVar4 | (uint)*pbVar3 << 8 |
                     (uint)pbVar3[1] << 0x18;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 1;
          pbVar4 = pbVar4 + 1;
          param_1 = param_1 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      pbVar3 = pbVar3 + (param_3 - param_5);
      pbVar7 = pbVar7 + iVar1;
      pbVar4 = pbVar4 + iVar1;
      param_1 = (uint *)((int)param_1 + param_2 + param_5 * -2);
    } while (iVar2 < param_6);
  }
  return;
}


