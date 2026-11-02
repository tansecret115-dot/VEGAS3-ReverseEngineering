/* Module: erv23260.dll
   Function: FUN_637fb060
   Address: 637fb060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fb060(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 - param_2;
  if (iVar1 != 0) {
    if (param_3 == 0) {
      switch(iVar1) {
      default:
        goto switchD_637fb0c4_caseD_0;
      case 1:
        FUN_637fd360(this,2,2);
        return;
      case 2:
        goto switchD_637fb0c4_caseD_2;
      case -2:
        FUN_637fd360(this,1,2);
        return;
      case -1:
        FUN_637fd360(this,0,2);
        return;
      }
    }
    if (iVar1 == *(int *)(&DAT_6382f488 + param_2 * 8)) {
      FUN_637fd360(this,2,2);
      return;
    }
    if (iVar1 != *(int *)(&DAT_6382f48c + param_2 * 8)) {
      FUN_637fd360(this,0,1);
      FUN_637fd360(this,param_1,5);
      return;
    }
switchD_637fb0c4_caseD_2:
    FUN_637fd360(this,3,2);
  }
switchD_637fb0c4_caseD_0:
  return;
}


