/* Module: vegas30k.dll
   Function: FUN_0103fe00
   Address: 0103fe00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103fe00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x3c8) == 0) {
    pvVar2 = calloc(1,0x11c);
    *(void **)(param_1 + 0x3c8) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0x80004005;
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x3c8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  *(undefined4 *)(*(int *)(param_1 + 0x3c8) + 0x114) = param_2[0x45];
  _mbscpy((uchar *)(*(int *)(param_1 + 0x3c8) + 0x10),(uchar *)(param_2 + 4));
  *(undefined4 *)(*(int *)(param_1 + 0x3c8) + 0x118) = param_2[0x46];
  return 0;
}


