/* Module: sfppack1.dll
   Function: FUN_5cdb98c0
   Address: 5cdb98c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdb98c0(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5ce132f8;
  local_10 = DAT_5ce132f0;
  local_c = DAT_5ce132f4;
  local_14 = 0x44;
  local_4 = DAT_5ce132fc;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x20,0x30,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x58) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


