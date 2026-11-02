/* Module: vidcap30.exe
   Function: FUN_0045a9c0
   Address: 0045a9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045a9c0(HWND param_1,uint param_2,undefined2 param_3,int param_4)

{
  LONG LVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      FUN_0045aa80(param_1,param_4);
      return 1;
    }
    if (param_2 == 2) {
      DeleteObject(*(HGDIOBJ *)(LVar1 + 0x10c));
      *(undefined4 *)(LVar1 + 0x10c) = 0;
      return 1;
    }
    if (param_2 == 0x53) {
      uVar4 = 0;
      puVar3 = &DAT_005b6170;
      iVar2 = GetDlgCtrlID(*(HWND *)(param_4 + 0xc));
      FUN_0041f690(0,param_1,0,iVar2,puVar3,uVar4);
      return 1;
    }
  }
  else if (param_2 == 0x111) {
    FUN_0045ac10(param_1,param_3,LVar1);
    return 1;
  }
  return 0;
}


