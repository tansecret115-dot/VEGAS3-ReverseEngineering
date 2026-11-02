/* Module: wmfplug2.dll
   Function: FUN_0040cbc0
   Address: 0040cbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040cbc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0047c374;
  param_1[1] = &PTR_LAB_0047c350;
  param_1[2] = &PTR_LAB_0047c340;
  FUN_0040cc70(param_1);
  if ((int *)param_1[0x8a] != (int *)0x0) {
    FUN_0040cc20(param_1,(int *)param_1[0x8a]);
    FUN_0042bfb0((int *)param_1[0x8a]);
  }
  if ((int *)param_1[0x8b] != (int *)0x0) {
    FUN_0042bfb0((int *)param_1[0x8b]);
  }
  if (param_1[0x8f] != 0) {
    FUN_0040c8e0((void *)param_1[3],param_1[0x8f]);
  }
  return;
}


