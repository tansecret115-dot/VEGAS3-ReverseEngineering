/* Module: vegas30k.dll
   Function: FUN_011a33a0
   Address: 011a33a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011a33a0(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  hMem = GlobalAlloc(0x40,0x28);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)FUN_011b6040(0,0);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_011b6110();
      *(undefined4 *)(param_1 + 0x14) = 1;
      pvVar3 = calloc(1,4);
      *(void **)(param_1 + 0x10) = pvVar3;
      uVar4 = (**(code **)*puVar2)(puVar2,&DAT_011d9e20,pvVar3);
      return uVar4;
    }
  }
  return 1;
}


