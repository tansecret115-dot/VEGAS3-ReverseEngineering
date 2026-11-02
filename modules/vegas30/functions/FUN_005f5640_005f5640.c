/* Module: vegas30.exe
   Function: FUN_005f5640
   Address: 005f5640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f5640(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  piVar1 = param_2;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    iVar2 = FUN_005f68f0(&param_2);
    if (-1 < iVar2) {
      param_1 = 0;
      (**(code **)*param_2)(param_2,&DAT_00610db0,&param_1);
      if (unaff_EDI != 0) {
        *piVar1 = unaff_EDI;
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    return iVar2;
  }
  return -0x7ff8ffa9;
}


