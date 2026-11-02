/* Module: qt4plug.dll
   Function: FUN_5f51b990
   Address: 5f51b990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51b990(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x350) == 0) {
    hMem = GlobalAlloc(0x40,0x24);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_5f51ee30(this,param_1);
    }
    *(int *)(param_1 + 0x350) = iVar2;
    if (iVar2 != 0) {
      FUN_5f51f430();
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x350);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_5f595c80,param_2);
    return uVar3;
  }
  return 0x8007000e;
}


