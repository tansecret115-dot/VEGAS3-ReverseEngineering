/* Module: aviplug.dll
   Function: FUN_5f94ccb0
   Address: 5f94ccb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94ccb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  
  uVar2 = 0x8004e000;
  *param_3 = 0;
  if ((*(int *)(param_1 + 0x10) == 0x64737664) && (*(int *)(param_1 + 4) == 0x2d0)) {
    if (*(int *)(param_1 + 8) == 0x240) {
      iVar4 = 6;
    }
    else {
      if (*(int *)(param_1 + 8) != 0x1e0) goto LAB_5f94cd76;
      iVar4 = 5;
    }
    hMem = GlobalAlloc(0x42,0x58);
    pvVar1 = GlobalLock(hMem);
    if (pvVar1 != (LPVOID)0x0) {
      *(int *)((int)pvVar1 + 0x1c) = iVar4;
      *(undefined4 *)((int)pvVar1 + 0x34) = 0xc0c01fc0;
      *(undefined4 *)((int)pvVar1 + 0x38) = 0xffa0ff3f;
      *(undefined4 *)((int)pvVar1 + 0x3c) = 0xc0c01fc0;
      *(undefined4 *)((int)pvVar1 + 0x40) = 0xffa0ff3f;
      if (iVar4 == 6) {
        *(byte *)((int)pvVar1 + 0x36) = *(byte *)((int)pvVar1 + 0x36) | 0x20;
        bVar3 = *(byte *)((int)pvVar1 + 0x3e) | 0x20;
      }
      else {
        *(byte *)((int)pvVar1 + 0x36) = *(byte *)((int)pvVar1 + 0x36) & 0xdf;
        bVar3 = *(byte *)((int)pvVar1 + 0x3e) & 0xdf;
      }
      *(byte *)((int)pvVar1 + 0x3e) = bVar3;
      *(undefined4 *)((int)pvVar1 + 0x10) = param_2;
      *(undefined4 *)((int)pvVar1 + 0x28) = 4;
      *param_3 = pvVar1;
      return 0;
    }
    uVar2 = 0x8007000e;
  }
LAB_5f94cd76:
  *param_3 = 0;
  return uVar2;
}


