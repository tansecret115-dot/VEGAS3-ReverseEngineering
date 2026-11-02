/* Module: sfcdi.dll
   Function: FUN_5bf3f5d0
   Address: 5bf3f5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3f5d0(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar1 = GlobalAlloc(0x42,0x18);
  puVar2 = GlobalLock(pvVar1);
  while (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *puVar2 = 3;
    iVar3 = FUN_5bf2b110(puVar2 + 1,4,-1,-1,0x40000002);
    if (iVar3 < 0) goto LAB_5bf3f63d;
    *(undefined4 **)(param_1 + 0x350) = puVar2;
    if (iVar3 == 0) {
      return 0;
    }
    pvVar1 = GlobalAlloc(0x42,0x18);
    puVar2 = GlobalLock(pvVar1);
  }
  iVar3 = -0x7ff8fff2;
LAB_5bf3f63d:
  FUN_5bf3f540(puVar2);
  return iVar3;
}


