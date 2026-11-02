/* Module: rmto3260.dll
   Function: FUN_662efe60
   Address: 662efe60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662efe60(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_663066c8) || (param_2[1] != DAT_663066cc)) || (param_2[2] != DAT_663066d0)) ||
     (param_2[3] != DAT_663066d4)) {
    if (((iVar1 == DAT_663066d8) && (param_2[1] == DAT_663066dc)) &&
       ((param_2[2] == DAT_663066e0 && (param_2[3] == DAT_663066e4)))) {
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


