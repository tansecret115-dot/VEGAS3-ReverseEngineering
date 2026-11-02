/* Module: sftrans1.dll
   Function: FUN_0048c4a0
   Address: 0048c4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0048c4a0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  SCROLLINFO local_1c;
  
  uVar2 = (*(int *)(param_1 + 0x38) * **(int **)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) +
          *(int *)(param_1 + 0x98);
  uVar2 = ((int)uVar2 < 1) - 1 & uVar2;
  if (uVar2 != *(uint *)(param_1 + 0xf0)) {
    local_1c.cbSize = 0x1c;
    local_1c.fMask = 5;
    local_1c.nMin = 0;
    local_1c.nPos = *(uint *)(param_1 + 0xec);
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 0xec)) {
      local_1c.nPos = uVar2;
    }
    local_1c.nMax = uVar2;
    SetScrollInfo(*(HWND *)(param_1 + 4),1,&local_1c,1);
    if (((int)uVar2 < 1) || (*(int *)(param_1 + 0xf0) < 1)) {
      FUN_00488a90();
      piVar3 = *(int **)(param_1 + 0xa4);
      iVar4 = 0;
      if (0 < *piVar3) {
        do {
          puVar1 = *(undefined4 **)(piVar3[2] + iVar4 * 4);
          if (puVar1[2] != 0) {
            FUN_004863e0(puVar1,*puVar1);
          }
          piVar3 = *(int **)(param_1 + 0xa4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *piVar3);
      }
    }
    *(uint *)(param_1 + 0xf0) = uVar2;
  }
  return;
}


