/* Module: vegas30k.dll
   Function: FUN_011c4bc0
   Address: 011c4bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c4bc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  HANDLE hThread;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  if (((param_1[0x8a] & 1U) == 0) || ((param_1[0x8a] & 2U) == 0)) {
    return -0x7fff0001;
  }
  iVar4 = (*(code *)param_1[0x8b])(param_1,2,param_1[0x8c],0,0);
  if (-1 < iVar4) {
    piVar1 = (int *)param_1[0x48];
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar2 = *(int *)(piVar1[2] + iVar5 * 4);
        if (((*(byte *)(iVar2 + 0x5c) & 1) != 0) && (param_1[0x4d] == 0)) {
          param_1[0x4d] = iVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    piVar1 = (int *)param_1[0x46];
    if (piVar1 != (int *)0x0) {
      iVar6 = *piVar1;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = *(int *)(piVar1[2] + iVar4 * 4);
        if ((param_1[0x44] & 0x20U) == 0) {
          if (((*(uint *)(iVar5 + 0x24) & 1) != 0) && (param_1[0x4c] == 0)) {
            param_1[0x4c] = iVar5;
          }
        }
        else if (((*(byte *)(iVar5 + 0x154) & 1) != 0) && (param_1[0x4b] == 0)) {
          param_1[0x4b] = iVar5;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    uVar3 = param_1[0x8a];
    param_1[0x8a] = uVar3 | 4;
    if ((uVar3 & 0x20) != 0) {
      param_1[0x6f] = -1;
      hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_011c52f0,param_1,0,
                             (LPDWORD)(param_1 + 0x71));
      param_1[0x70] = (int)hThread;
      SetThreadPriority(hThread,2);
      (*(code *)param_1[0x8b])(param_1,3,param_1[0x8c],0,0);
      return 0;
    }
    iVar4 = (*(code *)param_1[0x8b])(param_1,3,param_1[0x8c],0,0);
    if (-1 < iVar4) {
      return iVar4;
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  return iVar4;
}


