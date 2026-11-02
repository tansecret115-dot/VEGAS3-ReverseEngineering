/* Module: vidpcore.dll
   Function: FUN_5df03f70
   Address: 5df03f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df03f70(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  
  puVar7 = &DAT_5df406fa;
  do {
    uVar1 = *puVar7;
    iVar4 = (uint)puVar7[-1] * 0x10;
    puVar6 = (undefined4 *)((uint)uVar1 * 0x10 + param_1);
    uVar2 = *(undefined4 *)(iVar4 + param_1);
    uVar3 = *(undefined4 *)(iVar4 + 4 + param_1);
    puVar5 = (undefined4 *)(iVar4 + param_1);
    puVar7 = puVar7 + 2;
    *puVar5 = *(undefined4 *)((uint)uVar1 * 0x10 + param_1);
    puVar5[1] = puVar6[1];
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = puVar6[3];
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
  } while (puVar7 < (ushort *)((int)&DAT_5df42678 + 2));
  return;
}


