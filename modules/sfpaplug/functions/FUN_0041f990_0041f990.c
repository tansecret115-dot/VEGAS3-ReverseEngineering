/* Module: sfpaplug.dll
   Function: FUN_0041f990
   Address: 0041f990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f990(undefined2 *param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = param_1;
  if (0 < param_3) {
    do {
      puVar1 = (undefined2 *)ftol();
      if ((int)puVar1 < -0x8000) {
        param_1 = (undefined2 *)0xffff8000;
      }
      else {
        param_1 = (undefined2 *)0x7fff;
        if ((int)puVar1 < 0x8000) {
          param_1 = puVar1;
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


