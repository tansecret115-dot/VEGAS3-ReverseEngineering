/* Module: vegas30k.dll
   Function: FUN_01014b70
   Address: 01014b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01014cfa) */
/* WARNING: Removing unreachable block (ram,0x01014d13) */
/* WARNING: Removing unreachable block (ram,0x01014d1e) */
/* WARNING: Type propagation algorithm not settling */

int FUN_01014b70(HANDLE param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  DWORD nNumberOfBytesToWrite;
  LPCSTR lpMultiByteStr;
  int iVar2;
  BOOL BVar3;
  cditemtag *pcVar4;
  LONG *pLVar5;
  int local_450;
  undefined1 local_449;
  DWORD local_448;
  int local_444;
  uint local_440;
  uint local_43c;
  LONG local_438;
  LPCSTR local_434;
  LONG local_430 [11];
  int local_404;
  WCHAR local_400 [512];
  
  local_449 = 0;
  local_450 = 0;
  *param_3 = 0;
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_2;
  if (uVar1 == 0) {
    return 0;
  }
  local_434 = (LPCSTR)0x0;
  local_430[0] = 0;
  local_43c = uVar1;
  SetFilePointer(param_1,0,local_430,2);
  iVar2 = riff_WriteListHeader(param_1,0x6c786469,0);
  if (-1 < iVar2) {
    riff_SaveLocation(param_1,&local_444);
    local_444 = local_444 + -8;
    local_450 = local_450 + 4;
    local_440 = 0;
    if (uVar1 == 0) {
LAB_01014d45:
      riff_RestoreLocation(param_1,local_444);
      BVar3 = WriteFile(param_1,&local_450,4,&local_448,(LPOVERLAPPED)0x0);
      if ((BVar3 != 0) && (local_448 == 4)) {
        local_450 = local_450 + 8;
        local_43c = 0;
        local_438 = 0;
        SetFilePointer(param_1,0,&local_438,2);
        if (param_3 != (int *)0x0) {
          *param_3 = local_450;
        }
        iVar2 = riff_UpdateRIFFSize(param_1,local_450);
        return iVar2;
      }
LAB_01014db6:
      iVar2 = -0x7ffb1ff7;
    }
    else {
      while( true ) {
        pcVar4 = *(cditemtag **)(param_2[2] + local_440 * 4);
        local_434 = SfPQList_GetItemText(pcVar4);
        local_430[1] = 0x2c;
        pLVar5 = local_430 + 2;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pLVar5 = *(LONG *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pLVar5 = pLVar5 + 1;
        }
        nNumberOfBytesToWrite = local_404 * 2;
        iVar2 = riff_WriteChunkHeader(param_1,0x78646e69,nNumberOfBytesToWrite + 0x2c);
        if (iVar2 < 0) break;
        local_450 = local_450 + 8;
        BVar3 = WriteFile(param_1,local_430 + 1,0x2c,&local_448,(LPOVERLAPPED)0x0);
        lpMultiByteStr = local_434;
        if ((BVar3 == 0) || (local_448 != 0x2c)) goto LAB_01014db6;
        if (nNumberOfBytesToWrite != 0) {
          iVar2 = lstrlenA(local_434);
          MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_400,iVar2 + 1);
          local_400[iVar2] = L'\0';
          BVar3 = WriteFile(param_1,local_400,nNumberOfBytesToWrite,&local_448,(LPOVERLAPPED)0x0);
          if ((BVar3 == 0) || (nNumberOfBytesToWrite != local_448)) goto LAB_01014db6;
        }
        local_450 = local_450 + 0x2c + nNumberOfBytesToWrite;
        local_440 = local_440 + 1;
        if (local_43c <= local_440) goto LAB_01014d45;
      }
    }
  }
  return iVar2;
}


