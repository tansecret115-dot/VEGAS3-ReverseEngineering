/* Module: erv23260.dll
   Function: FUN_637f6c70
   Address: 637f6c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637f6c70(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_4 == 0) {
    uVar3 = param_3 * param_2 * 3;
    pvVar1 = *(void **)((int)this + 0x1af4);
    if (pvVar1 != (void *)0x0) {
      if (uVar3 <= *(uint *)((int)this + 0x1af8)) {
        return 0;
      }
      if (pvVar1 != (void *)0x0) {
        FUN_637f1080(pvVar1);
      }
    }
    puVar2 = FUN_637f1030(uVar3,0);
    *(undefined4 **)((int)this + 0x1af4) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 2;
    }
  }
  else {
    uVar3 = param_3 * 8 + 7;
    pvVar1 = *(void **)((int)this + 0x1af4);
    if (pvVar1 != (void *)0x0) {
      if (uVar3 <= *(uint *)((int)this + 0x1af8)) {
        return 0;
      }
      if (pvVar1 != (void *)0x0) {
        FUN_637f1080(pvVar1);
      }
    }
    puVar2 = FUN_637f1030(uVar3,0);
    *(undefined4 **)((int)this + 0x1af4) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 2;
    }
  }
  *(uint *)((int)this + 0x1af8) = uVar3;
  return 0;
}


