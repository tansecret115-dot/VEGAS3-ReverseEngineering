/* Module: extmondrv.dll
   Function: FUN_00405a90
   Address: 00405a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405a90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    hMem = GlobalAlloc(0x42,0x90);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00405430(this,param_1);
    }
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0) {
      return 0x8007000e;
    }
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1[1] == 0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_00455dcc,param_2);
    return uVar3;
  }
  return 0x8000ffff;
}


