/* Module: vidcap30.exe
   Function: ExtractEntry
   Address: 00534260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::ExtractEntry(int,int *,char const *,unsigned long) */

long CArchive2::ExtractEntry(int param_1,int *param_2,char *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000014;
  int local_36c;
  undefined4 local_368;
  int *piStack_364;
  undefined4 local_360 [21];
  undefined1 uStack_30c;
  undefined1 uStack_208;
  undefined1 uStack_104;
  
                    /* 0x134260  14  ?ExtractEntry@CArchive2@@QAGJHPAHPBDK@Z */
  lVar4 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return -0x7fffbffb;
  }
  lVar1 = IsSpaceForExtractEntry(param_1,param_2,param_3,param_4);
  if (lVar1 == 0) {
    iVar2 = GetMultiVolumeStatus();
    if (((iVar2 < 2) || (iVar2 = FUN_00536dd0(), iVar2 < 0)) &&
       (iVar2 = GetMultiVolumeStatus(), 1 < iVar2)) {
      FUN_00536e70(0xaaaaaaad,"ExtractEntry",0);
      lVar4 = -0x7ffb1ff5;
    }
    else {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        local_36c = 0;
        local_368 = 0;
        GetSizeExtractEntry(param_1,param_2,(__int64 *)param_3,(ulong)&local_36c);
        (**(code **)(**(int **)(param_1 + 0x20) + 4))(0,local_36c,local_368);
      }
      *(undefined4 *)(param_1 + 0x880) = in_stack_00000014;
      puVar5 = local_360;
      for (iVar3 = 0xd8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      uStack_30c = 0;
      uStack_208 = 0;
      uStack_104 = 0;
      piStack_364 = (int *)0x0;
      local_36c = 1;
      if ((param_3 != (char *)0x0) && (0 < *(int *)param_3)) {
        local_36c = *(int *)param_3;
      }
      iVar3 = FUN_00537440(local_360);
      if (iVar3 == 0) {
        while (iVar3 = 0, iVar2 < local_36c) {
          lVar4 = GetArchiveCount();
          if (((int)param_2 < lVar4) && (piStack_364 == param_2)) {
            iVar3 = FUN_005361d0(local_360,param_4);
            iVar2 = iVar2 + 1;
            param_2 = (int *)((int)param_2 + 1);
          }
          if (iVar3 < 0) break;
          puVar5 = local_360;
          for (iVar3 = 0xd8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          iVar3 = FUN_00537500(local_360);
          if ((iVar3 < 0) || (piStack_364 = (int *)((int)piStack_364 + 1), iVar3 != 0)) break;
        }
      }
      lVar4 = 1;
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
        return 1;
      }
    }
  }
  return lVar4;
}


