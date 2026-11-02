/* Module: Setup.exe
   Function: _SfMonitor_CenterWindow@4
   Address: 00413590
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_CenterWindow_4(HWND param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  int unaff_EDI;
  HWND pHVar2;
  int iVar3;
  tagRECT local_38;
  int iStack_28;
  
                    /* 0x13590  280  _SfMonitor_CenterWindow@4 */
  GetWindowRect(param_1,&local_38);
  iVar3 = 2;
  pHVar2 = param_1;
  uVar1 = (*DAT_0044908c)();
  local_38.right = 0x28;
  (*DAT_00449080)(uVar1,&local_38.right);
  SetWindowPos(param_1,(HWND)0x0,
               (((local_38.bottom - local_38.top) - unaff_EDI) + (int)pHVar2) / 2 + local_38.top,
               (((iStack_28 - local_38.right) - unaff_ESI) + iVar3) / 2 + local_38.right,0,0,0x15);
  return;
}


