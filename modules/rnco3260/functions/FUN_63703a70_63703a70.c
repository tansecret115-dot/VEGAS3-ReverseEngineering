/* Module: rnco3260.dll
   Function: FUN_63703a70
   Address: 63703a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63703a70(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,uint *param_5,
            uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar7 = param_6;
  if (param_6 != (uint *)0x0) {
    uVar3 = *param_5;
    puVar6 = param_5 + 1;
    param_6._2_1_ = (undefined1)(uVar3 >> 0x10);
    uVar3 = (uint)CONCAT11((char)(uVar3 >> 8),param_6._2_1_) | (uVar3 & 0xff) << 0x10;
    param_5 = param_1 + 2;
    puVar4 = param_2 + 1;
    uVar5 = ((*param_1 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_1 & uVar3);
    param_1 = (uint *)((int)puVar7 - 1);
    *param_3 = uVar3;
    *param_2 = uVar5;
    puVar7 = param_3 + 1;
    param_6 = puVar6;
    if (1 < (int)param_1) {
      param_2 = (uint *)((uint)param_1 >> 1);
      puVar6 = puVar7;
      param_3 = puVar4;
      do {
        puVar7 = puVar6 + 4;
        uVar1 = *param_6;
        uVar1 = uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
        puVar6[1] = uVar1;
        *puVar6 = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
        uVar2 = ((*param_5 ^ uVar1) >> 1 & 0x7f7f7f) + (*param_5 & uVar1);
        *param_3 = ((uVar2 ^ uVar5) >> 1 & 0x7f7f7f) + (uVar2 & uVar5);
        param_3[1] = uVar2;
        uVar3 = param_6[1];
        uVar3 = uVar3 >> 0x10 & 0xff | uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10;
        puVar6[3] = uVar3;
        puVar6[2] = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
        uVar5 = ((param_5[2] ^ uVar3) >> 1 & 0x7f7f7f) + (param_5[2] & uVar3);
        param_3[3] = uVar5;
        param_3[2] = ((uVar2 ^ uVar5) >> 1 & 0x7f7f7f) + (uVar2 & uVar5);
        param_6 = param_6 + 2;
        param_5 = param_5 + 4;
        puVar4 = param_3 + 4;
        param_1 = (uint *)((int)param_1 + -2);
        param_2 = (uint *)((int)param_2 + -1);
        puVar6 = puVar7;
        param_3 = puVar4;
      } while (param_2 != (uint *)0x0);
    }
    if (param_1 != (uint *)0x0) {
      uVar1 = *param_6;
      param_6._2_1_ = (undefined1)(uVar1 >> 0x10);
      uVar1 = (uVar1 & 0xff) << 0x10 | (uint)CONCAT11((char)(uVar1 >> 8),param_6._2_1_);
      puVar7[1] = uVar1;
      *puVar7 = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
      puVar7[2] = uVar1;
      uVar3 = ((*param_5 ^ uVar1) >> 1 & 0x7f7f7f) + (*param_5 & uVar1);
      puVar4[1] = uVar3;
      puVar4[2] = uVar3;
      *puVar4 = ((uVar3 ^ uVar5) >> 1 & 0x7f7f7f) + (uVar3 & uVar5);
      return;
    }
    *puVar7 = uVar3;
    *puVar4 = uVar5;
  }
  return;
}


