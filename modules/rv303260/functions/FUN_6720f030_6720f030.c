/* Module: rv303260.dll
   Function: FUN_6720f030
   Address: 6720f030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6720f030(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(int *)this == 0) {
      FUN_6720eb90(this);
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
    FUN_6720ef30(this,puVar2[-2],puVar2,param_1,param_2);
    FUN_6720eba0(puVar2 + -3);
  }
  return;
}


