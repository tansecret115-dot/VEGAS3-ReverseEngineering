/* Module: vidpcore.dll
   Function: FUN_5debb890
   Address: 5debb890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5debb890(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                undefined4 param_7,double param_8,double param_9,double param_10)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = param_5;
  iVar2 = FUN_5debbf10(&param_1,&local_14,&param_2,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar2) {
    if (iVar3 == 4) {
      uVar1 = ftol();
      param_4._0_3_ = CONCAT12(uVar1,(undefined2)param_4);
      uVar1 = ftol();
      param_4._0_2_ = CONCAT11(uVar1,(undefined1)param_4);
      uVar1 = ftol();
      param_4 = CONCAT31(param_4._1_3_,uVar1);
      if (_DAT_5df18838 <= param_10 * _DAT_5df1f278) {
        uVar1 = ftol();
        param_4 = CONCAT13(uVar1,(undefined3)param_4);
      }
      else {
        uVar1 = ftol();
        param_4 = CONCAT13(uVar1,(undefined3)param_4);
      }
    }
    else {
      local_8 = (float)(double)CONCAT44(param_7,param_6);
      local_c = (float)param_8;
      local_10 = (float)param_9;
      local_4 = (float)param_10;
    }
    param_6 = 0;
    if (0 < local_14) {
      do {
        if (param_5 == 4) {
          iVar3 = 0;
          if (0 < param_1) {
            do {
              iVar3 = iVar3 + 1;
              *(undefined4 *)(param_2 + -4 + iVar3 * 4) = param_4;
            } while (iVar3 < param_1);
          }
        }
        else {
          iVar3 = 0;
          if (0 < param_1) {
            iVar2 = 0;
            do {
              pfVar4 = (float *)(param_2 + iVar2);
              iVar3 = iVar3 + 1;
              iVar2 = iVar2 + 0x10;
              *pfVar4 = local_10;
              pfVar4[1] = local_c;
              pfVar4[2] = local_8;
              pfVar4[3] = local_4;
            } while (iVar3 < param_1);
          }
        }
        param_2 = param_2 + param_3;
        param_6 = param_6 + 1;
      } while (param_6 < local_14);
    }
    iVar2 = 0;
  }
  return iVar2;
}


