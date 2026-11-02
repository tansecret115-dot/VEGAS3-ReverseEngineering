/* Module: sftrkfx1.dll
   Function: FUN_5cbde650
   Address: 5cbde650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbde650(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
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
          piVar1 = (int *)*piVar7;
          if ((int)piVar1 < 0) {
            if (piVar1 == (int *)0x80000000) {
              piVar1 = (int *)0x7fffffff;
            }
            else {
              piVar1 = (int *)-(int)piVar1;
            }
          }
          if ((int)param_3 <= (int)piVar1) {
            iVar2 = iVar6;
            param_3 = piVar1;
          }
          if ((int)piVar1 < 0x7fffffff) {
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
      puVar5[-2] = (uint)((float)(int)param_3 * (float)_DAT_5cc04290);
      puVar5[-1] = iVar2 - iVar3;
      *puVar5 = uVar4;
      local_4 = local_4 + 1;
      param_5 = param_5 + -1;
      puVar5 = puVar5 + 3;
    } while (param_5 != 0);
  }
  return;
}


