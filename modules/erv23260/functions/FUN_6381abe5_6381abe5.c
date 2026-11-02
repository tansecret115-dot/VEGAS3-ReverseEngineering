/* Module: erv23260.dll
   Function: FUN_6381abe5
   Address: 6381abe5
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6381abe5(uint param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  uint uVar6;
  uint uStack00000064;
  
  uStack00000064 = param_1;
  uVar6 = (uint)(byte)(&DAT_63829500)[param_1];
  iVar1 = uVar6 * 4;
  do {
    iVar4 = *(int *)(&UNK_6382957c + uVar6 * 4 + param_1 * 0x28);
    *(int *)(&stack0x00000000 + uVar6 * 4) = iVar4 * unaff_EBX;
    *(int *)(&stack0x00000000 + uVar6 * 4 + iVar1) = -(iVar4 * unaff_EBX);
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  iVar4 = (uStack00000064 & 0xff) * 0x10;
  iVar5 = (uint)(byte)(&DAT_63829540)[uStack00000064 & 0xff] * 4;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f81)[iVar4] * 4);
  bVar2 = (&DAT_63829f82)[iVar4];
  *(int *)(&stack0x00000084 + iVar5) =
       *(int *)(&stack0x00000084 + iVar5) +
       *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f80)[iVar4] * 4);
  *(int *)(&stack0x00000088 + iVar5) = *(int *)(&stack0x00000088 + iVar5) + iVar1;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f83)[iVar4] * 4);
  bVar3 = (&DAT_63829f84)[iVar4];
  *(int *)(&stack0x0000008c + iVar5) =
       *(int *)(&stack0x0000008c + iVar5) + *(int *)(&stack0x00000004 + (uint)bVar2 * 4);
  *(int *)(&stack0x00000090 + iVar5) = *(int *)(&stack0x00000090 + iVar5) + iVar1;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f85)[iVar4] * 4);
  bVar2 = (&DAT_63829f86)[iVar4];
  *(int *)(&stack0x00000094 + iVar5) =
       *(int *)(&stack0x00000094 + iVar5) + *(int *)(&stack0x00000004 + (uint)bVar3 * 4);
  *(int *)(&stack0x00000098 + iVar5) = *(int *)(&stack0x00000098 + iVar5) + iVar1;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f87)[iVar4] * 4);
  bVar3 = (&DAT_63829f88)[iVar4];
  *(int *)(&stack0x0000009c + iVar5) =
       *(int *)(&stack0x0000009c + iVar5) + *(int *)(&stack0x00000004 + (uint)bVar2 * 4);
  *(int *)(&stack0x000000a0 + iVar5) = *(int *)(&stack0x000000a0 + iVar5) + iVar1;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f89)[iVar4] * 4);
  bVar2 = (&DAT_63829f8a)[iVar4];
  *(int *)(&stack0x000000a4 + iVar5) =
       *(int *)(&stack0x000000a4 + iVar5) + *(int *)(&stack0x00000004 + (uint)bVar3 * 4);
  *(int *)(&stack0x000000a8 + iVar5) = *(int *)(&stack0x000000a8 + iVar5) + iVar1;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f8b)[iVar4] * 4);
  bVar3 = (&DAT_63829f8c)[iVar4];
  *(int *)(&stack0x000000ac + iVar5) =
       *(int *)(&stack0x000000ac + iVar5) + *(int *)(&stack0x00000004 + (uint)bVar2 * 4);
  *(int *)(&stack0x000000b0 + iVar5) = *(int *)(&stack0x000000b0 + iVar5) + iVar1;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f8d)[iVar4] * 4);
  bVar2 = (&DAT_63829f8e)[iVar4];
  *(int *)(&stack0x000000b4 + iVar5) =
       *(int *)(&stack0x000000b4 + iVar5) + *(int *)(&stack0x00000004 + (uint)bVar3 * 4);
  *(int *)(&stack0x000000b8 + iVar5) = *(int *)(&stack0x000000b8 + iVar5) + iVar1;
  iVar1 = *(int *)(&stack0x00000004 + (uint)(byte)(&DAT_63829f8f)[iVar4] * 4);
  *(int *)(&stack0x000000bc + iVar5) =
       *(int *)(&stack0x000000bc + iVar5) + *(int *)(&stack0x00000004 + (uint)bVar2 * 4);
  *(int *)(&stack0x000000c0 + iVar5) = *(int *)(&stack0x000000c0 + iVar5) + iVar1;
  return;
}


