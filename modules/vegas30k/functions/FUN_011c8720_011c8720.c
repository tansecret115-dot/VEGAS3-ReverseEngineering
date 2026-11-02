/* Module: vegas30k.dll
   Function: FUN_011c8720
   Address: 011c8720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c8720(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0x3c0);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x3a4) = 100;
  hMem = GlobalAlloc(0x42,0x15e0);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    *(LPVOID *)(param_1 + 0x390) = pvVar1;
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined4 *)(param_1 + 0x39c) = 0;
    if (*(int *)(param_1 + 0x3a4) != 0) {
      do {
        *(undefined4 *)((int)pvVar1 + 0x34) = *(undefined4 *)(param_1 + 0x394);
        *(LPVOID *)(param_1 + 0x394) = pvVar1;
        pvVar1 = (LPVOID)((int)pvVar1 + 0x38);
        *(LPVOID *)(*(int *)(param_1 + 0x394) + 0x30) = pvVar1;
        uVar3 = *(int *)(param_1 + 0x39c) + 1;
        *(uint *)(param_1 + 0x39c) = uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x3a4));
    }
    *(undefined4 *)(*(int *)(param_1 + 0x390) + 0x34) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(*(int *)(param_1 + 0x394) + 0x30) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x39c) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  return 0;
}


