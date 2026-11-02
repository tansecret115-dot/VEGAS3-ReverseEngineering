/* Module: pncrt.dll
   Function: FUN_780291c0
   Address: 780291c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x78029205) */

ulonglong __cdecl FUN_780291c0(undefined4 *param_1)

{
  uint _FileHandle;
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int unaff_EDI;
  int iVar8;
  longlong lVar9;
  uint local_c;
  undefined8 local_8;
  
  _FileHandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_8 = _lseeki64(_FileHandle,0x100000000,unaff_EDI);
  uVar5 = (uint)((ulonglong)local_8 >> 0x20);
  if ((uVar5 == 0 || local_8 < 0) && (local_8 < 0)) {
    return 0xffffffffffffffff;
  }
  uVar1 = param_1[3];
  if ((uVar1 & 0x108) == 0) {
    return local_8 - (int)param_1[1];
  }
  pcVar7 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  local_c = (int)pcVar7 - (int)pcVar2;
  iVar6 = (int)_FileHandle >> 5;
  if ((uVar1 & 3) == 0) {
    if ((uVar1 & 0x80) == 0) {
      piVar4 = _errno();
      *piVar4 = 0x16;
      return 0xffffffffffffffff;
    }
  }
  else {
    pcVar3 = pcVar2;
    if ((*(byte *)((&__pioinfo)[iVar6] + 4 + (_FileHandle & 0x1f) * 0x24) & 0x80) != 0) {
      for (; pcVar3 < pcVar7; pcVar3 = pcVar3 + 1) {
        if (*pcVar3 == '\n') {
          local_c = local_c + 1;
        }
      }
    }
  }
  if (local_8 == 0) {
    return (ulonglong)local_c;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) goto LAB_78029372;
  if (param_1[1] == 0) {
    local_c = 0;
    goto LAB_78029372;
  }
  pcVar7 = pcVar7 + (param_1[1] - (int)pcVar2);
  iVar8 = (_FileHandle & 0x1f) * 0x24;
  if ((*(byte *)(iVar8 + 4 + (&__pioinfo)[iVar6]) & 0x80) != 0) {
    lVar9 = _lseeki64(_FileHandle,0x200000000,unaff_EDI);
    if (lVar9 == local_8) {
      pcVar3 = (char *)param_1[2];
      pcVar2 = pcVar3 + (int)pcVar7;
      for (; pcVar3 < pcVar2; pcVar3 = pcVar3 + 1) {
        if (*pcVar3 == '\n') {
          pcVar7 = pcVar7 + 1;
        }
      }
      if ((param_1[3] & 0x2000) != 0) {
LAB_78029358:
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      _lseeki64(_FileHandle,(ulonglong)uVar5,unaff_EDI);
      if (((pcVar7 < (char *)0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        pcVar7 = (char *)0x200;
      }
      else {
        pcVar7 = (char *)param_1[6];
      }
      if ((*(byte *)(iVar8 + 4 + (&__pioinfo)[iVar6]) & 4) != 0) goto LAB_78029358;
    }
  }
  local_8 = CONCAT44(uVar5 - ((char *)local_8 < pcVar7),(int)(char *)local_8 - (int)pcVar7);
LAB_78029372:
  return CONCAT44(local_8._4_4_ + (uint)CARRY4(local_c,(uint)(char *)local_8),
                  local_c + (int)(char *)local_8);
}


