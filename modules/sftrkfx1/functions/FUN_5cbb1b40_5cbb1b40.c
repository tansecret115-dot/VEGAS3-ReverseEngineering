/* Module: sftrkfx1.dll
   Function: FUN_5cbb1b40
   Address: 5cbb1b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbb1b40(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  piVar3 = param_3;
  piVar2 = param_1;
  iVar1 = param_4 + 1;
  piVar5 = param_3;
  for (iVar4 = iVar1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar4 = 0;
  do {
    (**(code **)(*piVar2 + 0xf8))(piVar2,&local_c,iVar4);
    if (local_c != 0) {
      (**(code **)(*piVar2 + 0xf0))(piVar2,&iStack_8,iVar4);
      if (iStack_8 == 1) {
        (**(code **)(*piVar2 + 0xe4))(piVar2,&param_3,iVar4);
        (**(code **)(*piVar2 + 0xe8))(piVar2,&param_1,iVar4);
        (**(code **)(*piVar2 + 0xf4))(piVar2,&stack0xffffffec,iVar4);
        if (param_4 != 0) {
          FUN_5cbb1740((int)piVar3,iVar1,(int)param_3,(int)param_1,param_4);
        }
      }
      else if (iStack_8 == 2) {
        (**(code **)(*piVar2 + 0xe4))(piVar2,&param_3,iVar4);
        (**(code **)(*piVar2 + 0xe8))(piVar2,&param_1,iVar4);
        (**(code **)(*piVar2 + 0xec))(piVar2,&stack0xffffffe4,iVar4);
        if (param_4 != 0) {
          FUN_5cbb1a50(param_2,(int)piVar3,iVar1,param_3,param_4,iStack_4);
        }
      }
      else if (iStack_8 == 3) {
        (**(code **)(*piVar2 + 0xe4))(piVar2,&param_3,iVar4);
        (**(code **)(*piVar2 + 0xe8))(piVar2,&param_1,iVar4);
        (**(code **)(*piVar2 + 0xf4))(piVar2,&stack0xffffffec,iVar4);
        if (param_4 != 0) {
          FUN_5cbb18c0((int)piVar3,iVar1,param_3,(uint)param_1,param_4);
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return 1;
}


