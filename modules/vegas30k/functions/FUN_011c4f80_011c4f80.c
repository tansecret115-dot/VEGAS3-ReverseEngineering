/* Module: vegas30k.dll
   Function: FUN_011c4f80
   Address: 011c4f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c4f80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x80004002;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    hMem = GlobalAlloc(0x40,0x14);
    pvVar2 = GlobalLock(hMem);
    if (pvVar2 != (LPVOID)0x0) {
      puVar3 = (undefined4 *)FUN_011d3b70(*(undefined4 *)(param_1 + 0x124));
      uVar1 = (**(code **)*puVar3)(puVar3,&DAT_011d9ac0,param_2);
      return uVar1;
    }
    uVar1 = (*(code *)*puRam00000000)(0,&DAT_011d9ac0,param_2);
  }
  return uVar1;
}


