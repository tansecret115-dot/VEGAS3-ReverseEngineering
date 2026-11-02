/* Module: vegas30.exe
   Function: FUN_0054d0c0
   Address: 0054d0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d0c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  LRESULT LVar4;
  int iVar5;
  uint lParam;
  HWND pHVar6;
  UINT Msg;
  
  piVar2 = (int *)FUN_0054a530(param_1);
  if (piVar2 == (int *)0x0) {
    pHVar6 = *(HWND *)(param_1 + 0x90);
  }
  else {
    iVar5 = *piVar2;
    if ((*(byte *)(iVar5 + 0x134) & 0x20) == 0) {
      iVar3 = FUN_005f13f0(3);
      if (((iVar3 != 0) && (piVar1 = *(int **)(iVar5 + 0x138), piVar1 != (int *)0x0)) &&
         (*piVar1 != 0)) {
        SendMessageA(*(HWND *)(param_1 + 0x90),0x42b,0xfdf0,0x45);
        return;
      }
    }
    pHVar6 = *(HWND *)(param_1 + 0x90);
  }
  SendMessageA(pHVar6,0x42b,0xfdf0,0x44);
  if (*(int *)(param_1 + 0x84) == 2) {
    pHVar6 = *(HWND *)(param_1 + 0x98);
    Msg = 0x43e;
  }
  else {
    pHVar6 = *(HWND *)(param_1 + 0x9c);
    Msg = 0x1032;
  }
  LVar4 = SendMessageA(pHVar6,Msg,0,0);
  iVar5 = FUN_0057cc00(0);
  SendMessageA(*(HWND *)(param_1 + 0x90),0x401,0xfdee,(uint)(LVar4 != 0));
  lParam = (uint)(piVar2 != (int *)0x0);
  SendMessageA(*(HWND *)(param_1 + 0x90),0x401,0xfdf7,lParam);
  SendMessageA(*(HWND *)(param_1 + 0x90),0x401,0xfdf9,(uint)(iVar5 == 0));
  SendMessageA(*(HWND *)(param_1 + 0x90),0x401,0xfdf1,lParam);
  SendMessageA(*(HWND *)(param_1 + 0x90),0x401,0xfdf2,lParam);
  return;
}


