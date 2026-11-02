/* Module: pngu3266.dll
   Function: GetFrameSize
   Address: 606128d3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetFrameSize(class CPNxSize &,int) */

void __cdecl CPNSystemInfo::GetFrameSize(CPNxSize *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
                    /* 0x228d3  1198  ?GetFrameSize@CPNSystemInfo@@SAXAAVCPNxSize@@H@Z */
  if (param_2 == 0) {
    iVar1 = FUN_60612600(7);
    iVar2 = 8;
    *(int *)param_1 = iVar1;
  }
  else {
    iVar1 = FUN_60612600(0x20);
    iVar2 = 0x21;
    *(int *)param_1 = iVar1;
  }
  iVar1 = FUN_60612600(iVar2);
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = FUN_60612600(0x2d);
  *(int *)param_1 = *(int *)param_1 + iVar1;
  iVar1 = FUN_60612600(0x2e);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  iVar1 = FUN_60612600(5);
  *(int *)param_1 = *(int *)param_1 + iVar1;
  iVar1 = FUN_60612600(6);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  iVar1 = FUN_60612600(4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  return;
}


