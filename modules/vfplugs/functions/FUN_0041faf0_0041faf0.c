/* Module: vfplugs.dll
   Function: FUN_0041faf0
   Address: 0041faf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041faf0(HWND param_1,int param_2,HWND param_3,int param_4)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
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
    FUN_0041a430(LVar1,local_38);
    GetWindowTextA(param_3,local_28,0x28);
    iVar2 = ftol();
    iVar2 = FUN_00439fa0(local_28,iVar2,0,0xff,(undefined4 *)0x0);
    iVar3 = ftol();
    if (iVar3 != iVar2) {
      local_38[(int)param_1] = (float)iVar2 * _DAT_0048c574;
      FUN_0041a050(LVar1,local_38);
      FUN_0041da20(*(HWND *)(LVar1 + 8));
      FUN_0041b090(LVar1);
      hWnd = *(HWND *)(LVar1 + 8);
      uVar4 = GetDlgCtrlID(hWnd);
      PostMessageA(*(HWND *)(LVar1 + 0xc),0x111,uVar4 & 0xffff | 0x7000000,(LPARAM)hWnd);
    }
    if (param_4 == 0x200) {
      FUN_0041a550(LVar1);
    }
  }
  return 1;
}


