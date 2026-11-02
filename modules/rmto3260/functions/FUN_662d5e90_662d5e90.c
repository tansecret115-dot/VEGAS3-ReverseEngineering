/* Module: rmto3260.dll
   Function: FUN_662d5e90
   Address: 662d5e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662d5e90(void *this,undefined4 *param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_662f2bb0((short)param_2);
  **(undefined2 **)((int)this + 0x1c) = uVar1;
  puVar3 = (undefined4 *)(*(int *)((int)this + 0x1c) + 2);
  *(undefined4 **)((int)this + 0x1c) = puVar3;
  for (uVar2 = (param_2 & 0xffff) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (param_2 & 0xffff);
  return;
}


