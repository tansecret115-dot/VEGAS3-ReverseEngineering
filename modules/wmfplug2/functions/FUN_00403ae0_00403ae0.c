/* Module: wmfplug2.dll
   Function: FUN_00403ae0
   Address: 00403ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403ae0(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24c) == 0) {
    hMem = GlobalAlloc(0x40,0x70);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_004067f0(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x24c) = puVar1;
  }
  if (*(int *)(param_1 + 0x24c) != 0) {
    FUN_00406c90(*(int *)(param_1 + 0x24c),*(int **)(param_1 + 0x240));
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x24c))
                      (*(undefined4 **)(param_1 + 0x24c),&DAT_0047ad30,param_2);
    return uVar2;
  }
  return 0x8007000e;
}


