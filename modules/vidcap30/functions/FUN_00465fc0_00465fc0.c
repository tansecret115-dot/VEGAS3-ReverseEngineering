/* Module: vidcap30.exe
   Function: FUN_00465fc0
   Address: 00465fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00465fc0(int param_1,undefined4 *param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_c;
  
  iVar2 = param_1;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x68);
  EnterCriticalSection(lpCriticalSection);
  iVar7 = *(int *)(param_1 + 0x28);
  param_1 = 0x80004005;
  if (param_2 == (undefined4 *)0x0) {
    param_1 = 0x80070057;
  }
  else {
    iVar5 = iVar7 * 0x58;
    pbVar4 = (byte *)(*(int *)(iVar2 + 0x1c) + iVar5);
    if ((*pbVar4 & 8) != 0) {
      param_1 = 1;
      *param_2 = *(undefined4 *)(pbVar4 + 0x50);
    }
    if (param_3 == (int *)0x0) {
      param_1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x24);
      local_c = 0;
      if (0 < iVar1) {
        iVar2 = *(int *)(iVar2 + 0x1c);
        local_14 = iVar7 + iVar1;
        do {
          iVar3 = iVar5;
          iVar6 = iVar7;
          if (iVar7 < 0) {
            iVar3 = iVar5 + iVar1 * 0x58;
            iVar6 = local_14;
          }
          if (((((*(uint *)(iVar3 + iVar2) & 8) != 0) && ((*(uint *)(iVar3 + iVar2) & 1) != 0)) &&
              (*(int *)(iVar3 + 0x28 + iVar2) == *param_3)) &&
             (*(int *)(iVar3 + iVar2 + 0x2c) == param_3[1])) {
            param_1 = 0;
            *param_2 = *(undefined4 *)(iVar2 + 0x50 + iVar6 * 0x58);
            break;
          }
          local_c = local_c + 1;
          iVar5 = iVar5 + -0x58;
          iVar7 = iVar7 + -1;
          local_14 = local_14 + -1;
        } while (local_c < iVar1);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_1;
}


