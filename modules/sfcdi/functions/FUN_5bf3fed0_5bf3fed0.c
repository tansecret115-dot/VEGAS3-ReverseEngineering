/* Module: sfcdi.dll
   Function: FUN_5bf3fed0
   Address: 5bf3fed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3fed0(int param_1)

{
  undefined4 *_Dst;
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *_Dst_00;
  undefined4 *puVar6;
  
  iVar3 = FUN_5bf3f240(param_1);
  if (iVar3 != 0) {
    _Dst = (undefined4 *)(iVar3 + 8);
    puVar6 = _Dst;
    for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    memmove(_Dst,"ENTRYVCD",9);
    *(undefined2 *)(iVar3 + 0x10) = 0x200;
    uVar2 = 0;
    if (*(undefined4 **)(iVar3 + 4) != (undefined4 *)0x0) {
      uVar2 = (undefined2)**(undefined4 **)(iVar3 + 4);
    }
    *(undefined2 *)(iVar3 + 0x12) = uVar2;
    FUN_5bf3f3c0((int)_Dst);
    iVar5 = 0;
    _Dst_00 = (void *)(iVar3 + 0x14);
    while( true ) {
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        memmove(_Dst_00,(void *)0x0,4);
        iVar5 = iVar5 + 1;
        _Dst_00 = (void *)((int)_Dst_00 + 4);
      }
      else {
        memmove(_Dst_00,(void *)(piVar1[1] * iVar5 + piVar1[2]),4);
        iVar5 = iVar5 + 1;
        _Dst_00 = (void *)((int)_Dst_00 + 4);
      }
    }
    return 0;
  }
  return 0x80070057;
}


