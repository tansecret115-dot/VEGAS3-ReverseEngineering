/* Module: vegas30k.dll
   Function: FUN_01191430
   Address: 01191430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01191430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 auStack_18 [4];
  undefined4 uStack_8;
  
  uVar1 = 1;
  uVar3 = *(uint *)(param_1 + 0xc);
  if (((uVar3 & 1) != 0) && ((uVar3 & 2) == 0)) {
    if (((uVar3 & 0x20000) == 0) && (uVar3 = 0, *(int *)(param_1 + 0x144) != 0)) {
      do {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x3c))
                  (*(int **)(param_1 + 0x3c),*(undefined4 *)(*(int *)(param_1 + 0x14c) + uVar3 * 4),
                   *(undefined4 *)(param_1 + 0x148));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x144));
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    _SFSMPTE_NanoToSMPTE_12(0,0,(undefined4 *)(param_1 + 0x44));
    puVar4 = auStack_18;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    auStack_18[0] = *(undefined4 *)(param_1 + 0x44);
    uStack_8 = 2;
    uVar5 = _SFSMPTE_SMPTEToNanos_4(auStack_18);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    uVar5 = __alldiv(*(undefined4 *)(param_1 + 0x98),(int)((ulonglong)uVar5 >> 0x20),8,0);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffcfb;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(int **)(param_1 + 0x3c));
    uVar3 = *(uint *)(param_1 + 0xc) | 2;
    *(uint *)(param_1 + 0xc) = uVar3;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x24))
              (*(int **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               (int)(uVar3 << 0x11) >> 0x1f);
    SetEvent(*(HANDLE *)(param_1 + 0x24));
    uVar1 = 0;
  }
  return uVar1;
}


