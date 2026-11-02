/* Module: vegas30.exe
   Function: FUN_00541900
   Address: 00541900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_00541900(undefined4 param_1)

{
  undefined4 uVar1;
  HWND pHVar2;
  HWND hWnd;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_18 [3];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_006575cc != 0) {
    FUN_004043e0(DAT_0064763c,2);
    return -0x7ffb1ff4;
  }
  iVar4 = 0;
  DAT_006575cc = 1;
  local_18[1] = 0;
  pHVar2 = GetFocus();
  local_18[0] = 0;
  hWnd = (HWND)_SfCreateDialogParam_20(DAT_00647204,0x37c,param_1,FUN_00541a80,local_18);
  if (hWnd == (HWND)0x0) {
    return -0x7ffb1ff1;
  }
  _SfWndCenter_16(hWnd,0,0,0x8001);
  ShowWindow(hWnd,1);
  iVar3 = FUN_00403d90(hWnd,0,0,0,local_18 + 1,pHVar2);
  uVar1 = DAT_0064b138;
  DAT_006575cc = 0;
  if (iVar3 != 1) {
    return -0x7ffb1ff4;
  }
  if (local_18[0] != 0x46e) {
    if (local_18[0] != 0x46f) {
      if (local_18[0] == 0x5ee) {
        FUN_004582a0(DAT_00647630,&local_8,local_18 + 2);
        iVar4 = FUN_005411c0(DAT_0064b138,local_8,local_4,local_18[2],local_c);
        FUN_004f04e0(&DAT_0060f98c);
        return iVar4;
      }
      goto LAB_00541a5a;
    }
    uVar5 = FUN_004a0e90(DAT_00647630);
    iVar4 = FUN_005411c0(uVar1,0,0,uVar5);
    if (iVar4 < 0) goto LAB_00541a5a;
  }
  iVar4 = FUN_005416f0(uVar1);
LAB_00541a5a:
  FUN_004f04e0(&DAT_0060f98c);
  return iVar4;
}


