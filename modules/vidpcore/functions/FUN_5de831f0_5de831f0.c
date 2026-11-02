/* Module: vidpcore.dll
   Function: FUN_5de831f0
   Address: 5de831f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de831f0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 4) {
    uVar1 = ftol();
    if (0 < (int)uVar1) {
      puVar3 = param_1;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    if ((int)uVar1 < 0x100) {
      puVar3 = (undefined4 *)(uVar1 + (int)param_1);
      for (uVar2 = 0x100 - uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      }
      for (uVar1 = 0x100 - uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar3 = 0xff;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      return;
    }
  }
  else {
    uVar1 = ftol();
    if (0 < (int)uVar1) {
      puVar3 = param_1;
      for (uVar2 = uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = (uint)((uVar1 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
    }
    if ((int)uVar1 < 0x10000) {
      puVar3 = (undefined4 *)((int)param_1 + uVar1 * 2);
      for (uVar2 = 0x10000 - uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      }
      for (uVar1 = (uint)((0x10000 - uVar1 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined2 *)puVar3 = 0xffff;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
    }
  }
  return;
}


