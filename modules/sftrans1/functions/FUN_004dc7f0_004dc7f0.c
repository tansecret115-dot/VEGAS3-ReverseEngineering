/* Module: sftrans1.dll
   Function: FUN_004dc7f0
   Address: 004dc7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004dc7f0(int *param_1,uint param_2,int param_3,byte *param_4)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar2 = GetCurrentThreadId(), DVar2 != param_1[0xd])) {
    return 0xffffffff;
  }
  iVar4 = *param_1;
  param_2 = ((int)param_2 < 0) - 1 & param_2;
  if (param_3 < 0) {
    param_3 = iVar4 - param_2;
  }
  else if ((int)(iVar4 - param_2) <= param_3) {
    param_3 = iVar4 - param_2;
  }
  if (((int)param_2 < iVar4) && (0 < param_3)) {
    param_3 = (param_2 - 1) + param_3;
    for (; (int)param_2 <= param_3; param_2 = param_2 + 1) {
      if ((uVar1 >> 2 & 1) == 0) {
        if (*(byte **)(param_1[2] + param_2 * 4) == param_4) goto LAB_004dc8c0;
      }
      else {
        iVar4 = param_1[1];
        bVar7 = false;
        iVar3 = 0;
        bVar8 = true;
        pbVar5 = (byte *)(iVar4 * param_2 + param_1[2]);
        pbVar6 = param_4;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *pbVar5 < *pbVar6;
          bVar8 = *pbVar5 == *pbVar6;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        }
        if (iVar3 == 0) {
LAB_004dc8c0:
          if ((int)param_2 <= param_3) goto LAB_004dc8c7;
          break;
        }
      }
    }
  }
  param_2 = 0xffffffff;
LAB_004dc8c7:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return param_2;
}


