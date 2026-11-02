/* Module: pncrt.dll
   Function: _splitpath
   Address: 780224d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _splitpath(char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  size_t sVar7;
  char *pcVar8;
  byte *local_4;
  
                    /* 0x224d0  451  _splitpath */
  iVar5 = -1;
  pcVar8 = _FullPath;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  local_4 = (byte *)0x0;
  if ((iVar5 == -2) || (_FullPath[1] != ':')) {
    if (_Drive != (char *)0x0) {
      *_Drive = '\0';
    }
  }
  else {
    if (_Drive != (char *)0x0) {
      _mbsnbcpy((uchar *)_Drive,(uchar *)_FullPath,2);
      _Drive[2] = '\0';
    }
    _FullPath = _FullPath + 2;
  }
  bVar3 = *_FullPath;
  _Drive = (char *)0x0;
  pbVar6 = (byte *)_FullPath;
  while (bVar3 != 0) {
    bVar3 = *pbVar6;
    if ((*(byte *)((int)&_mbctype + bVar3 + 1) & 4) == 0) {
      if ((bVar3 == 0x2f) || (bVar3 == 0x5c)) {
        _Drive = (char *)(pbVar6 + 1);
      }
      else if (bVar3 == 0x2e) {
        local_4 = pbVar6;
      }
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar1;
  }
  if ((byte *)_Drive == (byte *)0x0) {
    _Drive = _FullPath;
    if (_Dir != (char *)0x0) {
      *_Dir = '\0';
    }
  }
  else if (_Dir != (char *)0x0) {
    uVar4 = (int)_Drive - (int)_FullPath;
    if (0xfe < uVar4) {
      uVar4 = 0xff;
    }
    _mbsnbcpy((uchar *)_Dir,(uchar *)_FullPath,uVar4);
    _Dir[uVar4] = '\0';
  }
  if ((local_4 == (byte *)0x0) || (local_4 < _Drive)) {
    if (_Filename != (char *)0x0) {
      sVar7 = (int)pbVar6 - (int)_Drive;
      if (0xfe < sVar7) {
        sVar7 = 0xff;
      }
      _mbsnbcpy((uchar *)_Filename,(uchar *)_Drive,sVar7);
      _Filename[sVar7] = '\0';
    }
    if (_Ext != (char *)0x0) {
      *_Ext = '\0';
    }
  }
  else {
    if (_Filename != (char *)0x0) {
      uVar4 = (int)local_4 - (int)_Drive;
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      _mbsnbcpy((uchar *)_Filename,(uchar *)_Drive,uVar4);
      _Filename[uVar4] = '\0';
    }
    if (_Ext != (char *)0x0) {
      sVar7 = (int)pbVar6 - (int)local_4;
      if (0xfe < sVar7) {
        sVar7 = 0xff;
      }
      _mbsnbcpy((uchar *)_Ext,local_4,sVar7);
      _Ext[sVar7] = '\0';
      return;
    }
  }
  return;
}


