/* Module: vegas30.exe
   Function: FUN_004aad00
   Address: 004aad00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aad00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x10);
  do {
    uVar1 = FUN_004a9cd0(iVar3);
    uVar2 = FUN_005b87c0(uVar1);
    puVar4[6] = uVar2;
    uVar1 = FUN_005b8900(param_2,uVar1);
    *puVar4 = uVar1;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 6);
  return;
}


