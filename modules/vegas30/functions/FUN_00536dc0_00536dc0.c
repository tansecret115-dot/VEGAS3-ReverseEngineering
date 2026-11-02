/* Module: vegas30.exe
   Function: FUN_00536dc0
   Address: 00536dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00536dc0(HWND param_1,undefined4 param_2,undefined4 param_3)

{
  HWND pHVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x3ec);
  WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (WVar5 == 0xffffffff) {
    return 0x8000ffff;
  }
  LVar6 = 0;
  UVar4 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x3ec);
  LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  uVar3 = (**(code **)(*DAT_0064b510 + 0x34))(DAT_0064b510,param_3,LVar2);
  return uVar3;
}


