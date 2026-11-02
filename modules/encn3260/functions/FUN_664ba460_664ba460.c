/* Module: encn3260.dll
   Function: FUN_664ba460
   Address: 664ba460
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664ba460(uint *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 != (uint *)0x0) && (0x1f < *param_1)) {
    iVar2 = 0;
    puVar3 = &DAT_664ef5f0;
    do {
      if (((*(byte *)(puVar3 + -2) & 2) != 0) && ((uint *)*puVar3 != (uint *)0x0)) {
        bVar1 = FUN_664ba3f0((uint *)*puVar3,param_1[2],param_1[3],param_1 + 4);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          return iVar2;
        }
      }
      puVar3 = puVar3 + 4;
      iVar2 = iVar2 + 1;
    } while ((int)puVar3 < 0x664ef730);
    return 0xb;
  }
  return 0xb;
}


