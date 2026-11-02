/* Module: vegas30k.dll
   Function: FUN_01060a30
   Address: 01060a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_01060a30(int param_1)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hFileMappingObject;
  LPVOID pvVar4;
  
  if (*(int *)(param_1 + 0x29c) != 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x26c);
  iVar2 = *(int *)(param_1 + 0x270);
  DVar3 = GetFileSize(*(HANDLE *)(param_1 + 600),(LPDWORD)0x0);
  hFileMappingObject =
       CreateFileMappingA(*(HANDLE *)(param_1 + 600),(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
  if (hFileMappingObject != (HANDLE)0x0) {
    pvVar4 = MapViewOfFile(hFileMappingObject,4,0,0,0);
    *(LPVOID *)(param_1 + 0x29c) = pvVar4;
    if (pvVar4 == (LPVOID)0x0) {
      *(undefined4 *)(param_1 + 0x2a0) = 0;
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      *(undefined4 *)(param_1 + 0x2a4) = 0;
    }
    else {
      *(DWORD *)(param_1 + 0x2a0) = DVar3;
      *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x264) + (int)pvVar4;
      *(uint *)(param_1 + 0x2a8) = (DVar3 - *(int *)(param_1 + 0x264)) / ((uVar1 >> 3) * iVar2 * 2);
    }
    CloseHandle(hFileMappingObject);
  }
  return (-(uint)(*(int *)(param_1 + 0x29c) != 0) & 0x7fffbffb) + 0x80004005;
}


