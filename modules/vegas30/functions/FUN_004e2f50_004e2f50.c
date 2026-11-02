/* Module: vegas30.exe
   Function: FUN_004e2f50
   Address: 004e2f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e2f50(int param_1,int param_2)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x70), iVar1 != 0)) {
    hWnd = *(HWND *)(iVar1 + 0xf1c);
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    LVar2 = SendMessageA(hWnd,0x146,0,0);
    if (1 < LVar2) {
      LVar3 = SendMessageA(hWnd,0x147,0,0);
      if (LVar2 == 2) {
        if (LVar3 == 0) {
          FUN_004e3100(param_1,iVar1,1);
          return 1;
        }
      }
      else {
        if (LVar3 == 0) {
          if (param_2 != 0) {
            FUN_004e3100(param_1,iVar1,1);
            *(undefined4 *)(iVar1 + 0xf28) = 0;
            return 1;
          }
          FUN_004e3100(param_1,iVar1,LVar2 + -1);
          *(undefined4 *)(iVar1 + 0xf28) = 0;
          return 1;
        }
        if (*(int *)(iVar1 + 0xf28) == 0) {
          if (param_2 != 0) {
            FUN_004e3220(param_1,iVar1,1,2);
            *(undefined4 *)(iVar1 + 0xf28) = 1;
            *(undefined4 *)(iVar1 + 0xf2c) = 2;
            return 1;
          }
          FUN_004e3220(param_1,iVar1,1,LVar2 + -1);
          *(LRESULT *)(iVar1 + 0xf2c) = LVar2 + -1;
          *(undefined4 *)(iVar1 + 0xf28) = 1;
          return 1;
        }
        if (param_2 == 0) {
          iVar4 = *(int *)(iVar1 + 0xf2c) + -1;
          *(int *)(iVar1 + 0xf2c) = iVar4;
          if (iVar4 < 2) {
            *(LRESULT *)(iVar1 + 0xf2c) = LVar2 + -1;
          }
        }
        else {
          iVar4 = *(int *)(iVar1 + 0xf2c) + 1;
          *(int *)(iVar1 + 0xf2c) = iVar4;
          if (LVar2 <= iVar4) {
            *(undefined4 *)(iVar1 + 0xf2c) = 2;
          }
        }
        FUN_004e3220(param_1,iVar1,1,*(undefined4 *)(iVar1 + 0xf2c));
      }
    }
    return 1;
  }
  return 0;
}


