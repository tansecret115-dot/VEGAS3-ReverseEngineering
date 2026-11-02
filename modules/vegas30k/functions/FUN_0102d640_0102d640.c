/* Module: vegas30k.dll
   Function: FUN_0102d640
   Address: 0102d640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0102d640(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *local_4;
  
  if (0 < param_1) {
    local_4 = param_3;
    puVar4 = (uint *)(param_5 + 8);
    param_5 = param_1;
    do {
      iVar7 = 0;
      iVar3 = 0;
      iVar6 = 0;
      uVar2 = 0;
      param_3 = (int *)0x0;
      piVar5 = local_4;
      if (0 < param_4) {
        do {
          iVar1 = *piVar5;
          if (iVar1 < 0) {
            if (iVar1 == -0x80000000) {
              iVar1 = 0x7fffffff;
            }
            else {
              iVar1 = -iVar1;
            }
          }
          if ((int)param_3 <= iVar1) {
            iVar3 = iVar7;
            param_3 = (int *)iVar1;
          }
          if (iVar1 < 0x7fffff) {
            iVar6 = 0;
          }
          else {
            uVar2 = (uint)(0x7fffff < iVar1);
            if (uVar2 != 0) break;
            iVar6 = iVar6 + 1;
            uVar2 = (uint)(param_2 <= iVar6);
            if (uVar2 != 0) break;
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + param_1;
        } while (iVar7 < param_4);
      }
      puVar4[-2] = (uint)((float)(int)param_3 * (float)_DAT_011db2c0);
      puVar4[-1] = iVar3 - iVar6;
      *puVar4 = uVar2;
      local_4 = local_4 + 1;
      param_5 = param_5 + -1;
      puVar4 = puVar4 + 3;
    } while (param_5 != 0);
  }
  return;
}


