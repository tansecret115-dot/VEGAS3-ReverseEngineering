/* Module: sfcd.cdd
   Function: FUN_00419300
   Address: 00419300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419300(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  param_2[4] = *(undefined4 *)(param_1 + 0x10);
  param_2[5] = *(undefined4 *)(param_1 + 0x14);
  param_2[6] = *(undefined4 *)(param_1 + 0x18);
  param_2[7] = *(undefined4 *)(param_1 + 0x1c);
  param_2[8] = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)(param_2 + 9) = *(undefined2 *)(param_1 + 0x24);
  puVar2 = (undefined4 *)(param_1 + 0x26);
  puVar3 = (undefined4 *)((int)param_2 + 0x26);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}


