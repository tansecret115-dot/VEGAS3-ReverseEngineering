/* Module: oggplug.dll
   Function: FUN_00443410
   Address: 00443410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00443410(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  undefined8 local_10;
  
  if ((1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 4) != 0)) {
    if (param_2 < *(int *)(param_1 + 0x34)) {
      if (param_2 < 0) {
        iVar1 = 0;
        local_10 = 0.0;
        if (0 < *(int *)(param_1 + 0x34)) {
          do {
            fVar2 = FUN_00443410(param_1,iVar1);
            iVar1 = iVar1 + 1;
            local_10 = (double)(fVar2 + (float10)local_10);
          } while (iVar1 < *(int *)(param_1 + 0x34));
        }
        return (float10)local_10;
      }
      return (float10)*(longlong *)(*(int *)(param_1 + 0x44) + param_2 * 8) /
             (float10)*(int *)(*(int *)(param_1 + 0x48) + 8 + param_2 * 0x20);
    }
  }
  return (float10)_DAT_0044d828;
}


