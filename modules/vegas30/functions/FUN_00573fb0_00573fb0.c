/* Module: vegas30.exe
   Function: FUN_00573fb0
   Address: 00573fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00573fb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HDC hDC;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x73c) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x73c) = 1;
  iVar1 = **(int **)(param_1 + 0x2b0);
  iVar2 = FUN_00569960();
  if ((iVar2 == 0) && (iVar1 != 0)) {
    iVar2 = 0;
    if (0 < iVar1) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x2b0) + 8);
      do {
        iVar3 = *piVar4;
        if ((*(byte *)(iVar3 + 0x1c) & 1) != 0) {
          if (iVar3 != 0) goto LAB_00574013;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < iVar1);
    }
    iVar3 = **(int **)(*(int *)(param_1 + 0x2b0) + 8);
LAB_00574013:
    FUN_00569990(iVar3);
  }
  hDC = GetDC(*(HWND *)(param_1 + 0x24));
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar2 * 4);
      if (((*(byte *)(iVar3 + 0x1c) & 1) != 0) || ((*(uint *)(iVar3 + 0xc) & 0x400) != 0)) {
        FUN_005708b0(hDC,iVar3 + 0x228,iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
  return 0;
}


