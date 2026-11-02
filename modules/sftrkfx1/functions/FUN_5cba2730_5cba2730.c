/* Module: sftrkfx1.dll
   Function: FUN_5cba2730
   Address: 5cba2730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cba2730(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5cc03d40;
  local_10 = DAT_5cc03d38;
  local_c = DAT_5cc03d3c;
  local_14 = 0x38;
  local_4 = DAT_5cc03d44;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x34,0x24,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x24) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


