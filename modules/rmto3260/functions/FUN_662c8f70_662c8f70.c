/* Module: rmto3260.dll
   Function: FUN_662c8f70
   Address: 662c8f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c8f70(int param_1,short param_2,undefined2 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  bVar1 = false;
  if (*(short *)(param_1 + 0x5c) != 0) {
    do {
      if (bVar1) goto LAB_662c8fc4;
      if (*(short *)(*(int *)(param_1 + 0x58) + (uint)uVar3 * 2) == param_2) {
        *param_3 = *(undefined2 *)(*(int *)(param_1 + 0x54) + (uint)uVar3 * 2);
        bVar1 = true;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x5c));
  }
  uVar2 = 0x40012;
  if (bVar1) {
LAB_662c8fc4:
    uVar2 = 0;
  }
  return uVar2;
}


