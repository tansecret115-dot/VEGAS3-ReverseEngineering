/* Module: erv23260.dll
   Function: FUN_63809740
   Address: 63809740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_63809740(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_3 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_2;
  puVar1 = (undefined4 *)FUN_637f2000(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_63809330(puVar1);
  }
  *(int *)((int)this + 4) = iVar2;
  if (iVar2 == 0) {
    *param_3 = 2;
    return this;
  }
  puVar1 = (undefined4 *)FUN_637f2000(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_63809330(puVar1);
  }
  *(int *)((int)this + 8) = iVar2;
  if (iVar2 == 0) {
    FUN_637f2010(*(void **)((int)this + 4));
    *param_3 = 2;
    return this;
  }
  *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
  *(undefined4 *)(*(int *)((int)this + 4) + 8) = 0;
  **(undefined4 **)((int)this + 4) = 0;
  *(undefined4 *)(*(int *)((int)this + 8) + 4) = 0;
  *(undefined4 *)(*(int *)((int)this + 8) + 8) = *(undefined4 *)((int)this + 4);
  **(undefined4 **)((int)this + 8) = 0;
  return this;
}


