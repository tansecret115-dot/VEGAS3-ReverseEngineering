/* Module: erv33260.dll
   Function: FUN_6707b320
   Address: 6707b320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6707b320(void *this,uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1;
  if ((*(int *)((int)this + 0x78) != 0) && (*(int *)((int)this + 0x7c) == 0)) {
    return 1;
  }
  *param_2 = 0;
  uVar1 = *(uint *)((int)this + 0x78);
  if (uVar1 != 0) {
    bVar3 = 0;
    if (uVar1 == 0) {
      return 1;
    }
    param_1 = 0;
    while ((*(int *)(uVar2 + 4) != *(int *)(*(int *)((int)this + 0x7c) + param_1 * 8) ||
           (*(int *)(uVar2 + 8) != *(int *)(*(int *)((int)this + 0x7c) + 4 + param_1 * 8)))) {
      bVar3 = bVar3 + 1;
      param_1 = (uint)bVar3;
      if (uVar1 <= param_1) {
        return 1;
      }
    }
    *param_2 = bVar3;
  }
  return 0;
}


