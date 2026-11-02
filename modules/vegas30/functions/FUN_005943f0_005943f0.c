/* Module: vegas30.exe
   Function: FUN_005943f0
   Address: 005943f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005943f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)(DAT_0065a06c + 0xe8) = 0;
  iVar3 = 0x3a;
  puVar2 = (undefined4 *)(param_1 + 0x658);
  puVar1 = (undefined4 *)(param_1 + 0x2b8);
  do {
    puVar1[-0x74] = 1;
    puVar1[-0x73] = 0xc0000000;
    *puVar1 = 1;
    puVar1[1] = 0xc0000000;
    puVar1[0x74] = 1;
    puVar1[0x75] = 0xc0000000;
    *puVar2 = 0;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(DAT_0065a068 + 0x740) = 0;
  } while (iVar3 != 0);
  return;
}


