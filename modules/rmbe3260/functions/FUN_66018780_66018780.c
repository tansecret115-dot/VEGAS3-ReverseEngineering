/* Module: rmbe3260.dll
   Function: FUN_66018780
   Address: 66018780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66018780(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined2 *param_5)

{
  int iVar1;
  
  iVar1 = FUN_66017890(param_1 + -0x10);
  if (-1 < iVar1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x20);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x24);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 0xc);
    }
    if (param_5 != (undefined2 *)0x0) {
      *param_5 = 3;
    }
  }
  return;
}


