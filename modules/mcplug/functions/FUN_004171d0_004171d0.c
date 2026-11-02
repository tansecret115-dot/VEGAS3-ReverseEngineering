/* Module: mcplug.dll
   Function: FUN_004171d0
   Address: 004171d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004171d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 6;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = param_1 + 6;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *param_1 = &PTR_FUN_0047a3a4;
  *(undefined1 *)(param_1 + 0x27) = 0;
  return;
}


