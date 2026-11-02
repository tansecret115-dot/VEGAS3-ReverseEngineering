/* Module: vegas30k.dll
   Function: FUN_011a2ff0
   Address: 011a2ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011a2ff0(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  hMem = GlobalAlloc(0x40,0xc);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_011a2ea0();
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  puVar3 = calloc(1,4);
  *(undefined4 **)(param_1 + 0x10) = puVar3;
  *puVar3 = *(undefined4 *)(param_1 + 8);
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 8);
  return 0;
}


