/* Module: vegas30.exe
   Function: FUN_00444200
   Address: 00444200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444200(int param_1,HWND param_2)

{
  int iVar1;
  char *pcVar2;
  HWND pHVar3;
  int *unaff_EBX;
  BOOL BVar4;
  CHAR *pCStack_35c;
  int *piStack_358;
  undefined1 *puStack_354;
  undefined1 local_344 [36];
  CHAR aCStack_320 [259];
  undefined1 uStack_21d;
  WCHAR aWStack_21c [6];
  undefined1 auStack_210 [528];
  
  if ((((param_1 != 0) && (param_2 != (HWND)0x0)) && (*(int *)(param_1 + 0xa8) == 5)) &&
     (piStack_358 = *(int **)(param_1 + 0xb0), piStack_358 != (int *)0x0)) {
    puStack_354 = local_344;
    pCStack_35c = (CHAR *)0x44424b;
    iVar1 = (**(code **)(*piStack_358 + 0x28))();
    if (-1 < iVar1) {
      pCStack_35c = (CHAR *)0x104;
      (**(code **)(*unaff_EBX + 0x34))(unaff_EBX,auStack_210);
      if ((&stack0x00000000 == (undefined1 *)0x21c) || (aWStack_21c[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_21c,-1,aCStack_320,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x320) {
        aCStack_320[0] = '\0';
      }
      uStack_21d = 0;
      pcVar2 = (char *)FUN_005ec620();
      pCStack_35c = aCStack_320;
      if (*pcVar2 != '\0') {
        iVar1 = FUN_00436ff0(&pCStack_35c);
        if ((*(byte *)(iVar1 + 0x18) & 2) != 2) {
          iVar1 = **(int **)(*(int *)(*(int *)(iVar1 + 4) + 0x130) + 8);
          pCStack_35c = (CHAR *)(*(uint *)(*(int *)(iVar1 + 8) + 0x134) >> 5 & 1);
          if (((pCStack_35c == (CHAR *)0x0) &&
              (pCStack_35c = (CHAR *)(*(uint *)(iVar1 + 0x8c) & 1), pCStack_35c == (CHAR *)0x0)) &&
             (*(int *)(iVar1 + 4) == 3)) {
            puStack_354 = (undefined1 *)((uint)puStack_354 & 0xffffff00);
            _SfNanoTimeToTextEx_20
                      (&puStack_354,&DAT_0064b110,*(undefined4 *)(iVar1 + 0x20),
                       *(undefined4 *)(iVar1 + 0x24),2);
            pHVar3 = GetDlgItem(param_2,0x6627);
            SfSetWindowText(pHVar3,&puStack_354);
            pHVar3 = GetDlgItem(param_2,0x4c9);
            SfSetWindowText(pHVar3,&DAT_0061052c,*(undefined4 *)(*(int *)(iVar1 + 0x30) + 4));
            pHVar3 = GetDlgItem(param_2,0x4ca);
            SfSetWindowText(pHVar3,&DAT_0061052c,*(undefined4 *)(*(int *)(iVar1 + 0x30) + 8));
            BVar4 = 1;
            pHVar3 = GetDlgItem(param_2,0x505);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 1;
            pHVar3 = GetDlgItem(param_2,0x4c9);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 1;
            pHVar3 = GetDlgItem(param_2,0x4ca);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 1;
            pHVar3 = GetDlgItem(param_2,0x506);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 1;
            pHVar3 = GetDlgItem(param_2,0x6627);
            EnableWindow(pHVar3,BVar4);
          }
          else {
            BVar4 = 0;
            pHVar3 = GetDlgItem(param_2,0x505);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 0;
            pHVar3 = GetDlgItem(param_2,0x4c9);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 0;
            pHVar3 = GetDlgItem(param_2,0x4ca);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 0;
            pHVar3 = GetDlgItem(param_2,0x506);
            EnableWindow(pHVar3,BVar4);
            BVar4 = 0;
            pHVar3 = GetDlgItem(param_2,0x6627);
            EnableWindow(pHVar3,BVar4);
          }
        }
      }
      (**(code **)(*piStack_358 + 8))(piStack_358);
    }
  }
  return;
}


