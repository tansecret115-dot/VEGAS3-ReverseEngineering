/* Module: sftrans1.dll
   Function: FUN_00550110
   Address: 00550110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00550110(int param_1,int param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != *(int *)(param_1 + 0x148)) {
    if (*(int *)(param_1 + 0x150) != 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x148)) {
        do {
          iVar3 = *(int *)(*(int *)(param_1 + 0x150) + iVar4 * 8);
          if (iVar3 != 0) {
            FUN_004dd670(iVar3);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x148));
      }
      pMem = *(LPCVOID *)(param_1 + 0x150);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
    if (0 < param_2) {
      pvVar1 = GlobalAlloc(0x40,param_2 * 8);
      pvVar2 = GlobalLock(pvVar1);
      *(LPVOID *)(param_1 + 0x150) = pvVar2;
      if (pvVar2 != (LPVOID)0x0) {
        iVar4 = 0;
        *(int *)(param_1 + 0x148) = param_2;
        if (0 < param_2) {
          do {
            iVar3 = FUN_004dd740(*(int *)(param_1 + 0x150) + iVar4 * 8,4,0x10,0x10,0x80000002,0,0,0)
            ;
            if (iVar3 < 0) {
              *(int *)(param_1 + 0x148) = iVar4 + 1;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_2);
        }
      }
    }
    if (*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0x14c)) {
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x148) + -1;
    }
  }
  return 0;
}


