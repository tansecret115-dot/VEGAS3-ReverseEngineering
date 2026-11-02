/* Module: vidcap30.exe
   Function: FUN_00464130
   Address: 00464130
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_00464130(undefined4 param_1,HWND param_2,short param_3)

{
  SHORT SVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  
  LVar2 = SendMessageA(param_2,0x188,0,0);
  LVar3 = SendMessageA(param_2,0x18b,0,0);
  if (param_3 == 0x26) {
    SVar1 = GetKeyState(0x11);
    if (-1 < SVar1) {
      if (-1 < LVar2 + -1) {
        return LVar2 + -1;
      }
      return 0;
    }
    if (LVar2 == 0) goto LAB_00464187;
    uVar4 = 0xffffffff;
  }
  else {
    if (param_3 != 0x28) {
      return LVar2;
    }
    SVar1 = GetKeyState(0x11);
    if (-1 < SVar1) {
      if (LVar2 + 1 <= LVar3 + -1) {
        return LVar2 + 1;
      }
      return LVar3 + -1;
    }
    if (LVar3 + -1 <= LVar2) goto LAB_00464187;
    uVar4 = 1;
  }
  FUN_00463b10(param_2,uVar4);
LAB_00464187:
  LVar2 = SendMessageA(param_2,0x188,0,0);
  return LVar2;
}


