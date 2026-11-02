/* Module: vegas30k.dll
   Function: FUN_01155cb0
   Address: 01155cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01155cb0(uint param_1,int param_2)

{
  int *piVar1;
  LPCVOID pMem;
  int iVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x60);
    param_1 = 0;
    if (*piVar1 != 0) {
      iVar5 = 0;
      do {
        uVar4 = 0;
        if (*(int *)(iVar2 + 0x1c4) == 0) break;
        if (*(int *)(iVar5 + 0x10 + *(int *)(iVar2 + 0x1c4)) != 0) {
          if (*(int *)(iVar2 + 0x5c) != 0) {
            do {
              _FaderInst_Deinit_4(*(int *)(iVar5 + 0x10 + *(int *)(iVar2 + 0x1c4)) + uVar4 * 4);
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(iVar2 + 0x5c));
          }
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 + 0x10 + *(int *)(iVar2 + 0x1c4)));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 + 0x10 + *(int *)(iVar2 + 0x1c4)));
          GlobalFree(pvVar3);
          *(undefined4 *)(iVar5 + 0x10 + *(int *)(iVar2 + 0x1c4)) = 0;
        }
        if (*(int *)(iVar5 + 0x14 + *(int *)(iVar2 + 0x1c4)) != 0) {
          uVar4 = 0;
          if (*(int *)(iVar2 + 0x5c) != 0) {
            do {
              _SpinnerInst_Deinit_4(*(int *)(iVar5 + 0x14 + *(int *)(iVar2 + 0x1c4)) + uVar4 * 4);
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(iVar2 + 0x5c));
          }
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 + 0x14 + *(int *)(iVar2 + 0x1c4)));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 + 0x14 + *(int *)(iVar2 + 0x1c4)));
          GlobalFree(pvVar3);
          *(undefined4 *)(iVar5 + 0x14 + *(int *)(iVar2 + 0x1c4)) = 0;
        }
        pMem = *(LPCVOID *)(iVar5 + 0x18 + *(int *)(iVar2 + 0x1c4));
        if (pMem != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 + 0x18 + *(int *)(iVar2 + 0x1c4)));
          GlobalFree(pvVar3);
          *(undefined4 *)(iVar5 + 0x18 + *(int *)(iVar2 + 0x1c4)) = 0;
        }
        param_1 = param_1 + 1;
        iVar5 = iVar5 + 0x30;
      } while (param_1 < *(uint *)(iVar2 + 0x60));
    }
    if ((param_2 == 0) && (*(LPCVOID *)(iVar2 + 0x1c4) != (LPCVOID)0x0)) {
      pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x1c4));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x1c4));
      GlobalFree(pvVar3);
      *(undefined4 *)(iVar2 + 0x1c4) = 0;
    }
  }
  return;
}


