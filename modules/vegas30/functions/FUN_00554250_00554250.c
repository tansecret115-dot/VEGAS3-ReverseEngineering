/* Module: vegas30.exe
   Function: FUN_00554250
   Address: 00554250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554250(HWND param_1,int *param_2)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x662);
  WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  if (WVar5 == 0xffffffff) {
    WVar5 = 0;
    UVar4 = 0x147;
    pHVar1 = GetDlgItem(param_1,0x4b0);
    WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (WVar5 != 0xffffffff) {
      iVar3 = 0x4b0;
      goto LAB_005542b1;
    }
  }
  else {
    iVar3 = 0x662;
LAB_005542b1:
    LVar6 = 0;
    UVar4 = 0x150;
    pHVar1 = GetDlgItem(param_1,iVar3);
    piVar2 = (int *)SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      FUN_00553590(param_1);
    }
  }
  piVar2 = (int *)FUN_00553430();
  FUN_00553500(param_1);
  (**(code **)(*piVar2 + 0x14))(piVar2);
  (**(code **)(*piVar2 + 0x10))(piVar2,*param_2 + 0x2ef0,0x104);
  (**(code **)(*piVar2 + 0x18))(piVar2,&stack0xffffffe8,&stack0xfffffff0);
  if (DAT_0064a58c == *(int *)(*param_2 + 0x2eec)) {
    iVar3 = lstrcmpA((LPCSTR)(*param_2 + 0x2ef0),&DAT_0064a590);
    if (iVar3 == 0) {
      *(undefined4 *)(*param_2 + 0x3284) = DAT_0064a924;
      *(undefined4 *)(*param_2 + 0x1d70) = DAT_00649410;
      goto LAB_00554361;
    }
  }
  *(undefined4 *)(*param_2 + 0x3284) = 0;
  *(undefined4 *)(*param_2 + 0x1d70) = 0;
LAB_00554361:
  (**(code **)(*piVar2 + 0x2c))(piVar2,*(undefined4 *)(*param_2 + 0x3284),0,*param_2 + 0x3288,0x104)
  ;
  (**(code **)(*piVar2 + 0x2c))(piVar2,*(undefined4 *)(*param_2 + 0x1d70),0,*param_2 + 0x11a8,0x40);
  FUN_005539e0(param_1,param_2);
  FUN_00553bc0(param_1,param_2);
  FUN_00553da0(param_1,param_2);
  LVar6 = 0;
  UVar4 = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,UVar4,(WPARAM)param_1,LVar6);
  param_2[2] = 1;
  param_2[0x1b] = 1;
  return;
}


