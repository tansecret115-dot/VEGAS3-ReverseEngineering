/* Module: vegas30.exe
   Function: FUN_0057d710
   Address: 0057d710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057d710(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *_Source;
  WPARAM WVar3;
  WPARAM wParam;
  WPARAM WVar4;
  byte *pbVar5;
  bool bVar6;
  HWND hDlg;
  int *local_1ac;
  HWND local_1a8;
  int local_1a4;
  undefined1 local_1a0 [122];
  byte local_126 [34];
  uchar local_104 [260];
  
  WVar4 = 0;
  local_1ac = (int *)0x0;
  local_1a4 = param_1;
  _SfWndCenter_16(*(undefined4 *)(param_1 + 4),0,0,0x8001);
  bVar6 = *(int *)(param_1 + 0x114) == 0;
  if (bVar6) {
    hDlg = *(HWND *)(param_1 + 4);
  }
  else {
    hDlg = *(HWND *)(param_1 + 4);
  }
  CheckDlgButton(hDlg,0x46f,(uint)!bVar6);
  local_1a8 = GetDlgItem(*(HWND *)(param_1 + 4),0x629);
  SendMessageA(local_1a8,0x14b,0,0);
  iVar2 = FUN_0057c950(local_1a0);
  if (((-1 < iVar2) && (iVar2 = FUN_0057c810(&local_1ac), -1 < iVar2)) &&
     (WVar3 = 0xffffffff, 0 < *local_1ac)) {
    do {
      _Source = (byte *)(local_1ac[1] * WVar4 + local_1ac[2] + 0x7a);
      _mbscpy(local_104,_Source);
      if (WVar3 == 0xffffffff) {
        pbVar5 = local_126;
        do {
          bVar1 = *_Source;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_0057d80b:
            iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_0057d810;
          }
          if (bVar1 == 0) break;
          bVar1 = _Source[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0057d80b;
          _Source = _Source + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_0057d810:
        wParam = WVar4;
        param_1 = local_1a4;
        if (iVar2 != 0) goto LAB_0057d820;
      }
      else {
LAB_0057d820:
        iVar2 = lstrcmpA((LPCSTR)(param_1 + 0x10),(LPCSTR)local_104);
        wParam = WVar3;
        if (iVar2 == 0) {
          wParam = WVar4;
        }
      }
      SendMessageA(local_1a8,0x143,0,(LPARAM)local_104);
      WVar4 = WVar4 + 1;
      WVar3 = wParam;
    } while ((int)WVar4 < *local_1ac);
    if (wParam != 0xffffffff) {
      SendMessageA(local_1a8,0x14e,wParam,0);
    }
  }
  if (local_1ac != (int *)0x0) {
    _SfList_Destroy_4(local_1ac);
  }
  return;
}


