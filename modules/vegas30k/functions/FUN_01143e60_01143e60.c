/* Module: vegas30k.dll
   Function: FUN_01143e60
   Address: 01143e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01143e60(int param_1,undefined4 param_2)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  uchar **ppuVar3;
  uchar *local_128 [9];
  uchar local_104 [260];
  
  hWnd = *(HWND *)(param_1 + 0x14);
  ppuVar3 = local_128;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar3 = (uchar *)0x0;
    ppuVar3 = ppuVar3 + 1;
  }
  local_128[2] = local_104;
  local_128[0] = (uchar *)0x1;
  local_128[3] = (uchar *)0x104;
  local_128[1] = (uchar *)param_2;
  SendMessageA(hWnd,0x404,0,(LPARAM)local_128);
  if (((*(int **)(param_1 + 0xbac) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0xbac), iVar1 != 0)) && ((*(byte *)(param_1 + 0x4e0) & 1) != 0))
  {
    _mbscat(local_104,"\\");
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        _mbscat(local_104,*(uchar **)(*(int *)(*(int *)(param_1 + 0xbac) + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
        if (iVar2 == iVar1) break;
        _mbscat(local_104,";");
      } while (iVar2 < iVar1);
    }
  }
  SendMessageA(hWnd,0x405,0,(LPARAM)local_128);
  return;
}


