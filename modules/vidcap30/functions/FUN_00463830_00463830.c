/* Module: vidcap30.exe
   Function: FUN_00463830
   Address: 00463830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463830(HWND param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  HWND pHVar4;
  uint uVar5;
  uchar *_Source;
  WPARAM wParam;
  LRESULT bEnable;
  undefined4 *puVar6;
  int lParam;
  uint local_10c;
  uchar local_104 [260];
  
  pHVar4 = GetDlgItem(param_1,0xe8e);
  local_10c = 0;
  uVar1 = *(uint *)param_2[1];
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_2[1] + 8) + local_10c * 4);
      uVar3 = **(uint **)*param_2;
      uVar5 = 0;
      if (uVar3 != 0) {
        puVar6 = (undefined4 *)(*(uint **)*param_2)[2];
        do {
          if (*(int *)*puVar6 == *piVar2) break;
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar5 < uVar3);
      }
      if (uVar5 == uVar3) {
        _Source = (uchar *)_SfGetString_8(DAT_005ba2a0,piVar2[1]);
        _mbscpy(local_104,_Source);
        lParam = *piVar2;
        wParam = SendMessageA(pHVar4,0x180,0,(LPARAM)local_104);
        SendMessageA(pHVar4,0x19a,wParam,lParam);
      }
      local_10c = local_10c + 1;
    } while (local_10c < uVar1);
  }
  SendMessageA(pHVar4,0x186,0,0);
  bEnable = SendMessageA(pHVar4,0x18b,0,0);
  if (bEnable == 0) {
    pHVar4 = GetDlgItem(param_1,0xe3b);
    EnableWindow(pHVar4,bEnable);
  }
  return;
}


