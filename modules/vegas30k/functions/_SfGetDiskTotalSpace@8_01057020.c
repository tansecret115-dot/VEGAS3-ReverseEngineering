/* Module: vegas30k.dll
   Function: _SfGetDiskTotalSpace@8
   Address: 01057020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SfGetDiskTotalSpace_8(char *param_1,uint param_2)

{
  double dVar1;
  int iVar2;
  HMODULE hModule;
  BOOL BVar3;
  undefined4 uVar4;
  uint local_338;
  undefined4 uStack_334;
  uint local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  longlong local_320;
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  char local_308;
  char local_307;
  char local_204 [256];
  char local_104 [260];
  
                    /* 0x57020  946  _SfGetDiskTotalSpace@8 */
  iVar2 = _SfGetRootPathFromFilePath_12(param_1,&local_308,0x104);
  local_330 = (uint)(iVar2 != 0);
  if (local_330 == 0) goto LAB_0105719d;
  if (DAT_01205ff8 == 0) {
LAB_01057094:
    BVar3 = GetDiskFreeSpaceA(&local_308,&local_324,&local_32c,&local_338,&local_328);
    if (BVar3 == 0) goto LAB_0105719d;
    uStack_334 = 0;
    dVar1 = (double)local_328 * (double)local_32c * (double)local_324;
    local_338 = local_328;
  }
  else {
    if (DAT_0120e874 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("KERNEL32");
      if (hModule != (HMODULE)0x0) {
        DAT_0120e874 = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
      }
      if (DAT_0120e874 == (FARPROC)0x0) {
        DAT_01205ff8 = 0;
        goto LAB_01057094;
      }
    }
    _splitpath(param_1,(char *)&local_330,local_204,(char *)0x0,(char *)0x0);
    _makepath(local_104,(char *)&local_330,local_204,(char *)0x0,(char *)0x0);
    iVar2 = (*DAT_0120e874)(local_104,local_318,&local_320,local_310);
    if (iVar2 == 0) {
LAB_0105719d:
      if ((local_308 == '\\') && (local_307 == '\\')) {
        return 0xffffffff;
      }
      return 0;
    }
    dVar1 = (double)local_320;
  }
  if (param_2 != 0) {
    uStack_334 = 0;
    local_338 = param_2;
    dVar1 = dVar1 / (double)param_2;
  }
  if (_DAT_011e1af8 < dVar1) {
    return 0xffffffff;
  }
  uVar4 = ftol();
  return uVar4;
}


