/* Module: vegas30.exe
   Function: FUN_004c4490
   Address: 004c4490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c4490(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x44);
  if (iVar1 != param_3) {
    if (param_2 == 0) {
      iVar1 = -1;
    }
    (**(code **)(*DAT_0064b144 + 0xd4))(DAT_0064b144,1,iVar1,0,0,0xffffffff,0xffffffff);
    *(int *)(param_2 + 0x44) = param_3;
    if (param_2 == 0) {
      param_3 = -1;
    }
    iVar1 = 0;
    (**(code **)(*DAT_0064b144 + 0xd4))(DAT_0064b144,1,param_3,0,0,0xffffffff,0xffffffff);
    InvalidateRect(*(HWND *)(iVar1 + 4),(RECT *)(*(int *)(*(int *)(param_2 + 0x69c) + 0x54) + 0x84),
                   0);
  }
  return;
}


