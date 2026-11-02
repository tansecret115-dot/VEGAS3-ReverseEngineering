/* Module: mp3plug.dll
   Function: FUN_5f6932a0
   Address: 5f6932a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f69334e) */
/* WARNING: Removing unreachable block (ram,0x5f693356) */

undefined4 __fastcall FUN_5f6932a0(int param_1)

{
  int iVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 0xea4) == 0) {
    pvVar3 = GlobalAlloc(0x42,0x12);
    puVar4 = GlobalLock(pvVar3);
    *(undefined2 **)(param_1 + 0xea4) = puVar4;
    if (puVar4 == (undefined2 *)0x0) {
      return 0x8007000e;
    }
    iVar6 = *(int *)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 100);
    puVar4[1] = (short)iVar6;
    uVar2 = iVar6 * 2;
    puVar4[6] = (short)uVar2;
    *puVar4 = 1;
    *(int *)(puVar4 + 2) = iVar1;
    puVar4[7] = 0x10;
    *(uint *)(puVar4 + 4) = (uVar2 & 0xffff) * iVar1;
    puVar4[8] = 0;
  }
  if (*(int *)(param_1 + 0xea8) == 0) {
    pvVar3 = GlobalAlloc(0x42,0x20);
    puVar5 = GlobalLock(pvVar3);
    *(undefined4 **)(param_1 + 0xea8) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar7 = puVar5;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *puVar5 = 0x20;
    puVar5[1] = puVar5[1] & 0xfffffffe;
  }
  return 0;
}


