/* Module: rmbe3260.dll
   Function: FUN_66012410
   Address: 66012410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66012410(int param_1,int *param_2,undefined4 param_3,undefined2 *param_4,undefined2 *param_5
                )

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  iVar2 = -0x7fffbffd;
  if (param_2 != (int *)0x0) {
    iVar2 = (*(code *)**(undefined4 **)param_2[1])((undefined4 *)param_2[1],&DAT_66065b08,&local_c);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_c + 0x10))(local_c,&local_14);
      if (-1 < iVar2) {
        local_8 = (int *)0x0;
        iVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x14))
                          (*(int **)(param_1 + 0xa4),local_14,local_10,&local_8);
        if (-1 < iVar2) {
          param_2 = (int *)0x0;
          iVar2 = (**(code **)*local_8)(local_8,&DAT_66065908,&param_2);
          if (-1 < iVar2) {
            (**(code **)(*param_2 + 0x14))(param_2,param_3);
            param_1 = 0;
            (**(code **)(*param_2 + 0x10))(param_2,&param_1);
            uVar1 = (undefined2)param_1;
            param_1 = 0;
            *param_4 = uVar1;
            iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&param_1);
            *param_5 = (undefined2)param_1;
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))(param_2);
              param_2 = (int *)0x0;
            }
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
          }
        }
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
      }
    }
  }
  return iVar2;
}


