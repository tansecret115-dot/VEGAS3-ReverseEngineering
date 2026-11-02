/* Module: vidcap30.exe
   Function: FUN_005336b0
   Address: 005336b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005336b0(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  __int64 _Var8;
  longlong lVar9;
  undefined4 local_568 [11];
  uint local_53c;
  int local_538;
  undefined1 local_514 [1040];
  undefined1 local_104 [260];
  
  if (*(int *)(param_1 + 0x24) != 3) {
    return 0x80004005;
  }
  iVar5 = 0;
  puVar6 = local_568;
  for (iVar3 = 0xd8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar4 = 0;
  FUN_005307b0();
  iVar3 = FUN_00537440(local_568);
  while (iVar3 == 0) {
    pcVar1 = (char *)_SfGetFileNamePtrA_4(local_514);
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (iVar3 = FUN_005308d0(), iVar3 != 0)) {
      bVar7 = CARRY4(uVar4,local_53c + 0x54);
      uVar4 = uVar4 + local_53c + 0x54;
      iVar5 = iVar5 + local_538 + (uint)(0xffffffab < local_53c) + (uint)bVar7;
    }
    iVar3 = FUN_00537500(local_568);
  }
  _Var8 = CArchive2::GetArchiveSize();
  _SfGetRootPathFromFilePath_12();
  uVar2 = _SfGetDiskFreeSpace_8(local_104,0x400);
  lVar9 = __alldiv(_Var8 - CONCAT44(iVar5,uVar4),0x400,0);
  if ((lVar9 < 0x100000000) && ((lVar9 < 0 || ((uint)lVar9 <= uVar2)))) {
    return 0;
  }
  return 0;
}


