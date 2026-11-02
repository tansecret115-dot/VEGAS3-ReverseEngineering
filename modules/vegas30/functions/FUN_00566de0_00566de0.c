/* Module: vegas30.exe
   Function: FUN_00566de0
   Address: 00566de0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00566de0(HWND param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  HWND hWnd;
  uint uVar3;
  HWND hWnd_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  WPARAM wParam;
  LRESULT LVar7;
  int *unaff_EBX;
  uint uStack_324;
  undefined4 local_31c;
  CHAR aCStack_318 [259];
  undefined1 uStack_215;
  WCHAR aWStack_214 [262];
  HWND pHStack_8;
  int iStack_4;
  
  piVar2 = DAT_0064b510;
  local_31c = 0;
  hWnd = GetDlgItem(param_1,0x436);
  CheckDlgButton(param_1,0x622,*(uint *)(param_2 + 200) & 1);
  uVar3 = ~*(uint *)(param_2 + 200) >> 1 & 1;
  hWnd_00 = GetDlgItem(param_1,0x622);
  EnableWindow(hWnd_00,uVar3);
  iVar4 = (**(code **)(*piVar2 + 0x54))(piVar2,&local_31c,L".avi");
  if (-1 < iVar4) {
    uVar5 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX);
    unaff_EBX = (int *)0x0;
    iVar4 = (**(code **)(*piVar2 + 0x78))(piVar2,uVar5,&stack0xfffffcd8);
    if (-1 < iVar4) {
      bVar1 = false;
      uVar3 = 1;
      if (1 < uStack_324) {
        do {
          iVar6 = FUN_00566dd0(piVar2,0,uVar3);
          if (iVar6 != 0) {
            iVar4 = (**(code **)(*piVar2 + 0x80))(piVar2,local_31c,uVar3,aWStack_214,0x104);
            if (iVar4 < 0) goto LAB_00567008;
            if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_214,-1,aCStack_318,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x318) {
              aCStack_318[0] = '\0';
            }
            uStack_215 = 0;
            wParam = SendMessageA(hWnd,0x143,0,(LPARAM)aCStack_318);
            if ((wParam != 0xffffffff) &&
               (SendMessageA(hWnd,0x151,wParam,uVar3), *(uint *)(iStack_4 + 0xd4) == uVar3)) {
              SendMessageA(hWnd,0x14e,wParam,0);
              PostMessageA(pHStack_8,0x111,0x10436,(LPARAM)hWnd);
              bVar1 = true;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uStack_324);
      }
      if ((-1 < iVar4) && (!bVar1)) {
        SendMessageA(hWnd,0x14e,0,0);
        LVar7 = SendMessageA(hWnd,0x150,0,0);
        *(LRESULT *)(iStack_4 + 0xd4) = LVar7;
        PostMessageA(pHStack_8,0x111,0x10436,(LPARAM)hWnd);
      }
    }
  }
LAB_00567008:
  *(int **)(iStack_4 + 0xd0) = unaff_EBX;
  return -1 < iVar4;
}


