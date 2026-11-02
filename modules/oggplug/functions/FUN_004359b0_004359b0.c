/* Module: oggplug.dll
   Function: FUN_004359b0
   Address: 004359b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004359b0(int *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  
  piVar7 = param_1;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  param_1[2] = (int)param_2;
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  puVar2 = FUN_00435380(param_2[2],param_2[1]);
  param_1[4] = (int)puVar2;
  pvVar3 = FUN_00435720(param_2);
  param_1[3] = (int)pvVar3;
  param_1[6] = -1;
  if ((pvVar3 == (void *)0x0) || (iVar4 = 0, param_2[1] < 1)) {
    return 0;
  }
  do {
    iVar1 = *param_2;
    iVar5 = 0;
    if (0 < iVar1) {
      pfVar6 = (float *)((int)pvVar3 + iVar1 * iVar4 * 4);
      do {
        if ((float)_DAT_0044d7a8 < ABS(*pfVar6)) goto LAB_00435a3a;
        iVar5 = iVar5 + 1;
        pfVar6 = pfVar6 + 1;
      } while (iVar5 < iVar1);
    }
    param_1[6] = iVar4;
LAB_00435a3a:
    iVar4 = iVar4 + 1;
    if (param_2[1] <= iVar4) {
      return 0;
    }
  } while( true );
}


