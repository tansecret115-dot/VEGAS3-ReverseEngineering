/* Module: vegas30.exe
   Function: FUN_005166f0
   Address: 005166f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005166f0(int *param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  HWND *ppHVar5;
  double dVar6;
  tagPOINT local_b8;
  tagRECT local_b0;
  tagRECT local_a0;
  HWND local_90 [4];
  tagRECT local_80;
  int *local_6c;
  float local_64 [8];
  float local_44;
  float local_40;
  float local_24;
  float local_20;
  double local_14;
  
  uVar2 = param_1[0x4e];
  if (param_4 == (int)(uVar2 << 0x1f) >> 0x1f) {
    return;
  }
  ppHVar5 = local_90;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppHVar5 = (HWND)0x0;
    ppHVar5 = ppHVar5 + 1;
  }
  local_90[2] = (HWND)param_1[1];
  local_90[0] = (HWND)0x2c;
  local_90[3] = (HWND)0x1;
  if (param_4 == 0) {
    param_1[0x4e] = uVar2 & 0xfffffffe;
    SendMessageA((HWND)param_1[0x53],0x401,0,0);
    return;
  }
  if (((uVar2 & 1) == 0) && ((*(byte *)(param_1 + 3) & 1) == 0)) {
    SetTimer(*(HWND *)(*param_1 + 0x180),0x65,1000,(TIMERPROC)0x0);
    return;
  }
  piVar1 = param_1 + 0x56;
  local_6c = piVar1;
  GetClientRect(local_90[2],&local_80);
  iVar4 = *(int *)(*param_1 + 0x98);
  FUN_0050db20(local_64,iVar4,*(undefined4 *)(iVar4 + 0x88),*(undefined4 *)(iVar4 + 0x8c),
               *(undefined4 *)(iVar4 + 0x9c),0,0,0,0,0);
  switch(param_2) {
  case 0:
  case 2:
  case 4:
  case 6:
    FUN_005a61e0(local_64,local_64);
    SfPrintF(piVar1,"x = $0.1f$, y = $0.1f",(double)local_64[(param_2 / 2) * 4],
             (double)local_64[(param_2 / 2) * 4 + 1]);
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    FUN_005a61e0(local_64,local_64);
    if (param_2 == 7) {
      SfPrintF(piVar1,"x = $0.1f",(double)local_64[0]);
    }
    else if (param_2 == 3) {
      SfPrintF(piVar1,"x = $0.1f",(double)local_44);
    }
    else if (param_2 == 1) {
      SfPrintF(piVar1,"y = $0.1f",(double)local_64[1]);
    }
    else {
      SfPrintF(piVar1,"y = $0.1f",(double)local_40);
    }
    break;
  case 8:
    if (param_5 != 0) {
      dVar6 = local_14 * _DAT_0061a4d8;
      uVar3 = _SfGetString_8(DAT_00647204,0x6993);
      SfPrintF(piVar1,uVar3,dVar6);
      break;
    }
  default:
    param_4 = 0;
    break;
  case 9:
    SfPrintF(piVar1,"x = $0.1f$, y = $0.1f",(double)local_24,(double)local_20);
    break;
  case 0xd:
    if (*(int *)(iVar4 + 8) == 0x3f800000) {
      _SfLoadString_16(DAT_00647204,0x6979,piVar1,0x104);
    }
    else {
      _SfLoadString_16(DAT_00647204,27000,piVar1,0x104);
    }
    break;
  case 0xe:
  case 0xf:
    _SfLoadString_16(DAT_00647204,0x697a,piVar1,0x104);
    break;
  case 0x10:
    SfPrintF(piVar1,"y = $0.1f",(double)(float)param_1[0x36]);
    break;
  case 0x11:
    SfPrintF(piVar1,"x = $0.1f",(double)(float)param_1[0x35]);
  }
  SendMessageA((HWND)param_1[0x53],0x40c,0,(LPARAM)local_90);
  SendMessageA((HWND)param_1[0x53],0x401,param_4,0);
  param_1[0x4e] = (param_1[0x4e] ^ param_4) & 1 ^ param_1[0x4e];
  if (param_4 == 0) {
    return;
  }
  GetWindowRect((HWND)param_1[1],&local_b0);
  GetWindowRect((HWND)param_1[0x53],&local_a0);
  GetCursorPos(&local_b8);
  local_b8.x = local_b8.x + 10;
  local_b8.y = local_b8.y + 10;
  if ((local_b8.x < local_b0.left) ||
     (local_b0.left = local_b0.right - (local_a0.right - local_a0.left), local_b0.left < local_b8.x)
     ) {
    local_b8.x = local_b0.left;
  }
  if ((local_b8.y < local_b0.top) ||
     (local_b0.top = local_b0.bottom - (local_a0.bottom - local_a0.top), local_b0.top < local_b8.y))
  {
    local_b8.y = local_b0.top;
  }
  local_90[1] = (HWND)0x1a0;
  SendMessageA((HWND)param_1[0x53],0x409,0,(LPARAM)local_90);
  SendMessageA((HWND)param_1[0x53],0x412,0,local_b8.y << 0x10 | local_b8.x & 0xffffU);
  SendMessageA((HWND)param_1[0x53],0x411,1,(LPARAM)local_90);
  return;
}


