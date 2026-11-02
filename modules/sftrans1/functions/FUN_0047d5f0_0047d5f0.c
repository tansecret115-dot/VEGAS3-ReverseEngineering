/* Module: sftrans1.dll
   Function: FUN_0047d5f0
   Address: 0047d5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_0047d5f0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *puVar3;
  LPARAM *pLVar4;
  WPARAM local_138;
  LPARAM local_134 [7];
  undefined2 local_118;
  undefined4 local_74 [29];
  
  uVar1 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if (uVar1 < 0x647) {
    if (uVar1 == 0x646) {
      if (param_3 == 1) {
        FUN_0047e320();
        return 0;
      }
      if (param_3 == 3) {
        FUN_0047e3e0();
        return 0;
      }
      if (param_3 == 4) {
        FUN_0047e440();
        return 0;
      }
    }
    else if (uVar1 == 0x643) {
      if (param_3 == 0x300) {
        if (*(int *)(param_1 + 0x54) != 0) {
          hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
          SendMessageA(hWnd,0x43f,1,0);
          puVar3 = local_74;
          for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          local_74[0] = 0x74;
          local_74[1] = 0x40000000;
          SendMessageA(hWnd,0x444,4,(LPARAM)local_74);
          SendMessageA(hWnd,0xb0,(WPARAM)&local_138,(LPARAM)local_134);
          SendMessageA(hWnd,0xb1,0,-1);
          pLVar4 = local_134;
          for (iVar2 = 0x2f; pLVar4 = (LPARAM *)((int)pLVar4 + 4), iVar2 != 0; iVar2 = iVar2 + -1) {
            *pLVar4 = 0;
          }
          local_134[1] = 0xbc;
          local_134[2] = 8;
          iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0xc);
          if (iVar2 == 0) {
            local_118 = 1;
          }
          else if (iVar2 == 1) {
            local_118 = 3;
          }
          else if (iVar2 == 2) {
            local_118 = 2;
          }
          SendMessageA(hWnd,0x447,0,(LPARAM)(local_134 + 1));
          SendMessageA(hWnd,0xb1,local_138,local_134[0]);
          SendMessageA(hWnd,0x43f,0,0);
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        FUN_0047dcf0();
        return 0;
      }
      if (param_3 == 0x100) {
        FUN_0047e7d0();
        return 0;
      }
    }
    else if (uVar1 == 0x645) {
      if (param_3 == 1) {
        FUN_0047e210();
        return 0;
      }
      if (param_3 == 3) {
        FUN_0047e2c0();
        return 0;
      }
    }
  }
  else {
    switch(uVar1) {
    case 0x9c49:
    case 0x9c4a:
      FUN_0047e7f0(uVar1);
      break;
    case 0x9c4b:
    case 0x9c4c:
    case 0x9c4d:
      FUN_0047e070(uVar1);
      return 0;
    }
  }
  return 0;
}


