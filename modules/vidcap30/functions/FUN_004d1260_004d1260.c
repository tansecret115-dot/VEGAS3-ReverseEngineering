/* Module: vidcap30.exe
   Function: FUN_004d1260
   Address: 004d1260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d1260(int param_1)

{
  HWND hWnd;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  WPARAM wParam;
  undefined4 unaff_EBX;
  WPARAM unaff_EBP;
  uint lParam;
  uint unaff_ESI;
  uint local_318 [64];
  undefined1 uStack_215;
  WCHAR aWStack_214 [266];
  
  lParam = 0;
  hWnd = *(HWND *)(param_1 + 0xc4);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  local_318[2] = uVar1;
  SendMessageA(hWnd,0x14b,0,0);
  local_318[0] = 0;
  local_318[1] = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x78))(*(int **)(param_1 + 8),uVar1,local_318);
  if ((iVar3 < 0) || (unaff_ESI == 0)) {
    EnableWindow(hWnd,0);
  }
  else {
    EnableWindow(hWnd,1);
    if (unaff_ESI != 0) {
      do {
        bVar2 = true;
        if ((*(int *)(param_1 + 0x44) != 0) &&
           (uVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x90))
                              (*(int **)(param_1 + 8),unaff_EBX,lParam,8,0,0), 1 < uVar4)) {
          bVar2 = false;
        }
        iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x80))
                          (*(int **)(param_1 + 8),unaff_EBX,lParam,aWStack_214,0x104);
        if ((-1 < iVar3) && (bVar2)) {
          if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_214,-1,(LPSTR)local_318,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x318) {
            local_318[0] = local_318[0] & 0xffffff00;
          }
          uStack_215 = 0;
          wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_318);
          if (wParam != 0xffffffff) {
            SendMessageA(hWnd,0x151,wParam,lParam);
          }
          if (*(uint *)(param_1 + 0x24) == 0xffffffff) {
            *(undefined4 *)(param_1 + 0x24) = 0;
          }
          else if (*(uint *)(param_1 + 0x24) == lParam) {
            unaff_EBP = wParam;
          }
        }
        lParam = lParam + 1;
      } while (lParam < unaff_ESI);
    }
  }
  SendMessageA(hWnd,0x14e,unaff_EBP,0);
  FUN_004d1400(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004d1500(param_1);
  }
  return;
}


