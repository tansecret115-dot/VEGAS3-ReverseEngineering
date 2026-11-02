/* Module: vegas30.exe
   Function: FUN_0042b5f0
   Address: 0042b5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b5f0(HWND param_1,undefined4 param_2)

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
  pHVar1 = GetDlgItem(param_1,0x435);
  WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (WVar5 == 0xffffffff) {
    return 0x8000ffff;
  }
  LVar6 = 0;
  UVar4 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x435);
  LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  uVar3 = (**(code **)(*DAT_0064b510 + 0x34))(DAT_0064b510,param_2,LVar2);
  return uVar3;
}


