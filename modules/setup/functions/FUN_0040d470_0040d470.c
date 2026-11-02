/* Module: Setup.exe
   Function: FUN_0040d470
   Address: 0040d470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040d470(void *this,uchar *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  __int64 _Var8;
  longlong lVar9;
  undefined4 local_574 [2];
  int local_56c;
  int local_568 [11];
  uint local_53c;
  int local_538;
  CHAR local_514 [780];
  uchar local_208 [260];
  uchar local_104 [260];
  
  if (*(int *)((int)this + 0x24) != 3) {
    return 0x80004005;
  }
  iVar5 = 0;
  piVar6 = local_568;
  for (iVar3 = 0xd8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  uVar4 = 0;
  local_56c = 0;
  local_574[0] = 0;
  FUN_0040a570(this,param_1,local_208,local_574);
  iVar1 = FUN_00411200(this,local_568);
  iVar3 = local_56c;
  while (iVar1 == 0) {
    pcVar2 = _SfGetFileNamePtrA_4(local_514);
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) &&
       (iVar3 = FUN_0040a690(local_514,(LPCSTR)local_208,local_574[0]), iVar3 != 0)) {
      bVar7 = CARRY4(uVar4,local_53c + 0x54);
      uVar4 = uVar4 + local_53c + 0x54;
      iVar5 = iVar5 + local_538 + (uint)(0xffffffab < local_53c) + (uint)bVar7;
    }
    iVar1 = FUN_004112c0(this,local_568);
    iVar3 = iVar5;
  }
  local_56c = iVar3;
  _Var8 = CArchive2::GetArchiveSize();
  lVar9 = _Var8 - CONCAT44(local_56c,uVar4);
  _SfGetRootPathFromFilePath_12((uchar *)((int)this + 0x678),local_104,0x104);
  uVar4 = _SfGetDiskFreeSpace_8(local_104,0x400);
  lVar9 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),0x400,0);
  if ((lVar9 < 0x100000000) && ((lVar9 < 0 || ((uint)lVar9 <= uVar4)))) {
    return 0;
  }
  return 0;
}


