/* Module: sfs4rw.dll
   Function: FUN_0040ab10
   Address: 0040ab10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040ab10(HWND param_1,int param_2)

{
  int dwNewLong;
  LPSTR pCVar1;
  HWND pHVar2;
  int iVar3;
  bool bVar4;
  HWND pHVar5;
  int *piVar6;
  uint uVar7;
  int local_b0 [24];
  int local_50 [20];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041fea0(param_1,(HFONT)0x0);
  uVar7 = 0x8001;
  piVar6 = (int *)0x0;
  pHVar5 = (HWND)0x0;
  pHVar2 = GetParent(param_1);
  FUN_00429f20(pHVar2,pHVar5,piVar6,uVar7);
  FUN_00407e80(dwNewLong,param_1,0);
  FUN_0040acb0(dwNewLong,param_1);
  iVar3 = FUN_00405c50(param_1,dwNewLong);
  if (iVar3 != 0x1b80) {
    FUN_0040ac20(dwNewLong,param_1);
  }
  bVar4 = (*(byte *)(dwNewLong + 0x1d8) & 2) != 0;
  if (bVar4) {
    local_b0[4] = 0xe74;
    local_b0[5] = 0;
    local_50[0] = 0xe74;
    local_50[1] = 0;
  }
  FUN_00405cb0(param_1,local_b0 + 4,(uint)bVar4);
  FUN_00405cf0(param_1,local_50,(uint)bVar4);
  local_b0[0] = 8000;
  local_b0[1] = 0xe74;
  local_b0[2] = 0xe7c;
  local_b0[3] = 0xe71;
  FUN_00405d30(param_1,local_b0,4);
  *(undefined4 *)(dwNewLong + 0x220) = 0;
  pCVar1 = DAT_004a84e0;
  FUN_004040e0(DAT_004a84e0);
  FUN_00404d90(param_1,pCVar1);
  return 1;
}


