/* Module: rmme3260.dll
   Function: FUN_6621c3d0
   Address: 6621c3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6621c3d0(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(void **)((int)this + 0x61) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x61));
    *(undefined4 *)((int)this + 0x61) = 0;
  }
  puVar1 = operator_new(param_2);
  *(undefined4 **)((int)this + 0x61) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  FUN_6621c450((void *)((int)this + 8),*(byte **)((int)this + 0x61),param_2);
  return 0;
}


