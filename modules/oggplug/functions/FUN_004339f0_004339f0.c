/* Module: oggplug.dll
   Function: FUN_004339f0
   Address: 004339f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004339f0(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (0 < iVar3) {
    iVar2 = param_5 - (int)param_4;
    iVar1 = param_6 - (int)param_4;
    do {
      if (*param_4 == _DAT_0044d6f0) {
        *(undefined4 *)(iVar1 + (int)param_4) = 0;
      }
      else {
        *(float *)(iVar1 + (int)param_4) = *param_4 / *(float *)(iVar2 + (int)param_4);
      }
      param_4 = param_4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


