/* Module: Setup.exe
   Function: _SfList_FindSpecificItemRange@16
   Address: 00419ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfList_FindSpecificItemRange_16(int *param_1,uint param_2,int param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
                    /* 0x19ea0  230  _SfList_FindSpecificItemRange@16 */
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar3 = GetCurrentThreadId(), DVar3 != param_1[0xd])) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  uVar6 = ((int)param_2 < 0) - 1 & param_2;
  if (param_3 < 0) {
    param_3 = iVar2 - uVar6;
  }
  else if ((int)(iVar2 - uVar6) <= param_3) {
    param_3 = iVar2 - uVar6;
  }
  if (((int)uVar6 < iVar2) && (0 < param_3)) {
    iVar2 = (uVar6 - 1) + param_3;
    for (; (int)uVar6 <= iVar2; uVar6 = uVar6 + 1) {
      if ((uVar1 >> 2 & 1) == 0) {
        if (*(byte **)(param_1[2] + uVar6 * 4) == param_4) goto LAB_00419f70;
      }
      else {
        iVar5 = param_1[1];
        bVar9 = false;
        iVar4 = 0;
        bVar10 = true;
        pbVar7 = (byte *)(iVar5 * uVar6 + param_1[2]);
        pbVar8 = param_4;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar9 = *pbVar7 < *pbVar8;
          bVar10 = *pbVar7 == *pbVar8;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while (bVar10);
        if (!bVar10) {
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (iVar4 == 0) {
LAB_00419f70:
          if ((int)uVar6 <= iVar2) goto LAB_00419f77;
          break;
        }
      }
    }
  }
  uVar6 = 0xffffffff;
LAB_00419f77:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return uVar6;
}


