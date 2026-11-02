/* Module: vidpcore.dll
   Function: FUN_5de09090
   Address: 5de09090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de09090(int *param_1,undefined4 param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 1;
  local_4 = 1;
  local_10 = param_3;
  local_c = &param_3;
  uVar1 = *param_3;
  param_3 = (ushort *)0xfffffffd;
  if ((((uVar1 == 0xd) || (uVar1 == 9)) || ((uVar1 & 0x6000) != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,&DAT_5df38bc8,0x400,8,&local_10,0,0,0),
     -1 < iVar2)) {
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,&DAT_5df38bc8,0x400,4,&local_10,0,0,0);
  return;
}


