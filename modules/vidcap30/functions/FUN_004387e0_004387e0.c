/* Module: vidcap30.exe
   Function: FUN_004387e0
   Address: 004387e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004387e0(int param_1,int param_2,undefined4 *param_3)

{
  LPSTR lpString1;
  SHORT SVar1;
  SHORT SVar2;
  int iVar3;
  undefined4 uVar4;
  WPARAM wParam;
  undefined1 local_2c [8];
  tagPOINT local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  LONG local_10;
  LONG local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  SVar1 = GetKeyState(0x11);
  SVar2 = GetKeyState(0x10);
  if (param_2 == 0x226) {
    if (param_3[2] == -0x2c6) {
      SendMessageA(*(HWND *)(param_1 + 0x1664),0x433,param_3[3],(LPARAM)&local_24);
      MapWindowPoints(*(HWND *)(param_1 + 0x1664),(HWND)0x0,&local_24,2);
      local_14 = 0x14;
      local_10 = local_24.x;
      local_c = local_24.y;
      local_8 = local_1c;
      local_4 = local_18;
      FUN_00442c60(param_1,local_24.x,local_18,&local_14);
    }
  }
  else {
    iVar3 = param_3[2];
    if (param_2 == 0x227) {
      switch(iVar3) {
      case -0x9b:
        switch(*(undefined2 *)(param_3 + 3)) {
        case 0x1b:
          SetFocus(*(HWND *)(param_1 + 8));
          return 0;
        case 0x26:
          if (SVar1 < 0) {
            PostMessageA(*(HWND *)(param_1 + 8),0x111,0x22b,0);
            return 0;
          }
          break;
        case 0x28:
          if (SVar1 < 0) {
            wParam = 0x22c;
            goto LAB_004389e7;
          }
          break;
        case 0x2d:
          wParam = 0x229;
LAB_004389e7:
          PostMessageA(*(HWND *)(param_1 + 8),0x111,wParam,0);
          return 0;
        case 0x2e:
          PostMessageA(*(HWND *)(param_1 + 8),0x111,0x22a,0);
          return 0;
        case 0x41:
          FUN_0041f810(*param_3);
          return 0;
        case 0x5d:
switchD_00438972_caseD_5d:
          uVar4 = FUN_0041f9c0(*param_3,1);
          FUN_0041f9f0(*param_3,uVar4,local_2c);
          FUN_00442cf0(param_1,*param_3,local_2c,uVar4);
          return 0;
        case 0x79:
          if (SVar2 < 0) goto switchD_00438972_caseD_5d;
        }
        break;
      case -0x6d:
        FUN_00442ed0(param_1,param_3 + 8);
        return 0;
      case -0xc:
        uVar4 = FUN_00442590(param_1,param_3);
        return uVar4;
      case -5:
        FUN_00442cf0(param_1,*param_3,param_3 + 8,param_3[3]);
        return 1;
      }
    }
    else if (iVar3 == -0x208) {
      lpString1 = (LPSTR)(param_3 + 4);
      param_3[0x18] = 0;
      param_3[3] = lpString1;
      *lpString1 = '\0';
      if (((param_3[1] != 0x9cdc) || (iVar3 = FUN_00434f90(param_1), iVar3 == 0)) &&
         ((param_3[1] != 0x9cdd || (iVar3 = FUN_00434f90(param_1), iVar3 == 0)))) {
        FUN_00431e30(param_3,param_3[1]);
        return 0;
      }
      if ((LPCSTR)(param_1 + 0x1af0) != (LPCSTR)0x0) {
        lstrcpynA(lpString1,(LPCSTR)(param_1 + 0x1af0),0x50);
        *(undefined1 *)((int)param_3 + 0x5f) = 0;
        SetWindowPos((HWND)*param_3,(HWND)0x0,0,0,0,0,0x213);
        return 0;
      }
    }
    else if (iVar3 == -0x69) {
      SendMessageA(DAT_005ba4bc,0x111,0x42d,0x3fc);
      return 0;
    }
  }
  return 0;
}


