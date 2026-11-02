/* Module: sftrans1.dll
   Function: FUN_00423e40
   Address: 00423e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00423e40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  return;
}


