/* Module: encn3260.dll
   Function: FUN_664d6ec0
   Address: 664d6ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664d6ec0(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(param_1 + 1);
    do {
      puVar1[-1] = *(undefined1 *)param_2;
      *puVar1 = (char)((uint)*param_2 >> 8);
      puVar1[1] = (char)((uint)*param_2 >> 0x10);
      puVar1[2] = (char)((uint)*param_2 >> 0x18);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + 1;
    } while (puVar1 + (-1 - param_1) < param_3);
  }
  return;
}


