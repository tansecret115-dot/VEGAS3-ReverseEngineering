/* Module: vegas30.exe
   Function: FUN_00532360
   Address: 00532360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00532360(int param_1,uchar *param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uchar local_104 [260];
  
  iVar2 = 0;
  if (param_2 == (uchar *)0x0) {
    param_2 = (uchar *)(param_1 + 0xb8);
  }
  if (((*(int *)(param_1 + 0x1c4) != 0) || (*param_2 == '\0')) ||
     (iVar1 = param_4, *(int *)(param_1 + 0x1cc) != 0)) {
    iVar1 = 1;
  }
  if (*param_2 == '\0') {
    local_104[0] = '\0';
  }
  else {
    _mbscpy(local_104,param_2);
  }
  if (iVar1 != 0) {
    iVar2 = FUN_004321f0(local_104,0x104,&param_3,param_6);
    if (iVar2 < 0) {
      return iVar2;
    }
    param_2 = local_104;
    if (param_3 == 2) {
      local_110 = DAT_0064aea4;
      local_10c = DAT_0064aea8;
      local_108 = DAT_0064aeac;
      iVar1 = FUN_0052e490(DAT_00647624,&local_110,&local_10c);
      if (iVar1 == 0) {
        return 1;
      }
      DAT_0064aea4 = local_110;
      DAT_0064aea8 = local_10c;
      DAT_0064aeac = local_108;
    }
  }
  if (param_3 == -1) {
    if (DAT_0064b4f0 == 0) {
      iVar2 = FUN_00436360(param_1,param_2,0);
      return iVar2;
    }
    FUN_00405540(0);
    return iVar2;
  }
  if (DAT_0064b4f0 != 0) {
    FUN_00405540(0);
    return iVar2;
  }
  iVar2 = FUN_005321b0(param_1,param_2,param_3 == 2,DAT_0064aea4,DAT_0064aea8,DAT_0064aeac,param_5);
  return iVar2;
}


