/* Module: pncrt.dll
   Function: FUN_78027290
   Address: 78027290
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78027290(undefined4 *param_1)

{
  uint _FileHandle;
  uint uVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  _FileHandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_4 = _lseek(_FileHandle,0,1);
  if (local_4 < 0) {
    return -1;
  }
  uVar1 = param_1[3];
  if ((uVar1 & 0x108) == 0) {
    return local_4 - param_1[1];
  }
  pcVar6 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  local_8 = (int)pcVar6 - (int)pcVar2;
  if ((uVar1 & 3) == 0) {
    if ((uVar1 & 0x80) == 0) {
      piVar5 = _errno();
      *piVar5 = 0x16;
      return -1;
    }
  }
  else {
    pcVar4 = pcVar2;
    if ((*(byte *)((&__pioinfo)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x24) & 0x80) !=
        0) {
      for (; pcVar4 < pcVar6; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '\n') {
          local_8 = local_8 + 1;
        }
      }
    }
  }
  if (local_4 == 0) {
    return local_8;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) goto LAB_78027407;
  if (param_1[1] == 0) {
    return local_4;
  }
  pcVar6 = pcVar6 + (param_1[1] - (int)pcVar2);
  iVar7 = (_FileHandle & 0x1f) * 0x24;
  if ((*(byte *)(iVar7 + 4 + (&__pioinfo)[(int)_FileHandle >> 5]) & 0x80) != 0) {
    lVar3 = _lseek(_FileHandle,0,2);
    if (lVar3 == local_4) {
      pcVar4 = (char *)param_1[2];
      pcVar2 = pcVar4 + (int)pcVar6;
      for (; pcVar4 < pcVar2; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '\n') {
          pcVar6 = pcVar6 + 1;
        }
      }
      if ((param_1[3] & 0x2000) != 0) {
LAB_780273fe:
        pcVar6 = pcVar6 + 1;
      }
    }
    else {
      _lseek(_FileHandle,local_4,0);
      if (((pcVar6 < (char *)0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        pcVar6 = (char *)0x200;
      }
      else {
        pcVar6 = (char *)param_1[6];
      }
      if ((*(byte *)(iVar7 + 4 + (&__pioinfo)[(int)_FileHandle >> 5]) & 4) != 0) goto LAB_780273fe;
    }
  }
  local_4 = local_4 - (int)pcVar6;
LAB_78027407:
  return local_4 + local_8;
}


