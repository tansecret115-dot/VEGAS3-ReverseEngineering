/* Module: vegas30k.dll
   Function: FUN_011c7240
   Address: 011c7240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011c7240(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0x20);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)FUN_011d36d0(*(undefined4 *)(param_1 + 0x210));
    (**(code **)*puVar2)(puVar2,&DAT_011d9ad0,param_2);
    return;
  }
  (*(code *)*puRam00000000)(0,&DAT_011d9ad0,param_2);
  return;
}


