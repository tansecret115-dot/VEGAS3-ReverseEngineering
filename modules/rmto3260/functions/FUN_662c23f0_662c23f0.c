/* Module: rmto3260.dll
   Function: FUN_662c23f0
   Address: 662c23f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c23f0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar2 = param_1;
  iVar4 = 0;
  *param_2 = 0;
  iVar3 = 0;
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 == (int *)0x0) {
    iVar3 = -0x7ffbfff9;
  }
  if ((-1 < iVar3) &&
     (iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,(int)&param_1 + 2), piVar1 = param_3, -1 < iVar3)
     ) {
    local_8 = 0;
    if (param_1._2_2_ != 0) {
      do {
        if (local_8 != 0) {
          return;
        }
        iVar3 = (**(code **)(**(int **)(iVar2 + 0x6c) + 0x38))
                          (*(int **)(iVar2 + 0x6c),iVar4,&param_3);
        if (((-1 < iVar3) &&
            (iVar3 = FUN_662d0dc0(param_3,*param_3,(char *)&local_8,(char *)piVar1), -1 < iVar3)) &&
           (local_8 != 0)) {
          *param_2 = 1;
        }
        iVar4 = iVar4 + 1;
      } while ((ushort)iVar4 < param_1._2_2_);
    }
  }
  return;
}


