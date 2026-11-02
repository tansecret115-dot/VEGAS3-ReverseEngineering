/* Module: rmbe3260.dll
   Function: FUN_660253a0
   Address: 660253a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_660253a0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (((DAT_66075188 == (int *)0x0) && (DAT_66075170 != (int *)0x0)) && (param_2 == 0)) {
    iVar1 = (**(code **)(*DAT_66075170 + 0x50))(DAT_66075170,param_1);
    if (-1 < iVar1) {
      if (*param_1 == 0) {
        DAT_66075188 = (int *)0x0;
        return iVar1;
      }
      DAT_66075188 = (int *)(*param_1 + -0x14);
      return iVar1;
    }
  }
  else {
    if (((DAT_66075188 == (int *)0x0) || (DAT_66075170 != (int *)0x0)) ||
       (piVar2 = DAT_66075188, param_2 == 0)) {
      piVar2 = (int *)FUN_66025f80();
      if (piVar2 == (int *)0x0) {
        return -0x7ff8fff2;
      }
      iVar1 = (**(code **)(*piVar2 + 0x24))(piVar2);
    }
    if (-1 < iVar1) {
      if ((param_2 == 0) && (DAT_66075188 == (int *)0x0)) {
        DAT_66075188 = piVar2;
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)*piVar2)(piVar2,&DAT_66065c68,param_1);
      }
    }
  }
  return iVar1;
}


