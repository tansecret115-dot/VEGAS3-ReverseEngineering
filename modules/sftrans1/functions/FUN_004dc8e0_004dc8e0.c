/* Module: sftrans1.dll
   Function: FUN_004dc8e0
   Address: 004dc8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004dc8e0(int *param_1,uint param_2,int param_3,undefined4 param_4,code *param_5)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar2 = GetCurrentThreadId(), DVar2 != param_1[0xd])) {
    return 0xffffffff;
  }
  iVar3 = *param_1;
  param_2 = ((int)param_2 < 0) - 1 & param_2;
  if (param_3 < 0) {
    param_3 = iVar3 - param_2;
  }
  else if ((int)(iVar3 - param_2) <= param_3) {
    param_3 = iVar3 - param_2;
  }
  if ((int)param_2 < iVar3) {
    if (param_3 < 1) {
      param_2 = 0xffffffff;
    }
    else {
      param_3 = (param_2 - 1) + param_3;
      for (; (int)param_2 <= param_3; param_2 = param_2 + 1) {
        if ((uVar1 >> 2 & 1) == 0) {
          iVar3 = *(int *)(param_1[2] + param_2 * 4);
        }
        else {
          iVar3 = param_1[1] * param_2 + param_1[2];
        }
        iVar3 = (*param_5)(param_4,iVar3);
        if (iVar3 == 0) {
          if ((int)param_2 <= param_3) goto LAB_004dc9a1;
          break;
        }
      }
      param_2 = 0xffffffff;
    }
  }
  else {
    param_2 = 0xffffffff;
  }
LAB_004dc9a1:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return param_2;
}


