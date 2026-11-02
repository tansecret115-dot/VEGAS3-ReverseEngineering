/* Module: sfcdi.dll
   Function: FUN_5bf3cd90
   Address: 5bf3cd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3cd90(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_2 != 0) {
    puVar2 = param_1;
    do {
      uVar1 = puVar2[1];
      puVar3 = puVar2 + 2;
      puVar2[1] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2 * 2);
  }
  return;
}


