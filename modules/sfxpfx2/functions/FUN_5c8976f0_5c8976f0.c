/* Module: sfxpfx2.dll
   Function: FUN_5c8976f0
   Address: 5c8976f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8976f0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0xd)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x278) + 0x10))
                      ((void *)(param_1 + -0x278),&DAT_5c8e7994 + param_2 * 0x14);
    if (iVar1 == 0) {
      FUN_5c8974a0((void *)(param_1 + -0x278),100);
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


