/* Module: mp3rw.dll
   Function: FUN_004753c0
   Address: 004753c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004753c0(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_2 == 0) {
    iVar1 = FUN_00453480(param_1);
    *param_2 = iVar1;
  }
  puVar2 = (undefined4 *)*param_2;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  puVar2[2] = param_3[2];
  puVar2[3] = param_3[3];
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_3 + 4);
  puVar2 = (undefined4 *)(*param_2 + 0x11);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(*param_2 + 0x111) = 0;
  return;
}


