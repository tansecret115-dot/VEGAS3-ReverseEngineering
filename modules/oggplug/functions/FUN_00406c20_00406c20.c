/* Module: oggplug.dll
   Function: FUN_00406c20
   Address: 00406c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00406c20(void *this,undefined2 *param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d4);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (WVar2 == 0xffffffff) {
    return 0;
  }
  LVar3 = SendMessageA(pHVar1,0x150,WVar2,0);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d6);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  if (WVar2 == 0xffffffff) {
    return 0;
  }
  LVar4 = SendMessageA(pHVar1,0x150,WVar2,0);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + 0x424) + 0x12) = 1;
  param_1[1] = (short)LVar4;
  param_1[6] = (short)(LVar4 * 2);
  *(LRESULT *)(param_1 + 2) = LVar3;
  *(uint *)(param_1 + 4) = (LVar4 * 2 & 0xffffU) * LVar3;
  *param_1 = 1;
  param_1[7] = 0x10;
  param_1[8] = 0;
  return 1;
}


