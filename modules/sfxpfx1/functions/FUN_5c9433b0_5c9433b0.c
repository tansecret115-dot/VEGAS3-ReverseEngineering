/* Module: sfxpfx1.dll
   Function: FUN_5c9433b0
   Address: 5c9433b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c9433b0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 10)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x428) + 0x10))
                      ((void *)(param_1 + -0x428),&DAT_5c99632c + param_2 * 0x24);
    if (iVar1 == 0) {
      FUN_5c943170((void *)(param_1 + -0x428),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


