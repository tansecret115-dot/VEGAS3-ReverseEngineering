/* Module: aviplug.dll
   Function: FUN_5f994a70
   Address: 5f994a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f994a70(int param_1,undefined2 *param_2,int param_3,undefined2 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int local_10;
  int local_8;
  int local_4;
  
  iVar1 = param_3;
  puVar4 = param_2;
  if (param_1 < 1) {
    return param_3;
  }
  param_2 = param_4;
  local_4 = param_1;
  do {
    param_4 = param_2;
    if (iVar1 < param_5) {
      iVar2 = param_5 / 2;
      local_10 = 0;
      puVar3 = puVar4;
      iVar6 = 0;
      if (0 < param_5) {
        local_8 = param_5;
        do {
          iVar2 = iVar2 - iVar1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + param_5;
            *puVar3 = *param_4;
            *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_4 + 1);
            puVar3 = (undefined2 *)((int)puVar3 + param_1 * 3);
            local_10 = local_10 + 1;
          }
          param_4 = (undefined2 *)((int)param_4 + param_1 * 3);
          local_8 = local_8 + -1;
          iVar6 = local_10;
        } while (local_8 != 0);
      }
      puVar5 = (undefined2 *)((int)param_4 + param_1 * -3);
      if (iVar6 < iVar1) {
        param_3 = iVar1 - iVar6;
        do {
          *puVar3 = *puVar5;
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar5 + 1);
          puVar3 = (undefined2 *)((int)puVar3 + param_1 * 3);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else {
      iVar6 = 0;
      param_3 = iVar1 / 2;
      local_10 = 0;
      puVar3 = (undefined2 *)((int)param_2 + (param_5 + -1) * param_1 * 3);
      puVar5 = (undefined2 *)((int)puVar4 + (iVar1 + -1) * param_1 * 3);
      if (0 < param_5) {
        do {
          *puVar5 = *puVar3;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
          puVar5 = (undefined2 *)((int)puVar5 + param_1 * -3);
          while (iVar6 = iVar6 + 1, iVar6 < iVar1) {
            param_3 = param_3 - param_5;
            if (param_3 < 0) goto LAB_5f994bda;
            *puVar5 = *puVar3;
            *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
            puVar5 = (undefined2 *)((int)puVar5 + param_1 * -3);
          }
          local_10 = param_5;
LAB_5f994bda:
          puVar3 = (undefined2 *)((int)puVar3 + param_1 * -3);
          param_3 = param_3 + iVar1;
          local_10 = local_10 + 1;
        } while (local_10 < param_5);
      }
      puVar3 = (undefined2 *)((int)puVar3 + param_1 * 3);
      if (iVar6 < iVar1) {
        param_3 = iVar1 - iVar6;
        do {
          *puVar5 = *puVar3;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
          puVar5 = (undefined2 *)((int)puVar5 + param_1 * -3);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    param_2 = (undefined2 *)((int)param_2 + 3);
    puVar4 = (undefined2 *)((int)puVar4 + 3);
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      return iVar1;
    }
  } while( true );
}


