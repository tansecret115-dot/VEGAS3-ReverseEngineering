/* Module: vegas30.exe
   Function: FUN_00603780
   Address: 00603780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00603780(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  undefined1 local_4 [4];
  
  uVar1 = param_2;
  local_10 = 0;
  local_c = 4;
  iVar2 = FUN_00603420(param_2,&DAT_0062cfa4,local_4,&local_10,&local_c);
  if (((-1 < iVar2) || (iVar2 == -0x7ff8ffa9)) && (iVar2 != 0x4e133)) {
    *param_3 = local_10 ^ *(uint *)(param_1 + 0x30);
    return;
  }
  FUN_00606b80(&param_2);
  local_8 = *(uint *)(param_1 + 0x30) ^ param_2;
  local_10 = param_2;
  FUN_00603590(uVar1,&DAT_0062cfa4,4,&local_8,local_c,0,0);
  *param_3 = local_10;
  return;
}


