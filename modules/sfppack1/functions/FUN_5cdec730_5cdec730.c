/* Module: sfppack1.dll
   Function: FUN_5cdec730
   Address: 5cdec730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdec730(HWND param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  UINT UVar3;
  LPCSTR pCVar4;
  uint uVar5;
  tagRECT local_10;
  
  puVar1 = (uint *)GetWindowLongA(param_1,-0x15);
  uVar2 = 0;
  if (param_2 == 0x110) {
    SetWindowLongA(param_1,-0x15,(LONG)param_4);
    uVar2 = FUN_5cdeb950(param_1,param_4);
  }
  else if (param_2 == 0x111) {
    uVar5 = param_3 & 0xffff;
    switch(uVar5) {
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 100:
    case 0x65:
    case 0x66:
      if ((*puVar1 & 0x3000) == 0x1000) {
        UVar3 = IsDlgButtonChecked(param_1,300);
        *(UINT *)puVar1[7] = UVar3;
      }
      EndDialog(param_1,uVar5);
      return 1;
    case 2:
      if ((*puVar1 & 0xf) == 0) {
        uVar5 = 1;
      }
      if (puVar1[5] == 0) {
        if ((*puVar1 & 0x3000) == 0x1000) {
          UVar3 = IsDlgButtonChecked(param_1,300);
          *(UINT *)puVar1[7] = UVar3;
        }
        EndDialog(param_1,uVar5);
      }
      return 1;
    case 200:
      GetWindowRect(param_1,&local_10);
      if (puVar1[3] == 0) {
        pCVar4 = FUN_5cddcf00(DAT_5ce23828,0x10db);
        SetDlgItemTextA(param_1,200,pCVar4);
        uVar5 = puVar1[4];
      }
      else {
        pCVar4 = FUN_5cddcf00(DAT_5ce23828,0x10d9);
        SetDlgItemTextA(param_1,200,pCVar4);
        uVar5 = -puVar1[4];
      }
      SetWindowPos(param_1,(HWND)0x0,0,0,local_10.right - local_10.left,
                   (local_10.bottom - local_10.top) + uVar5,6);
      puVar1[3] = (uint)(puVar1[3] == 0);
      return 1;
    }
  }
  return uVar2;
}


