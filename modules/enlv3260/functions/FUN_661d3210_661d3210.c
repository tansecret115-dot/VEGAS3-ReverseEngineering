/* Module: enlv3260.dll
   Function: FUN_661d3210
   Address: 661d3210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_661d3210(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_661d3770((undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x14),0x10);
    iVar3 = *(int *)(param_1 + 0x14);
    puVar2 = (undefined4 *)(iVar3 * 0x10 + -4 + iVar1);
    if (-1 < iVar3 + -1) {
      do {
        *puVar2 = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 **)(param_1 + 0xc) = puVar2;
        puVar2 = puVar2 + -4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *puVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}


