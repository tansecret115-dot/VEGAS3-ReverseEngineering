/* Module: vidcap30.exe
   Function: FUN_00537610
   Address: 00537610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00537610(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x938) == 0) {
    FUN_005376f0(*(undefined4 *)(param_1 + 0x40));
  }
  puVar3 = param_3;
  for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_3 + 0x15) = 0;
  *(undefined1 *)(param_3 + 0x56) = 0;
  *(undefined1 *)(param_3 + 0x97) = 0;
  iVar2 = *(int *)(param_1 + 0x938);
  if ((iVar2 != 0) && (param_2 < *(int *)(param_1 + 0x40))) {
    uVar1 = FUN_00537260(*(undefined4 *)(iVar2 + param_2 * 8),
                         *(undefined4 *)(iVar2 + 4 + param_2 * 8),param_3);
    return uVar1;
  }
  return 1;
}


