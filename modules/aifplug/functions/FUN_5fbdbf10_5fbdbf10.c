/* Module: aifplug.dll
   Function: FUN_5fbdbf10
   Address: 5fbdbf10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbdbf10(HANDLE param_1,int param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  uint local_4;
  
  if (param_4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_4;
  }
  while( true ) {
    if ((param_4 != (int *)0x0) && (iVar2 < 8)) {
      *param_4 = iVar2;
      return -0x7ffb1ff6;
    }
    iVar1 = FUN_5fbdbc60(param_1,(undefined1 *)&local_8);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_8 == param_2) break;
    local_4 = FUN_5fbdbee0(param_1,local_4);
    iVar2 = (iVar2 + -8) - local_4;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_4;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2 + -8;
  }
  return 0;
}


