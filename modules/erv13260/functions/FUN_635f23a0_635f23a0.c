/* Module: erv13260.dll
   Function: FUN_635f23a0
   Address: 635f23a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f23a0(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_3 == 0) {
    if ((param_1 < 2) && (param_2 < 0xd)) {
      iVar2 = (param_2 + param_1 * 0xc) * 8;
      FUN_635f20b0(param_4,*(uint *)(&DAT_6360576c + iVar2),*(int *)(&DAT_63605768 + iVar2));
      return *(undefined4 *)(&DAT_6360576c + iVar2);
    }
    if ((1 < param_1) && ((param_1 < 0x1b && (param_2 < 5)))) {
      iVar2 = (param_2 + param_1 * 4) * 8;
      FUN_635f20b0(param_4,*(uint *)(&DAT_636057ec + iVar2),*(int *)(&DAT_636057e8 + iVar2));
      return *(undefined4 *)(&DAT_636057ec + iVar2);
    }
  }
  else if (param_3 == 1) {
    if ((param_1 < 2) && (param_2 < 4)) {
      iVar2 = (param_2 + param_1 * 3) * 8;
      FUN_635f20b0(param_4,*(uint *)(&DAT_63605b4c + iVar2),*(int *)(&DAT_63605b48 + iVar2));
      return *(undefined4 *)(&DAT_63605b4c + iVar2);
    }
    if ((1 < param_1) && ((param_1 < 0x2a && (param_2 == 1)))) {
      FUN_635f20b0(param_4,*(uint *)(&DAT_63605b74 + param_1 * 8),
                   *(int *)(&DAT_63605b70 + param_1 * 8));
      uVar1 = *(undefined4 *)(&DAT_63605b74 + param_1 * 8);
    }
  }
  return uVar1;
}


