/* Module: vegas30.exe
   Function: FUN_005584b0
   Address: 005584b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005584b0(int param_1,HWND param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  CHAR local_28 [40];
  
  uVar2 = *(undefined4 *)(param_1 + 100);
  if (((param_3 & 0xffff) == 9) || ((param_3 & 0xffff) == 8)) {
    iVar1 = GetWindowTextA(param_2,local_28,0x28);
    if (iVar1 != 0) {
      uVar2 = _SfTextToLongTokenEx_20(local_28,uVar2,8,0x800,0);
      SfSetWindowText(param_2,&DAT_0061052c,uVar2);
    }
  }
  iVar1 = _Spinner_DefScrollProc_24(0x115,param_3,param_4,1,2,uVar2);
  if (iVar1 != *(int *)(param_1 + 100)) {
    if (iVar1 < 8) {
      iVar1 = 8;
    }
    else if (0x800 < iVar1) {
      iVar1 = 0x800;
    }
    *(int *)(param_1 + 100) = iVar1;
    SfSetWindowText(param_2,&DAT_0061052c,iVar1);
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  return 1;
}


