/* Module: vegas30.exe
   Function: FUN_004dc2b0
   Address: 004dc2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dc2b0(int param_1,HWND param_2,WPARAM param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  WPARAM WVar2;
  LRESULT LVar3;
  int iVar4;
  
  WVar2 = param_3;
  hWnd = param_2;
  uVar1 = DAT_0064b138;
  if (param_2 == (HWND)0x0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if ((int)param_3 < 0) {
    return;
  }
  param_2 = (HWND)0x0;
  LVar3 = SendMessageA(hWnd,0x150,param_3,0);
  if ((0 < (int)WVar2) && (LVar3 != 0)) {
    iVar4 = FUN_005ec620();
    if (iVar4 == 0) goto LAB_004dc34d;
    FUN_005b83b0(uVar1,1);
    iVar4 = FUN_005ec8a0(*(undefined4 *)(LVar3 + 0xa4),&param_2,1,0);
    FUN_005b84d0(uVar1,1);
    if (iVar4 < 0) goto LAB_004dc34d;
  }
  FUN_004de320(param_1,param_2,0,0,LVar3,0);
LAB_004dc34d:
  *(WPARAM *)(param_1 + 0xf30) = WVar2;
  return;
}


