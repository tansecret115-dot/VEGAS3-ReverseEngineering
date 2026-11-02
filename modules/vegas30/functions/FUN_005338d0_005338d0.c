/* Module: vegas30.exe
   Function: FUN_005338d0
   Address: 005338d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005338d0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_005ba4b0(param_1,0);
  iVar2 = FUN_005b9fc0(param_1,uVar1,1);
  iVar3 = FUN_005b9fc0(param_1,2,1);
  puVar5 = (undefined4 *)(iVar3 + 0x30);
  puVar6 = (undefined4 *)(iVar2 + 0x30);
  for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_005ba030(param_1,iVar2,1,1);
  FUN_005ba030(param_1,iVar3,1,0);
  FUN_00428f30(0,0);
  return;
}


