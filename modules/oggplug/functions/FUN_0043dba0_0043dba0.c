/* Module: oggplug.dll
   Function: FUN_0043dba0
   Address: 0043dba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043dba0(int param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int local_c;
  int *local_8;
  int local_4;
  
  iVar3 = param_5;
  local_4 = *(int *)(param_5 + 4);
  param_5 = 1;
  local_c = param_1;
  if (0 < local_4) {
    local_8 = (int *)(iVar3 + 4 + local_4 * 4);
    iVar3 = param_1;
    do {
      iVar1 = iVar3 / *local_8;
      pfVar2 = (float *)(param_1 / iVar3);
      local_c = local_c - (*local_8 + -1) * (int)pfVar2;
      param_5 = 1 - param_5;
      if (*local_8 == 4) {
        pfVar4 = param_2;
        pfVar5 = param_3;
        if (param_5 != 0) {
          pfVar4 = param_3;
          pfVar5 = param_2;
        }
        FUN_0043df10((uint)pfVar2,iVar1,pfVar4,pfVar5,param_4 + -4 + local_c * 4,
                     param_4 + -4 + ((int)pfVar2 + local_c) * 4,
                     (float *)(param_4 + -4 + ((int)pfVar2 + local_c + (int)pfVar2) * 4));
      }
      else if (*local_8 == 2) {
        iVar3 = param_4 + -4 + local_c * 4;
        if (param_5 == 0) {
          FUN_0043dd50(pfVar2,iVar1,param_2,param_3,iVar3);
        }
        else {
          FUN_0043dd50(pfVar2,iVar1,param_3,param_2,iVar3);
        }
      }
      else {
        if (pfVar2 == (float *)0x1) {
          param_5 = 1 - param_5;
        }
        pfVar4 = (float *)(param_4 + -4 + local_c * 4);
        if (param_5 == 0) {
          FUN_0043e380((uint)pfVar2,(float *)*local_8,iVar1,(int)pfVar2 * iVar1,param_2,param_2,
                       param_2,param_3,param_3,pfVar4);
          param_5 = 1;
        }
        else {
          FUN_0043e380((uint)pfVar2,(float *)*local_8,iVar1,(int)pfVar2 * iVar1,param_3,param_3,
                       param_3,param_2,param_2,pfVar4);
          param_5 = 0;
        }
      }
      local_8 = local_8 + -1;
      local_4 = local_4 + -1;
      iVar3 = iVar1;
    } while (local_4 != 0);
    if ((param_5 != 1) && (0 < param_1)) {
      iVar3 = (int)param_3 - (int)param_2;
      do {
        *param_2 = *(float *)((int)param_2 + iVar3);
        param_2 = param_2 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}


