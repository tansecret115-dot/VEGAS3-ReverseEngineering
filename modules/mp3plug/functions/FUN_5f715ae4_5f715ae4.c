/* Module: mp3plug.dll
   Function: FUN_5f715ae4
   Address: 5f715ae4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f715ae4(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (*(int *)(param_1 + 0xc) == 1) {
      uVar2 = 0;
    }
    else if (*(int *)(param_1 + 8) == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    if (*(int *)(param_1 + 0x28) == 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 0x48) =
         *(undefined4 *)
          (*(int *)(param_1 + 0x40) * 0x10 + 0x5f764fcc + *(int *)(param_1 + 0x1c) * 4);
    *(int *)(param_1 + 0x4c) =
         *(int *)((uint)(*(int *)(param_1 + 0x40) != 0) * 0xb4 +
                 *(int *)(param_1 + 0x10) * 0x3c + 0x5f764e28 + *(int *)(param_1 + 0x18) * 4) * 1000
    ;
    iVar3 = FUN_5f715a44(param_1);
    fVar1 = _DAT_5f764ffc / (float)*(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x50) = iVar3;
    *(float *)(param_1 + 0x54) =
         (float)*(int *)(&DAT_5f764e2c +
                        *(int *)(param_1 + 0x10) * 4 + *(int *)(param_1 + 0x40) * 0xc) * fVar1;
  }
  return;
}


