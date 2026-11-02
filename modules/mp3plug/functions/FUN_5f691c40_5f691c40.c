/* Module: mp3plug.dll
   Function: FUN_5f691c40
   Address: 5f691c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f691c40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    iVar1 = -0x7fffbfff;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(param_2,1);
    if (-1 < iVar1) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
      if ((DAT_5f74d334 != 0) && (DAT_5f74d308 != 0)) {
        return 0;
      }
      return -0x7ffb1f7a;
    }
  }
  return iVar1;
}


