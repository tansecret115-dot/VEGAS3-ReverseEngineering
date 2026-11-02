/* Module: sftrans1.dll
   Function: FUN_004673d0
   Address: 004673d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004673d0(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  HWND hWnd;
  undefined4 uVar2;
  LRESULT LVar3;
  int *piVar4;
  WPARAM wParam;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  
  hWnd = GetDlgItem((HWND)param_1[0xc],0x573);
  uVar2 = FUN_0052d210(param_4);
  *param_5 = uVar2;
  if (param_3 == 0x573) {
    iVar1 = *(int *)(param_4 + 8);
    switch(iVar1) {
    case 0x836:
    case 0x838:
    case 0x839:
    case 0x83a:
      if ((iVar1 == 0x839) || (iVar1 == 0x83a)) {
        local_160 = 0;
        local_15c = 0x3fe00000;
        local_158 = 0;
        local_154 = 0x3fe00000;
        SendMessageA(hWnd,0x804,0,(LPARAM)&local_160);
        piVar4 = &local_160;
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_4 + 0xc);
        piVar4 = (int *)(param_4 + 0x10);
      }
      FUN_00466bc0(hWnd,uVar2,piVar4);
      LVar3 = SendMessageA(hWnd,0x802,0,0);
      wParam = 0;
      param_1[0x1a] = LVar3;
      if (0 < LVar3) {
        piVar4 = param_1 + 0x5a;
        do {
          SendMessageA(hWnd,0x805,wParam,(LPARAM)&local_160);
          piVar4[-0x14] = local_160;
          piVar4[-0x13] = local_15c;
          *piVar4 = local_158;
          piVar4[1] = local_154;
          wParam = wParam + 1;
          piVar4 = piVar4 + 2;
        } while ((int)wParam < LVar3);
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x837:
      FUN_00465450();
    }
  }
  return 0;
}


