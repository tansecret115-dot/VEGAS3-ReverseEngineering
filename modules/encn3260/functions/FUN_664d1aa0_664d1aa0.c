/* Module: encn3260.dll
   Function: FUN_664d1aa0
   Address: 664d1aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664d1aa0(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  char local_104;
  undefined4 local_103;
  
  piVar1 = param_1;
  FUN_664d1340(this,param_1,(int)param_2);
  local_104 = '\0';
  param_1 = (int *)0x0;
  puVar3 = &local_103;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  param_2 = (int *)0x0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((int)this + 0x50) = 0;
    iVar4 = (**(code **)(**(int **)((int)this + 4) + 0x6c))
                      (*(int **)((int)this + 4),*(undefined4 *)((int)this + 8),&param_2);
    if (iVar4 == 0) {
      uVar2 = (**(code **)(*param_2 + 0x1c))(param_2);
      sprintf(&local_104,s__s_Renderer_664f03d0,uVar2);
      this_00 = operator_new(0x10);
      if (this_00 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_664d1200(this_00,*(int **)((int)this + 4),&local_104,0x66);
      }
      *(undefined4 **)((int)this + 0x50) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        param_1 = (int *)0x8007000e;
      }
    }
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (param_1 != (int *)0x0) {
    *(int **)this = param_1;
    *(undefined4 *)((int)this + 0xc) = 0;
    return this;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  return this;
}


