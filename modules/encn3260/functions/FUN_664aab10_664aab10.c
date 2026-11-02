/* Module: encn3260.dll
   Function: FUN_664aab10
   Address: 664aab10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664aab10(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)-(uint)(DAT_664f0744 != 0);
  piVar1 = local_8;
  while (local_8 = piVar1, local_c != (int *)0x0) {
    FUN_664c4010(&DAT_664f0738,(int *)&local_c,(int *)&local_10,(int *)&local_8);
    iVar2 = (**(code **)(*local_8 + 0x18))(param_1,0);
    piVar1 = local_8;
    if (iVar2 != 0) {
      (**(code **)(*local_8 + 0xc))(iVar2);
      if (local_8 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = local_8[4];
      }
      piVar1 = local_8;
      if ((iVar2 == 0) &&
         (local_c = FUN_664c3f50(&DAT_664f0738,local_10), piVar1 = (int *)0x0, local_8 != (int *)0x0
         )) {
        (**(code **)*local_8)(1);
        local_8 = (int *)0x0;
        piVar1 = local_8;
      }
    }
  }
  return;
}


