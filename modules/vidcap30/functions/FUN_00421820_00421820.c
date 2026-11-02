/* Module: vidcap30.exe
   Function: FUN_00421820
   Address: 00421820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421820(int *param_1,int param_2)

{
  int iVar1;
  int Y;
  uint uVar2;
  
  if (((param_1[0x4e] & 1U) != 0) || ((param_1[0x4e] & 2U) != 0)) {
    iVar1 = param_1[5];
    Y = param_1[6];
    if (param_2 == 0) {
      SetWindowPos((HWND)param_1[2],(HWND)0x0,iVar1,Y,param_1[7] - iVar1,param_1[8] - Y,0x15);
    }
    else {
      MoveWindow((HWND)param_1[2],iVar1,Y,param_1[7] - iVar1,param_1[8] - Y,1);
    }
  }
  if ((param_1[0x4e] & 4U) != 0) {
    iVar1 = *param_1;
    if (iVar1 == 5) {
      FUN_0042fcc0(param_1[0x7c],param_1 + 0x54);
      return;
    }
    if (iVar1 == 6) {
      _TrackbarInst_Move_8(param_1[0x82],param_1 + 0x54);
      return;
    }
    if (iVar1 == 7) {
      uVar2 = param_1[0x52] & 4;
    }
    else {
      if (iVar1 != 8) {
        return;
      }
      uVar2 = param_1[0x52] & 0x100000;
    }
    if (uVar2 != 0) {
      (**(code **)(*(int *)param_1[0xd7] + 0x9c))
                ((int *)param_1[0xd7],param_1[0x54],param_1[0x55],param_1[0x56] - param_1[0x54],
                 param_1[0x57] - param_1[0x55]);
    }
  }
  return;
}


