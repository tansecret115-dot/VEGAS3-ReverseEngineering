/* Module: mp3plug.dll
   Function: FUN_5f701140
   Address: 5f701140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f701140(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    piVar1 = param_1 + param_2 * 2;
    iVar3 = ((int)piVar1 - (int)param_1 & 0xfffffff0U) + (int)param_1;
    for (; (int)param_1 < iVar3; param_1 = param_1 + 4) {
      iVar2 = iVar2 + *(int *)(&DAT_5f74a210 + *param_1 * 8 + param_1[1] * 4) +
              *(int *)(&DAT_5f74a210 + param_1[2] * 8 + param_1[3] * 4);
    }
    for (; (int)param_1 < (int)piVar1; param_1 = param_1 + 2) {
      iVar2 = iVar2 + *(int *)(&DAT_5f74a210 + *param_1 * 8 + param_1[1] * 4);
    }
  }
  *param_3 = iVar2;
  return;
}


