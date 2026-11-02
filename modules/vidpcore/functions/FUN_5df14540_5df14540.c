/* Module: vidpcore.dll
   Function: FUN_5df14540
   Address: 5df14540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df14540(LPCSTR param_1,LPSTR param_2,DWORD param_3)

{
  LPCSTR lpRootPathName;
  LPSTR lpVolumeNameBuffer;
  DWORD nVolumeNameSize;
  int iVar1;
  uint uVar2;
  CHAR local_40 [64];
  
  nVolumeNameSize = param_3;
  lpVolumeNameBuffer = param_2;
  lpRootPathName = param_1;
  iVar1 = GetVolumeInformationA
                    (param_1,param_2,param_3,(LPDWORD)&param_1,(LPDWORD)&param_2,&param_3,local_40,
                     0x40);
  uVar2 = 1;
  do {
    if (iVar1 != 0) {
      return 0x4e131;
    }
    iVar1 = GetVolumeInformationA
                      (lpRootPathName,lpVolumeNameBuffer,nVolumeNameSize,(LPDWORD)&param_1,
                       (LPDWORD)&param_2,&param_3,local_40,0x40);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  if (iVar1 != 0) {
    return 0x4e131;
  }
  *lpVolumeNameBuffer = '\0';
  return 0x8004e139;
}


