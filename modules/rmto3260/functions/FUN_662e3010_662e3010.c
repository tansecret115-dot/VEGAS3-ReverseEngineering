/* Module: rmto3260.dll
   Function: FUN_662e3010
   Address: 662e3010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e3010(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x88) == 0) {
    iVar2 = FUN_662e4d90(this);
  }
  if ((iVar2 == 0) && (*(int *)((int)this + 0x88) != 0)) {
    if (param_1 < *(uint *)((int)this + 8)) {
      puVar1 = *(undefined4 **)(**(int **)((int)this + 0xc) + param_1 * 4);
      if (puVar1[2] != 0) {
        *param_2 = *puVar1;
        return *(undefined4 *)(*(int *)(**(int **)((int)this + 0xc) + param_1 * 4) + 8);
      }
    }
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  }
  return 0;
}


