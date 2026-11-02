/* Module: sfs4rw.dll
   Function: FUN_00408ce0
   Address: 00408ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408ce0(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  int nIDLastButton;
  uint uVar2;
  bool bVar3;
  HWND pHVar4;
  int *piVar5;
  uint uVar6;
  int local_b4 [25];
  int local_50 [20];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041fea0(param_1,(HFONT)0x0);
  uVar6 = 0x8001;
  piVar5 = (int *)0x0;
  pHVar4 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429f20(pHVar1,pHVar4,piVar5,uVar6);
  FUN_00407e80(dwNewLong,param_1,0);
  FUN_00406d10(param_1,*(int *)(dwNewLong + 0x1dc),(uint)(*(int *)(dwNewLong + 0x22c) == 0),
               *(int *)(dwNewLong + 0x254));
  FUN_00408ea0(dwNewLong,param_1);
  bVar3 = (*(uint *)(dwNewLong + 0x1d8) & 0x100) != 0;
  nIDLastButton = 0x1b94;
  if (bVar3) {
    nIDLastButton = 0x1b95;
  }
  else {
    local_b4[5] = 0x1b95;
    local_b4[6] = 0;
    local_50[0] = 0x1b95;
    local_50[1] = 0;
  }
  uVar2 = (uint)!bVar3;
  uVar6 = (uint)!bVar3;
  if ((*(byte *)(dwNewLong + 0x1d8) & 0x80) == 0) {
    local_b4[uVar6 * 2 + 5] = 0x1b96;
    local_b4[uVar6 * 2 + 6] = 0;
    local_50[uVar2 * 2] = 0x1b96;
    uVar6 = uVar6 + 1;
    local_50[uVar2 * 2 + 1] = 0;
    uVar2 = uVar2 + 1;
  }
  else {
    nIDLastButton = 0x1b96;
  }
  if (*(int *)(dwNewLong + 0x22c) == 0) {
    local_b4[uVar6 * 2 + 5] = 0x1b97;
    local_b4[uVar6 * 2 + 6] = 0;
    local_50[uVar2 * 2] = 0x1b97;
    uVar6 = uVar6 + 1;
    local_50[uVar2 * 2 + 1] = 0;
    uVar2 = uVar2 + 1;
  }
  else {
    nIDLastButton = 0x1b97;
  }
  if (*(int *)(dwNewLong + 0x234) == 0) {
    local_b4[uVar6 * 2 + 5] = 0x1b98;
    local_b4[uVar6 * 2 + 6] = 0;
    local_50[uVar2 * 2] = 0x1b98;
    local_50[uVar2 * 2 + 1] = 0;
  }
  else {
    nIDLastButton = 0x1b98;
    local_b4[uVar6 * 2 + 5] = 0x1b98;
    local_b4[uVar6 * 2 + 6] = 1;
    local_50[uVar2 * 2] = 0x1b98;
    local_50[uVar2 * 2 + 1] = 5;
  }
  FUN_00405cb0(param_1,local_b4 + 5,uVar6 + 1);
  FUN_00405cf0(param_1,local_50,uVar2 + 1);
  local_b4[0] = 0x1b94;
  local_b4[1] = 0x1b95;
  local_b4[2] = 0x1b96;
  local_b4[3] = 0x1b97;
  local_b4[4] = 0x1b98;
  FUN_00405d30(param_1,local_b4,5);
  CheckRadioButton(param_1,0x1b94,nIDLastButton,0x1b94);
  FUN_00405c70(0x1b94,dwNewLong);
  return 1;
}


