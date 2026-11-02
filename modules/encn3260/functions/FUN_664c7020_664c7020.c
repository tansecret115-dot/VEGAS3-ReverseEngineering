/* Module: encn3260.dll
   Function: FUN_664c7020
   Address: 664c7020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664c7020(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  piVar1 = param_1;
  if (0 < DAT_664f2a10) {
    iVar2 = FUN_664c3eb0(&DAT_664f29e0,(uint)param_1,(int *)&param_1);
    if (iVar2 != 0) {
      FUN_664c3fe0(&DAT_664f29e0,piVar1);
      iVar3 = FUN_664c3eb0(&DAT_664f29c0,(uint)param_1,&local_8);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = local_8;
      }
      if (iVar2 == 1) {
        FUN_664c3fe0(&DAT_664f29c0,param_1);
      }
    }
    DAT_664f2a10 = DAT_664f2a10 + -1;
  }
  return 1;
}


