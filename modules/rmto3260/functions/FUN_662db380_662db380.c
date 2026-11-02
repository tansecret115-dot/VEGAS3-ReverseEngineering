/* Module: rmto3260.dll
   Function: FUN_662db380
   Address: 662db380
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662db380(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_14 [3];
  uint local_8;
  
  FUN_662e2a70(local_14);
  if (*(void **)(param_1 + 0xc) == (void *)0x0) {
    return -0x7ffbfff7;
  }
  iVar2 = FUN_662d9c40(*(void **)(param_1 + 0xc));
  if (-1 < iVar2) {
    while (iVar2 = FUN_662d9ab0(*(void **)(param_1 + 0xc),local_14,*(undefined4 **)(param_1 + 4),
                                *(uint *)(param_1 + 8),&local_8), -1 < iVar2) {
      if (local_14[0] < *(uint *)(param_1 + 0x2e)) {
        iVar2 = -0x7ffbfff7;
      }
      *(uint *)(param_1 + 0x2e) = local_14[0];
      FUN_66301f30(2,s_0fWrite_Packet__lu__Output_Time__6630b1ae + 2);
      if (((iVar2 < 0) ||
          (iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                             (local_14,*(undefined4 *)(param_1 + 4),local_8), iVar2 < 0)) ||
         (*(undefined4 *)(param_1 + 0x1c) = 1, iVar2 < 0)) break;
    }
  }
  if ((iVar2 == -0x7ffbfc36) || (iVar2 == -0x7ffbfc2c)) {
    iVar2 = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_662d8540(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return iVar2;
}


