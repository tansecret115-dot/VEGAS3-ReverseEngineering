/* Module: gifplug.dll
   Function: FUN_5f6c1e50
   Address: 5f6c1e50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5f6c1e50(int param_1)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x6a3) == 0) {
    hMem = GlobalAlloc(0x40,0xd0);
    this = GlobalLock(hMem);
    if (this == (LPVOID)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_5f6c1f70(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x6a7) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar2 = FUN_5f6c2710((uint)puVar1,param_1 + 0x218);
    if (((int)uVar2 < 0) ||
       (uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x6a7))
                          (*(undefined4 **)(param_1 + 0x6a7),&DAT_5f701a30,param_1 + 0x6a3),
       (int)uVar2 < 0)) {
      if (*(int **)(param_1 + 0x6a7) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x6a7) + 0x58))(1);
      }
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_5f6c2710(*(uint *)(param_1 + 0x6a7),param_1 + 0x218);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  return 0;
}


