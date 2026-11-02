/* Module: stl2plg.dll
   Function: FUN_00408ca0
   Address: 00408ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408ca0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  LPVOID this;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x244) == 0) {
    hMem = GlobalAlloc(0x40,0x14);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00409640(this,param_1);
    }
    *(int *)(param_1 + 0x244) = iVar2;
    if (iVar2 != 0) {
      FUN_00409770();
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x244);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_00465228,param_2);
    return uVar3;
  }
  return 0x8007000e;
}


