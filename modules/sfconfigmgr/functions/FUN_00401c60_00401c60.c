/* Module: sfconfigmgr.dll
   Function: FUN_00401c60
   Address: 00401c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401c60(int *param_1,int *param_2,short *param_3,undefined4 param_4,int *param_5,
                int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  undefined4 *local_4;
  
  piVar1 = param_1;
  local_4 = (undefined4 *)0x0;
  iVar2 = FUN_0040aa50((int)param_1,param_2,L"product",&local_4);
  if (-1 < iVar2) {
    param_2 = (int *)0x0;
    iVar2 = FUN_0040aa50((int)piVar1,local_4,L"productcodeguid",&param_2);
    if (-1 < iVar2) {
      param_1 = (int *)0x0;
      iVar2 = FUN_0040abb0(piVar1,param_2,param_3,&param_1);
      if (-1 < iVar2) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
      (**(code **)(*param_2 + 8))(param_2);
      param_1 = (int *)0x0;
      if (-1 < iVar2) {
        iVar2 = FUN_0040aa50((int)piVar1,unaff_EBX,L"productname",(undefined4 *)&stack0x00000000);
        if (-1 < iVar2) {
          param_2 = (int *)0x0;
          iVar2 = FUN_0040abb0(piVar1,0,param_3,&param_2);
          if (-1 < iVar2) {
            (**(code **)(*param_2 + 8))(param_2);
            param_2 = (int *)0x0;
          }
          (**(code **)(iRam00000000 + 8))(0);
          local_4 = (undefined4 *)0x0;
          if (-1 < iVar2) {
            param_1 = (int *)0x0;
            iVar2 = FUN_0040aa50((int)piVar1,unaff_EBP,L"version",&param_1);
            if (-1 < iVar2) {
              param_2 = (int *)0x0;
              iVar2 = FUN_0040abb0(piVar1,param_1,param_3,&param_2);
              if (-1 < iVar2) {
                (**(code **)(*param_2 + 8))(param_2);
                param_2 = (int *)0x0;
              }
              (**(code **)(*param_1 + 8))(param_1);
              if (-1 < iVar2) {
                param_1 = (int *)0x0;
                iVar2 = FUN_0040aa50((int)piVar1,unaff_ESI,L"language",&param_1);
                if (-1 < iVar2) {
                  param_2 = (int *)0x0;
                  iVar2 = FUN_0040abb0(piVar1,param_1,param_3,&param_2);
                  if (-1 < iVar2) {
                    (**(code **)(*param_2 + 8))(param_2);
                    param_2 = (int *)0x0;
                  }
                  (**(code **)(*param_1 + 8))(param_1);
                  if (-1 < iVar2) {
                    iVar2 = FUN_00401ec0(piVar1,unaff_EDI,param_5,param_3,param_4,param_6,param_7);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


