/* Module: ednt3260.dll
   Function: FUN_630faf60
   Address: 630faf60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630faf60(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iStack00000008;
  
  uVar1 = ftol();
  iStack00000008 = (int)(short)((uVar1 & 0xfff) << 3);
  sVar2 = ftol();
  iVar3 = FUN_630f9590(sVar2,0x200);
  FUN_630f9590(uVar1 & 0xf000,(ushort)(iVar3 >> 2) & 0xf00);
  return;
}


