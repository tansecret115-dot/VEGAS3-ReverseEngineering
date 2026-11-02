/* Module: vegas30.exe
   Function: FUN_00484620
   Address: 00484620
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00484620(HSFCD__ *param_1,int param_2,uint param_3,uint param_4)

{
  HSFCD__ *pHVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong local_4;
  
  pHVar1 = param_1;
  iVar2 = FUN_0043df40(param_1);
  if ((-1 < iVar2) && (iVar2 = FUN_0043fc90(&param_1), -1 < iVar2)) {
    iVar2 = FUN_0043fd90(param_1,1,1);
    while (iVar2 < 0) {
      uVar3 = _SfGetString_8(DAT_00647204,0x129);
      iVar4 = SfMsgBox(pHVar1,0x31,uVar3);
      if (iVar4 != 1) {
        if (iVar2 < 0) goto LAB_004846e6;
        break;
      }
      iVar2 = FUN_0043fd90(param_1,1,1);
    }
    local_4 = 0;
    iVar2 = SfCDING_GetFreeSpaceData(param_1,&local_4,param_2);
    if ((param_4 < 0x80000000) && ((0 < (int)param_4 || (local_4 < param_3)))) {
      uVar3 = _SfGetString_8(DAT_00647204,0x6e68);
      SfMsgBox(pHVar1,0x10,uVar3);
LAB_004846e6:
      iVar2 = -0x7fffbffc;
    }
    FUN_0043fd20(param_1);
  }
  return iVar2;
}


