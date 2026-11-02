/* Module: vegas30k.dll
   Function: FUN_01059ec0
   Address: 01059ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01059ec0(HWND param_1,int param_2,uint param_3,LONG param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  UINT UVar4;
  LPCSTR pCVar5;
  tagRECT local_10;
  
  puVar2 = (uint *)GetWindowLongA(param_1,-0x15);
  uVar3 = 0;
  if (param_2 == 0x110) {
    SetWindowLongA(param_1,-0x15,param_4);
    uVar3 = FUN_010590e0(param_1,param_4);
  }
  else if (param_2 == 0x111) {
    param_3 = param_3 & 0xffff;
    switch(param_3) {
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 100:
    case 0x65:
    case 0x66:
      if ((*puVar2 & 0x3000) == 0x1000) {
        UVar4 = IsDlgButtonChecked(param_1,300);
        *(UINT *)puVar2[7] = UVar4;
      }
      EndDialog(param_1,param_3);
      return 1;
    case 2:
      if ((*puVar2 & 0xf) == 0) {
        param_3 = 1;
      }
      if (puVar2[5] == 0) {
        if ((*puVar2 & 0x3000) == 0x1000) {
          UVar4 = IsDlgButtonChecked(param_1,300);
          *(UINT *)puVar2[7] = UVar4;
        }
        EndDialog(param_1,param_3);
      }
      return 1;
    case 200:
      GetWindowRect(param_1,&local_10);
      if (puVar2[3] == 0) {
        pCVar5 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10dc);
        SetDlgItemTextA(param_1,200,pCVar5);
        uVar1 = puVar2[4];
      }
      else {
        pCVar5 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10da);
        SetDlgItemTextA(param_1,200,pCVar5);
        uVar1 = -puVar2[4];
      }
      SetWindowPos(param_1,(HWND)0x0,0,0,local_10.right - local_10.left,
                   (local_10.bottom - local_10.top) + uVar1,6);
      puVar2[3] = (uint)(puVar2[3] == 0);
      return 1;
    }
  }
  return uVar3;
}


