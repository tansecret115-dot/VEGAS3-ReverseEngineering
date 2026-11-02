/* Module: vidcap30.exe
   Function: FUN_0045c380
   Address: 0045c380
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0045c380(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char local_104 [260];
  
  iVar6 = 0;
  uVar7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar5 = 0;
  iVar1 = **(int **)(param_1 + 0x1c);
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + iVar5 * 4);
      if (*piVar2 != 0) {
        uVar3 = _SfGetRootPathFromFilePath_12(piVar2 + 1,local_104,0x104);
        if ((uVar3 < 0x104) && (uVar3 = 1 << (local_104[0] + 0xbfU & 0x1f), (uVar7 & uVar3) == 0)) {
          uVar7 = uVar7 | uVar3;
          iVar4 = _SfGetDiskFreeSpace_8(local_104,0x100000);
          iVar6 = iVar6 + (iVar4 - DAT_005bb0f0);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return iVar6;
}


