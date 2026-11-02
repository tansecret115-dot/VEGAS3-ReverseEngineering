/* Module: vegas30k.dll
   Function: FUN_0107e6e0
   Address: 0107e6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107e6e0(int *param_1,undefined2 *param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  if (0 < param_3) {
    local_4 = param_3;
    puVar1 = param_2;
    do {
      iVar2 = *param_1;
      if ((*(int *)(param_5 + iVar3 * 8) == 0) && (*(int *)(param_5 + 4 + iVar3 * 8) == 0x3ff00000))
      {
        param_2 = (undefined2 *)CONCAT22((short)*(char *)(puVar1 + 1),*puVar1);
      }
      else {
        param_2 = (undefined2 *)ftol();
        if ((int)param_2 < -0x800000) {
          param_2 = (undefined2 *)0xff800000;
        }
        else if (0x7fffff < (int)param_2) {
          param_2 = (undefined2 *)0x7fffff;
        }
      }
      iVar2 = iVar2 + (int)param_2;
      if (iVar2 < -0x800000) {
        iVar2 = -0x800000;
      }
      else if (0x7fffff < iVar2) {
        iVar2 = 0x7fffff;
      }
      iVar3 = iVar3 + 1;
      *param_1 = iVar2;
      if (param_4 == iVar3) {
        iVar3 = 0;
      }
      puVar1 = (undefined2 *)((int)puVar1 + 3);
      param_1 = param_1 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


