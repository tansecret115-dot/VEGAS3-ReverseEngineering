/* Module: encn3260.dll
   Function: FUN_664cb870
   Address: 664cb870
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_664cb870(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  char local_78 [64];
  undefined4 local_38 [5];
  undefined2 local_24;
  ushort uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_18;
  ushort uStack_16;
  undefined2 local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  
  pcVar6 = local_78;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  puVar4 = (uint *)FUN_664d62b0(local_38);
  uVar1 = *puVar4;
  local_24 = (undefined2)uVar1;
  uStack_22 = (ushort)(uVar1 >> 0x10);
  local_c = puVar4[1];
  local_20 = (undefined2)local_c;
  uStack_1e = (undefined2)(local_c >> 0x10);
  local_c = local_c & 0xffff;
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  local_18 = (undefined2)uVar3;
  uStack_16 = (ushort)(uVar3 >> 0x10);
  local_14 = (undefined2)puVar4[4];
  local_8 = (uint)uStack_22;
  srand(local_c + local_8 + (uVar1 & 0xffff));
  iVar5 = rand();
  sprintf(local_78,s___2d__2d__4d__2d__2d__2d_ld_664effc4,uVar2 & 0xffff,uVar3 & 0xffff,
          uStack_16 + 0x76c,local_c,local_8,uVar1 & 0xffff,iVar5);
  FUN_664d6270(local_10,(undefined4 *)local_78,0x40);
  return local_10;
}


