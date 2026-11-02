/* Module: rmbe3260.dll
   Function: FUN_660031f0
   Address: 660031f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_660031f0(int param_1)

{
  uint uVar1;
  float10 fVar2;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0xc))
                    (*(int **)(param_1 + 0x104),DAT_66075000,&local_8);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = (**(code **)(*local_8 + 0x10))(local_8,0xc,&local_c);
    if ((uVar1 & 0x80000000) == 0) {
      uVar1 = (**(code **)*local_c)(local_c,&DAT_66065c38,&local_10);
      if ((uVar1 & 0x80000000) == 0) {
        fVar2 = FUN_660032b0(param_1);
        if (fVar2 != (float10)_DAT_660624ec) {
          (**(code **)(*local_10 + 0x20))(local_10,(float)fVar2);
        }
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return;
}


