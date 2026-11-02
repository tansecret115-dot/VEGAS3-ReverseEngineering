/* Module: erv33260.dll
   Function: FUN_6707af90
   Address: 6707af90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707af90(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 - param_2;
  if (iVar1 != 0) {
    if (param_3 == 0) {
      switch(iVar1) {
      default:
        goto switchD_6707aff8_caseD_0;
      case 1:
        FUN_6707d6f0((int)this,2,2);
        return;
      case 2:
        goto switchD_6707aff8_caseD_2;
      case -2:
        FUN_6707d6f0((int)this,1,2);
        return;
      case -1:
        FUN_6707d6f0((int)this,0,2);
        return;
      }
    }
    if (iVar1 == *(int *)(&DAT_67090350 + param_2 * 8)) {
      FUN_6707d6f0((int)this,2,2);
      return;
    }
    if (iVar1 != *(int *)(&DAT_67090354 + param_2 * 8)) {
      FUN_6707d6f0((int)this,0,1);
      FUN_6707d6f0((int)this,param_1,5);
      return;
    }
switchD_6707aff8_caseD_2:
    FUN_6707d6f0((int)this,3,2);
  }
switchD_6707aff8_caseD_0:
  return;
}


