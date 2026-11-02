/* Module: vegas30.exe
   Function: FUN_00530030
   Address: 00530030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00530030(HWND param_1,int param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xfffffda1:
    FUN_0052fcb0(param_1,*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x40));
    break;
  case 0xfffffda2:
    uVar2 = FUN_0052fd00(param_1,*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x40));
    return uVar2;
  case 0xfffffda3:
    uVar2 = FUN_0052fce0(param_1,*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x40));
    return uVar2;
  case 0xfffffda5:
    FUN_0052fcf0(param_1,*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x40));
    return 0;
  case 0xfffffda7:
    uVar4 = 0x8001;
    uVar3 = 0;
    uVar2 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar2,uVar3,uVar4);
    return 0;
  }
  return 0;
}


