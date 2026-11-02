/* Module: vidpcore.dll
   Function: FUN_5dea8c20
   Address: 5dea8c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5dea8c20(HWND param_1,int param_2,int param_3)

{
  LONG LVar1;
  uint uVar2;
  HWND hWnd;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  double local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [32];
  
  LVar1 = GetWindowLongA(param_1,0);
  local_48 = param_2 - *(int *)(LVar1 + 0x31c);
  local_44 = param_3 - *(int *)(LVar1 + 800);
  FUN_5dea5440(LVar1,&local_30);
  FUN_5ded1cd0(local_20,LVar1 + 0x158);
  switch(*(undefined4 *)(LVar1 + 0x13c)) {
  case 3:
    FUN_5dea4e10(&local_48,LVar1 + 0x188,&local_40);
    local_30 = (float)(double)CONCAT44(uStack_3c,local_40);
    FUN_5dea5060(LVar1,&local_30);
    FUN_5dea8e10(LVar1,3,&local_48,1);
    break;
  case 4:
    FUN_5dea4e10(&local_48,LVar1 + 0x198,&local_40);
    local_2c = (float)(double)CONCAT44(uStack_3c,local_40);
    FUN_5dea5060(LVar1,&local_30);
    break;
  case 5:
    FUN_5dea4e10(&local_48,LVar1 + 0x1a8,&local_40);
    local_28 = (float)(double)CONCAT44(uStack_3c,local_40);
    FUN_5dea5060(LVar1,&local_30);
    break;
  case 6:
    FUN_5dea4e10(&local_48,LVar1 + 0x1c8,&local_40);
    local_24 = (float)((float10)_DAT_5df18830 - (float10)local_38);
    FUN_5dea5060(LVar1,&local_30);
    break;
  default:
    goto switchD_5dea8c82_caseD_7;
  case 8:
    FUN_5dea4e10(&local_48,LVar1 + 0x1b8,&local_40);
    if (_DAT_5df18838 < (double)CONCAT44(uStack_3c,local_40)) {
      *(undefined4 *)(LVar1 + 0x130) = 0;
    }
    else {
      *(undefined4 *)(LVar1 + 0x130) = 1;
    }
    if (*(int *)(LVar1 + 300) != 0) {
      local_40 = 0;
      uStack_3c = 0xbff00000;
    }
    FUN_5dea5f10(LVar1 + 0x158,&local_40);
  }
  FUN_5dea8a30(*(undefined4 *)(LVar1 + 8));
  hWnd = *(HWND *)(LVar1 + 8);
  uVar2 = GetDlgCtrlID(hWnd);
  PostMessageA(*(HWND *)(LVar1 + 0xc),0x111,uVar2 & 0xffff | 0x7000000,(LPARAM)hWnd);
switchD_5dea8c82_caseD_7:
  return 1;
}


