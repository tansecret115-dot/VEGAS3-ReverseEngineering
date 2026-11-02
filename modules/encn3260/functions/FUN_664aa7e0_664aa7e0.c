/* Module: encn3260.dll
   Function: FUN_664aa7e0
   Address: 664aa7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664aa7e0(int *param_1)

{
  int iVar1;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  param_1[0x4f] = 0;
  iVar1 = FUN_664a9d10(param_1);
  if (iVar1 != 0) {
    local_10 = param_1 + 0xc;
    local_14 = -(uint)(param_1[0xf] != 0);
    local_c = (int *)0x0;
    local_8 = 0;
    while (local_14 != 0) {
      FUN_664c4010(local_10,&local_14,&local_8,(int *)&local_c);
      FUN_664aa7e0(local_c);
    }
  }
  return;
}


