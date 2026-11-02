/* Module: vidcap30.exe
   Function: FUN_004270f0
   Address: 004270f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004270f0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x3cc) + 0x24))
                    (*(int **)(param_1 + 0x3cc),0x1398,&stack0x0000000c,param_2);
  if (iVar2 == 0) {
    cVar1 = *param_2;
    if (cVar1 == '\b') {
      return -0x7fffbfff;
    }
    if ((cVar1 == '\t') || (cVar1 == '\f')) {
      iVar2 = 0;
    }
    else {
      if (cVar1 == '\v') {
        return 1;
      }
      if (cVar1 == '\n') {
        return -0x7fffbffb;
      }
      if (cVar1 == '\x0f') {
        return -0x7ffb1fd4;
      }
    }
  }
  return iVar2;
}


