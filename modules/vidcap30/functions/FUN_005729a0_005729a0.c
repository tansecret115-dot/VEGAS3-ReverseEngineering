/* Module: vidcap30.exe
   Function: FUN_005729a0
   Address: 005729a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005729a0(int param_1,uint param_2,uint *param_3)

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
  iVar2 = FUN_00572640(param_2,&DAT_00586f4c,local_4,&local_10,&local_c);
  if (((-1 < iVar2) || (iVar2 == -0x7ff8ffa9)) && (iVar2 != 0x4e133)) {
    *param_3 = local_10 ^ *(uint *)(param_1 + 0x30);
    return;
  }
  FUN_005760d0(&param_2);
  local_8 = *(uint *)(param_1 + 0x30) ^ param_2;
  local_10 = param_2;
  FUN_005727b0(uVar1,&DAT_00586f4c,4,&local_8,local_c,0,0);
  *param_3 = local_10;
  return;
}


