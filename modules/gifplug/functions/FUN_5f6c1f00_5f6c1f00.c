/* Module: gifplug.dll
   Function: FUN_5f6c1f00
   Address: 5f6c1f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c1f00(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    hMem = GlobalAlloc(0x40,0x20);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_5f6c2aa0(this,param_1);
    }
    *(int *)(param_1 + 0x214) = iVar2;
    if (iVar2 != 0) {
      FUN_5f6c2b80();
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x214);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_5f701b50,param_2);
    return uVar3;
  }
  return 0x8007000e;
}


