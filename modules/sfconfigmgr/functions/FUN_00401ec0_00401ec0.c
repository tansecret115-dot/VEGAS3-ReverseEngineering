/* Module: sfconfigmgr.dll
   Function: FUN_00401ec0
   Address: 00401ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401ec0(int *param_1,int *param_2,int *param_3,short *param_4,undefined4 param_5,
                int param_6,int param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  piVar1 = param_1;
  iVar3 = 0;
  if (param_3 != (int *)0x0) {
    param_3 = (int *)0x0;
    iVar3 = FUN_0040aa50((int)param_1,param_2,L"active",&param_3);
    if (-1 < iVar3) {
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  if (param_6 != 0) {
    param_3 = (int *)0x0;
    iVar3 = FUN_0040aa50((int)piVar1,piVar2,L"beta",&param_3);
    if (-1 < iVar3) {
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  if (param_7 != 0) {
    param_3 = (int *)0x0;
    iVar3 = FUN_0040aa50((int)piVar1,piVar2,L"demo",&param_3);
    if (iVar3 < 0) {
      return iVar3;
    }
    (**(code **)(*param_3 + 8))(param_3);
  }
  if (((-1 < iVar3) && (param_4 != (short *)0x0)) && (*param_4 != 0)) {
    param_3 = (int *)0x0;
    iVar3 = FUN_0040aa50((int)piVar1,piVar2,L"productid",&param_3);
    if (-1 < iVar3) {
      param_2 = (int *)0x0;
      iVar3 = FUN_0040abb0(piVar1,param_3,param_4,&param_2);
      if (-1 < iVar3) {
        (**(code **)(*param_2 + 8))(param_2);
        param_2 = (int *)0x0;
      }
      (**(code **)(*param_3 + 8))(param_3);
      param_2 = (int *)0x0;
      if (((-1 < iVar3) && (param_4 != (short *)0x0)) && (*param_4 != 0)) {
        param_1 = (int *)0x0;
        iVar3 = FUN_0040aa50((int)piVar1,piVar2,L"appgrade",&param_1);
        if (-1 < iVar3) {
          param_3 = (int *)0x0;
          iVar3 = FUN_0040abb0(piVar1,param_1,param_4,&param_3);
          if (-1 < iVar3) {
            (**(code **)(*param_3 + 8))(param_3);
            param_3 = (int *)0x0;
          }
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
    }
  }
  return iVar3;
}


