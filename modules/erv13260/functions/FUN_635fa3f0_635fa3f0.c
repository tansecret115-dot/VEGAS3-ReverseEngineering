/* Module: erv13260.dll
   Function: FUN_635fa3f0
   Address: 635fa3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635fa3f0(uint param_1,int param_2,uint param_3,int param_4,int param_5,char param_6,int *param_7
            )

{
  int iVar1;
  
  if (*(char *)(param_5 + 8) == '\x01') {
    FUN_635f20b0(param_7,1,param_2);
    *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) + 1;
  }
  if (param_2 == 0) {
    if (*(char *)(param_5 + 8) == '\0') {
      iVar1 = FUN_635f2240(param_3,param_1,param_7);
    }
    else {
      iVar1 = FUN_635f2280(param_3,param_1,param_7);
    }
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + iVar1;
    iVar1 = FUN_635f2360(param_3,param_1,param_7);
    *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + iVar1;
    if ((param_1 == 1) || (param_1 == 4)) {
      switch((int)((int)param_6 + ((int)param_6 >> 0x1f & 3U)) >> 2) {
      default:
        fprintf((FILE *)(_iob_exref + 0x20),s_Invalid_DQUANT_636066bc);
                    /* WARNING: Subroutine does not return */
        exit(-1);
      case 1:
        FUN_635f20b0(param_7,2,2);
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 2;
        return;
      case 2:
        FUN_635f20b0(param_7,2,3);
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 2;
        return;
      case -2:
        FUN_635f20b0(param_7,2,1);
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 2;
        return;
      case -1:
        FUN_635f20b0(param_7,2,0);
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 2;
        return;
      }
    }
  }
  return;
}


