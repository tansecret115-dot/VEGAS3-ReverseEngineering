/* Module: pncrt.dll
   Function: _sopen
   Address: 7801ea80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  uint uVar1;
  HANDLE hFile;
  int iVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD DVar5;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  int iVar6;
  bool bVar7;
  undefined4 in_stack_00000010;
  byte local_11;
  uint local_10;
  _SECURITY_ATTRIBUTES local_c;
  
                    /* 0x1ea80  442  _sopen */
  bVar7 = (_OpenFlag & 0x80U) == 0;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar7) {
    local_11 = 0;
  }
  else {
    local_11 = 0x10;
  }
  local_c.bInheritHandle = (BOOL)bVar7;
  if (((_OpenFlag & 0x8000U) == 0) && (((_OpenFlag & 0x4000U) != 0 || (_fmode != 0x8000)))) {
    local_11 = local_11 | 0x80;
  }
  uVar1 = _OpenFlag & 3;
  if (uVar1 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar1 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar1 != 2) goto switchD_7801eb18_caseD_11;
    local_10 = 0xc0000000;
  }
  switch(_ShareFlag) {
  case 0x10:
    DVar5 = 0;
    break;
  default:
    goto switchD_7801eb18_caseD_11;
  case 0x20:
    DVar5 = 1;
    break;
  case 0x30:
    DVar5 = 2;
    break;
  case 0x40:
    DVar5 = 3;
  }
  uVar1 = _OpenFlag & 0x700;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      dwCreationDisposition = 4;
    }
    else {
      if (uVar1 != 0) goto switchD_7801eb18_caseD_11;
LAB_7801eb86:
      dwCreationDisposition = 3;
    }
  }
  else if (uVar1 < 0x301) {
    if (uVar1 == 0x300) {
      dwCreationDisposition = 2;
    }
    else {
      if (uVar1 != 0x200) goto switchD_7801eb18_caseD_11;
LAB_7801eba6:
      dwCreationDisposition = 5;
    }
  }
  else {
    if (uVar1 < 0x501) {
      if (uVar1 != 0x500) {
        if (uVar1 != 0x400) {
switchD_7801eb18_caseD_11:
          piVar3 = _errno();
          *piVar3 = 0x16;
          puVar4 = __doserrno();
          *puVar4 = 0;
          return -1;
        }
        goto LAB_7801eb86;
      }
    }
    else {
      if (uVar1 == 0x600) goto LAB_7801eba6;
      if (uVar1 != 0x700) goto switchD_7801eb18_caseD_11;
    }
    dwCreationDisposition = 1;
  }
  dwFlagsAndAttributes = 0x80;
  if (((_OpenFlag & 0x100U) != 0) && (((byte)in_stack_00000010 & ~(byte)DAT_78041dd8 & 0x80) == 0))
  {
    dwFlagsAndAttributes = 1;
  }
  if ((_OpenFlag & 0x40U) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x4000000;
    local_10 = local_10 | 0x10000;
  }
  if ((_OpenFlag & 0x1000U) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x100;
  }
  if ((_OpenFlag & 0x20U) == 0) {
    if ((_OpenFlag & 0x10U) != 0) {
      dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
    }
  }
  else {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  uVar1 = FUN_78011740();
  if (uVar1 == 0xffffffff) {
    piVar3 = _errno();
    *piVar3 = 0x18;
    puVar4 = __doserrno();
    *puVar4 = 0;
    return -1;
  }
  hFile = CreateFileA(_Filename,local_10,DVar5,&local_c,dwCreationDisposition,dwFlagsAndAttributes,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_11 = local_11 | 0x40;
      }
      else if (DVar5 == 3) {
        local_11 = local_11 | 8;
      }
      FUN_780118b0(uVar1,hFile);
      iVar6 = (uVar1 & 0x1f) * 0x24;
      *(byte *)(iVar6 + 4 + (&__pioinfo)[(int)uVar1 >> 5]) = local_11 | 1;
      if ((((local_11 & 0x48) == 0) && ((local_11 & 0x80) != 0)) && ((_OpenFlag & 2U) != 0)) {
        DVar5 = FUN_780116c0(uVar1,-1,2);
        if (DVar5 == 0xffffffff) {
          puVar4 = __doserrno();
          if (*puVar4 != 0x83) {
LAB_7801ed66:
            _close(uVar1);
            FUN_78011b70(uVar1);
            return -1;
          }
        }
        else {
          _ShareFlag = _ShareFlag & 0xffffff00;
          iVar2 = FUN_7801f160(uVar1,(char *)&_ShareFlag,1);
          if ((((iVar2 == 0) && ((char)_ShareFlag == '\x1a')) &&
              (iVar2 = FUN_7801d3f0(), iVar2 == -1)) ||
             (DVar5 = FUN_780116c0(uVar1,0,0), DVar5 == 0xffffffff)) goto LAB_7801ed66;
        }
      }
      if (((local_11 & 0x48) == 0) && ((_OpenFlag & 8U) != 0)) {
        *(byte *)(iVar6 + 4 + (&__pioinfo)[(int)uVar1 >> 5]) =
             *(byte *)(iVar6 + 4 + (&__pioinfo)[(int)uVar1 >> 5]) | 0x20;
      }
      FUN_78011b70(uVar1);
      return uVar1;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_7800a870(DVar5);
  FUN_78011b70(uVar1);
  return -1;
}


