/* Module: vegas30.exe
   Function: FUN_004120d0
   Address: 004120d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004120d0(HWND param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  tagRECT local_10;
  
  piVar2 = (int *)GetWindowLongA(param_1,-0x15);
  *(undefined4 *)(DAT_0064762c + 0x1c) = 0;
  if (param_2 == 2) {
    *(undefined4 *)(DAT_0064762c + 0x1c) = 0;
    SetFocus(DAT_00647624);
    if (((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) &&
       (pcVar1 = *(code **)*piVar2, pcVar1 != (code *)0x0)) {
      piVar2 = (int *)(*pcVar1)(piVar2,2,param_3,param_4);
      DAT_0064763c = (HWND)0x0;
      return piVar2;
    }
    DAT_0064763c = (HWND)0x0;
    return param_4;
  }
  if (param_2 != 0x110) {
    if (((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) &&
       (pcVar1 = *(code **)*piVar2, pcVar1 != (code *)0x0)) {
      piVar2 = (int *)(*pcVar1)(piVar2,param_2,param_3,param_4);
      return piVar2;
    }
    return param_4;
  }
  SetWindowLongA(param_1,-0x15,(LONG)param_4);
  _SfSetEditCtrlFont_8(param_1,0);
  if (((param_4 != (int *)0x0) && ((int *)*param_4 != (int *)0x0)) && (*(int *)*param_4 != 0)) {
    GetClientRect(param_1,&local_10);
    FUN_00410af0(param_4,param_1);
    iVar3 = (**(code **)*param_4)(param_4,1,0,0);
    if (iVar3 == -1) {
      EndDialog(param_1,-1);
    }
    SetWindowPos(param_1,(HWND)0x0,param_4[9],param_4[10],param_4[0xb],param_4[0xc],0x44);
    DAT_0064763c = param_1;
    return (int *)0x0;
  }
  return (int *)0x0;
}


