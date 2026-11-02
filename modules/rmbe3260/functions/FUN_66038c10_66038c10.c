/* Module: rmbe3260.dll
   Function: FUN_66038c10
   Address: 66038c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66038c10(void *this,byte *param_1,byte *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  FUN_66038cb0((void *)((int)this + 8),param_1,param_2);
  if (*(void **)((int)this + 0x5e) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x5e));
    *(undefined4 *)((int)this + 0x5e) = 0;
  }
  if (*(void **)((int)this + 0x62) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x62));
    *(undefined4 *)((int)this + 0x62) = 0;
  }
  *(undefined4 *)((int)this + 0x62) = *(undefined4 *)((int)this + 0x52);
  if (*(uint *)((int)this + 0x56) != 0) {
    puVar1 = operator_new(*(uint *)((int)this + 0x56));
    *(undefined4 **)((int)this + 0x5e) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar3 = *(uint *)((int)this + 0x56);
    puVar4 = *(undefined4 **)((int)this + 0x5a);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(undefined4 *)((int)this + 0x5a) = *(undefined4 *)((int)this + 0x5e);
  }
  return 0;
}


