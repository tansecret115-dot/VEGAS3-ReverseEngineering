/* Module: sfppack2.dll
   Function: FUN_5ccdd530
   Address: 5ccdd530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5ccdd530(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5cd51d70;
  local_10 = DAT_5cd51d68;
  local_c = DAT_5cd51d6c;
  local_14 = 0x2c;
  local_4 = DAT_5cd51d74;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0x18,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x3c) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


