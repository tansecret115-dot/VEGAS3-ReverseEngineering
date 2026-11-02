/* Module: sftrans1.dll
   Function: FUN_004bbc60
   Address: 004bbc60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004bbc60(HWND param_1,int param_2,HWND param_3,int param_4)

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
    FUN_004b65a0(LVar1,local_38);
    GetWindowTextA(param_3,local_28,0x28);
    uVar2 = ftol();
    iVar3 = FUN_004d6a40(local_28,uVar2,0,0xff,0);
    iVar4 = ftol();
    if (iVar4 != iVar3) {
      local_38[(int)param_1] = (float)iVar3 * _DAT_00566abc;
      FUN_004b61c0(LVar1,local_38);
      FUN_004b9b90(*(undefined4 *)(LVar1 + 8));
      FUN_004b7200(LVar1);
      hWnd = *(HWND *)(LVar1 + 8);
      uVar5 = GetDlgCtrlID(hWnd);
      PostMessageA(*(HWND *)(LVar1 + 0xc),0x111,uVar5 & 0xffff | 0x7000000,(LPARAM)hWnd);
    }
    if (param_4 == 0x200) {
      FUN_004b66c0(LVar1);
    }
  }
  return 1;
}


