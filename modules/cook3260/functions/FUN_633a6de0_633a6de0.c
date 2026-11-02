/* Module: cook3260.dll
   Function: FUN_633a6de0
   Address: 633a6de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_633a6de0(void *this,uint param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_3 + param_1 != 0) {
    FUN_633a6ba0(this,param_3 + param_1);
    puVar2 = *(undefined4 **)this;
    for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    puVar2 = (undefined4 *)(*(int *)this + param_1);
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_4;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return;
}


