/* Module: rmto3260.dll
   Function: FUN_662f16f0
   Address: 662f16f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662f16f0(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(int *)(*(int *)((int)this + 0x20) + 0x10) - (int)*(undefined4 **)((int)this + 0x18);
  if ((int)uVar2 < (int)param_2) {
    param_2 = uVar2;
  }
  puVar3 = *(undefined4 **)((int)this + 0x18);
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)((int)this + 0x18) = *(int *)((int)this + 0x18) + param_2;
  piVar1 = (int *)(*(int *)((int)this + 0x20) + 4);
  *piVar1 = *piVar1 + param_2;
  return;
}


