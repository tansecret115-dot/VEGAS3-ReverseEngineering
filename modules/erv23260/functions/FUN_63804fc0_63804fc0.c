/* Module: erv23260.dll
   Function: FUN_63804fc0
   Address: 63804fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63804fc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6382d870;
  if ((void *)param_1[0x14] != (void *)0x0) {
    FUN_637f2010((void *)param_1[0x14]);
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  return;
}


