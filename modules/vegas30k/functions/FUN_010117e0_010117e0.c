/* Module: vegas30k.dll
   Function: FUN_010117e0
   Address: 010117e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010117e0(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar1 = GlobalAlloc(0x42,0x808);
  puVar2 = GlobalLock(pvVar1);
  while (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
    for (iVar3 = 0x202; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *puVar2 = 1;
    iVar3 = _SfList_CreateExZ_32(puVar2 + 1,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (iVar3 < 0) goto LAB_01011853;
    *(undefined4 **)(param_1 + 0x350) = puVar2;
    if (iVar3 == 0) {
      return 0;
    }
    pvVar1 = GlobalAlloc(0x42,0x808);
    puVar2 = GlobalLock(pvVar1);
  }
  iVar3 = -0x7ff8fff2;
LAB_01011853:
  FUN_010117a0(puVar2);
  return iVar3;
}


