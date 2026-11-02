/* Module: sfs4rw.dll
   Function: FUN_0040b0d0
   Address: 0040b0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b0d0(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  HWND pHVar2;
  int *piVar3;
  uint uVar4;
  int local_20 [8];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041fea0(param_1,(HFONT)0x0);
  uVar4 = 0x8001;
  piVar3 = (int *)0x0;
  pHVar2 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429f20(pHVar1,pHVar2,piVar3,uVar4);
  *(undefined4 *)(dwNewLong + 0x220) = 0;
  FUN_00405010(param_1);
  FUN_004050a0(param_1);
  FUN_00404d90(param_1,DAT_004a84e0);
  uVar4 = FUN_004062d0(*(int *)(dwNewLong + 0x170),*(int *)(dwNewLong + 0x174),
                       *(int *)(dwNewLong + 0x240));
  local_20[0] = 0xe3f;
  local_20[1] = 0;
  local_20[2] = 0xe40;
  local_20[3] = 0;
  local_20[4] = 0xe3f;
  local_20[5] = 0;
  local_20[6] = 0xe40;
  local_20[7] = 0;
  if ((uVar4 & 0x1000) != 0) {
    uVar4 = 0;
    do {
      *(undefined4 *)((int)local_20 + uVar4 + 4) = 1;
      *(undefined4 *)((int)local_20 + uVar4 + 0x14) = 5;
      uVar4 = uVar4 + 8;
    } while (uVar4 < 0x10);
  }
  FUN_00405cb0(param_1,local_20,2);
  FUN_00405cf0(param_1,local_20 + 4,2);
  return 1;
}


