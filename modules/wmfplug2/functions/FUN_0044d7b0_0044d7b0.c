/* Module: wmfplug2.dll
   Function: FUN_0044d7b0
   Address: 0044d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d7b0(undefined2 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = ftol();
      if (iVar2 < -0x8000) {
        param_3._0_2_ = 0x8000;
      }
      else {
        param_3._0_2_ = 0x7fff;
        if (iVar2 < 0x8000) {
          param_3._0_2_ = (undefined2)iVar2;
        }
      }
      param_3._0_2_ = CONCAT11((undefined1)param_3,param_3._1_1_);
      iVar3 = iVar3 + 1;
      *param_1 = (undefined2)param_3;
      param_1 = param_1 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


