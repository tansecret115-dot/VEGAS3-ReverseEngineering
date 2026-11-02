/* Module: auth3260.dll
   Function: FUN_627a3e50
   Address: 627a3e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_627a3e50(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *local_8;
  
  if (*(int *)((int)this + 0x2c) == 0) {
    return -0x7ffbfff7;
  }
  local_8 = this;
  iVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_8,&param_1);
  piVar3 = param_3;
  piVar2 = param_2;
  if (-1 < iVar4) {
    iVar4 = FUN_627a3d60(this,local_8,param_1,s_PluginID_627a80d0,param_2,param_3);
    if (-1 < iVar4) {
      return iVar4;
    }
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar3 = 0;
    }
  }
  return -0x7fffbffb;
}


