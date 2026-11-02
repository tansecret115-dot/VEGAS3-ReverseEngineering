/* Module: vegas30k.dll
   Function: FUN_011b2270
   Address: 011b2270
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b2270(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x10) = param_3;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                    (*(int **)(param_1 + 0x14),&DAT_011ef560,param_1 + 0x18);
  if (iVar1 < 0) {
    return iVar1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x28);
  for (iVar2 = 0x4d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x28);
  for (iVar2 = 0x4d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *unaff_EBP;
    unaff_EBP = unaff_EBP + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0xc70) = 0;
  *(undefined4 *)(param_1 + 0x9cc) = 0;
  if (unaff_EBX != 0) {
    FUN_011b3f90();
  }
  if (*(int *)(param_1 + 0xc6c) == 0) {
    iVar1 = _SfList_CreateExZ_32(param_1 + 0xc6c,0x10,0x10,0x10,0x40000004,0,0,0);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  return iVar1;
}


