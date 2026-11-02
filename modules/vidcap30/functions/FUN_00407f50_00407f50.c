/* Module: vidcap30.exe
   Function: FUN_00407f50
   Address: 00407f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_00407f50(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  pvVar1 = calloc(1,0x118);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  iVar2 = _SfList_CreateExZ_32((int)pvVar1 + 0xa8,4,0x10,0x10,0,0,0,0);
  if (iVar2 != 0) {
    return (void *)0x0;
  }
  iVar2 = _SfList_CreateExZ_32((int)pvVar1 + 0xa4,4,0x20,0x10,0,0,0,0);
  if (iVar2 != 0) {
    return (void *)0x0;
  }
  uVar3 = FUN_00410190();
  *(undefined4 *)((int)pvVar1 + 100) = uVar3;
  uVar3 = 3;
  if (DAT_005bb7d0 == 0) {
    uVar3 = DAT_005ba55c;
  }
  *(undefined4 *)((int)pvVar1 + 0x48) = uVar3;
  *(undefined4 *)((int)pvVar1 + 0x44) = DAT_005ba558;
  *(undefined4 *)((int)pvVar1 + 0x3c) = DAT_005ba550;
  *(undefined4 *)((int)pvVar1 + 0x4c) = 0xc;
  *(undefined4 *)((int)pvVar1 + 0x114) = 0;
  return pvVar1;
}


