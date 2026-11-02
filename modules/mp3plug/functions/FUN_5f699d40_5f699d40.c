/* Module: mp3plug.dll
   Function: FUN_5f699d40
   Address: 5f699d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f699d40(HANDLE param_1,int *param_2)

{
  byte bVar1;
  HANDLE hFile;
  BOOL BVar2;
  HANDLE *ppvVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  DWORD local_c;
  int local_8;
  LONG local_4;
  
  hFile = param_1;
  local_8 = *param_2 + -0x80;
  uVar5 = 0;
  local_4 = 0;
  SetFilePointer(param_1,local_8,&local_4,0);
  BVar2 = ReadFile(hFile,&param_1,3,&local_c,(LPOVERLAPPED)0x0);
  if (BVar2 != 0) {
    param_1 = (HANDLE)((uint)param_1 & 0xffffff);
    pbVar6 = &DAT_5f72c9bc;
    ppvVar3 = &param_1;
    do {
      bVar1 = *(byte *)ppvVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_5f699db9:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_5f699dbe;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)ppvVar3 + 1);
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_5f699db9;
      ppvVar3 = (HANDLE *)((int)ppvVar3 + 2);
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_5f699dbe:
    if (iVar4 == 0) {
      uVar5 = 1;
      *param_2 = *param_2 + -0x80;
    }
  }
  local_8 = 0;
  local_4 = 0;
  SetFilePointer(hFile,0,&local_4,0);
  return uVar5;
}


