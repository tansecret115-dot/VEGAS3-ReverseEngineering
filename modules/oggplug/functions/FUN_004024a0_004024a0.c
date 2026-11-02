/* Module: oggplug.dll
   Function: FUN_004024a0
   Address: 004024a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004024a0(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x428) == 0) {
    hMem = GlobalAlloc(0x40,0x90);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00402930(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x428) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_004443d0(param_1 + 8,-1);
      FUN_00403240(*(int *)(param_1 + 0x428),iVar2,param_1 + 0x2d8,*(undefined4 *)(param_1 + 0x2f0),
                   *(undefined4 *)(param_1 + 0x2f4));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x428);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,&DAT_00446c50,param_2);
    return uVar3;
  }
  return 0x8007000e;
}


