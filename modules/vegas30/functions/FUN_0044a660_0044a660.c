/* Module: vegas30.exe
   Function: FUN_0044a660
   Address: 0044a660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044a660(int param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  HWND hWnd;
  LRESULT LVar4;
  BOOL BVar5;
  char *pcVar6;
  int *unaff_ESI;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  tagPOINT local_324;
  tagRECT local_31c [15];
  undefined1 uStack_21d;
  WCHAR aWStack_21c [6];
  undefined1 auStack_210 [528];
  
  uVar3 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if (uVar3 < 0x4b2) {
    if (uVar3 == 0x4b1) {
      FUN_0044a060(param_1);
      return;
    }
    if (0x3e9 < uVar3) {
      if (uVar3 != 0x4b0) {
        return;
      }
      FUN_00449f60(param_1);
      return;
    }
    if (uVar3 != 0x3e9) {
      if (uVar3 == 1) {
        hWnd = GetFocus();
        SetFocus(*(HWND *)(param_1 + 8));
        SetFocus(hWnd);
        return;
      }
      if (uVar3 != 1000) {
        return;
      }
      uVar3 = FUN_00445160(param_1);
      if (param_3 == uVar3) {
        return;
      }
      FUN_00445200(param_1,param_3);
      FUN_00446940(param_1);
      return;
    }
    if (param_3 == 1) {
      LVar4 = SendMessageA(param_4,0x147,0,0);
      FUN_00449e70(param_1,LVar4);
      DAT_0064767c = DAT_0064767c | 0x800;
      return;
    }
    if ((param_3 != 7) && (param_3 != 8)) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x198);
    if (param_3 == 7) {
      LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1a4),0x146,0,0);
      iVar7 = iVar7 * (LVar4 + 2);
    }
    BVar5 = GetWindowRect(param_4,local_31c);
    if (BVar5 == 0) {
      return;
    }
    local_324.x = local_31c[0].left;
    local_324.y = local_31c[0].top;
    BVar5 = ScreenToClient(*(HWND *)(param_1 + 8),&local_324);
    if (BVar5 == 0) {
      return;
    }
    MoveWindow(param_4,local_324.x,local_324.y,local_31c[0].right - local_31c[0].left,iVar7,0);
    return;
  }
  switch(uVar3) {
  case 0x4b2:
    FUN_00448910(param_1);
    return;
  default:
    goto switchD_0044a83e_caseD_4b3;
  case 0x4b5:
    LVar4 = SendMessageA(*(HWND *)(param_1 + 0x144),0x601,0,0);
    FUN_0044a420(param_1,LVar4);
    break;
  case 0x4b6:
    iVar7 = FUN_00445380(param_1,0x23b,0,0);
    if (iVar7 < 0) {
      return;
    }
    iVar7 = FUN_00445590(param_1);
    if (iVar7 < 0) {
      return;
    }
    iVar7 = FUN_00446f20(param_1);
    FUN_004457c0(param_1,iVar7 == 0);
    break;
  case 0x4c6:
    if ((((param_1 != 0) && (*(int *)(param_1 + 0xa8) == 5)) &&
        (piVar9 = *(int **)(param_1 + 0xb0), piVar9 != (int *)0x0)) &&
       (iVar7 = (**(code **)(*piVar9 + 0x28))(piVar9,&local_324), -1 < iVar7)) {
      (**(code **)(*unaff_ESI + 0x34))(unaff_ESI,auStack_210,0x104);
      if ((&stack0x00000000 == (undefined1 *)0x21c) || (aWStack_21c[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_21c,-1,(LPSTR)&local_324.y,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x320) {
        local_324.y = local_324.y & 0xffffff00;
      }
      uStack_21d = 0;
      pcVar6 = (char *)FUN_005ec620();
      if (*pcVar6 != '\0') {
        puVar8 = *(undefined4 **)(pcVar6 + 8);
        bVar1 = *(byte *)(puVar8 + 6);
        while ((bVar1 & 2) != 2) {
          iVar7 = lstrcmpiA((LPCSTR)&local_324.y,(LPCSTR)*puVar8);
          if (iVar7 == 0) break;
          if (iVar7 < 0) {
            puVar8 = (undefined4 *)puVar8[4];
          }
          else {
            puVar8 = (undefined4 *)puVar8[5];
          }
          bVar1 = *(byte *)(puVar8 + 6);
        }
        if ((*(byte *)(puVar8 + 6) & 2) != 2) {
          uVar2 = puVar8[1];
          FUN_00445cf0(param_1,&stack0xfffffcd0);
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10;
          SendMessageA(*(HWND *)(param_1 + 0x15c),0x411,0x4c6,5);
          FUN_0055bac0(*(undefined4 *)(param_1 + 8),uVar2,1);
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffef;
          FUN_00446020(param_1,&stack0xfffffcd0);
        }
      }
      (**(code **)(*piVar9 + 8))(piVar9);
      return;
    }
    goto switchD_0044a83e_caseD_4b3;
  }
  FUN_0044aa60(param_1);
  FUN_004464a0(param_1);
switchD_0044a83e_caseD_4b3:
  return;
}


