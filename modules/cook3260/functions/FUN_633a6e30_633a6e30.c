/* Module: cook3260.dll
   Function: FUN_633a6e30
   Address: 633a6e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a6e30(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(int *)this == 0) {
      FUN_633a6ab0(this);
    }
    puVar2 = *(undefined4 **)this;
    if (((int)puVar2[-3] < 2) && ((int)(param_1 + puVar2[-2]) <= (int)puVar2[-1])) {
      puVar2 = (undefined4 *)(puVar2[-2] + (int)puVar2);
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
      *(uint *)(*(int *)this + -8) = *(int *)(*(int *)this + -8) + param_1;
      *(undefined1 *)(*(int *)(*(int *)this + -8) + *(int *)this) = 0;
      return;
    }
    FUN_633a6de0(this,puVar2[-2],puVar2,param_1,param_2);
    FUN_633a6ac0(puVar2 + -3);
  }
  return;
}


