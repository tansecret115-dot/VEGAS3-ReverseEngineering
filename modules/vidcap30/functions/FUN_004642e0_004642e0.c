/* Module: vidcap30.exe
   Function: FUN_004642e0
   Address: 004642e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004642e0(uint *param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  short local_34 [26];
  
  uVar3 = 0;
  puVar6 = (undefined4 *)(param_2 + 0x18 + param_3 * 0x34);
  psVar5 = local_34;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)psVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    psVar5 = psVar5 + 2;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    psVar5 = local_34;
    do {
      uVar3 = uVar3 + 1;
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
      *(int *)(*(int *)((param_1[2] - 4) + uVar3 * 4) + 0xc) = (int)sVar1;
    } while (uVar3 < uVar2);
  }
  return;
}


