/* Module: rnco3260.dll
   Function: FUN_636f8d70
   Address: 636f8d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f8d70(uint *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  uint3 uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_4 != 0) {
    uVar4 = (uint)*param_3;
    uVar4 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                           *(undefined1 *)(&DAT_637956a0 + uVar4));
    pbVar6 = param_3 + 1;
    param_4 = param_4 - 1;
    *param_1 = uVar4;
    puVar8 = param_1 + 1;
    if (1 < (int)param_4) {
      param_3 = (byte *)(param_4 >> 1);
      pbVar5 = pbVar6;
      puVar7 = puVar8;
      do {
        uVar3 = (uint)*pbVar5;
        pbVar6 = pbVar5 + 2;
        puVar8 = puVar7 + 4;
        uVar1 = CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                  *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                         *(undefined1 *)(&DAT_637956a0 + uVar3));
        uVar3 = (uint)uVar1;
        puVar7[1] = uVar3;
        *puVar7 = ((uVar3 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar3 & uVar4);
        uVar4 = (uint)pbVar5[1];
        uVar2 = CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2),
                                  *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                         *(undefined1 *)(&DAT_637956a0 + uVar4));
        uVar4 = (uint)uVar2;
        puVar7[3] = uVar4;
        puVar7[2] = ((uint3)((uVar1 ^ uVar2) >> 1) & 0x7f7f7f) + (uint)(uVar1 & uVar2);
        param_4 = param_4 - 2;
        param_3 = param_3 + -1;
        pbVar5 = pbVar6;
        puVar7 = puVar8;
      } while (param_3 != (byte *)0x0);
    }
    if (param_4 != 0) {
      uVar3 = (uint)*pbVar6;
      uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                             *(undefined1 *)(&DAT_637956a0 + uVar3));
      puVar8[1] = uVar3;
      puVar8[2] = uVar3;
      *puVar8 = ((uVar3 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar3 & uVar4);
      return;
    }
    *puVar8 = uVar4;
  }
  return;
}


