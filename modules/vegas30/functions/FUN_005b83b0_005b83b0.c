/* Module: vegas30.exe
   Function: FUN_005b83b0
   Address: 005b83b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b83b0(int param_1,int param_2)

{
  LONG *lpAddend;
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  LONG LVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    iVar8 = *(int *)(param_1 + 0xc);
    DVar1 = *(DWORD *)(param_1 + 8);
    DVar3 = GetCurrentThreadId();
    if (param_2 == 0) {
      if (DVar3 != DVar1) {
        lpAddend = (LONG *)(param_1 + 0x2c);
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x14);
        param_1 = iVar8;
        do {
          InterlockedIncrement(lpAddend);
          EnterCriticalSection(lpCriticalSection);
          pDVar4 = (DWORD *)(iVar2 + 0x30);
          uVar7 = 0;
          pDVar5 = pDVar4;
          do {
            if (*pDVar5 == DVar3) {
              if (pDVar5 != (DWORD *)0x0) goto LAB_005b842e;
              break;
            }
            uVar7 = uVar7 + 1;
            pDVar5 = pDVar5 + 2;
          } while (uVar7 < 0x10);
          uVar7 = 0;
          do {
            if (*pDVar4 == 0) {
              if (pDVar4 != (DWORD *)0x0) {
                *pDVar4 = DVar3;
                pDVar5 = pDVar4;
LAB_005b842e:
                if ((*(int *)(iVar2 + 0xb4) < 1) || (pDVar5[1] != 0)) {
                  pDVar5[1] = pDVar5[1] + 1;
                  LeaveCriticalSection(lpCriticalSection);
                  return;
                }
              }
              break;
            }
            uVar7 = uVar7 + 1;
            pDVar4 = pDVar4 + 2;
          } while (uVar7 < 0x10);
          LeaveCriticalSection(lpCriticalSection);
          InterlockedDecrement(lpAddend);
          Sleep(*(DWORD *)(iVar2 + 0x10));
          param_1 = param_1 + -1;
          if (param_1 < 1) {
            return;
          }
        } while( true );
      }
    }
    else {
      LVar6 = InterlockedIncrement((LONG *)(param_1 + 0xb4));
      if (LVar6 < 2) {
        *(DWORD *)(param_1 + 0xb0) = DVar3;
        iVar2 = *(int *)(param_1 + 0x2c);
        while (iVar2 != 0) {
          Sleep(*(int *)(param_1 + 0x10) / 2);
          iVar8 = iVar8 + -1;
          if (iVar8 < 1) {
            return;
          }
          iVar2 = *(int *)(param_1 + 0x2c);
        }
      }
    }
  }
  return;
}


