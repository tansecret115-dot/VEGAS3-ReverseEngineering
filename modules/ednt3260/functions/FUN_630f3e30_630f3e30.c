/* Module: ednt3260.dll
   Function: FUN_630f3e30
   Address: 630f3e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f3e30(int param_1,short param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  
  if (0x400 < param_2) {
    FUN_630f92d0();
  }
  iVar8 = (int)param_2;
  iVar6 = 0;
  if (0 < iVar8) {
    puVar5 = (undefined4 *)(param_1 + 8);
    psVar7 = &DAT_630ff078;
    do {
      if (*psVar7 < iVar6) {
        uVar2 = puVar5[1];
        uVar1 = *(undefined8 *)(puVar5 + -2);
        puVar4 = (undefined8 *)(*psVar7 * 0x10 + param_1);
        uVar3 = *puVar5;
        puVar5[-2] = *(undefined4 *)puVar4;
        puVar5[-1] = *(undefined4 *)((int)puVar4 + 4);
        *puVar5 = *(undefined4 *)(puVar4 + 1);
        puVar5[1] = *(undefined4 *)((int)puVar4 + 0xc);
        *puVar4 = uVar1;
        *(undefined4 *)(puVar4 + 1) = uVar3;
        *(undefined4 *)((int)puVar4 + 0xc) = uVar2;
      }
      iVar6 = iVar6 + 1;
      psVar7 = psVar7 + (int)(0x400 / (longlong)iVar8);
      puVar5 = puVar5 + 4;
    } while (iVar6 < iVar8);
  }
  return;
}


