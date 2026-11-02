/* Module: sfpaplug.dll
   Function: FUN_0040d500
   Address: 0040d500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040d500(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x26c) == 0) {
    hMem = GlobalAlloc(0x40,0x88);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_0040ee90(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x26c) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0040f4d0((int)puVar1,*(undefined4 **)(param_1 + 0x220),*(undefined4 *)(param_1 + 600),
                   *(undefined4 *)(param_1 + 0x25c));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x26c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_0044dcf0,param_2);
    return uVar2;
  }
  return 0x8007000e;
}


