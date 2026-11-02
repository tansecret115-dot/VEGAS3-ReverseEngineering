/* Module: stl2plg.dll
   Function: FUN_0040b290
   Address: 0040b290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b290(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x260) == 0) {
    hMem = GlobalAlloc(0x40,0x14);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0040c490(this,param_1);
    }
    *(int *)(param_1 + 0x260) = iVar2;
    if (iVar2 != 0) {
      FUN_0040c5c0();
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x260);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_00465228,param_2);
    return uVar3;
  }
  return 0x8007000e;
}


