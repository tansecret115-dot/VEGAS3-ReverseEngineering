/* Module: g2plug.dll
   Function: FUN_5f80dc00
   Address: 5f80dc00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80dc00(HWND param_1,int param_2)

{
  undefined4 uVar1;
  UINT UVar2;
  BOOL local_4;
  
  uVar1 = 1;
  local_4 = 1;
  if ((*(int *)(param_2 + 0x3e3) < 8) &&
     (*(int *)(&DAT_5f876350 + *(int *)(param_2 + 0x3e3) * 4) == 0x853)) {
    UVar2 = GetDlgItemInt(param_1,0x7eb,&local_4,0);
    *(UINT *)(param_2 + 999) = UVar2;
    uVar1 = 0;
    if (local_4 != 0) {
      UVar2 = GetDlgItemInt(param_1,0x7ec,&local_4,0);
      *(UINT *)(param_2 + 0x3eb) = UVar2;
      uVar1 = 0;
      if (local_4 != 0) {
        if ((((*(int *)(param_2 + 999) < 8) || (0x400 < *(int *)(param_2 + 999))) ||
            ((int)UVar2 < 8)) || (0x400 < (int)UVar2)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
    }
  }
  *(uint *)(param_2 + 0x3df) = (uint)(*(int *)(param_2 + 0x3e3) != 0);
  return uVar1;
}


