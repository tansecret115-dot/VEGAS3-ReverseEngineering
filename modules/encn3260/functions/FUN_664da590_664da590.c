/* Module: encn3260.dll
   Function: FUN_664da590
   Address: 664da590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664da590(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_8;
  
  puVar2 = param_1;
  iVar1 = ((uint)*(ushort *)(*(int *)this + 4) + (uint)*(ushort *)(*(int *)((int)this + 4) + 4)) * 4
  ;
  iVar3 = iVar1 + 8;
  if (*(int *)((int)this + 8) != 0) {
    iVar3 = iVar1 + 0xc + (uint)*(ushort *)(*(int *)((int)this + 8) + 4) * 4;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    iVar3 = iVar3 + 4 + (uint)*(ushort *)(*(int *)((int)this + 0xc) + 4) * 4;
  }
  local_8 = this;
  (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,iVar3);
  local_8 = (void *)(**(code **)(*(int *)*puVar2 + 0x1c))((int *)*puVar2);
  param_1 = (undefined4 *)0x0;
  FUN_664d9eb0(*(char **)this,&local_8,(int *)&param_1);
  FUN_664d9eb0(*(char **)((int)this + 4),&local_8,(int *)&param_1);
  if (*(char **)((int)this + 8) != (char *)0x0) {
    FUN_664d9eb0(*(char **)((int)this + 8),&local_8,(int *)&param_1);
  }
  if (*(char **)((int)this + 0xc) != (char *)0x0) {
    FUN_664d9eb0(*(char **)((int)this + 0xc),&local_8,(int *)&param_1);
  }
  return 0;
}


