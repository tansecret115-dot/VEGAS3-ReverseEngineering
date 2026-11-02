/* Module: extmondrv.dll
   Function: FUN_0040a400
   Address: 0040a400
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a400(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_retaddr;
  
  iVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0x24))(param_1,0x1398,&stack0x0000000c,param_2);
  if (unaff_retaddr != 0) {
    while (iVar2 == 0x79) {
      Sleep(100);
      iVar3 = iVar3 + 1;
      if (0x28 < iVar3) {
        return 0x79;
      }
      iVar2 = (**(code **)(*param_1 + 0x24))(param_1,0x1398,&stack0xfffffffc,param_2);
    }
  }
  if (iVar2 == 0) {
    cVar1 = *param_2;
    if (cVar1 == '\b') {
      return -0x7fffbfff;
    }
    if ((cVar1 == '\t') || (cVar1 == '\f')) {
      return 0;
    }
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
  return iVar2;
}


