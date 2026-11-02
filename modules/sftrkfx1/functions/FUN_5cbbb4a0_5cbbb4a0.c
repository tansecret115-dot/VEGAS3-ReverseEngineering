/* Module: sftrkfx1.dll
   Function: FUN_5cbbb4a0
   Address: 5cbbb4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbbb4a0(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5cc04d78;
  local_10 = DAT_5cc04d70;
  local_c = DAT_5cc04d74;
  local_14 = 0x20;
  local_4 = DAT_5cc04d7c;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x3c,0xc,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x20) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


