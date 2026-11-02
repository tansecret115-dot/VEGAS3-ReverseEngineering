/* Module: sfxpfx2.dll
   Function: FUN_5c8d4c90
   Address: 5c8d4c90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5c8d4c90(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  uVar1 = *(uint *)(param_1 + 0x28);
  if (DVar2 < uVar1) {
    return ((DVar2 - uVar1) - 1) / 60000;
  }
  return (DVar2 - uVar1) / 60000;
}


