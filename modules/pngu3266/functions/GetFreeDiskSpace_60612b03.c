/* Module: pngu3266.dll
   Function: GetFreeDiskSpace
   Address: 60612b03
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static unsigned long __cdecl CPNSystemInfo::GetFreeDiskSpace(class CPNString const &) */

ulong __cdecl CPNSystemInfo::GetFreeDiskSpace(CPNString *param_1)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  ulong uVar4;
  int local_28 [3];
  LPCSTR local_1c [3];
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
                    /* 0x22b03  1199  ?GetFreeDiskSpace@CPNSystemInfo@@SAKABVCPNString@@@Z */
  FUN_60618bd0(local_1c,(int *)param_1);
  iVar1 = FUN_60619240(local_1c,'\\');
  piVar2 = FUN_60619450(local_1c,local_28,iVar1 + 1);
  FUN_60618e60(local_1c,piVar2);
  FUN_60618cd0(local_28);
  local_c = 0;
  local_8 = 0;
  param_1 = (CPNString *)0x0;
  local_10 = 0;
  BVar3 = GetDiskFreeSpaceA(local_1c[0],&local_c,&local_8,(LPDWORD)&param_1,&local_10);
  if (BVar3 == 0) {
    FUN_60618cd0((int *)local_1c);
    return 0;
  }
  uVar4 = (int)param_1 * local_8 * local_c;
  FUN_60618cd0((int *)local_1c);
  return uVar4;
}


