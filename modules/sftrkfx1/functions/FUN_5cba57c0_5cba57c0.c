/* Module: sftrkfx1.dll
   Function: FUN_5cba57c0
   Address: 5cba57c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba57c0(int param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x90);
  do {
    if ((HWND)*puVar2 != (HWND)0x0) {
      BVar1 = IsWindow((HWND)*puVar2);
      if (BVar1 != 0) {
        return 1;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar3 < 2);
  return 0;
}


