/* Module: sfppack1.dll
   Function: FUN_5cdc6ac0
   Address: 5cdc6ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdc6ac0(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5ce13c60;
  local_10 = DAT_5ce13c58;
  local_c = DAT_5ce13c5c;
  local_14 = 0xa0;
  local_4 = DAT_5ce13c64;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0x8c,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0xb0) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


