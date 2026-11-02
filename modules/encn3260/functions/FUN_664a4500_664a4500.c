/* Module: encn3260.dll
   Function: FUN_664a4500
   Address: 664a4500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664a4500(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  void *local_8;
  
  piVar1 = param_1;
  pvVar4 = (void *)0x0;
  local_8 = this;
  iVar2 = (**(code **)(*(int *)((int)this + 0x38) + 0x18))(param_1,0);
  if (iVar2 != 0) {
    (**(code **)*piVar1)(piVar1,&DAT_664dcda0,&param_1);
    puVar3 = (uint *)(**(code **)(*param_1 + 0x1c))(param_1);
    if (puVar3 != (uint *)0x0) {
      FUN_664c3eb0(&DAT_664f0698,*puVar3,(int *)&local_8);
      pvVar4 = local_8;
    }
    (**(code **)(*param_1 + 8))(param_1);
  }
  return (int)pvVar4;
}


