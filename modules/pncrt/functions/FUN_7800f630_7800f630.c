/* Module: pncrt.dll
   Function: FUN_7800f630
   Address: 7800f630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800f630(int *param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x1000);
  param_1[2] = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
    *param_1 = param_1[2];
    param_1[1] = 0;
    return;
  }
  param_1[6] = 2;
  param_1[3] = param_1[3] | 4;
  param_1[2] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  param_1[1] = 0;
  return;
}


