/* Module: vegas30k.dll
   Function: FUN_0114edf0
   Address: 0114edf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114edf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  tagRECT local_2c;
  tagMSG local_1c;
  
  if (param_4 != 0) {
    if (((param_4 & 8) != 0) &&
       (BVar1 = PeekMessageA(&local_1c,(HWND)*param_1,0x41a,0x41a,2), BVar1 == 0)) {
      PostMessageA((HWND)*param_1,0x41a,0,0);
    }
    FUN_0114e800(param_1,param_3,&local_2c);
    FUN_0114e8b0(param_1,param_2,&local_2c);
    InflateRect(&local_2c,2,2);
    if (((param_4 & 0x80) != 0) && ((param_4 & 2) == 0)) {
      param_4 = (uint)((byte)param_4 & 0x7f);
      uVar3 = 0;
      if (param_1[0x18] != 0) {
        do {
          if ((uVar3 < (uint)param_1[0x19]) || ((uint)param_1[0x2e] <= uVar3)) {
            uVar2 = (*(code *)param_1[0x89])(param_1 + 0x72,param_3,uVar3);
            param_4 = param_4 & 0xfffffffe | uVar2;
            if ((param_4 & 2) != 0) break;
            if ((uVar2 & 1) != 0) {
              FUN_0114e800(param_1,uVar3,&local_1c);
              FUN_0114e8b0(param_1,param_2,&local_1c);
              InvalidateRect((HWND)*param_1,(RECT *)&local_1c,1);
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_1[0x18]);
      }
    }
    if ((param_4 & 2) != 0) {
      local_2c.left = param_1[0x1e];
      local_2c.right = param_1[0x20];
    }
    if ((param_4 & 4) != 0) {
      local_2c.top = param_1[0x1f];
      local_2c.bottom = param_1[0x21];
    }
    if ((param_4 & 0x20) != 0) {
      local_2c.left = 0;
    }
    if ((param_4 & 0x40) != 0) {
      local_2c.top = 0;
    }
    InvalidateRect((HWND)*param_1,&local_2c,1);
  }
  return;
}


