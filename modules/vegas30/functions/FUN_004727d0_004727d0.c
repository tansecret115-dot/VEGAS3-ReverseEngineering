/* Module: vegas30.exe
   Function: FUN_004727d0
   Address: 004727d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004727d0(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int param_7,int param_8,undefined4 param_9,
            undefined4 *param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_10;
  puVar1 = param_6;
  if (*(int *)(param_6[0x86] + 0xdc) != 0) {
    puVar4 = local_18;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_18[3] = (uint)(param_8 != 0);
    local_18[0] = param_1;
    local_4 = param_11;
    local_18[2] = -(uint)(param_7 != 0) & 3;
    *param_10 = 0;
    local_18[1] = param_2;
    local_8 = 1;
    iVar3 = FUN_00544350(*(undefined4 *)(param_6[0x86] + 0xdc),local_18,&param_6,param_8);
    if (iVar3 == 0) {
      FUN_00543420(*(undefined4 *)(puVar1[0x86] + 0xdc),&param_1);
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = param_1;
      param_5[3] = param_2;
      *param_3 = *param_6;
      *param_4 = param_6[1];
      *puVar2 = param_6;
      return 1;
    }
  }
  return 0;
}


