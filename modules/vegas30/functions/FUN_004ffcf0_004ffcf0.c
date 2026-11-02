/* Module: vegas30.exe
   Function: FUN_004ffcf0
   Address: 004ffcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ffcf0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(HWND *)(param_1 + 0x84) == (HWND)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)GetWindowLongA(*(HWND *)(param_1 + 0x84),0);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xffffff65:
    if (*(short *)(param_2 + 0xc) == 0x1b) {
      SendMessageA(*(HWND *)(param_1 + 8),0x1f,0,0);
      return 0;
    }
    if (*(short *)(param_2 + 0xc) == 9) {
      SendMessageA(*(HWND *)(param_1 + 8),0x1f,0,0);
      FUN_004faff0(puVar1);
      SetFocus(*(HWND *)(param_1 + 0x84));
    }
    break;
  case 0xffffff91:
  case 0xffffff93:
    iVar2 = FUN_004fb660(puVar1,0);
    if (iVar2 != 0) {
      SetFocus(*(HWND *)(param_1 + 0x88));
      puVar1[3] = puVar1[3] & 0xfffffdff;
      puVar1[0xd] = 5;
      SetCapture((HWND)*puVar1);
      return 1;
    }
    break;
  case 0xffffff9b:
    if (((*(byte *)(param_2 + 0x1c) & 8) != 0) && ((*(byte *)(param_2 + 0x14) & 1) != 0)) {
      FUN_004fa530(puVar1,0);
      FUN_004fcff0(puVar1);
      iVar2 = *(int *)(*(int *)(puVar1[0x5e] + 8) + *(int *)(param_2 + 0x28) * 4);
      puVar1[0x60] = *(int *)(param_2 + 0x28);
      FUN_004fece0(puVar1);
      FUN_004fb050(puVar1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(iVar2 + 0x150),0,1,1);
      FUN_004fa690(puVar1);
      FUN_004fa690(puVar1);
      InvalidateRect((HWND)*puVar1,(RECT *)0x0,0);
      goto switchD_004ffd33_caseD_fffffff9;
    }
    break;
  case 0xfffffff8:
    FUN_004fa530(puVar1,0);
    return 0;
  case 0xfffffff9:
switchD_004ffd33_caseD_fffffff9:
    FUN_004fa530(puVar1,1);
    return 0;
  case 0xfffffffa:
  case 0xfffffffb:
  case 0xfffffffd:
  case 0xfffffffe:
    if (*(int *)(param_2 + 0xc) == -1) {
      FUN_004ff360(param_1);
      return 0;
    }
  }
  return 0;
}


