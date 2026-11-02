/* Module: auth3260.dll
   Function: FUN_627a3cb0
   Address: 627a3cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_627a3cb0(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *local_8;
  
  piVar2 = param_1;
  if (*(int *)((int)this + 0x2c) == 0) {
    return -0x7ffbfff7;
  }
  local_8 = (char *)0x0;
  piVar5 = (int *)(**(code **)(*param_1 + 0x14))(param_1,&local_8,&param_1);
  piVar4 = param_3;
  piVar3 = param_2;
  while( true ) {
    if ((int)piVar5 < 0) {
      return -0x7fffbffb;
    }
    iVar6 = FUN_627a3d60(this,local_8,param_1,s_PluginID_627a80d0,piVar3,piVar4);
    if (-1 < iVar6) break;
    param_3 = (int *)(**(code **)(*piVar2 + 0x18))(piVar2,&local_8,&param_1);
    piVar5 = (int *)*piVar3;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      *piVar3 = 0;
    }
    piVar1 = (int *)*piVar4;
    piVar5 = param_3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
      piVar5 = param_3;
    }
  }
  return iVar6;
}


