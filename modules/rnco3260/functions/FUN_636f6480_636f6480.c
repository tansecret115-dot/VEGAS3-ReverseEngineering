/* Module: rnco3260.dll
   Function: FUN_636f6480
   Address: 636f6480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6480(uint *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar2 = param_4;
  if (param_4 != 0) {
    puVar5 = param_1 + 1;
    uVar3 = *param_3;
    puVar7 = param_3 + 1;
    param_4._2_1_ = (undefined1)(uVar3 >> 0x10);
    uVar3 = (uint)CONCAT11((char)(uVar3 >> 8),param_4._2_1_) | (uVar3 & 0xff) << 0x10;
    param_4 = uVar2 - 1;
    *param_1 = uVar3;
    if (1 < (int)param_4) {
      param_3 = (uint *)(param_4 >> 1);
      puVar4 = puVar5;
      puVar6 = puVar7;
      do {
        uVar2 = *puVar6;
        puVar7 = puVar6 + 2;
        puVar5 = puVar4 + 4;
        uVar1 = uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff;
        puVar4[1] = uVar1;
        *puVar4 = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
        uVar2 = puVar6[1];
        uVar3 = uVar2 >> 0x10 & 0xff | uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10;
        puVar4[3] = uVar3;
        puVar4[2] = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
        param_4 = param_4 - 2;
        param_3 = (uint *)((int)param_3 + -1);
        puVar4 = puVar5;
        puVar6 = puVar7;
      } while (param_3 != (uint *)0x0);
    }
    if (param_4 != 0) {
      uVar2 = *puVar7;
      param_4._2_1_ = (undefined1)(uVar2 >> 0x10);
      uVar2 = (uVar2 & 0xff) << 0x10 | (uint)CONCAT11((char)(uVar2 >> 8),param_4._2_1_);
      puVar5[1] = uVar2;
      puVar5[2] = uVar2;
      *puVar5 = ((uVar2 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar2 & uVar3);
      return;
    }
    *puVar5 = uVar3;
  }
  return;
}


