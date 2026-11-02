/* Module: rnco3260.dll
   Function: FUN_636f6380
   Address: 636f6380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6380(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar3 = param_1;
  for (; ((((uint)puVar3 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar5 = *param_3;
    param_3 = param_3 + 1;
    *puVar3 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
    puVar3 = puVar3 + 1;
  }
  if (3 < (int)param_2) {
    uVar5 = param_2 >> 2;
    puVar2 = puVar3;
    puVar4 = param_3;
    do {
      uVar1 = *puVar4;
      param_1._2_1_ = (undefined1)(uVar1 >> 0x10);
      param_3 = puVar4 + 4;
      *puVar2 = (uint)CONCAT11((char)(uVar1 >> 8),param_1._2_1_) | (uVar1 & 0xff) << 0x10;
      uVar1 = puVar4[1];
      param_1._2_1_ = (undefined1)(uVar1 >> 0x10);
      puVar3 = puVar2 + 4;
      param_2 = param_2 - 4;
      puVar2[1] = (uint)CONCAT11((char)(uVar1 >> 8),param_1._2_1_) | (uVar1 & 0xff) << 0x10;
      uVar1 = puVar4[2];
      param_1._2_1_ = (undefined1)(uVar1 >> 0x10);
      puVar2[2] = (uint)CONCAT11((char)(uVar1 >> 8),param_1._2_1_) | (uVar1 & 0xff) << 0x10;
      uVar1 = puVar4[3];
      uVar5 = uVar5 - 1;
      puVar2[3] = uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
      puVar2 = puVar3;
      puVar4 = param_3;
    } while (uVar5 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar5 = *param_3;
    param_1._2_1_ = (undefined1)(uVar5 >> 0x10);
    param_3 = param_3 + 1;
    *puVar3 = (uint)CONCAT11((char)(uVar5 >> 8),param_1._2_1_) | (uVar5 & 0xff) << 0x10;
    puVar3 = puVar3 + 1;
  }
  return;
}


