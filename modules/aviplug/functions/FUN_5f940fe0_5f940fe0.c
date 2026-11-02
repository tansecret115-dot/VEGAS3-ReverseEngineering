/* Module: aviplug.dll
   Function: FUN_5f940fe0
   Address: 5f940fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f940fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 == (undefined4 *)0x0) {
      param_1[2] = 0;
    }
    else {
      param_1[2] = puVar1;
      *puVar1 = 0x5453494c;
      *(undefined4 *)(param_1[2] + 4) = 4;
      *(undefined4 *)(param_1[2] + 8) = 0x20636572;
    }
    if ((int *)param_1[3] != (int *)0x0) {
      FUN_5f978470((int *)param_1[3],0,-1,0);
    }
  }
  return;
}


