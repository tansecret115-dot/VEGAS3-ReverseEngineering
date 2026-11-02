/* Module: vegas30k.dll
   Function: FUN_011a31f0
   Address: 011a31f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011a31f0(int param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  hMem = GlobalAlloc(0x40,0x14);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)
             FUN_011b57c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
    (**(code **)*puVar2)(puVar2,&DAT_011d9d90,param_2);
    return;
  }
  (*(code *)*puRam00000000)(0,&DAT_011d9d90,param_2);
  return;
}


