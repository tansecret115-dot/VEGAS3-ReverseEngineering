/* Module: vegas30.exe
   Function: FUN_005299b0
   Address: 005299b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005299b0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  WPARAM wParam;
  undefined4 uVar2;
  LPCSTR lpString2;
  
  if (param_2 != 0xd9) {
    if (param_2 == 0xcd) {
      uVar2 = FUN_00529950(param_1,param_3);
      return uVar2;
    }
    if (param_2 == 0xd4) {
      uVar2 = FUN_00528f40(param_1,param_3);
      return uVar2;
    }
    iVar1 = param_3[2];
    if (iVar1 == -0x66) {
      wParam = param_3[3];
      if ((((wParam == 0xd) || (wParam == 0x1b)) || (wParam == 0x20)) &&
         ((*(byte *)(param_1 + 0xc) & 2) != 0)) {
        SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x100,wParam,
                     CONCAT22(*(undefined2 *)(param_3 + 5),*(undefined2 *)(param_3 + 4)));
        return 0;
      }
    }
    else if (iVar1 == -0x209) {
      if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
        SetWindowPos((HWND)*param_3,(HWND)0x0,0,0,0,0,0x13);
        return 0;
      }
    }
    else if (iVar1 == -0x208) {
      switch(param_2) {
      case 400:
        uVar2 = 0x4f82;
        break;
      case 0x191:
        uVar2 = 0x4f83;
        break;
      default:
        goto switchD_00529aa4_caseD_192;
      case 0x193:
        uVar2 = 0x4f85;
        break;
      case 0x194:
        uVar2 = 0x4f86;
      }
      lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,uVar2);
      if (lpString2 != (LPCSTR)0x0) {
        lstrcpynA((LPSTR)(param_3 + 4),lpString2,0x50);
        *(undefined1 *)((int)param_3 + 0x5f) = 0;
      }
    }
  }
switchD_00529aa4_caseD_192:
  return 0;
}


