/* Module: vegas30k.dll
   Function: FUN_011b9900
   Address: 011b9900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b9900(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar2 = 0x8000ffff;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 8);
      while ((puVar6 = (uint *)*puVar3, puVar6 == (uint *)0x0 || (puVar6[0x8b] == 0))) {
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 1;
        if (*(int *)(param_1 + 8) <= iVar5) {
          return 1;
        }
      }
      uVar1 = *param_2;
      puVar7 = param_2;
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar7 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      *param_2 = uVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}


