/* Module: vidpcore.dll
   Function: FUN_5de82e20
   Address: 5de82e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5de82e20(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar3;
  uint uVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_4;
  
  uVar4 = (uint)param_3 & 0xffff;
  local_4 = param_1;
  if ((uVar4 < 0x9e34) || (40999 < uVar4)) {
    if (uVar4 < 0xa029) {
      if (uVar4 == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x405,0xf,0);
        return 0;
      }
      if (uVar4 == 0x462) {
        if ((uint)param_3 >> 0x10 == 1) {
          hWnd = GetDlgItem((HWND)param_1[0xc],0x462);
          wParam = SendMessageA(hWnd,0x147,0,0);
          LVar3 = SendMessageA(hWnd,0x150,wParam,0);
          param_1[0x13] = LVar3;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      else if (uVar4 == 0x7f00) {
        FUN_5de82d80();
        return 0;
      }
    }
    else if (uVar4 == 0xa029) {
      FUN_5de06da0(param_1[0xc]);
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    param_3 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17bd0,&param_3);
    }
    ppiVar6 = &local_4;
    piVar5 = param_3;
    iVar2 = (**(code **)*param_3)(param_3,&DAT_5df180c0);
    if (-1 < iVar2) {
      (*(code *)(*ppiVar6)[5])(ppiVar6,uVar4 - 0x9e34);
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    if (local_4 != (int *)0x0) {
      (**(code **)(*local_4 + 8))(local_4);
      return 0;
    }
  }
  return 0;
}


