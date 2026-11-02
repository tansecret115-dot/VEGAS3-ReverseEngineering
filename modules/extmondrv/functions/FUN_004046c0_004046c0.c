/* Module: extmondrv.dll
   Function: FUN_004046c0
   Address: 004046c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004046c0(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  pvVar1 = GlobalAlloc(0x42,0x20);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00405300(pvVar2,param_1);
  }
  *(undefined4 **)(param_1 + 0xc) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    pvVar1 = GlobalAlloc(0x42,0x20);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00404fd0(pvVar2,param_1);
    }
    *(undefined4 **)(param_1 + 0x10) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      pvVar1 = GlobalAlloc(0x42,0x24);
      puVar3 = GlobalLock(pvVar1);
      if (puVar3 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00405890(puVar3);
      }
      *(int *)(param_1 + 0x24) = iVar4;
      if (iVar4 != 0) {
        pvVar1 = GlobalAlloc(0x42,0x24);
        puVar3 = GlobalLock(pvVar1);
        if (puVar3 == (undefined4 *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_00405890(puVar3);
        }
        *(int *)(param_1 + 0x28) = iVar4;
        if (iVar4 != 0) {
          return 0;
        }
      }
    }
  }
  return 0x8007000e;
}


