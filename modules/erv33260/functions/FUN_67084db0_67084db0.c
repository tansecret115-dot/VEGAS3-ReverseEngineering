/* Module: erv33260.dll
   Function: FUN_67084db0
   Address: 67084db0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_67084db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,undefined1 *param_10,
                 int param_11,int param_12,int param_13)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_5 = *param_10;
  local_6 = param_10[1];
  pcVar4 = &DAT_67091a17 + (param_13 * param_7 - param_12);
  uVar7 = 0x7fffffff;
  for (; param_7 <= param_8; param_7 = param_7 + 1) {
    cVar1 = *pcVar4;
    pcVar6 = &DAT_67091a17 + (param_13 * param_5 - param_11);
    for (iVar5 = param_5; iVar5 <= param_6; iVar5 = iVar5 + 1) {
      iVar2 = (*(code *)param_4)(param_3);
      uVar3 = iVar2 + *(short *)(param_9 + cVar1 * 2 + *pcVar6 * 2);
      if (uVar3 < uVar7) {
        local_5 = (undefined1)iVar5;
        local_6 = (undefined1)param_7;
        uVar7 = uVar3;
      }
      pcVar6 = pcVar6 + 3;
    }
    pcVar4 = pcVar4 + 3;
  }
  *param_10 = local_5;
  param_10[1] = local_6;
  return uVar7;
}


