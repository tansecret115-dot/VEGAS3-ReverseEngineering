/* Module: vidcap30.exe
   Function: FUN_0042f6b0
   Address: 0042f6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042f6b0(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  uVar1 = DAT_005bb838;
  bVar5 = DAT_005bb838 != 0;
  DAT_005bb838 = param_1;
  DAT_005ba508 = 0xffffffff;
  if (bVar5) {
    *(uint *)(uVar1 + 4) = uVar1 + 8;
  }
  if (param_1 != 0) {
    *(undefined4 **)(param_1 + 4) = &DAT_005ba508;
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_0042f760(param_1);
    puVar3 = (undefined4 *)(param_1 + 0x3f0);
    puVar4 = &DAT_005bb810;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (uVar1 != 0) {
      FUN_00411120(1);
    }
  }
  return -(uint)(uVar1 != param_1) & uVar1;
}


