/* Module: mcplugrw.dll
   Function: FUN_00486820
   Address: 00486820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00486820(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x189);
  uVar2 = *(undefined4 *)(param_1 + 0x165);
  *(undefined4 *)(iVar1 + 0xd) = **(undefined4 **)(param_1 + 0x51);
  *(undefined4 *)(iVar1 + 0x11) = *(undefined4 *)(*(int *)(param_1 + 0x51) + 4);
  if ((*(int *)(param_1 + 0xf1) != 0) && (*(int *)(iVar1 + 0x41) == 0)) {
    FUN_00486520(iVar1,(char)*(undefined4 *)(iVar1 + 0x45));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x12d)) {
    do {
      FUN_004863c0(iVar1,(int)(*(short *)*param_2 >> ((byte)uVar2 & 0x1f)),1);
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x12d));
  }
  **(undefined4 **)(param_1 + 0x51) = *(undefined4 *)(iVar1 + 0xd);
  iVar3 = *(int *)(param_1 + 0x51);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 0x11);
  if (*(int *)(param_1 + 0xf1) != 0) {
    iVar3 = *(int *)(iVar1 + 0x41);
    if (iVar3 == 0) {
      *(int *)(iVar1 + 0x41) = *(int *)(param_1 + 0xf1);
      *(uint *)(iVar1 + 0x45) = *(int *)(iVar1 + 0x45) + 1U & 7;
    }
    *(int *)(iVar1 + 0x41) = *(int *)(iVar1 + 0x41) + -1;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


