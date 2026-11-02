/* Module: sftrkfx1.dll
   Function: FUN_5cba2810
   Address: 5cba2810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cba2810(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 9)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x280) + 0x10))
                      ((void *)(param_1 + -0x280),&DAT_5cc0f1c0 + param_2 * 0x19);
    if (iVar1 == 0) {
      FUN_5cba2520((void *)(param_1 + -0x280),0x7fbd);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


