/* Module: sfppack3.dll
   Function: FUN_5cc3aef0
   Address: 5cc3aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc3aef0(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5cc88290;
  local_10 = DAT_5cc88288;
  local_c = DAT_5cc8828c;
  local_14 = 0x128;
  local_4 = DAT_5cc88294;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0x114,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x134) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


