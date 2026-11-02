/* Module: mpgvout.001
   Function: FUN_10031900
   Address: 10031900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10031900(undefined1 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *local_40;
  
  iVar1 = param_3 - param_5 >> 1;
  iVar2 = (param_2 - param_5) * 2;
  puVar6 = param_1 + param_2;
  iVar3 = 0;
  puVar4 = (undefined1 *)*param_4;
  local_40 = (undefined1 *)param_4[2];
  puVar7 = (undefined1 *)param_4[1];
  if (0 < param_6 >> 1) {
    do {
      iVar3 = iVar3 + 1;
      iVar5 = param_5 >> 1;
      if (0 < param_5 >> 1) {
        do {
          *puVar7 = *param_1;
          *puVar4 = param_1[1];
          *local_40 = param_1[2];
          puVar4[1] = param_1[3];
          puVar4[param_3] = puVar6[1];
          puVar4[param_3 + 1] = puVar6[3];
          puVar4 = puVar4 + 2;
          local_40 = local_40 + 1;
          puVar7 = puVar7 + 1;
          param_1 = param_1 + 4;
          puVar6 = puVar6 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      puVar4 = puVar4 + (param_3 * 2 - param_5);
      local_40 = local_40 + iVar1;
      puVar7 = puVar7 + iVar1;
      param_1 = param_1 + iVar2;
      puVar6 = puVar6 + iVar2;
    } while (iVar3 < param_6 >> 1);
  }
  return;
}


