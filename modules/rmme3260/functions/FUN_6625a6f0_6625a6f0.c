/* Module: rmme3260.dll
   Function: FUN_6625a6f0
   Address: 6625a6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6625a6f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  piVar1 = param_1;
  if (0 < DAT_6627f218) {
    iVar2 = FUN_66251030(&DAT_6627f1e8,(uint)param_1,(int *)&param_1);
    if (iVar2 != 0) {
      FUN_66251160(&DAT_6627f1e8,piVar1);
      iVar3 = FUN_66251030(&DAT_6627f1c8,(uint)param_1,&local_8);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = local_8;
      }
      if (iVar2 == 1) {
        FUN_66251160(&DAT_6627f1c8,param_1);
      }
    }
    DAT_6627f218 = DAT_6627f218 + -1;
  }
  return 1;
}


