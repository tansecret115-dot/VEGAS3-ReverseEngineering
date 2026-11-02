/* Module: vegas30k.dll
   Function: FUN_011a02c0
   Address: 011a02c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a02c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x640); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[0xd]) {
    (**(code **)(*(int *)*puVar1 + 0x3c))((int *)*puVar1,param_2);
  }
  uVar2 = (uint)*(ushort *)(param_2 + 2);
  uVar3 = *(uint *)(param_1 + 0x88);
  if ((*(uint *)(param_1 + 0x88) <= uVar2) &&
     (uVar3 = *(uint *)(param_1 + 0x8c), uVar2 <= *(uint *)(param_1 + 0x8c))) {
    uVar3 = uVar2;
  }
  uVar2 = (*(ushort *)(param_2 + 0xe) >> 3) * uVar3;
  *(short *)(param_2 + 0xc) = (short)uVar2;
  *(short *)(param_2 + 2) = (short)uVar3;
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 4) * (uVar2 & 0xffff);
  *(undefined2 *)(param_2 + 0x10) = 0;
  return 0;
}


