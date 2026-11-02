/* Module: vegas30k.dll
   Function: FUN_011a03e0
   Address: 011a03e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a03e0(undefined4 param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0x18);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)FUN_011ae030(param_1);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = (**(code **)*puVar2)(puVar2,&DAT_011d9d10,param_2);
      return uVar3;
    }
  }
  return 0x8007000e;
}


