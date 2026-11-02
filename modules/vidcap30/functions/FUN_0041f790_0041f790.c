/* Module: vidcap30.exe
   Function: FUN_0041f790
   Address: 0041f790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f790(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  WPARAM wParam;
  undefined4 local_20 [8];
  
  puVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  wParam = 0;
  local_20[0] = 7;
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_2 + 0xc);
    do {
      local_20[1] = puVar2[-1];
      local_20[2] = *puVar2;
      local_20[3] = _SfGetString_8(DAT_005ba2a0,puVar2[-2]);
      SendMessageA(param_1,0x101b,wParam,(LPARAM)local_20);
      wParam = wParam + 1;
      puVar2 = puVar2 + 4;
    } while ((int)wParam < param_3);
  }
  return;
}


