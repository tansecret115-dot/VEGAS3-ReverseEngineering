/* Module: vegas30k.dll
   Function: FUN_0103cf20
   Address: 0103cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0103cf20(int *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x94))(param_1);
  if (param_1[0xe0] == 0) {
    hMem = GlobalAlloc(0x40,0xe8);
    pvVar1 = GlobalLock(hMem);
    if (pvVar1 == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_01135ac0(param_1);
    }
    param_1[0xe0] = iVar2;
  }
  if (param_1[0xe1] != 0) {
    FUN_01135d70(param_1[0xe1],param_1[0xea],param_1 + 0xdc);
    return 1;
  }
  iVar2 = FUN_01135cc0(param_1[0xea],param_1 + 0xdc);
  param_1[0xe1] = iVar2;
  return 1;
}


