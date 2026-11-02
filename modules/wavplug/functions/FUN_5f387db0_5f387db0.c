/* Module: wavplug.dll
   Function: FUN_5f387db0
   Address: 5f387db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f387db0(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x25c) == 0) {
    hMem = GlobalAlloc(0x40,0x88);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_5f388f10(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x25c) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5f389660((int)puVar1,*(undefined4 **)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x248),
                   *(undefined4 *)(param_1 + 0x24c));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x25c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_5f3c9c80,param_2);
    return uVar2;
  }
  return 0x8007000e;
}


