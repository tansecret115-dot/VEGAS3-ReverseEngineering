/* Module: vegas30.exe
   Function: FUN_00598cd0
   Address: 00598cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00598cd0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  HWND hWnd;
  char *pcVar3;
  int iVar4;
  uchar *_Source;
  int iVar5;
  int iVar6;
  int *piVar7;
  tagRECT local_38;
  int local_28 [6];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  hWnd = GetDlgItem((HWND)*param_1,0x435);
  SendMessageA(hWnd,0x1009,0,0);
  SendMessageA(hWnd,0x1003,1,param_1[2]);
  pcVar3 = (char *)FUN_005ec620();
  if (pcVar3 != (char *)0x0) {
    iVar4 = 0;
    bVar2 = true;
    param_1 = (undefined4 *)0x0;
    if ((*pcVar3 != '\0') && (iVar4 = *(int *)(pcVar3 + 8), (*(byte *)(iVar4 + 0x18) & 2) != 2)) {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar5 = *(int *)(iVar4 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
        iVar4 = iVar5;
        iVar5 = *(int *)(iVar5 + 0x10);
      }
    }
    while( true ) {
      if (*pcVar3 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pcVar3 + 0xc);
      }
      if (iVar4 == iVar5) break;
      iVar5 = *(int *)(iVar4 + 4);
      if (param_2 != 0) {
        _Source = (uchar *)_SfGetFileNamePtrA_4(iVar5 + 0x170);
        _mbscpy((uchar *)(iVar5 + 4),_Source);
      }
      if ((*(byte *)(iVar5 + 0x134) & 8) != 0) {
        piVar7 = local_28;
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_28[0] = 0xf;
        local_28[1] = (int)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        local_28[2] = 0;
        if (bVar2) {
          bVar2 = false;
          local_28[3] = 3;
          local_28[4] = 3;
        }
        else {
          local_28[3] = 0;
          local_28[4] = 0;
        }
        local_28[5] = iVar5 + 4;
        local_10 = 0x104;
        local_c = 0;
        local_4 = 0;
        local_8 = iVar5;
        SendMessageA(hWnd,0x1007,0,(LPARAM)local_28);
      }
      FUN_00436e20();
    }
  }
  GetClientRect(hWnd,&local_38);
  SendMessageA(hWnd,0x101e,0,local_38.right & 0xffff);
  return;
}


