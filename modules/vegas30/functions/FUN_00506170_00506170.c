/* Module: vegas30.exe
   Function: FUN_00506170
   Address: 00506170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00506170(int param_1)

{
  int *lp;
  LONG LVar1;
  int iVar2;
  BOOL BVar3;
  
  if (DAT_0064b4a8 == (HWND)0x0) {
    return;
  }
  LVar1 = GetWindowLongA(DAT_0064b4a8,-0x15);
  iVar2 = DAT_0064b138;
  if (LVar1 == 0) {
    return;
  }
  if (*(int *)(LVar1 + 0xb0) != param_1) {
    return;
  }
  if (param_1 == 1) {
    lp = *(int **)(LVar1 + 0xb4);
    if ((((lp == (int *)0x0) || (BVar3 = IsBadReadPtr(lp,0x6a0), BVar3 != 0)) || (*lp != 0x20)) ||
       (((iVar2 != 0 && (iVar2 != lp[2])) || (iVar2 = FUN_005cb3d0(lp[2],lp), iVar2 < 0))))
    goto LAB_005061b9;
  }
  else {
    if (param_1 == 2) {
      iVar2 = FUN_004224e0(*(undefined4 *)(LVar1 + 0xb4),*(undefined4 *)(LVar1 + 0xb8));
    }
    else {
      if (param_1 != 3) {
        return;
      }
      iVar2 = FUN_00573430(*(undefined4 *)(LVar1 + 0xb8));
    }
    if (iVar2 == 0) goto LAB_005061b9;
  }
  if (*(code **)(LVar1 + 0xc4) != (code *)0x0) {
    (**(code **)(LVar1 + 0xc4))(LVar1 + 0xb0);
    return;
  }
LAB_005061b9:
  FUN_00506150();
  return;
}


