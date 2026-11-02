/* Module: pngu3266.dll
   Function: AdjustRectToNearestMonitor
   Address: 606132f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::AdjustRectToNearestMonitor(class CPNxRect &,int &) */

long __cdecl CPNSystemInfo::AdjustRectToNearestMonitor(CPNxRect *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *local_14;
  int local_10;
  long local_c;
  uint local_8;
  
                    /* 0x232f0  795
                       ?AdjustRectToNearestMonitor@CPNSystemInfo@@SAJAAVCPNxRect@@AAH@Z */
  piVar5 = param_2;
  local_c = -0x7fffbffb;
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  local_14 = (int *)CountMonitors();
  local_8 = 0;
  *param_2 = 0;
  param_2 = (int *)0x1;
  if (local_14 != (int *)0x0) {
    do {
      local_24 = iVar1;
      local_20 = iVar2;
      uStack_1c = uVar3;
      uStack_18 = uVar4;
      lVar6 = AdjustRectToMonitor((ulong)param_2,(CPNxRect *)&local_24,&local_10);
      if (-1 < lVar6) {
        if (local_10 == 0) {
          *(int *)param_1 = local_24;
          *(int *)(param_1 + 4) = local_20;
          *(undefined4 *)(param_1 + 8) = uStack_1c;
          *(undefined4 *)(param_1 + 0xc) = uStack_18;
          *piVar5 = 0;
          return 0;
        }
        iVar9 = local_20 - iVar2;
        iVar7 = local_24 - iVar1;
        uVar8 = iVar7 * iVar7 + iVar9 * iVar9;
        if ((uVar8 < local_8) || (local_8 == 0)) {
          *(int *)param_1 = local_24;
          *(int *)(param_1 + 4) = local_20;
          *(undefined4 *)(param_1 + 8) = uStack_1c;
          *(undefined4 *)(param_1 + 0xc) = uStack_18;
          *piVar5 = 1;
          local_c = 0;
          local_8 = uVar8;
        }
      }
      param_2 = (int *)((int)param_2 + 1);
    } while (param_2 <= local_14);
  }
  return local_c;
}


