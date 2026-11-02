/* Module: erv23260.dll
   Function: FUN_637ff670
   Address: 637ff670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637ff670(int *param_1,int *param_2,int *param_3,int *param_4,uint param_5,char param_6)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  char local_6;
  char local_5;
  
  local_1c = param_1[6];
  local_20 = param_1[4];
  local_5 = '\0';
  local_10 = param_2[4];
  local_c = param_2[6];
  local_6 = '\0';
  if ((((param_3[1] == 0 && param_3[2] == 0) && param_3[3] == 0) && *param_3 == 0) &&
     (*param_4 == 3)) {
    if ((local_20 * 2 == local_10) && (local_1c * 2 == local_c)) {
      local_5 = '\x01';
    }
    if ((local_20 >> 1 == local_10) && (local_1c >> 1 == local_c)) {
      local_6 = '\x01';
    }
  }
  local_24 = param_1[3];
  uVar3 = param_2[5] - local_10;
  local_14 = param_2[3];
  uVar1 = param_2[7] - local_c;
  pbVar2 = (byte *)0x0;
  do {
    if (pbVar2 == (byte *)0x0) {
      local_28 = *param_1;
      local_18 = *param_2;
    }
    else if (pbVar2 == (byte *)0x1) {
      local_28 = param_1[1];
      local_18 = param_2[1];
      uVar3 = uVar3 >> 1;
      uVar1 = uVar1 >> 1;
    }
    else if (pbVar2 == (byte *)0x2) {
      local_28 = param_1[2];
      local_18 = param_2[2];
    }
    if (param_6 == '\0') {
      if (local_5 == '\0') {
        if (local_6 == '\0') {
          FUN_63800c50(&local_28,&local_18,uVar3,uVar1,param_5,param_3,param_4,(uint)pbVar2);
        }
        else {
          FUN_63801650(&local_28,&local_18,uVar3,uVar1,(char)param_5,(uint)pbVar2);
        }
      }
      else {
        FUN_63801270(&local_28,(byte *)&local_18,(char)param_5,pbVar2);
      }
    }
    else if (local_5 == '\0') {
      if (local_6 == '\0') {
        FUN_638017b0(&local_28,&local_18,uVar3,uVar1,param_5 & 0xff,param_3,param_4,pbVar2);
      }
      else {
        FUN_638021d0(&local_28,&local_18,uVar3,uVar1,param_5 & 0xff,(int)pbVar2);
      }
    }
    else {
      FUN_63801f40(&local_28,&local_18,param_5 & 0xff,(int)pbVar2);
    }
    pbVar2 = pbVar2 + 1;
  } while (pbVar2 < (byte *)0x3);
  return;
}


