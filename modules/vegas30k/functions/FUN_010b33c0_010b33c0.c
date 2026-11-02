/* Module: vegas30k.dll
   Function: FUN_010b33c0
   Address: 010b33c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010b33c0(uint *param_1,HWND param_2,uint *param_3,uint param_4)

{
  HWND pHVar1;
  uint uVar2;
  HWND pHVar3;
  uint uVar4;
  HIMAGELIST p_Var5;
  uint uVar6;
  
  if (DAT_012062b8 == 0) {
    DAT_01206410 = 0x10;
    DAT_01206414 = 0x10;
    DAT_01206418 = 0x1e;
    DAT_0120641c = 10;
    _DAT_01206440 = 0;
    _DAT_01206444 = 0x3ff00000;
    SetRectEmpty((LPRECT)&DAT_01206420);
    InflateRect((LPRECT)&DAT_01206420,6,6);
    SetRectEmpty((LPRECT)&DAT_01206430);
    InflateRect((LPRECT)&DAT_01206430,8,8);
    DAT_01206448 = CreateCompatibleDC((HDC)0x0);
  }
  DAT_012062b8 = DAT_012062b8 + 1;
  param_1[0xf] = (uint)param_2;
  *param_1 = param_3[8];
  param_1[0x10] = param_3[2];
  param_1[1] = (uint)(param_2 == (HWND)param_3[3]) << 2 | param_1[1] & 0xfffffffb;
  param_1[0xa6] = *param_3;
  param_1[0xa7] = param_4;
  param_1[0x11] = 0;
  pHVar1 = (HWND)param_3[3];
  pHVar3 = GetParent(param_2);
  if (pHVar3 != pHVar1) {
    param_1[0x11] = (uint)pHVar1;
  }
  uVar4 = param_1[1];
  param_1[0xc] = 100;
  param_1[0xe] = 100;
  param_1[1] = *param_1 >> 0x1b & 1 | uVar4 & 0xfffffffe;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0xff;
  param_1[2] = 0;
  uVar6 = 0;
  do {
    if ((char)(1 << ((byte)uVar6 & 0x1f)) != '\0') {
      param_1[2] = param_1[2] + 1;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x27] = 0;
  param_1[100] = 0;
  param_1[99] = 0xffffffff;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  if ((*param_1 & 1) == 0) {
    param_1[0x29] = (uint)&DAT_012063a8;
    param_1[0x28] = (uint)&DAT_01206340;
  }
  else {
    param_1[0x29] = (uint)&DAT_012063dc;
    param_1[0x28] = (uint)&DAT_01206374;
  }
  if ((uVar4 & 4) == 0) {
    uVar2 = param_3[6];
    uVar4 = param_3[4] + uVar2;
    uVar6 = param_3[5] + param_3[7];
    param_1[0x16] = param_3[7];
    param_1[0x17] = uVar2;
  }
  else {
    uVar4 = param_3[4];
    uVar6 = param_3[5];
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  param_1[0x18] = uVar6;
  param_1[0x19] = uVar4;
  uVar4 = FUN_010af310(param_1);
  param_1[1] = ((*param_1 >> 4 & 1) << 1 | uVar4 & 1) << 3 | param_1[1] & 0xffffff07;
  param_1[0x3e] = 0;
  p_Var5 = ImageList_Create(1,1,0xff,0x11,0);
  param_1[0x3f] = (uint)p_Var5;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0xa5] = 0;
  param_1[1] = param_1[1] & 0xffffc7ff;
  FUN_010b1650(param_1,0,param_3[5],param_3[4]);
  return 1;
}


