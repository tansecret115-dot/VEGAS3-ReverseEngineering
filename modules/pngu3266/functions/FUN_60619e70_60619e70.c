/* Module: pngu3266.dll
   Function: FUN_60619e70
   Address: 60619e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60619e70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x10);
  iVar2 = 0x10;
  do {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}


