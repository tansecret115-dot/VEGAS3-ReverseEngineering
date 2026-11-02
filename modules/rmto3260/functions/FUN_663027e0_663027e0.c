/* Module: rmto3260.dll
   Function: FUN_663027e0
   Address: 663027e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_663027e0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_66306948) || (param_2[1] != DAT_6630694c)) || (param_2[2] != DAT_66306950)) ||
     (param_2[3] != DAT_66306954)) {
    if (((iVar1 == DAT_66306968) && (param_2[1] == DAT_6630696c)) &&
       ((param_2[2] == DAT_66306970 && (param_2[3] == DAT_66306974)))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 1);
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (((iVar1 != DAT_663064a8) || (param_2[1] != DAT_663064ac)) ||
       ((param_2[2] != DAT_663064b0 || (param_2[3] != DAT_663064b4)))) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = (int)param_1;
  return 0;
}


