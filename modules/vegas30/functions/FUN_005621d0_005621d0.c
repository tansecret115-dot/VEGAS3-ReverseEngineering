/* Module: vegas30.exe
   Function: FUN_005621d0
   Address: 005621d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005621d0(int *param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  iVar2 = FUN_005624d0(param_1);
  if (iVar2 != 0) {
    FUN_00562280(iVar2);
    FUN_00562540(param_1,iVar2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc));
  piVar1 = (int *)*param_1;
  param_1[2] = -1;
  iVar2 = 0;
  if (0 < *piVar1) {
    do {
      iVar4 = 0x10;
      bVar7 = false;
      iVar3 = 0;
      bVar8 = true;
      pbVar5 = (byte *)(piVar1[1] * iVar2 + 0x108 + piVar1[2]);
      pbVar6 = param_2;
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
        param_1[2] = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
  return 1;
}


