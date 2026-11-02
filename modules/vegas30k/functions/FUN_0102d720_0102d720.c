/* Module: vegas30k.dll
   Function: FUN_0102d720
   Address: 0102d720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0102d720(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int *local_4;
  
  if (0 < param_1) {
    local_4 = param_3;
    puVar5 = (uint *)(param_5 + 8);
    param_5 = param_1;
    do {
      iVar6 = 0;
      iVar2 = 0;
      iVar3 = 0;
      uVar4 = 0;
      param_3 = (int *)0x0;
      piVar7 = local_4;
      if (0 < param_4) {
        do {
          iVar1 = *piVar7;
          if (iVar1 < 0) {
            if (iVar1 == -0x80000000) {
              iVar1 = 0x7fffffff;
            }
            else {
              iVar1 = -iVar1;
            }
          }
          if ((int)param_3 <= iVar1) {
            iVar2 = iVar6;
            param_3 = (int *)iVar1;
          }
          if (iVar1 < 0x7fffffff) {
            iVar3 = 0;
          }
          else {
            iVar3 = iVar3 + 1;
            uVar4 = (uint)(param_2 <= iVar3);
            if (uVar4 != 0) break;
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + param_1;
        } while (iVar6 < param_4);
      }
      puVar5[-2] = (uint)((float)(int)param_3 * (float)_DAT_011db2c8);
      puVar5[-1] = iVar2 - iVar3;
      *puVar5 = uVar4;
      local_4 = local_4 + 1;
      param_5 = param_5 + -1;
      puVar5 = puVar5 + 3;
    } while (param_5 != 0);
  }
  return;
}


