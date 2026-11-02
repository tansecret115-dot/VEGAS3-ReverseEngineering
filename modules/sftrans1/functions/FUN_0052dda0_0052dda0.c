/* Module: sftrans1.dll
   Function: FUN_0052dda0
   Address: 0052dda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0052dda0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  param_2 = *(int *)(*(int *)(param_1 + 4) + 4) * param_2;
  puVar3 = (undefined4 *)(param_2 + iVar1);
  if ((*(byte *)(param_2 + 0xc + iVar1) & 1) != 0) {
    param_3[1] = *puVar3;
    param_3[3] = puVar3[1];
    uVar2 = puVar3[2];
    param_3[2] = uVar2;
    *param_3 = uVar2;
    return;
  }
  *param_3 = *puVar3;
  param_3[2] = puVar3[1];
  uVar2 = puVar3[2];
  param_3[3] = uVar2;
  param_3[1] = uVar2;
  return;
}


