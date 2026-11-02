/* Module: vegas30.exe
   Function: FUN_00574080
   Address: 00574080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00574080(int param_1)

{
  int iVar1;
  int iVar2;
  HDC hDC;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x73c) != 0) {
    *(undefined4 *)(param_1 + 0x73c) = 0;
    iVar1 = **(int **)(param_1 + 0x2b0);
    hDC = GetDC(*(HWND *)(param_1 + 0x24));
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar3 * 4);
        if (((*(byte *)(iVar2 + 0x1c) & 1) != 0) || ((*(uint *)(iVar2 + 0xc) & 0x400) != 0)) {
          FUN_005708b0(hDC,iVar2 + 0x228,iVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
    return 0;
  }
  return 0;
}


