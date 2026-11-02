/* Module: pncrt.dll
   Function: _getdiskfree
   Address: 78018770
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _getdiskfree(uint _Drive,_diskfree_t *_DiskFree)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint *lpRootPathName;
  
                    /* 0x18770  261  _getdiskfree */
  if (_Drive == 0) {
    lpRootPathName = (uint *)0x0;
  }
  else {
    if (0x1a < _Drive) {
      return 0x57;
    }
    cVar1 = (char)_Drive;
    lpRootPathName = &_Drive;
    _Drive = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
  }
  BVar2 = GetDiskFreeSpaceA((LPCSTR)lpRootPathName,&_DiskFree->sectors_per_cluster,
                            &_DiskFree->bytes_per_sector,&_DiskFree->avail_clusters,
                            &_DiskFree->total_clusters);
  if (BVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x780187bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar3 = GetLastError();
    return DVar3;
  }
  return 0;
}


