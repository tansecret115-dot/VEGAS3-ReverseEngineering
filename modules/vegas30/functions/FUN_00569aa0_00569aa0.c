/* Module: vegas30.exe
   Function: FUN_00569aa0
   Address: 00569aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00569aa0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  HDC hDC;
  int iVar3;
  
  hDC = GetDC(*(HWND *)(param_1 + 0x24));
  if (param_4 != 0) {
    iVar3 = 0;
    iVar1 = **(int **)(param_1 + 0x2b0);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar3 * 4);
        if (((*(uint *)(iVar2 + 0x1c) & 1) != 0) && (param_2 != iVar2)) {
          *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffe;
          FUN_00574c40(iVar2);
          FUN_005708b0(hDC,iVar2 + 0x228,iVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x1c) =
         (*(uint *)(param_2 + 0x1c) ^ param_3) & 1 ^ *(uint *)(param_2 + 0x1c);
    FUN_00574c40(param_2);
    FUN_005708b0(hDC,param_2 + 0x228,param_2);
  }
  ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
  return;
}


