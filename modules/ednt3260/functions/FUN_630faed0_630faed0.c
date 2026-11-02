/* Module: ednt3260.dll
   Function: FUN_630faed0
   Address: 630faed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630faed0(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iStack00000008;
  
  uVar1 = ftol();
  iStack00000008 = (int)(short)((uVar1 & 0x1fff) << 2);
  sVar2 = ftol();
  iVar3 = FUN_630f9590(sVar2,0x100);
  FUN_630f9590(uVar1 & 0xe000,(ushort)(iVar3 >> 1) & 0x1f00);
  return;
}


