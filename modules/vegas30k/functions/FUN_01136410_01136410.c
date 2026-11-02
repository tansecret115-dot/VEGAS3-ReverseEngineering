/* Module: vegas30k.dll
   Function: FUN_01136410
   Address: 01136410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01136410(int param_1,undefined4 param_2,undefined4 param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar1 = GlobalAlloc(0x40,0x178);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0113c620(param_1,0);
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x40))(param_2,param_3);
  if (*(int *)(param_1 + 0x14) == 0) {
    pvVar1 = GlobalAlloc(0x40,0x168);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0113bb60(param_1,*(undefined4 *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(param_2,param_3);
  if (*(int *)(param_1 + 0x18) == 0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))
              (*(undefined4 **)(param_1 + 0x14),&DAT_011ed380,param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))
              (*(undefined4 **)(param_1 + 0x1c),&DAT_011ed380,param_1 + 0x20);
  }
  return 1;
}


