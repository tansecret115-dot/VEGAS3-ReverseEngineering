/* Module: rmto3260.dll
   Function: FUN_662dc160
   Address: 662dc160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662dc160(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar1 = operator_new(*(uint *)((int)param_1 + 0x11));
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    iVar5 = -0x7ff8fff2;
  }
  if (-1 < iVar5) {
    uVar4 = *(uint *)((int)param_1 + 0x11);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    if (-1 < iVar5) {
      pvVar2 = operator_new(*(uint *)((int)param_1 + 0x19));
      param_1[1] = pvVar2;
      if (pvVar2 == (void *)0x0) {
        iVar5 = -0x7ff8fff2;
      }
    }
  }
  return iVar5;
}


