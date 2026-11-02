/* Module: rmbe3260.dll
   Function: FUN_6602f740
   Address: 6602f740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6602f740(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x88) == 0) {
    iVar2 = FUN_660313f0(this);
  }
  if ((iVar2 == 0) && (*(int *)((int)this + 0x88) != 0)) {
    if (param_1 < *(ushort *)((int)this + 0x6e)) {
      puVar1 = *(undefined4 **)(**(int **)((int)this + 0x6a) + param_1 * 4);
      if (puVar1[7] != 0) {
        *param_2 = *puVar1;
        return *(undefined4 *)(*(int *)(**(int **)((int)this + 0x6a) + param_1 * 4) + 0x1c);
      }
    }
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  }
  return 0;
}


