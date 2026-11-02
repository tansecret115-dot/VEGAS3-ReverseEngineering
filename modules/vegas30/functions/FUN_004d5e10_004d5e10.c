/* Module: vegas30.exe
   Function: FUN_004d5e10
   Address: 004d5e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004d5e10(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  HCURSOR hCursor;
  HCURSOR pHVar4;
  
  if (param_3 != 1) {
    return 0;
  }
  uVar1 = 0x7f00;
  if (param_2 == *(int *)(param_1 + 0x24)) {
    uVar2 = *(uint *)(param_1 + 0x80) >> 0x10;
    if (uVar2 < 4) {
      piVar3 = *(int **)(param_1 + 0x34 + uVar2 * 4);
    }
    else {
      piVar3 = (int *)0x0;
    }
    uVar1 = (**(code **)(*piVar3 + 0x10))(param_1,*(uint *)(param_1 + 0x80));
  }
  hCursor = (HCURSOR)_SfGetUICursor_4(uVar1);
  pHVar4 = GetCursor();
  if (pHVar4 != hCursor) {
    SetCursor(hCursor);
  }
  return 1;
}


