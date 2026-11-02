/* Module: sftrans1.dll
   Function: FUN_0047e440
   Address: 0047e440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0047e440(int param_1)

{
  UINT UVar1;
  HWND pHVar2;
  int iVar3;
  int *piVar4;
  int local_78 [30];
  
  UVar1 = GetDlgItemInt(*(HWND *)(param_1 + 4),0x646,local_78,1);
  if ((int)UVar1 < 4) {
    UVar1 = 4;
  }
  else if (800 < (int)UVar1) {
    UVar1 = 800;
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  piVar4 = local_78;
  for (iVar3 = 0x1d; piVar4 = (int *)((int)piVar4 + 4), iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
  }
  local_78[1] = 0x74;
  SendMessageA(pHVar2,0x43a,1,(LPARAM)(local_78 + 1));
  if ((local_78[0] == 0) || ((int)UVar1 < 1)) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x646);
    SendMessageA(pHVar2,0x14e,0xffffffff,0);
  }
  else if (((local_78[2] & 0x80000000U) == 0) || (local_78[4] / 0x14 != UVar1)) {
    piVar4 = local_78;
    for (iVar3 = 0x1d; piVar4 = (int *)((int)piVar4 + 4), iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
    }
    local_78[4] = UVar1 * 0x14;
    local_78[1] = 0x74;
    local_78[2] = 0x80000000;
    FUN_0047e000(local_78 + 1,1);
    return;
  }
  return;
}


