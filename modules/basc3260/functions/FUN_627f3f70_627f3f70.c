/* Module: basc3260.dll
   Function: FUN_627f3f70
   Address: 627f3f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627f3f70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_627f3e20((undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x14),0x18);
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
  puVar2[2] = DAT_627f63d8;
  puVar2[3] = DAT_627f63dc;
  puVar2[4] = DAT_627f63e0;
  puVar2[5] = 0;
  return;
}


