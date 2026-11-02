/* Module: sftrans1.dll
   Function: FUN_004adbf0
   Address: 004adbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004adbf0(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 float param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_18;
  
  local_18 = 0;
  do {
    switch(local_18) {
    case 0:
      floor((double)param_5);
      uVar2 = ftol();
      *param_2 = uVar2;
      *param_1 = 0x80;
      *param_3 = *param_6;
      param_3[1] = param_6[1];
      param_3[2] = param_6[2];
      param_3[3] = param_6[3];
      break;
    case 1:
      ceil((double)param_5);
      uVar2 = ftol();
      param_2[1] = uVar2;
      uVar1 = ftol();
      param_1[1] = uVar1;
      param_3[4] = *param_6;
      param_3[5] = param_6[1];
      param_3[6] = param_6[2];
      param_3[7] = param_6[3];
      break;
    case 2:
      floor((double)((float)param_4 - param_5));
      uVar2 = ftol();
      param_2[2] = uVar2;
      param_1[2] = 0;
      break;
    case 3:
      ceil((double)((float)param_4 - param_5));
      uVar2 = ftol();
      param_2[3] = uVar2;
      uVar1 = ftol();
      param_1[3] = uVar1;
      puVar3 = param_3 + 0xc;
      goto LAB_004add19;
    case 4:
      puVar3 = param_3 + 0x10;
      param_2[4] = param_4;
      param_1[4] = 0x80;
LAB_004add19:
      *puVar3 = *param_7;
      puVar3[1] = param_7[1];
      puVar3[2] = param_7[2];
      puVar3[3] = param_7[3];
    }
    local_18 = local_18 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}


