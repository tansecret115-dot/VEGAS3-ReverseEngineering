/* Module: sctplug.dll
   Function: FUN_00405580
   Address: 00405580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405580(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x25c) == 0) {
    hMem = GlobalAlloc(0x40,0x230);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00407090(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x25c) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00407960((int)puVar1,*(undefined4 **)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x248),
                   *(undefined4 *)(param_1 + 0x24c));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x25c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_00431c50,param_2);
    return uVar2;
  }
  return 0x8007000e;
}


