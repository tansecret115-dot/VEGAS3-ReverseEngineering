/* Module: sftrans1.dll
   Function: FUN_004992c0
   Address: 004992c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004992c0(int *param_1)

{
  int iVar1;
  LPUNKNOWN punkOuter;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  LPUNKNOWN *ppunkMarshal;
  int local_c;
  
  param_1[0x40] = 0;
  param_1[0x26] = 1;
  param_1[0x24] = 1;
  param_1[0x25] = 1;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3e] = 2;
  param_1[0x41] = 0x3ff00000;
  param_1[0x42] = 1;
  param_1[0x43] = 1;
  param_1[0x44] = 0;
  local_c = 0;
  piVar3 = param_1 + 0x57;
  do {
    if (piVar3[-1] != 2) {
      iVar1 = FUN_00422770(piVar3 + -1,2);
      if (iVar1 < 0) break;
    }
    puVar5 = (undefined4 *)*piVar3;
    puVar4 = puVar5;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)((int)puVar5 + 0x12) = 1;
    *(undefined1 *)((int)puVar5 + 0x13) = 1;
    *(undefined1 *)(puVar5 + 5) = 1;
    *(undefined1 *)((int)puVar5 + 0x15) = 1;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    puVar5 = (undefined4 *)*piVar3;
    *puVar5 = 0;
    puVar5[1] = 0;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x40) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0x44) = 0x3fc99999;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x18) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0x1c) = 0x3fc99999;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0x3ff00000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0x3ff00000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0x40498000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0x40498000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xc0498000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xc0498000;
    *(undefined1 *)(*piVar3 + 0x13) = 0;
    *(undefined1 *)(*piVar3 + 0x12) = 0;
    iVar1 = *piVar3;
    puVar5 = (undefined4 *)(iVar1 + 0x68);
    for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)(iVar1 + 0x7a) = 1;
    *(undefined1 *)(iVar1 + 0x7b) = 1;
    *(undefined1 *)(iVar1 + 0x7c) = 1;
    *(undefined1 *)(iVar1 + 0x7d) = 1;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0x406fe000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0x406fe000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0xa8) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0xac) = 0x3fc99999;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x80) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0x84) = 0x3fc99999;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xb4) = 0x3ff00000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0x3ff00000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0xc0498000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0xc0498000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0x40498000;
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0x40498000;
    *(undefined1 *)(*piVar3 + 0x7b) = 0;
    local_c = local_c + 1;
    *(undefined1 *)(*piVar3 + 0x7a) = 0;
    piVar3 = piVar3 + 2;
  } while (local_c < 4);
  FUN_004228d0();
  FUN_004228d0();
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x7c] = 0;
  param_1[0x7a] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x67] = 1;
  param_1[0x7f] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


