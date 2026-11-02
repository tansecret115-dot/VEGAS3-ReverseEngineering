/* Module: rmme3260.dll
   Function: FUN_662180a0
   Address: 662180a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662180a0(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((*(void **)((int)this + 0x42) != (void *)0x0) && (*(int *)((int)this + 8) != 0)) {
    operator_delete(*(void **)((int)this + 0x42));
    *(undefined4 *)((int)this + 0x42) = 0;
    *(undefined4 *)((int)this + 0x3e) = 0;
  }
  if ((param_1 != 0) && (local_8 = operator_new(param_1), local_8 == (undefined4 *)0x0)) {
    return 0x8007000e;
  }
  if (local_8 != (undefined4 *)0x0) {
    puVar2 = local_8;
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
  }
  *(undefined4 **)((int)this + 0x42) = local_8;
  *(uint *)((int)this + 0x3e) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  return 0;
}


