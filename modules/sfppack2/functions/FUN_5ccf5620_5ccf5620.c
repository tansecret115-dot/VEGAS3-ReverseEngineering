/* Module: sfppack2.dll
   Function: FUN_5ccf5620
   Address: 5ccf5620
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5ccf5620(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  uVar2 = 0;
  puVar3 = (uint *)(param_1 + 0x248);
  iVar4 = 4;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 | uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}


