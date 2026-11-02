/* Module: vegas30.exe
   Function: FUN_004565c0
   Address: 004565c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004565c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  HCURSOR hCursor;
  HCURSOR pHVar4;
  uint uVar5;
  
  if (param_3 != 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa4) == 0x18) {
    return 0;
  }
  uVar3 = 0x7f00;
  if (param_2 == *(int *)(param_1 + 4)) {
    uVar5 = *(uint *)(param_1 + 0x174) >> 0x10 & 0xf;
    if (uVar5 < 0x10) {
      piVar1 = *(int **)(param_1 + 0x50 + uVar5 * 4);
      pcVar2 = *(code **)(*piVar1 + 0x14);
      if (pcVar2 != (code *)0x0) {
        uVar3 = (*pcVar2)(param_1,piVar1,*(uint *)(param_1 + 0x174));
      }
    }
  }
  hCursor = (HCURSOR)_SfGetUICursor_4(uVar3);
  pHVar4 = GetCursor();
  if (pHVar4 != hCursor) {
    SetCursor(hCursor);
  }
  return 1;
}


