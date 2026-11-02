/* Module: mcplugrw.dll
   Function: FUN_00409bc0
   Address: 00409bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409bc0(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  int iVar2;
  int iVar3;
  int nIDLastButton;
  bool bVar4;
  HWND pHVar5;
  int *piVar6;
  uint uVar7;
  int local_b4 [7];
  undefined4 local_98;
  undefined4 local_94;
  int local_50 [20];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041ff20(param_1,(HFONT)0x0);
  uVar7 = 0x8001;
  piVar6 = (int *)0x0;
  pHVar5 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429fa0(pHVar1,pHVar5,piVar6,uVar7);
  FUN_00407ee0(dwNewLong,param_1,0);
  FUN_00406d70(param_1,*(int *)(dwNewLong + 0x1dc),(uint)(*(int *)(dwNewLong + 0x22c) == 0),
               *(int *)(dwNewLong + 0x254));
  FUN_00408f00(dwNewLong,param_1);
  bVar4 = *(int *)(dwNewLong + 0x234) == 0;
  if (bVar4) {
    local_50[1] = 0;
    nIDLastButton = 0x1b97;
  }
  else {
    nIDLastButton = 0x1b98;
    local_50[1] = 5;
  }
  local_50[0] = 0x1b98;
  local_b4[6] = (int)!bVar4;
  local_b4[5] = 0x1b98;
  iVar3 = 1;
  iVar2 = 1;
  if ((*(uint *)(dwNewLong + 0x1d8) & 0x100) == 0) {
    iVar2 = 2;
    local_98 = 0x1b95;
    local_94 = 0;
    local_50[2] = 0x1b95;
    local_50[3] = 0;
    iVar3 = 2;
  }
  if ((*(byte *)(dwNewLong + 0x1d8) & 0x80) == 0) {
    local_b4[iVar2 * 2 + 5] = 0x1b96;
    local_b4[iVar2 * 2 + 6] = 0;
    local_50[iVar3 * 2] = 0x1b96;
    iVar2 = iVar2 + 1;
    local_50[iVar3 * 2 + 1] = 0;
    iVar3 = iVar3 + 1;
  }
  FUN_00405d10(param_1,local_b4 + 5,iVar2);
  FUN_00405d50(param_1,local_50,iVar3);
  local_b4[0] = 0x1b94;
  local_b4[1] = 0x1b95;
  local_b4[2] = 0x1b96;
  local_b4[3] = 0x1b97;
  local_b4[4] = 0x1b98;
  FUN_00405d90(param_1,local_b4,5);
  CheckRadioButton(param_1,0x1b94,nIDLastButton,0x1b94);
  FUN_00405cd0(0x1b94,dwNewLong);
  return 1;
}


