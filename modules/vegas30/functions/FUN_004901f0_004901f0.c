/* Module: vegas30.exe
   Function: FUN_004901f0
   Address: 004901f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004901f0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  WPARAM WVar3;
  int iVar4;
  uint local_10c;
  int local_108;
  undefined1 local_104 [260];
  
  hWnd = *(HWND *)(param_1 + 0x88);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x14b,0,0);
    local_10c = 0;
    if (*(int *)(param_1 + 0xa0 + param_2 * 8) != 0) {
      local_108 = 0;
      do {
        WVar3 = SendMessageA(hWnd,0x143,0,
                             *(LPARAM *)(local_108 + *(int *)(param_1 + 0x9c + param_2 * 8)));
        if (((WVar3 != 0xffffffff) && (WVar3 != 0xfffffffe)) &&
           (SendMessageA(hWnd,0x151,WVar3,local_10c), local_10c == param_3)) {
          SendMessageA(hWnd,0x14e,WVar3,0);
        }
        local_108 = local_108 + 0x14;
        local_10c = local_10c + 1;
      } while (local_10c < *(uint *)(param_1 + 0xa0 + param_2 * 8));
    }
    if (param_2 != 0) {
      iVar2 = param_2 * 0xe;
      uVar1 = iVar2 - 0xe;
      local_10c = uVar1;
      if (uVar1 <= iVar2 - 1U) {
        do {
          iVar4 = _SfGetMetricStringEx_24(DAT_00647200,local_10c,local_104,0x104,0,1);
          if (iVar4 == 0) {
            return;
          }
          WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
          if (((WVar3 != 0xffffffff) && (WVar3 != 0xfffffffe)) &&
             (SendMessageA(hWnd,0x151,WVar3,
                           (*(int *)(param_1 + 0xa0 + param_2 * 8) - uVar1) + local_10c),
             (*(int *)(param_1 + 0xa0 + param_2 * 8) - uVar1) + local_10c == param_3)) {
            SendMessageA(hWnd,0x14e,WVar3,0);
          }
          local_10c = local_10c + 1;
        } while (local_10c <= iVar2 - 1U);
      }
    }
  }
  return;
}


