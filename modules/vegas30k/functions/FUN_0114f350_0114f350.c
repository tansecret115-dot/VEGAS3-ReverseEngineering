/* Module: vegas30k.dll
   Function: FUN_0114f350
   Address: 0114f350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114f350(undefined4 *param_1)

{
  short sVar1;
  HRGN pHVar2;
  short *psVar3;
  int iVar4;
  tagRECT local_10;
  
  GetClientRect((HWND)*param_1,&local_10);
  local_10.left = param_1[0x1c];
  local_10.top = param_1[0x1d];
  param_1[0x1e] = local_10.left;
  param_1[0x1f] = local_10.top;
  param_1[0x20] = local_10.right;
  param_1[0x21] = local_10.bottom;
  if ((HRGN)param_1[0x41] == (HRGN)0x0) {
    pHVar2 = CreateRectRgn(local_10.left,local_10.top,local_10.right,local_10.bottom);
    param_1[0x41] = pHVar2;
  }
  else {
    SetRectRgn((HRGN)param_1[0x41],local_10.left,local_10.top,local_10.right,local_10.bottom);
  }
  iVar4 = param_1[0x19];
  if (iVar4 != 0) {
    psVar3 = (short *)(param_1[0x70] + 2);
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 8;
      local_10.left = local_10.left + sVar1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_10.bottom <= local_10.top) {
    local_10.top = local_10.bottom;
  }
  iVar4 = local_10.left + 1;
  if (local_10.right <= local_10.left + 1) {
    iVar4 = local_10.right;
  }
  param_1[0x22] = iVar4;
  param_1[0x23] = local_10.top;
  param_1[0x24] = local_10.right;
  param_1[0x25] = local_10.bottom;
  return;
}


