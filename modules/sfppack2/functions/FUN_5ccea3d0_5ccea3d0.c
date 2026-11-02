/* Module: sfppack2.dll
   Function: FUN_5ccea3d0
   Address: 5ccea3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5ccea3d0(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5cd52c28;
  local_10 = DAT_5cd52c20;
  local_c = DAT_5cd52c24;
  local_14 = 0xe4;
  local_4 = DAT_5cd52c2c;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0xd0,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0xf0) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


