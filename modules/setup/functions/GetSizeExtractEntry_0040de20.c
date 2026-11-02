/* Module: Setup.exe
   Function: GetSizeExtractEntry
   Address: 0040de20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeExtractEntry(int,int *,__int64 &,unsigned long) */

long CArchive2::GetSizeExtractEntry(int param_1,int *param_2,__int64 *param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *local_36c;
  int local_368;
  int local_360 [11];
  uint local_334;
  int local_330;
  undefined1 local_30c;
  undefined1 local_208;
  undefined1 local_104;
  
                    /* 0xde20  37  ?GetSizeExtractEntry@CArchive2@@QAGJHPAHAA_JK@Z */
  iVar5 = 0;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  bVar2 = false;
  if (*(int *)(param_1 + 0x24) == 0) {
    return -0x7fffbffb;
  }
  piVar6 = local_360;
  for (iVar4 = 0xd8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_30c = 0;
  local_208 = 0;
  local_104 = 0;
  local_36c = (int *)0x0;
  local_368 = 1;
  if ((param_3 != (__int64 *)0x0) && (0 < (int)*param_3)) {
    local_368 = (int)*param_3;
  }
  iVar4 = FUN_00411200((void *)param_1,local_360);
  if (iVar4 == 0) {
    while (iVar5 < local_368) {
      lVar3 = GetArchiveCount();
      if (((int)param_2 < lVar3) && (local_36c == param_2)) {
        uVar1 = *(uint *)param_4;
        *(uint *)param_4 = uVar1 + local_334;
        iVar5 = iVar5 + 1;
        bVar2 = true;
        *(uint *)(param_4 + 4) = *(int *)(param_4 + 4) + local_330 + (uint)CARRY4(uVar1,local_334);
        param_2 = (int *)((int)param_2 + 1);
      }
      piVar6 = local_360;
      for (iVar4 = 0xd8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      iVar4 = FUN_004112c0((void *)param_1,local_360);
      if ((iVar4 < 0) || (local_36c = (int *)((int)local_36c + 1), iVar4 != 0)) break;
    }
  }
  return (uint)!bVar2;
}


