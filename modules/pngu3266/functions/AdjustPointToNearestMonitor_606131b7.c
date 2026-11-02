/* Module: pngu3266.dll
   Function: AdjustPointToNearestMonitor
   Address: 606131b7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::AdjustPointToNearestMonitor(class CPNxPoint &,int &)
    */

long __cdecl CPNSystemInfo::AdjustPointToNearestMonitor(CPNxPoint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  CPNxPoint *pCVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_18;
  int local_14;
  CPNxPoint *local_10;
  long local_c;
  uint local_8;
  
                    /* 0x231b7  792
                       ?AdjustPointToNearestMonitor@CPNSystemInfo@@SAJAAVCPNxPoint@@AAH@Z */
  pCVar3 = param_1;
  local_c = -0x7fffbffb;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_1;
  local_10 = (CPNxPoint *)CountMonitors();
  piVar4 = param_2;
  local_8 = 0;
  *param_2 = 0;
  param_1 = (CPNxPoint *)0x1;
  if (local_10 != (CPNxPoint *)0x0) {
    do {
      local_18 = iVar2;
      local_14 = iVar1;
      lVar5 = AdjustPointToMonitor((ulong)param_1,(CPNxPoint *)&local_18,(int *)&param_2);
      if (-1 < lVar5) {
        if (param_2 == (int *)0x0) {
          *(int *)pCVar3 = local_18;
          *(int *)(pCVar3 + 4) = local_14;
          *piVar4 = 0;
          return 0;
        }
        iVar6 = local_18 - iVar2;
        iVar8 = local_14 - iVar1;
        uVar7 = iVar6 * iVar6 + iVar8 * iVar8;
        if ((uVar7 < local_8) || (local_8 == 0)) {
          local_c = 0;
          *(int *)pCVar3 = local_18;
          *(int *)(pCVar3 + 4) = local_14;
          *piVar4 = 1;
          local_8 = uVar7;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 <= local_10);
  }
  return local_c;
}


