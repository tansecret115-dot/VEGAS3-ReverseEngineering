/* Module: encn3260.dll
   Function: FUN_66494bc0
   Address: 66494bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66494bc0(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetTickCount();
  uVar2 = *(uint *)(param_1 + 0x202);
  if (DVar1 < uVar2) {
    uVar2 = (DVar1 - uVar2) - 1;
  }
  else {
    uVar2 = DVar1 - uVar2;
  }
  if (*(uint *)(param_1 + 0x62) <= uVar2) {
    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x202) = DVar1;
    uVar2 = *(int *)(param_1 + 0x5a) + *(int *)(param_1 + 0x62);
    if (uVar2 <= *(uint *)(param_1 + 0x5e)) {
      *(uint *)(param_1 + 0x5a) = uVar2;
    }
  }
  return;
}


