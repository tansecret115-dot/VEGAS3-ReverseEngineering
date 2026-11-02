/* Module: oggplug.dll
   Function: FUN_0043ef60
   Address: 0043ef60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043ef60(int param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *local_8;
  int local_4;
  
  iVar3 = param_5;
  local_4 = *(int *)(param_5 + 4);
  param_5 = 0;
  iVar5 = 1;
  if (0 < local_4) {
    local_8 = (undefined4 *)(iVar3 + 8);
    pfVar4 = (float *)0x1;
    do {
      pfVar1 = (float *)*local_8;
      pfVar2 = (float *)(param_1 / ((int)pfVar1 * (int)pfVar4));
      if (pfVar1 == (float *)0x4) {
        pfVar6 = param_2;
        pfVar7 = param_3;
        if (param_5 != 0) {
          pfVar6 = param_3;
          pfVar7 = param_2;
        }
        FUN_0043f5a0((uint)pfVar2,(int)pfVar4,pfVar6,pfVar7,param_4 + -4 + iVar5 * 4,
                     param_4 + -4 + ((int)pfVar2 + iVar5) * 4,
                     (float *)(param_4 + -4 + ((int)pfVar2 + iVar5 + (int)pfVar2) * 4));
LAB_0043f0ba:
        param_5 = 1 - param_5;
      }
      else {
        if (pfVar1 == (float *)0x2) {
          iVar3 = param_4 + -4 + iVar5 * 4;
          if (param_5 == 0) {
            FUN_0043f120((uint)pfVar2,(int)pfVar4,(int)param_2,param_3,iVar3);
          }
          else {
            FUN_0043f120((uint)pfVar2,(int)pfVar4,(int)param_3,param_2,iVar3);
          }
          goto LAB_0043f0ba;
        }
        if (pfVar1 == (float *)0x3) {
          if (param_5 == 0) {
            FUN_0043f2d0((int)pfVar2,pfVar4,param_2,param_3,param_4 + -4 + iVar5 * 4,
                         (float *)(param_4 + -4 + ((int)pfVar2 + iVar5) * 4));
          }
          else {
            FUN_0043f2d0((int)pfVar2,pfVar4,param_3,param_2,param_4 + -4 + iVar5 * 4,
                         (float *)(param_4 + -4 + ((int)pfVar2 + iVar5) * 4));
          }
          goto LAB_0043f0ba;
        }
        pfVar6 = param_2;
        pfVar7 = param_3;
        if (param_5 != 0) {
          pfVar6 = param_3;
          pfVar7 = param_2;
        }
        FUN_0043fa90(pfVar2,pfVar1,(int)pfVar4,(int)pfVar2 * (int)pfVar4,pfVar6,pfVar6,pfVar6,pfVar7
                     ,pfVar7,param_4 + -4 + iVar5 * 4);
        if (pfVar2 == (float *)0x1) goto LAB_0043f0ba;
      }
      iVar5 = iVar5 + ((int)pfVar1 + -1) * (int)pfVar2;
      local_8 = local_8 + 1;
      local_4 = local_4 + -1;
      pfVar4 = (float *)((int)pfVar1 * (int)pfVar4);
    } while (local_4 != 0);
    if ((param_5 != 0) && (0 < param_1)) {
      iVar3 = (int)param_3 - (int)param_2;
      do {
        *param_2 = *(float *)(iVar3 + (int)param_2);
        param_2 = param_2 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}


