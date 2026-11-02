/* Module: rmbe3260.dll
   Function: FUN_66017410
   Address: 66017410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66017410(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
                 undefined2 *param_5)

{
  int iVar1;
  
  iVar1 = FUN_66017190(param_1 + -0x10);
  if (-1 < iVar1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x1a);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x1e);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *(int *)(param_1 + 10) * 100;
    }
    if (param_5 != (undefined2 *)0x0) {
      *param_5 = 3;
    }
  }
  return;
}


