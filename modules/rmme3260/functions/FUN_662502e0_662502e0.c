/* Module: rmme3260.dll
   Function: FUN_662502e0
   Address: 662502e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662502e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0) {
    FUN_66250070(param_1);
  }
  puVar3 = (undefined4 *)*param_1;
  if (1 < (int)puVar3[-3]) {
    FUN_662500b0(param_1);
    FUN_662501b0(param_1,puVar3[-2]);
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


