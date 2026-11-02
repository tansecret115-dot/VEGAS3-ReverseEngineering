/* Module: oggplug.dll
   Function: FUN_00436570
   Address: 00436570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00436570(int *param_1,float *param_2,int *param_3,float *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  
  piVar2 = param_1;
  piVar6 = (int *)&stack0xffffffec;
  piVar3 = (int *)((int)param_4 / *param_1);
  FUN_00444a80();
  FUN_00444a80();
  param_4 = (float *)0x0;
  if (0 < (int)piVar3) {
    do {
      iVar4 = FUN_004364f0((int)param_1,param_3);
      *piVar6 = iVar4;
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      *piVar6 = param_1[3] + *param_1 * iVar4 * 4;
      param_4 = (float *)((int)param_4 + 1);
      piVar6 = piVar6 + 1;
    } while ((int)param_4 < (int)piVar3);
  }
  iVar4 = 0;
  if (0 < *param_1) {
    param_4 = param_2;
    do {
      piVar6 = (int *)&stack0xffffffec;
      pfVar5 = param_4;
      param_1 = piVar3;
      if (0 < (int)piVar3) {
        do {
          iVar1 = *piVar6;
          piVar6 = piVar6 + 1;
          param_1 = (int *)((int)param_1 + -1);
          *pfVar5 = *(float *)(iVar1 + iVar4 * 4) + *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (param_1 != (int *)0x0);
      }
      param_4 = param_4 + (int)piVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar2);
  }
  return 0;
}


