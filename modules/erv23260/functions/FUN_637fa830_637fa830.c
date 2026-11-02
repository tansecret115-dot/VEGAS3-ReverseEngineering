/* Module: erv23260.dll
   Function: FUN_637fa830
   Address: 637fa830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fa830(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_637fd250((int)this);
  FUN_637ff8a0(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88) + 1,iVar1);
  uVar2 = FUN_637fd230((int)this);
  if (*(int *)((int)this + 0x60) != 0) {
    iVar4 = (uVar2 + 3 & 0xfffffffc) - uVar2;
    iVar1 = FUN_637ffac0((void *)((int)this + 0x18),*(int *)((int)this + 8) + iVar4 + uVar2,uVar2);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_637ffa50((int)this + 0x18);
    uVar2 = uVar2 + iVar1 + iVar4;
  }
  puVar5 = *(undefined4 **)((int)this + 8);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


