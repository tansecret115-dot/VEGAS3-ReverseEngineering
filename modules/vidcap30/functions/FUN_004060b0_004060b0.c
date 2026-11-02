/* Module: vidcap30.exe
   Function: FUN_004060b0
   Address: 004060b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004060b0(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x90) != 0) && (param_4 == 0)) {
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | param_2;
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | param_3;
    return;
  }
  param_2 = param_2 | *(uint *)(param_1 + 0x108);
  param_3 = param_3 | *(uint *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if ((param_2 & 1) != 0) {
    FUN_00453560(param_1);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_004460e0(*(int *)(param_1 + 0x70),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_00434470(*(int *)(param_1 + 0x6c),param_2,param_3);
  }
  iVar1 = DAT_005bb838;
  if ((param_3 != 0xffffffff) && (((param_3 & 0xfd) != 0 || ((param_3 & 0x7ff00) != 0)))) {
    *(undefined4 *)(DAT_005bb838 + 0x638) = 1;
    FUN_0042f760(iVar1);
  }
  return;
}


