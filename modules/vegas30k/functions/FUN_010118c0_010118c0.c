/* Module: vegas30k.dll
   Function: FUN_010118c0
   Address: 010118c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010118c0(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar1 = GlobalAlloc(0x42,0x848);
  puVar2 = GlobalLock(pvVar1);
  while (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
    for (iVar3 = 0x212; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 1) = 0x200;
    *(undefined2 *)((int)puVar2 + 0x16) = 1;
    *(undefined2 *)(puVar2 + 6) = 1;
    *(undefined1 *)((int)puVar2 + 0x3b) = 8;
    *(undefined4 *)((int)puVar2 + 6) = 0x20202020;
    *(undefined4 *)((int)puVar2 + 10) = 0x20202020;
    *(undefined4 *)((int)puVar2 + 0xe) = 0x20202020;
    *(undefined4 *)((int)puVar2 + 0x12) = 0x20202020;
    iVar3 = _SfList_CreateExZ_32(puVar2 + 0x10,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (iVar3 < 0) goto LAB_01011985;
    iVar3 = _SfList_CreateExZ_32(puVar2 + 0x11,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (iVar3 < 0) goto LAB_01011985;
    *(undefined4 **)(param_1 + 0x350) = puVar2;
    if (iVar3 == 0) {
      return 0;
    }
    pvVar1 = GlobalAlloc(0x42,0x848);
    puVar2 = GlobalLock(pvVar1);
  }
  iVar3 = -0x7ff8fff2;
LAB_01011985:
  FUN_01011870(puVar2);
  return iVar3;
}


