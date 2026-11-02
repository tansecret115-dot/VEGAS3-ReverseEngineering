/* Module: mp3plug.dll
   Function: FUN_5f70ffe0
   Address: 5f70ffe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f70ffe0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  undefined4 local_c;
  
  piVar1 = (int *)param_1[9];
  if (((*param_1 != 0x28) || (local_14 = param_2, *param_2 != 0x10)) || (*param_3 != 0x10)) {
    return 10;
  }
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0xc)) {
    return 0xb;
  }
  piVar2 = (int *)piVar1[2];
  param_2[2] = 0;
  param_3[2] = 0;
  local_c = 0;
  local_18 = piVar2;
  do {
    local_10 = FUN_5f7101a0(piVar2,(int)local_14);
    local_1c = 0;
    uVar4 = 0;
    while ((uVar4 == 0 || (uVar4 == 0x40000000))) {
      iVar3 = param_3[1] - param_3[2];
      if (iVar3 < piVar1[1]) break;
      local_1c = (**(code **)(*local_18 + 0xc))(param_3[3] + param_3[2],iVar3,&local_20,0,0);
      param_3[2] = local_20 + param_3[2];
      if ((local_20 != 0) && (local_20 != piVar1[1])) {
        return 6;
      }
      uVar4 = local_1c & 0xc0000000;
      if (uVar4 == 0xc0000000) {
        return 6;
      }
      if ((uVar4 == 0) || (uVar4 == 0x40000000)) {
        (**(code **)(*local_18 + 0x10))();
      }
    }
    if (((uVar4 == 0xc0000000) || (piVar2 = (int *)piVar1[1], param_3[1] - param_3[2] < (int)piVar2)
        ) || ((local_10 == 0 &&
              (((local_1c == 0x81010003 || (local_1c == 0x81010001)) || (local_1c == 0x81010004)))))
       ) {
      return local_c;
    }
  } while( true );
}


