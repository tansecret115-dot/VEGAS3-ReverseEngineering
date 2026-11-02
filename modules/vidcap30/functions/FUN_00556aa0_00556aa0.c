/* Module: vidcap30.exe
   Function: FUN_00556aa0
   Address: 00556aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00556aa0(undefined2 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = param_1;
  if (0 < param_3) {
    do {
      iVar1 = ftol();
      if (iVar1 < -0x8000) {
        param_1 = (undefined2 *)0xffff8000;
      }
      else {
        param_1 = (undefined2 *)0x7fff;
        if (iVar1 < 0x8000) {
          param_1 = (undefined2 *)iVar1;
        }
      }
      param_1._0_2_ = CONCAT11(param_1._0_1_,param_1._1_1_);
      *puVar2 = param_1._0_2_;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 1;
    } while (param_3 != 0);
  }
  return;
}


