/* Module: rmme3260.dll
   Function: FUN_66252780
   Address: 66252780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66252780(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_66252630((undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x14),0x18);
    iVar3 = *(int *)(param_1 + 0x14);
    puVar2 = (undefined4 *)(iVar1 + -0xc + iVar3 * 0x18);
    if (-1 < iVar3 + -1) {
      do {
        *puVar2 = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 **)(param_1 + 0xc) = puVar2;
        puVar2 = puVar2 + -6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *puVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  puVar2[2] = DAT_6627f0b8;
  puVar2[3] = DAT_6627f0bc;
  puVar2[4] = DAT_6627f0c0;
  puVar2[5] = 0;
  return;
}


