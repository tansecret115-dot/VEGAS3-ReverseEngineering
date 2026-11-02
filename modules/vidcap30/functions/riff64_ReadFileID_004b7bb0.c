/* Module: vidcap30.exe
   Function: riff64_ReadFileID
   Address: 004b7bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_ReadFileID,12 */

undefined4 riff64_ReadFileID(HANDLE param_1,int *param_2,int *param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  uint local_18;
  int local_14;
  int local_10 [4];
  
  hFile = param_1;
                    /* 0xb7bb0  758  _riff64_ReadFileID@12 */
  riff64_ReadChunkHeader(param_1,local_10,&local_18);
  if (param_2 != (int *)0x0) {
    *param_2 = local_18 - 0x10;
    param_2[1] = local_14 - (uint)(local_18 < 0x10);
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = local_10;
  piVar4 = &DAT_00599f38;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    return 0x8004e080;
  }
  BVar1 = ReadFile(hFile,local_10,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  if (param_1 != (HANDLE)0x10) {
    return 0x8004e008;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_10[0];
    param_3[1] = local_10[1];
    param_3[2] = local_10[2];
    param_3[3] = local_10[3];
  }
  return 0;
}


