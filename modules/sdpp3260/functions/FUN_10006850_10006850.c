/* Module: sdpp3260.dll
   Function: FUN_10006850
   Address: 10006850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10006850(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  FUN_10006810(this,param_1);
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
  *(uint *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}


