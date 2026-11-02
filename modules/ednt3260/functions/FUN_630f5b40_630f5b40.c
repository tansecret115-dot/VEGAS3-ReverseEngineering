/* Module: ednt3260.dll
   Function: FUN_630f5b40
   Address: 630f5b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f5b40(int param_1)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = (ushort *)(param_1 + 0xb02e);
  iVar2 = 6;
  do {
    *puVar1 = (ushort)(puVar1[-0x635] != 0);
    puVar1 = puVar1 + -1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


