/* Module: rmme3260.dll
   Function: FUN_66266860
   Address: 66266860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66266860(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  operator_delete(*(void **)((int)this + 4));
  puVar1 = operator_new(param_2 + 1);
  uVar2 = param_2 >> 2;
  *(undefined4 **)((int)this + 4) = puVar1;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(undefined1 *)(param_2 + *(int *)((int)this + 4)) = 0;
  return;
}


