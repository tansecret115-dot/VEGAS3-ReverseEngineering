/* Module: mp3plug.dll
   Function: FUN_5f701310
   Address: 5f701310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f701310(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  while (0 < param_2) {
    iVar3 = param_2;
    if (0x4d < param_2) {
      iVar3 = 0x4e;
    }
    param_2 = param_2 - iVar3;
    uVar1 = 0;
    if (0 < iVar3) {
      for (piVar2 = param_1;
          (int)piVar2 <
          (int)(((int)(param_1 + iVar3 * 2) - (int)param_1 & 0xfffffff0U) + (int)param_1);
          piVar2 = piVar2 + 4) {
        uVar1 = uVar1 + *(int *)(&DAT_5f74a284 + piVar2[1] * 4 + *piVar2 * 0x18) +
                *(int *)(&DAT_5f74a284 + piVar2[3] * 4 + piVar2[2] * 0x18);
      }
      for (; (int)piVar2 < (int)(param_1 + iVar3 * 2); piVar2 = piVar2 + 2) {
        uVar1 = uVar1 + *(int *)(&DAT_5f74a284 + piVar2[1] * 4 + *piVar2 * 0x18);
      }
    }
    param_1 = param_1 + iVar3 * 2;
    param_3[2] = (uVar1 & 0x3ff) + param_3[2];
    param_3[1] = (uVar1 >> 10 & 0x3ff) + param_3[1];
    *param_3 = (uVar1 >> 0x14) + *param_3;
  }
  return;
}


