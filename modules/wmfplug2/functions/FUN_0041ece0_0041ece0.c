/* Module: wmfplug2.dll
   Function: FUN_0041ece0
   Address: 0041ece0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ece0(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x224) == 0) {
    hMem = GlobalAlloc(0x40,0x70);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_004067f0(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x224) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00406c90((int)puVar1,*(int **)(param_1 + 0x214));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x224);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_0047ad30,param_2);
    return uVar2;
  }
  return 0x8007000e;
}


