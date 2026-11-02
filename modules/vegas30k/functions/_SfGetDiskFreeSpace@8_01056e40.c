/* Module: vegas30k.dll
   Function: _SfGetDiskFreeSpace@8
   Address: 01056e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SfGetDiskFreeSpace_8(char *param_1,uint param_2)

{
  double dVar1;
  int iVar2;
  HMODULE hModule;
  BOOL BVar3;
  undefined4 uVar4;
  uint local_334;
  undefined4 uStack_330;
  uint local_32c;
  undefined4 local_328;
  undefined4 local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  undefined4 local_314;
  undefined4 local_310;
  DWORD local_30c;
  char local_308;
  char local_307;
  char local_204 [256];
  char local_104 [260];
  
                    /* 0x56e40  945  _SfGetDiskFreeSpace@8 */
  iVar2 = _SfGetRootPathFromFilePath_12(param_1,&local_308,0x104);
  local_32c = (uint)(iVar2 != 0);
  if (local_32c == 0) goto LAB_01056fd6;
  if (DAT_01205ff4 == 0) {
LAB_01056ecd:
    BVar3 = GetDiskFreeSpaceA(&local_308,&local_320,&local_31c,&local_318,&local_30c);
    if (BVar3 == 0) goto LAB_01056fd6;
    uStack_330 = 0;
    dVar1 = (double)local_318 * (double)local_31c * (double)local_320;
    local_334 = local_318;
  }
  else {
    local_328 = 0;
    local_324 = 0;
    local_334 = 0;
    uStack_330 = 0;
    local_314 = 0;
    local_310 = 0;
    if (DAT_0120e870 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("KERNEL32");
      if (hModule != (HMODULE)0x0) {
        DAT_0120e870 = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
      }
      if (DAT_0120e870 == (FARPROC)0x0) {
        DAT_01205ff4 = 0;
        goto LAB_01056ecd;
      }
    }
    _splitpath(param_1,(char *)&local_32c,local_204,(char *)0x0,(char *)0x0);
    _makepath(local_104,(char *)&local_32c,local_204,(char *)0x0,(char *)0x0);
    iVar2 = (*DAT_0120e870)(local_104,&local_328,&local_334,&local_314);
    if (iVar2 == 0) {
LAB_01056fd6:
      if ((local_308 == '\\') && (local_307 == '\\')) {
        return 0xffffffff;
      }
      return 0;
    }
    dVar1 = (double)CONCAT44(local_324,local_328);
  }
  if (param_2 != 0) {
    uStack_330 = 0;
    local_334 = param_2;
    dVar1 = dVar1 / (double)param_2;
  }
  if (_DAT_011e1af8 < dVar1) {
    return 0xffffffff;
  }
  uVar4 = ftol();
  return uVar4;
}


