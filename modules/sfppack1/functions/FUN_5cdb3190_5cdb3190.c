/* Module: sfppack1.dll
   Function: FUN_5cdb3190
   Address: 5cdb3190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdb3190(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5ce12a60;
  local_10 = DAT_5ce12a58;
  local_c = DAT_5ce12a5c;
  local_14 = 0x34;
  local_4 = DAT_5ce12a64;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x20,0x20,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x48) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


