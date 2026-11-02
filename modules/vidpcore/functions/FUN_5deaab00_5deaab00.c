/* Module: vidpcore.dll
   Function: FUN_5deaab00
   Address: 5deaab00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5deaab00(HWND param_1,int param_2,HWND param_3,int param_4)

{
  LONG LVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  HWND hWnd;
  float local_38 [4];
  CHAR local_28 [40];
  
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 == 0) {
    return 0;
  }
  if (((((param_2 == 1000) || (param_2 == 0x3e9)) || (param_2 == 0x3ea)) || (param_2 == 0x3eb)) &&
     ((param_4 == 0x200 || (param_4 == 0x300)))) {
    switch(param_2) {
    case 1000:
      param_1 = (HWND)0x0;
      break;
    case 0x3e9:
      param_1 = (HWND)0x1;
      break;
    case 0x3ea:
      param_1 = (HWND)0x2;
      break;
    case 0x3eb:
      param_1 = (HWND)0x3;
    }
    FUN_5dea5440(LVar1,local_38);
    GetWindowTextA(param_3,local_28,0x28);
    uVar2 = ftol();
    iVar3 = FUN_5dec5990(local_28,uVar2,0,0xff,0);
    iVar4 = ftol();
    if (iVar4 != iVar3) {
      local_38[(int)param_1] = (float)iVar3 * _DAT_5df342c0;
      FUN_5dea5060(LVar1,local_38);
      FUN_5dea8a30(*(undefined4 *)(LVar1 + 8));
      FUN_5dea60a0(LVar1);
      hWnd = *(HWND *)(LVar1 + 8);
      uVar5 = GetDlgCtrlID(hWnd);
      PostMessageA(*(HWND *)(LVar1 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)hWnd);
    }
    if (param_4 == 0x200) {
      FUN_5dea5560(LVar1);
    }
  }
  return 1;
}


