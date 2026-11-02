/* Module: vegas30k.dll
   Function: FUN_011c71e0
   Address: 011c71e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011c71e0(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0x18);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)FUN_011d3960(*(undefined4 *)(param_1 + 0x218));
    (**(code **)*puVar2)(puVar2,&DAT_011d9ae0,param_2);
    return;
  }
  (*(code *)*puRam00000000)(0,&DAT_011d9ae0,param_2);
  return;
}


