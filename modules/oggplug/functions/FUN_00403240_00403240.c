/* Module: oggplug.dll
   Function: FUN_00403240
   Address: 00403240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00403240(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  if (param_3 != 0) {
    sVar1 = *(short *)(param_3 + 2);
    uVar2 = *(ushort *)(param_3 + 0xe);
    iVar3 = *(int *)(param_3 + 4);
    *(ushort *)(param_1 + 0x86) = uVar2;
    uVar2 = (uVar2 >> 3) * sVar1;
    *(ushort *)(param_1 + 0x84) = uVar2;
    *(undefined2 *)(param_1 + 0x78) = 1;
    *(short *)(param_1 + 0x7a) = sVar1;
    *(int *)(param_1 + 0x7c) = iVar3;
    *(uint *)(param_1 + 0x80) = (uint)uVar2 * iVar3;
    *(undefined2 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = param_4;
  *(undefined4 *)(param_1 + 0x74) = param_5;
  return 0;
}


