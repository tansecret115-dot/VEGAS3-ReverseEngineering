/* Module: vidcap30.exe
   Function: FUN_0042f5d0
   Address: 0042f5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f5d0(int param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  LONG LVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    DVar1 = *(DWORD *)(param_1 + 0xc);
    DVar2 = GetCurrentThreadId();
    if (param_2 == 0) {
      if (DVar2 != DVar1) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        uVar5 = 0;
        pDVar3 = (DWORD *)(param_1 + 0x34);
        do {
          if (*pDVar3 == DVar2) {
            if ((pDVar3 != (DWORD *)0x0) && (pDVar3[1] = pDVar3[1] - 1, (int)pDVar3[1] < 1)) {
              pDVar3[1] = 0;
              *pDVar3 = 0;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar3 = pDVar3 + 2;
        } while (uVar5 < 0x10);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        LVar4 = InterlockedDecrement((LONG *)(param_1 + 0x30));
        if (LVar4 < 0) {
          *(LONG *)(param_1 + 0x30) = 0;
          return;
        }
      }
    }
    else {
      LVar4 = InterlockedDecrement((LONG *)(param_1 + 0xb8));
      if (LVar4 < 0) {
        *(LONG *)(param_1 + 0xb8) = 0;
      }
      else if (LVar4 == 0) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
        return;
      }
    }
  }
  return;
}


