/* Module: vegas30.exe
   Function: FUN_00441b30
   Address: 00441b30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00441c6c) */
/* WARNING: Removing unreachable block (ram,0x00441c81) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00441b30(HANDLE param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE hFile;
  int iVar3;
  BOOL BVar4;
  LPCVOID lpBuffer;
  cditemtag *pcVar5;
  LONG *pLVar6;
  DWORD nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  int local_48;
  int local_44;
  DWORD local_40;
  char *local_3c;
  LONG local_38;
  uint local_34;
  LONG local_30 [11];
  int local_4;
  
  hFile = param_1;
  local_48 = 0;
  *param_3 = 0;
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_2;
  if (uVar1 != 0) {
    local_3c = (char *)0x0;
    local_38 = 0;
    local_34 = uVar1;
    SetFilePointer(param_1,0,&local_38,2);
    iVar3 = riff_WriteListHeader(param_1,0x6c786469,0);
    if (iVar3 == 0) {
      riff_SaveLocation(param_1,&local_44);
      local_44 = local_44 + -8;
      local_48 = local_48 + 4;
      param_1 = (HANDLE)0x0;
      if (uVar1 != 0) {
        do {
          pcVar5 = *(cditemtag **)(param_2[2] + (int)param_1 * 4);
          local_3c = SfPQList_GetItemText(pcVar5);
          local_30[1] = 0x2c;
          pLVar6 = local_30 + 2;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pLVar6 = *(LONG *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pLVar6 = pLVar6 + 1;
          }
          DVar2 = local_4 * 2;
          iVar3 = riff_WriteChunkHeader(hFile,0x78646e69,DVar2 + 0x2c);
          if (iVar3 != 0) {
            return iVar3;
          }
          local_48 = local_48 + 8;
          BVar4 = WriteFile(hFile,local_30 + 1,0x2c,&local_40,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            return -0x7ffb1ff7;
          }
          if (DVar2 != 0) {
            lpNumberOfBytesWritten = &local_40;
            lpOverlapped = (LPOVERLAPPED)0x0;
            nNumberOfBytesToWrite = DVar2;
            lpBuffer = (LPCVOID)_SfGetWideFromPrintString_8(DAT_00647204,local_3c);
            BVar4 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,
                              lpOverlapped);
            if (BVar4 == 0) {
              return -0x7ffb1ff7;
            }
          }
          local_48 = local_48 + 0x2c + DVar2;
          param_1 = (HANDLE)((int)param_1 + 1);
        } while (param_1 < local_34);
      }
      riff_RestoreLocation(hFile,local_44);
      BVar4 = WriteFile(hFile,&local_48,4,&local_40,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        return -0x7ffb1ff7;
      }
      local_48 = local_48 + 8;
      local_34 = 0;
      local_30[0] = 0;
      SetFilePointer(hFile,0,local_30,2);
      if (param_3 != (int *)0x0) {
        *param_3 = local_48;
      }
      iVar3 = riff_UpdateRIFFSize(hFile,local_48);
    }
    return iVar3;
  }
  return 0;
}


