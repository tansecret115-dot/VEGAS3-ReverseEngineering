/* Module: rnco3260.dll
   Function: FUN_637033a0
   Address: 637033a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637033a0(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,uint *param_5,
            uint *param_6)

{
  uint3 uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  
  if (param_6 != (uint *)0x0) {
    uVar9 = (uint)(byte)*param_5;
    uVar4 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar9),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar9 * 4 + 1)),
                           *(undefined1 *)((int)&DAT_637956a0 + uVar9 * 4 + 2));
    pbVar8 = (byte *)((int)param_5 + 1);
    uVar9 = *param_1;
    puVar5 = param_1 + 2;
    *param_3 = uVar4;
    uVar9 = ((uVar9 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar9 & uVar4);
    param_1 = (uint *)((int)param_6 - 1);
    puVar7 = param_3 + 1;
    *param_2 = uVar9;
    param_5 = param_2 + 1;
    param_6 = puVar5;
    if (1 < (int)param_1) {
      param_3 = (uint *)((uint)param_1 >> 1);
      puVar6 = puVar7;
      do {
        uVar3 = (uint)*pbVar8;
        puVar7 = puVar6 + 4;
        uVar1 = CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar3),
                                  *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                         *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2));
        uVar3 = (uint)uVar1;
        puVar6[1] = uVar3;
        *puVar6 = ((uVar3 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar3 & uVar4);
        uVar3 = ((*param_6 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_6 & uVar3);
        *param_5 = ((uVar3 ^ uVar9) >> 1 & 0x7f7f7f) + (uVar3 & uVar9);
        param_5[1] = uVar3;
        uVar9 = (uint)pbVar8[1];
        uVar2 = CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar9),
                                  *(undefined1 *)((int)&DAT_637956a0 + uVar9 * 4 + 1)),
                         *(undefined1 *)((int)&DAT_637956a0 + uVar9 * 4 + 2));
        uVar4 = (uint)uVar2;
        puVar6[3] = uVar4;
        puVar5 = param_6 + 4;
        puVar6[2] = ((uint3)((uVar1 ^ uVar2) >> 1) & 0x7f7f7f) + (uint)(uVar1 & uVar2);
        uVar9 = ((param_6[2] ^ uVar4) >> 1 & 0x7f7f7f) + (param_6[2] & uVar4);
        param_5[2] = ((uVar3 ^ uVar9) >> 1 & 0x7f7f7f) + (uVar3 & uVar9);
        param_5[3] = uVar9;
        pbVar8 = pbVar8 + 2;
        param_5 = param_5 + 4;
        param_1 = (uint *)((int)param_1 - 2);
        param_3 = (uint *)((int)param_3 + -1);
        puVar6 = puVar7;
        param_6 = puVar5;
      } while (param_3 != (uint *)0x0);
    }
    if (param_1 != (uint *)0x0) {
      uVar3 = (uint)*pbVar8;
      uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar3),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                             *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2));
      puVar7[1] = uVar3;
      *puVar7 = ((uVar3 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar3 & uVar4);
      puVar7[2] = uVar3;
      uVar4 = ((*param_6 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_6 & uVar3);
      *param_5 = ((uVar4 ^ uVar9) >> 1 & 0x7f7f7f) + (uVar4 & uVar9);
      param_5[1] = uVar4;
      param_5[2] = uVar4;
      return;
    }
    *puVar7 = uVar4;
    *param_5 = uVar9;
  }
  return;
}


