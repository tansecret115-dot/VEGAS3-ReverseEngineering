/* Module: sfcdi.dll
   Function: FUN_5bf0b740
   Address: 5bf0b740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0b740(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  UINT uMode;
  HANDLE hDevice;
  BOOL BVar4;
  byte bVar5;
  uint uVar6;
  DWORD local_820;
  uchar local_81c [28];
  uint local_800 [2];
  int aiStack_7f8 [510];
  
  FUN_5bf25750(local_81c,(BYTE *)"\\\\.\\Scsi%d:");
  uMode = SetErrorMode(0x8001);
  hDevice = CreateFileA((LPCSTR)local_81c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  SetErrorMode(uMode);
  if (hDevice == (HANDLE)0xffffffff) {
    return 0;
  }
  BVar4 = DeviceIoControl(hDevice,0x4100c,(LPVOID)0x0,0,local_800,0x800,&local_820,(LPOVERLAPPED)0x0
                         );
  if (BVar4 != 0) {
    uVar6 = 0;
    if ((char)local_800[0] != '\0') {
      do {
        iVar2 = aiStack_7f8[uVar6 * 2];
        iVar3 = (int)local_800 + iVar2;
        while (iVar2 != 0) {
          pbVar1 = param_1 + *(int *)(param_1 + 4) * 8 + 8;
          bVar5 = (*(byte *)(iVar3 + 1) ^ param_1[*(int *)(param_1 + 4) * 8 + 8]) & 0xf ^
                  param_1[*(int *)(param_1 + 4) * 8 + 8];
          *pbVar1 = bVar5;
          *pbVar1 = *(char *)(iVar3 + 2) << 4 | bVar5 & 0xf;
          bVar5 = (*(byte *)(iVar3 + 0xc) ^ pbVar1[1]) & 0x1f ^ pbVar1[1];
          pbVar1[1] = bVar5;
          pbVar1[1] = (*(char *)(iVar3 + 3) != '\0') << 7 | bVar5 & 0x7f;
          bVar5 = pbVar1[2] & 0x1f;
          pbVar1[2] = bVar5;
          pbVar1[2] = (bVar5 ^ *param_1) & 0x1f ^ bVar5;
          iVar2 = *(int *)(param_1 + 4);
          *(uint *)(param_1 + 4) = iVar2 + 1U;
          if ((0xf < iVar2 + 1U) || (*(int *)(iVar3 + 8) == 0)) break;
          iVar3 = (int)local_800 + *(int *)(iVar3 + 8);
          iVar2 = aiStack_7f8[uVar6 * 2];
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (local_800[0] & 0xff));
    }
  }
  CloseHandle(hDevice);
  return 1;
}


