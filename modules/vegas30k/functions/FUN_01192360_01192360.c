/* Module: vegas30k.dll
   Function: FUN_01192360
   Address: 01192360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01192360(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x30);
  iVar2 = 0x40;
  do {
    if (puVar1[-6] != 0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


