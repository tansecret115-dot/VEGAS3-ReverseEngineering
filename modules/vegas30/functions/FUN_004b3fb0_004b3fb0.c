/* Module: vegas30.exe
   Function: FUN_004b3fb0
   Address: 004b3fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b3fb0(HWND param_1,int param_2)

{
  HWND pHVar1;
  uint uVar2;
  
  pHVar1 = GetDlgItem(param_1,0x46d);
  uVar2 = FUN_004b3740(param_1,9,pHVar1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | uVar2;
  pHVar1 = GetDlgItem(param_1,0x46e);
  uVar2 = FUN_004b3940(param_1,9,pHVar1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | uVar2;
  pHVar1 = GetDlgItem(param_1,0x46f);
  uVar2 = FUN_004b3b90(param_1,9,pHVar1,param_2);
  uVar2 = *(uint *)(param_2 + 8) | uVar2;
  *(uint *)(param_2 + 8) = uVar2;
  if (uVar2 != 0) {
    *(uint *)(param_2 + 0x74) = uVar2;
  }
  return;
}


