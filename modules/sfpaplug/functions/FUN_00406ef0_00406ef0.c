/* Module: sfpaplug.dll
   Function: FUN_00406ef0
   Address: 00406ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406ef0(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x274) == 0) {
    hMem = GlobalAlloc(0x40,0x88);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_004098d0(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x274) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0040a170((int)puVar1,*(undefined4 **)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x240),
                   *(undefined4 *)(param_1 + 0x244));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x274);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_0044dcf0,param_2);
    return uVar2;
  }
  return 0x8007000e;
}


