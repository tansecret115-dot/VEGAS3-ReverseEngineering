/* Module: erv23260.dll
   Function: FUN_637fd340
   Address: 637fd340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637fd340(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar3 = *(undefined4 **)(param_1 + 8);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


