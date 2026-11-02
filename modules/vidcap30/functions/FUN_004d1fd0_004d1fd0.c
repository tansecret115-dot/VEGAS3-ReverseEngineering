/* Module: vidcap30.exe
   Function: FUN_004d1fd0
   Address: 004d1fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004d1fd0(int param_1)

{
  int *piVar1;
  uint uVar2;
  LPCSTR pCVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  CHAR *pCVar7;
  undefined1 local_61c [4];
  CHAR local_618 [252];
  CHAR aCStack_51c [259];
  undefined1 uStack_419;
  WCHAR aWStack_418 [260];
  wchar_t awStack_210 [4];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  GetWindowTextA(*(HWND *)(param_1 + 0xc4),local_618,0x104);
  MultiByteToWideChar(0,1,local_618,-1,local_208,0x104);
  local_2 = 0;
  pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x10b3);
  iVar4 = lstrcmpA(local_618,pCVar3);
  if (iVar4 == 0) {
    uVar5 = _SfGetString2_8(DAT_005c16d8,0x10b7);
    SfMsgBox(*(undefined4 *)(param_1 + 0x48),0x30,uVar5);
    return false;
  }
  pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x10bb);
  iVar4 = lstrcmpA(local_618,pCVar3);
  if (iVar4 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),local_61c);
    iVar4 = 0;
    if (-1 < unaff_EBP) {
      do {
        (**(code **)(**(int **)(param_1 + 4) + 0x3c))
                  (*(int **)(param_1 + 4),iVar4,aWStack_418,0x104);
        if ((&stack0x00000000 == (undefined1 *)0x418) || (aWStack_418[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_418,-1,aCStack_51c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x51c) {
          aCStack_51c[0] = '\0';
        }
        uStack_419 = 0;
        iVar6 = wcscmp(aWStack_418,awStack_210);
        if (iVar6 == 0) {
          pCVar7 = aCStack_51c;
          uVar5 = _SfGetString2_8(DAT_005c16d8,0x10b8);
          SfMsgBox(*(undefined4 *)(param_1 + 0x48),0x30,uVar5,pCVar7);
          return false;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= unaff_EBP);
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x68))
                      (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 4),&stack0xfffff9e0);
    if ((-1 < iVar4) && (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined4 *)(param_1 + 4),&stack0xfffff9d4);
    }
    uVar2 = *(uint *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x24) == uVar2) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else if (*(uint *)(param_1 + 0x24) < uVar2) {
      *(uint *)(param_1 + 0x28) = uVar2 - 1;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    (**(code **)(**(int **)(param_1 + 8) + 0x7c))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),0);
    SendMessageA(*(HWND *)(param_1 + 0xc4),0x14e,0,0);
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_004d1500(param_1);
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c);
    (**(code **)(*piVar1 + 0x3c))(piVar1);
    return -1 < iVar4;
  }
  pCVar7 = local_618;
  uVar5 = _SfGetString2_8(DAT_005c16d8,0x10b8);
  SfMsgBox(*(undefined4 *)(param_1 + 0x48),0x30,uVar5,pCVar7);
  return false;
}


