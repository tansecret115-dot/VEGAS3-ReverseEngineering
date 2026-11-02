/* Module: vegas30.exe
   Function: FUN_005aab60
   Address: 005aab60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005aab60(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = FUN_005aa9b0(param_1);
  if (iVar3 < 0) {
    return -0x7fff0001;
  }
  local_8 = *(undefined4 *)(param_1 + 600);
  local_4 = *(undefined4 *)(param_1 + 0x25c);
  uVar2 = *(undefined4 *)(param_1 + iVar3 * 4);
  *(undefined4 *)(param_1 + 0x40 + iVar3 * 8) = param_5;
  *(undefined4 *)(param_1 + 0x44 + iVar3 * 8) = param_6;
  local_10 = 0;
  local_c = 0;
  if (param_3 != (int *)0x0) goto LAB_005aabfe;
  if (param_2[4] == 0) {
    if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_005aabf3;
    iVar4 = *param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_2[4] == 3) {
      param_3 = param_2 + 0xd;
      goto LAB_005aabfe;
    }
LAB_005aabf3:
    iVar4 = *param_2 + param_2[8] * 4;
  }
  param_3 = (int *)(iVar4 + (int)param_2);
LAB_005aabfe:
  iVar4 = _SfDibCopy_36(uVar2,0,&local_10,0,param_2,param_3,&local_10,param_4,3);
  if (-1 < iVar4) {
    return iVar4;
  }
  *(undefined4 *)(param_1 + 0x40 + iVar3 * 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44 + iVar3 * 8) = 0x7fffffff;
  return iVar4;
}


