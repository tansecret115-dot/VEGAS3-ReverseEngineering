/* Module: sftrans1.dll
   Function: FUN_0047f830
   Address: 0047f830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0047f830(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar4;
  uint uVar5;
  undefined4 local_2c;
  LRESULT local_28;
  int local_c;
  
  uVar5 = param_3 >> 0x10;
  switch(param_3 & 0xffff) {
  case 0x64b:
    if (uVar5 != 0x200) {
      return 0;
    }
    puVar2 = (undefined4 *)(param_1[0xc] + 0x1b8);
    iVar3 = FUN_0047c4e0(param_4,puVar2,*puVar2,*(undefined4 *)(param_1[0xc] + 0x1bc),0,0xc0590000,0
                         ,0x40590000,0xd2f1a9fc,0x3f50624d);
    goto joined_r0x0047f8f0;
  case 0x64c:
    if (uVar5 != 0x200) {
      return 0;
    }
    puVar2 = (undefined4 *)(param_1[0xc] + 0x1c0);
    iVar3 = FUN_0047c4e0(param_4,puVar2,*puVar2,*(undefined4 *)(param_1[0xc] + 0x1c4),0,0xc0590000,0
                         ,0x40590000,0xd2f1a9fc,0x3f50624d);
joined_r0x0047f8f0:
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 8))();
      return 0;
    }
    *(undefined4 *)(param_1[0xc] + 0x1a0) = 0;
    *(undefined4 *)(param_1[0xc] + 0x1a4) = 0;
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x67a:
    if (uVar5 == 1) {
      local_28 = SendMessageA(param_4,0x147,0,0);
      local_2c = 0x20;
      SendMessageA(param_4,0x404,0,(LPARAM)&local_2c);
      *(undefined4 *)(param_1[0xc] + 0x1a0) = *(undefined4 *)(local_c + 8);
      *(undefined4 *)(param_1[0xc] + 0x1a4) = *(undefined4 *)(local_c + 0xc);
      piVar1 = (int *)param_1[0xd];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1);
        return 0;
      }
    }
    break;
  case 0x67f:
    if (uVar5 == 1) {
      hWnd = GetDlgItem((HWND)param_1[1],0x67f);
      wParam = SendMessageA(hWnd,0x147,0,0);
      LVar4 = SendMessageA(hWnd,0x150,wParam,0);
      *(LRESULT *)(param_1[0xc] + 0x15c) = LVar4;
      piVar1 = (int *)param_1[0xd];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1);
      }
    }
  }
  return 0;
}


