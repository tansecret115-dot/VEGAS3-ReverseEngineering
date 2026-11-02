/* Module: tokr3260.dll
   Function: FUN_68051cb0
   Address: 68051cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_68051cb0(int *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 1) {
    if (param_3 == 2) {
      iVar5 = 0x400;
      pfVar1 = (float *)*param_1;
      iVar4 = param_1[1];
      pfVar2 = pfVar1;
      do {
        iVar5 = iVar5 + -1;
        *pfVar2 = (*(float *)((iVar4 - (int)pfVar1) + (int)pfVar2) + *pfVar2) * _DAT_6805b050;
        pfVar2 = pfVar2 + 1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else if ((param_2 == 2) && (param_3 == 1)) {
    iVar5 = 0x400;
    puVar3 = (undefined4 *)param_1[1];
    iVar4 = *param_1 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}


