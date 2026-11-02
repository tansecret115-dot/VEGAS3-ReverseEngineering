/* Module: vegas30.exe
   Function: FUN_00581050
   Address: 00581050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00581050(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1[-2] != puVar1[-1]) {
    FUN_00580920(puVar1[-2]);
    uVar3 = puVar1[-2];
    puVar5 = (undefined4 *)*param_1;
    puVar4 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_005809c0(puVar1 + -3);
  }
  return;
}


