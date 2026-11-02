/* Module: vegas30.exe
   Function: FUN_00444450
   Address: 00444450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00444450(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  HWND pHVar5;
  int iVar6;
  int *unaff_EBX;
  int unaff_ESI;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  int *local_360;
  undefined4 local_35c;
  int local_358 [4];
  undefined1 local_348;
  CHAR aCStack_320 [259];
  undefined1 uStack_21d;
  WCHAR aWStack_21c [6];
  undefined1 auStack_210 [516];
  HWND pHStack_c;
  
  iVar7 = 1;
  local_35c = 1;
  if ((((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_1 + 0xa8) != 5)) ||
     (*(int *)(param_1 + 0xb0) == 0)) {
    return 1;
  }
  piVar2 = (int *)(param_3 >> 0x10);
  param_3 = param_3 & 0xffff;
  local_348 = 0;
  local_360 = piVar2;
  FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
  piVar10 = local_358;
  iVar3 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x28))(*(int **)(param_1 + 0xb0));
  if (iVar3 < 0) goto LAB_0044490a;
  (**(code **)(*local_360 + 0x34))(local_360,auStack_210,0x104);
  if ((&stack0x00000000 == (undefined1 *)0x21c) || (aWStack_21c[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_21c,-1,aCStack_320,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x320) {
    aCStack_320[0] = '\0';
  }
  uStack_21d = 0;
  pcVar4 = (char *)FUN_005ec620();
  iVar7 = unaff_ESI;
  if (*pcVar4 != '\0') {
    puVar8 = *(undefined4 **)(pcVar4 + 8);
    bVar1 = *(byte *)(puVar8 + 6);
    while ((bVar1 & 2) != 2) {
      piVar2 = piVar10;
      iVar3 = lstrcmpiA(aCStack_320,(LPCSTR)*puVar8);
      if (iVar3 == 0) break;
      if (iVar3 < 0) {
        puVar8 = (undefined4 *)puVar8[4];
      }
      else {
        puVar8 = (undefined4 *)puVar8[5];
      }
      piVar10 = piVar2;
      bVar1 = *(byte *)(puVar8 + 6);
    }
    if ((((*(byte *)(puVar8 + 6) & 2) != 2) &&
        (iVar3 = **(int **)(*(int *)(puVar8[1] + 0x130) + 8),
        (*(uint *)(*(int *)(iVar3 + 8) + 0x134) >> 5 & 1) == 0)) &&
       (((*(uint *)(iVar3 + 0x8c) & 1) == 0 && (*(int *)(iVar3 + 4) == 3)))) {
      if (param_3 == 0x4c9) {
        if ((piVar2 != (int *)0x100) && ((piVar2 == (int *)0x200 || (piVar2 == (int *)0x501)))) {
          pHVar5 = GetDlgItem(pHStack_c,0x4c9);
          GetWindowTextA(pHVar5,(LPSTR)&local_35c,0x3c);
          iVar6 = _SfTextToLongTokenEx_20
                            (&local_35c,*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4),8,0x800,0);
          if (iVar6 != *(int *)(*(int *)(iVar3 + 0x30) + 4)) {
            FUN_00445380(param_1,0x32,0,0);
            FUN_00445590(param_1);
            *(int *)(*(int *)(iVar3 + 0x30) + 4) = iVar6;
            SfSetWindowText(pHVar5,&DAT_0061052c,*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4));
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10;
            iVar7 = *(int *)(*(int *)(iVar3 + 0x30) + 8);
            FUN_005f56b0(*(undefined4 *)(param_1 + 0x88),iVar3,&stack0xfffffc98);
            *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) & 0xffffff7f;
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffef;
            FUN_004457c0(param_1,0);
          }
        }
      }
      else if (param_3 == 0x4ca) {
        if ((piVar2 != (int *)0x100) && ((piVar2 == (int *)0x200 || (piVar2 == (int *)0x501)))) {
          pHVar5 = GetDlgItem(pHStack_c,0x4ca);
          GetWindowTextA(pHVar5,(LPSTR)&local_35c,0x3c);
          iVar6 = _SfTextToLongTokenEx_20
                            (&local_35c,*(undefined4 *)(*(int *)(iVar3 + 0x30) + 8),8,0x800,0);
          if (iVar6 != *(int *)(*(int *)(iVar3 + 0x30) + 8)) {
            FUN_00445380(param_1,0x32,0,0);
            FUN_00445590(param_1);
            *(int *)(*(int *)(iVar3 + 0x30) + 8) = iVar6;
            SfSetWindowText(pHVar5,&DAT_0061052c,*(undefined4 *)(*(int *)(iVar3 + 0x30) + 8));
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10;
            unaff_ESI = *(int *)(*(int *)(iVar3 + 0x30) + 8);
            FUN_005f56b0(*(undefined4 *)(param_1 + 0x88),iVar3,&stack0xfffffc98);
            *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) & 0xffffff7f;
            goto LAB_004446e6;
          }
        }
      }
      else if (((param_3 == 0x6627) && (piVar2 != (int *)0x100)) &&
              ((piVar2 == (int *)0x200 || (piVar2 == (int *)0x501)))) {
        pHVar5 = GetDlgItem(pHStack_c,0x6627);
        GetWindowTextA(pHVar5,(LPSTR)&local_35c,0x3c);
        uVar9 = _SfTextToNanoTimeToken2_40
                          (&local_35c,&DAT_0064b110,*(undefined4 *)(iVar3 + 0x20),
                           *(undefined4 *)(iVar3 + 0x24),0,0,0,0x40000000,6,&local_360);
        if (((int)uVar9 == *(int *)(iVar3 + 0x20)) &&
           ((int)((ulonglong)uVar9 >> 0x20) == *(int *)(iVar3 + 0x24))) {
          InvalidateRect(*(HWND *)(param_1 + 300),(RECT *)0x0,1);
        }
        else {
          FUN_00445380(param_1,0x32,0,0);
          FUN_00445590(param_1);
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10;
          *(undefined8 *)(iVar3 + 0x20) = uVar9;
          _SfNanoTimeToTextEx_20(&local_35c,&DAT_0064b110,uVar9,2);
          SfSetWindowText(pHVar5,&DAT_0060fa70,&local_35c);
          FUN_005f5810(*(undefined4 *)(param_1 + 0x88),iVar3,*(undefined4 *)(iVar3 + 0x20),
                       *(undefined4 *)(iVar3 + 0x24));
LAB_004446e6:
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffef;
          FUN_004457c0(param_1,0);
          iVar7 = unaff_ESI;
        }
      }
    }
  }
  (**(code **)(*unaff_EBX + 8))(unaff_EBX);
LAB_0044490a:
  FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
  if (iVar7 == 0) {
    DAT_0064767c = DAT_0064767c | 0x900;
    *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 0x100;
  }
  return iVar7;
}


