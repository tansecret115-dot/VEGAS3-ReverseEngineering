/* Module: mp3plug.dll
   Function: FUN_5f692ee0
   Address: 5f692ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f692ee0(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1084) == 0) {
    hMem = GlobalAlloc(0x40,0x70);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_5f693830(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x1084) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5f694150((int)puVar1,*(int **)(param_1 + 0x14));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1084);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_5f72bd20,param_2);
    return uVar2;
  }
  return 0x8007000e;
}


