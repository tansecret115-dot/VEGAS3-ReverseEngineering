/* Module: vegas30.exe
   Function: FUN_005df400
   Address: 005df400
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005df400(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar3 = param_3;
  uVar2 = param_1;
  iVar6 = 0;
  iVar5 = 0;
  local_14 = 0;
  FUN_005b83b0(param_2,0);
  local_c = (int *)FUN_005b87b0(param_2);
  local_10 = *local_c;
  if (*(int *)(param_2 + 0x1d8) != 0) {
    iVar6 = **(int **)(*(int *)(param_2 + 0x1d8) + 0x24);
  }
  if ((local_10 < 1) && (iVar6 < 1)) {
    FUN_005b84d0(param_2,0);
    return 0x4e001;
  }
  FUN_005decf0(param_3,param_1,
               "\"ID\";\"Track\";\"StartTime\";\"Length\";\"PlayRate\";\"Locked\";\"Normalized\";\"StretchMethod\";\"Looped\";\"OnRuler\";\"MediaType\";\"FileName\";\"Stream\";\"StreamStart\";\"StreamLength\";\"FadeTimeIn\";\"FadeTimeOut\";\"SustainGain\";\"CurveIn\";\"GainIn\";\"CurveOut\";\"GainOut\";\"Layer\";\"Color\";\"CurveInR\";\"CurveOutR\"\r\n"
               ,local_4);
  iVar6 = *(int *)(param_2 + 0x1d8);
  param_3 = 0;
  if (iVar6 != 0) {
    iVar5 = FUN_005df0b0(param_1,iVar6,0,&local_14,uVar3);
  }
  param_1 = (uint)(iVar6 != 0);
  iVar6 = 0;
  if (0 < local_10) {
    do {
      iVar1 = *(int *)(local_c[2] + iVar6 * 4);
      if (*(int *)(iVar1 + 4) == 2) {
        iVar5 = FUN_005df0b0(uVar2,iVar1,param_3,&local_14,uVar3);
        if (iVar5 < 0) break;
        param_3 = param_3 + 1;
      }
      else if (*(int *)(iVar1 + 4) == 3) {
        iVar5 = FUN_005df0b0(uVar2,iVar1,param_1,&local_14,uVar3);
        if (iVar5 < 0) break;
        param_1 = param_1 + 1;
      }
      if ((*(byte *)(param_4 + 0x1c) & 1) != 0) {
        iVar5 = -0x7ffb1ff4;
        break;
      }
      iVar6 = iVar6 + 1;
      local_8 = iVar6;
      uVar4 = ftol();
      FUN_004e7320(param_4,uVar4);
    } while (iVar6 < local_10);
  }
  FUN_005b84d0(param_2,0);
  return iVar5;
}


