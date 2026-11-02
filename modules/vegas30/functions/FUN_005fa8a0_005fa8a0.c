/* Module: vegas30.exe
   Function: FUN_005fa8a0
   Address: 005fa8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005fa8a0(int param_1,uint param_2,uint *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_EBP;
  uint unaff_ESI;
  undefined4 unaff_retaddr;
  
  if (((int)param_3 < 0) || (((int)param_3 < 1 && (param_2 < 0x80000000)))) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),1);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int **)(param_1 + 0x10));
    if ((-1 < (int)param_3) && ((int)param_2 < iVar1)) {
      if (param_4 != (int *)0x0) {
        if (_DAT_00610fd8 == *(double *)(param_1 + 0x24)) {
          (**(code **)(**(int **)(param_1 + 0x10) + 0x20))
                    (*(int **)(param_1 + 0x10),0,0,0,param_1 + 0x14,0x40,0);
        }
        *param_4 = param_1 + 0x14;
      }
      iVar1 = -0x7ffb1ff6;
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                                (*(int **)(param_1 + 0x10),param_2);
      if ((piVar2 == (int *)0x0) ||
         (iVar1 = (**(code **)(*piVar2 + 0x3c))
                            (piVar2,0,0,unaff_EBP,unaff_retaddr,param_1,0,param_3,param_4,param_5),
         iVar1 != 0)) {
        (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0);
      }
      else {
        *(uint *)(param_1 + 0xc) = param_2;
        if (param_3 != (uint *)0x0) {
          *param_3 = param_2;
          param_3[1] = unaff_ESI;
          return 0;
        }
      }
      return iVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0);
  }
  return 1;
}


