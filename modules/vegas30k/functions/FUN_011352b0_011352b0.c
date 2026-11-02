/* Module: vegas30k.dll
   Function: FUN_011352b0
   Address: 011352b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011352b0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) {
    return 0x80004003;
  }
  iVar2 = 4;
  bVar6 = true;
  piVar3 = param_3;
  piVar4 = &DAT_011e67d8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x8c) = 0x60001;
    *(undefined4 *)(param_1 + 0xb0) = 0x1c;
  }
  else {
    iVar2 = 4;
    bVar6 = true;
    piVar3 = &DAT_011e6998;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *param_3 == *piVar3;
      param_3 = param_3 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0x80004001;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0x20;
  }
  uVar1 = _SfDibAlloc_28(param_1 + 0x30,*(undefined4 *)(param_1 + 0xb0),param_2[3] - param_2[2],
                         param_2[5] - param_2[4],0,0,0);
  puVar5 = (undefined4 *)(param_1 + 0x40);
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar1;
}


