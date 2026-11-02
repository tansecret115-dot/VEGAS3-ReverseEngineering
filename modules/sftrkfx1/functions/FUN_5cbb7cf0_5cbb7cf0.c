/* Module: sftrkfx1.dll
   Function: FUN_5cbb7cf0
   Address: 5cbb7cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbb7cf0(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5cc04988;
  local_10 = DAT_5cc04980;
  local_c = DAT_5cc04984;
  local_14 = 0x20;
  local_4 = DAT_5cc0498c;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0xc,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x2c) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


