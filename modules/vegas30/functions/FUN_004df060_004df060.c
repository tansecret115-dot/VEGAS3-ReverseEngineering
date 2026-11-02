/* Module: vegas30.exe
   Function: FUN_004df060
   Address: 004df060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004df060(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (param_3 == 0) {
    uVar3 = _SfGetUIFont_4(100);
    piVar1 = (int *)(param_1 + 0xcd4);
    *(undefined4 *)(param_1 + 8) = uVar3;
    if (*piVar1 == 0) {
      _SfList_CreateExZ_32(piVar1,4,0x10,0x10,2,0,0,0);
      if (*piVar1 == 0) {
        uVar5 = 0;
      }
    }
    FUN_00457e90(param_1,20000000,0);
    FUN_004530a0(param_1,0x1000);
    return uVar5;
  }
  if (*(int *)(param_1 + 0xcd4) != 0) {
    if (((DAT_0064762c != 0) && (iVar2 = *(int *)(DAT_0064762c + 0x70), iVar2 != 0)) &&
       (*(HWND *)(iVar2 + 0xf1c) != (HWND)0x0)) {
      LVar4 = SendMessageA(*(HWND *)(iVar2 + 0xf1c),0x150,*(WPARAM *)(iVar2 + 0xf30),0);
      if (LVar4 != 0) {
        FUN_004dc360(param_1,LVar4,0);
      }
    }
    FUN_004693b0(*(undefined4 *)(param_1 + 0xcd4));
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0xcd4));
    *(undefined4 *)(param_1 + 0xcd4) = 0;
  }
  return 1;
}


