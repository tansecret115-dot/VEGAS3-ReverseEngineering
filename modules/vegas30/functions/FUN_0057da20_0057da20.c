/* Module: vegas30.exe
   Function: FUN_0057da20
   Address: 0057da20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057da20(int param_1)

{
  bool bVar1;
  HWND hWnd;
  uchar *_Source;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  tagRECT local_38;
  int local_28 [5];
  uchar *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  bVar1 = true;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x435);
  SendMessageA(hWnd,0x1009,0,0);
  SendMessageA(hWnd,0x1003,1,*(LPARAM *)(param_1 + 0x14));
  iVar4 = 0;
  while( true ) {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar5;
    }
    if (iVar2 <= iVar4) break;
    iVar2 = piVar5[1] * iVar4 + piVar5[2];
    if (iVar2 != 0) {
      _Source = (uchar *)_SfGetFileNamePtrA_4(iVar2);
      _mbscpy((uchar *)(iVar2 + 0x104),_Source);
      piVar5 = local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      local_28[0] = 0xf;
      local_28[2] = 0;
      if (bVar1) {
        bVar1 = false;
        local_28[3] = 3;
        local_28[4] = 3;
      }
      else {
        local_28[3] = 0;
        local_28[4] = 0;
      }
      local_10 = 0x104;
      local_c = 0;
      local_4 = 0;
      local_28[1] = iVar4;
      local_14 = (uchar *)(iVar2 + 0x104);
      local_8 = iVar2;
      SendMessageA(hWnd,0x1007,0,(LPARAM)local_28);
    }
    iVar4 = iVar4 + 1;
  }
  GetClientRect(hWnd,&local_38);
  SendMessageA(hWnd,0x101e,0,local_38.right & 0xffff);
  return;
}


