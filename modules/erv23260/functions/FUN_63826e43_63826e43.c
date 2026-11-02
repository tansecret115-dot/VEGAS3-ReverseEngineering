/* Module: erv23260.dll
   Function: FUN_63826e43
   Address: 63826e43
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63826e43(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  undefined1 *puVar5;
  uint in_stack_8e0e3320;
  
  FUN_63827120();
  FUN_63826f95();
  puVar2 = (undefined1 *)FUN_63826f10(0x20);
  if ((unaff_EBX - 1U & 0xc0000 & in_stack_8e0e3320) != 0) {
    iVar4 = 0;
    puVar5 = puVar2;
    do {
      uVar3 = (uint)(byte)puVar5[3];
      iVar4 = unaff_EBX + 2 + iVar4 + uVar3;
      pcVar1 = puVar5 + 2;
      puVar5 = puVar5 + 4;
      unaff_EBX = *(int *)(&DAT_638373ac +
                          (-(uint)((byte)(&DAT_63837811)[uVar3] <
                                  (byte)(*pcVar1 + (&DAT_63837810)[uVar3])) |
                          (uint)(byte)(*pcVar1 + (&DAT_63837810)[uVar3])) * 4);
    } while (puVar5 != &stack0x00000050);
    if (((in_stack_8e0e3320 & 0x80000) != 0) &&
       (0xfffff07f < (unaff_EBX + -0x82 + iVar4 | 0x7ffff07fU))) {
      do {
        puVar2[3] = puVar2[3] | 1;
        puVar2 = puVar2 + 4;
      } while (puVar2 != &stack0x00000050);
    }
  }
  return;
}


