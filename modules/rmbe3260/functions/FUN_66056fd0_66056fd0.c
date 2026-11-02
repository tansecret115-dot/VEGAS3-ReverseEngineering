/* Module: rmbe3260.dll
   Function: FUN_66056fd0
   Address: 66056fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66056fd0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = operator_new(*(int *)(param_1 + 0xc) << 2);
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  for (uVar2 = *(uint *)(param_1 + 0xc) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return;
}


