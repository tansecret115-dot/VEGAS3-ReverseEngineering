/* Module: erv13260.dll
   Function: FUN_635fbab0
   Address: 635fbab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635fbab0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t _Size;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  _Size = (*(int *)(param_1 + 0x23cb) + 0x40) * (*(int *)(param_1 + 0x23cf) + 0x40);
  pvVar1 = malloc(_Size * 4);
  *(void **)(iVar7 + 0x8c14) = pvVar1;
  pvVar1 = malloc(_Size);
  *(void **)(iVar7 + 0x8c18) = pvVar1;
  puVar2 = calloc(0x1e84,0x20);
  *(undefined4 **)(iVar7 + 0x1200) = puVar2;
  for (iVar4 = 0xf420; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar4 = *(int *)(iVar7 + 0x1200);
  piVar3 = (int *)(iVar7 + 0x1204);
  iVar7 = 6;
  do {
    iVar6 = 0x1f;
    do {
      iVar5 = 0x2a;
      do {
        *piVar3 = iVar4;
        iVar4 = iVar4 + 0x20;
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_635fe430();
  FUN_635fe780();
  return 0;
}


