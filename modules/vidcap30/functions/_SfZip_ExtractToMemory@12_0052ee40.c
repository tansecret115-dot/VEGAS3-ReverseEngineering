/* Module: vidcap30.exe
   Function: _SfZip_ExtractToMemory@12
   Address: 0052ee40
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZip_ExtractToMemory_12(undefined4 param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  LPCVOID local_8;
  undefined4 local_4;
  
                    /* 0x12ee40  702  _SfZip_ExtractToMemory@12 */
  local_4 = 0;
  iVar1 = _SfZipEnum_Create_8(param_1,&local_4);
  if (-1 < iVar1) {
    local_8 = (LPCVOID)0x0;
    do {
      if (local_8 != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(local_8);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_8);
        GlobalFree(pvVar2);
        local_8 = (LPCVOID)0x0;
      }
      iVar1 = _SfZipEnum_Next_8(local_4,&local_8);
      if (iVar1 < 0) goto LAB_0052eefe;
      iVar3 = lstrcmpiA(param_2,*(LPCSTR *)((int)local_8 + 0x24));
    } while (iVar3 != 0);
    if ((-1 < iVar1) &&
       (iVar1 = _SfZipEnum_ExtractToMemory_12(param_1,local_8,param_3), local_8 != (LPCVOID)0x0)) {
      pvVar2 = GlobalHandle(local_8);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(local_8);
      GlobalFree(pvVar2);
    }
LAB_0052eefe:
    _SfZipEnum_Destroy_4(local_4);
  }
  return iVar1;
}


