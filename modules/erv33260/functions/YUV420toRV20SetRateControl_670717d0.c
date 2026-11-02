/* Module: erv33260.dll
   Function: YUV420toRV20SetRateControl
   Address: 670717d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
YUV420toRV20SetRateControl(uint param_1,uint param_2,uint param_3,char param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_34 [2];
  int local_2c [5];
  int local_18 [5];
  
                    /* 0x17d0  15  YUV420toRV20SetRateControl */
  if ((param_5 == 0) || (*(int *)(param_5 + 0x20) != -0x51403f2f)) {
    return 0x80004003;
  }
  if ((param_4 != '\0') && (param_4 != '\x01')) {
    return 0x80004005;
  }
  local_18[0] = 2 - (uint)(param_4 != '\0');
  iVar1 = (0x1f - (param_1 & 0xff)) * 0x2711;
  local_18[1] = ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + 0x9c;
  local_18[2] = param_3 >> 3;
  iVar1 = (**(code **)(**(int **)(param_5 + 0x40) + 0x28))(local_18);
  if (iVar1 == 0) {
    local_18[2] = param_3 >> 3;
    local_18[0] = 2 - (uint)(param_4 != '\0');
    iVar3 = (0x1f - (param_2 & 0xff)) * 0x2711;
    local_18[1] = ((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) + 0x9c;
    piVar4 = local_18;
    piVar5 = local_2c;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    local_34[0] = iVar1;
    iVar1 = (**(code **)(**(int **)(param_5 + 0x40) + 0x2c))(local_34);
  }
  uVar2 = FUN_67071000(iVar1);
  return uVar2;
}


