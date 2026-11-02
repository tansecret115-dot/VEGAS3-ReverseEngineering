/* Module: pncrt.dll
   Function: _pipe
   Address: 7801ee50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _pipe(int *_PtHandles,uint _PipeSize,int _TextMode)

{
  byte *pbVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  int *piVar6;
  ulong *puVar7;
  uint uVar8;
  _SECURITY_ATTRIBUTES local_c;
  
                    /* 0x1ee50  410  _pipe */
  iVar2 = _TextMode;
  uVar8 = _TextMode & 0x80;
  local_c.bInheritHandle = (BOOL)(uVar8 == 0);
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  BVar3 = CreatePipe((PHANDLE)&_TextMode,(PHANDLE)&_PipeSize,&local_c,_PipeSize);
  if (BVar3 == 0) {
    DVar4 = GetLastError();
    FUN_7800a870(DVar4);
    return -1;
  }
  uVar5 = FUN_78011740();
  *_PtHandles = uVar5;
  if (uVar5 == 0xffffffff) {
    piVar6 = _errno();
    *piVar6 = 0x18;
  }
  else {
    *(undefined1 *)((&__pioinfo)[(int)uVar5 >> 5] + 4 + (uVar5 & 0x1f) * 0x24) = 0x89;
    uVar5 = FUN_78011740();
    _PtHandles[1] = uVar5;
    if (uVar5 == 0xffffffff) {
      *(undefined1 *)((&__pioinfo)[*_PtHandles >> 5] + 4 + (*_PtHandles & 0x1fU) * 0x24) = 0;
      piVar6 = _errno();
      *piVar6 = 0x18;
      FUN_78011b70(*_PtHandles);
    }
    else {
      *(undefined1 *)((&__pioinfo)[(int)uVar5 >> 5] + 4 + (uVar5 & 0x1f) * 0x24) = 0x89;
      if (((iVar2 & 0x8000U) != 0) || (((iVar2 & 0x4000U) == 0 && (_fmode == 0x8000)))) {
        uVar5 = *_PtHandles & 0x1f;
        *(byte *)((&__pioinfo)[*_PtHandles >> 5] + 4 + uVar5 * 0x24) =
             *(byte *)((&__pioinfo)[*_PtHandles >> 5] + 4 + uVar5 * 0x24) & 0x7f;
        pbVar1 = (byte *)((&__pioinfo)[_PtHandles[1] >> 5] + 4 + (_PtHandles[1] & 0x1fU) * 0x24);
        *pbVar1 = *pbVar1 & 0x7f;
      }
      if (uVar8 != 0) {
        pbVar1 = (byte *)((&__pioinfo)[*_PtHandles >> 5] + 4 + (*_PtHandles & 0x1fU) * 0x24);
        *pbVar1 = *pbVar1 | 0x10;
        pbVar1 = (byte *)((&__pioinfo)[_PtHandles[1] >> 5] + 4 + (_PtHandles[1] & 0x1fU) * 0x24);
        *pbVar1 = *pbVar1 | 0x10;
      }
      FUN_780118b0(*_PtHandles,(HANDLE)_TextMode);
      FUN_780118b0(_PtHandles[1],(HANDLE)_PipeSize);
      piVar6 = _errno();
      *piVar6 = 0;
      FUN_78011b70(_PtHandles[1]);
      FUN_78011b70(*_PtHandles);
    }
  }
  piVar6 = _errno();
  if (*piVar6 != 0) {
    CloseHandle((HANDLE)_TextMode);
    CloseHandle((HANDLE)_PipeSize);
    puVar7 = __doserrno();
    *puVar7 = 0;
    return -1;
  }
  return 0;
}


