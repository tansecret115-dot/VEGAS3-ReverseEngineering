/* Module: tokr3260.dll
   Function: FUN_680579c0
   Address: 680579c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_680579c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 <= param_2) {
    iVar1 = (param_2 - param_1) + 1;
    puVar2 = (undefined4 *)(param_3 + 0x20 + param_1 * 0x2c);
    do {
      if ((void *)puVar2[-1] != (void *)0x0) {
        free((void *)puVar2[-1]);
      }
      if ((void *)*puVar2 != (void *)0x0) {
        free((void *)*puVar2);
      }
      puVar2 = puVar2 + 0xb;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


