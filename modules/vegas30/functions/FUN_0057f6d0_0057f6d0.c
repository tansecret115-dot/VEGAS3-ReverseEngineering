/* Module: vegas30.exe
   Function: FUN_0057f6d0
   Address: 0057f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0057f6d0(int *param_1,HWND param_2,HACCEL param_3,undefined4 param_4,MSG *param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  HWND unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_5);
  if (iVar1 == 0) {
    if (param_1[0xe] == 0) {
      iVar1 = TranslateAcceleratorA(unaff_retaddr,param_3,param_5);
    }
    else {
      iVar1 = FUN_00582470(unaff_retaddr,param_3,param_5);
    }
    if ((param_3 == (HACCEL)0x0) || (iVar1 == 0)) {
      if ((param_2 != (HWND)0x0) && (BVar3 = TranslateMDISysAccel(param_2,param_5), BVar3 != 0)) {
        if (param_5 == (MSG *)0x0) {
          return 1;
        }
        uVar2 = (*(code *)param_5)(param_5,1,param_6);
        return uVar2;
      }
      if ((((param_5->message != 0x104) && (param_5->message != 0x106)) &&
          ((HWND)param_1[0x10] != (HWND)0x0)) &&
         ((BVar3 = IsWindowEnabled((HWND)param_1[0x10]), BVar3 != 0 &&
          (BVar3 = IsDialogMessageA((HWND)param_1[0x10],param_5), BVar3 != 0)))) {
        if (param_5 == (MSG *)0x0) {
          return 1;
        }
        uVar2 = (*(code *)param_5)(param_5,2,param_6);
        return uVar2;
      }
      if ((param_5 != (MSG *)0x0) && (iVar1 = (*(code *)param_5)(param_5,4,param_6), iVar1 == 0)) {
        return 0;
      }
      TranslateMessage(param_5);
      DispatchMessageA(param_5);
    }
    else if (param_5 != (MSG *)0x0) {
      uVar2 = (*(code *)param_5)(param_5,0,param_6);
      return uVar2;
    }
  }
  return 1;
}


