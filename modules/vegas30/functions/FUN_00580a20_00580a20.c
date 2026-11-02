/* Module: vegas30.exe
   Function: FUN_00580a20
   Address: 00580a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00580a20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)*param_1;
  if (1 < (int)puVar3[-3]) {
    FUN_00580970();
    FUN_00580920(puVar3[-2]);
    iVar1 = puVar3[-2];
    puVar4 = (undefined4 *)*param_1;
    for (uVar2 = iVar1 + 1U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = iVar1 + 1U & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return;
}


