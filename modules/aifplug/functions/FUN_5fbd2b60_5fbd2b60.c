/* Module: aifplug.dll
   Function: FUN_5fbd2b60
   Address: 5fbd2b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd2b60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x24c) == 0) {
    hMem = GlobalAlloc(0x40,0x6c);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_5fbd3550(this,param_1);
    }
    *(int *)(param_1 + 0x24c) = iVar2;
    if (iVar2 != 0) {
      FUN_5fbd3ce0();
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x24c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_5fbfebe0,param_2);
    return uVar3;
  }
  return 0x8007000e;
}


