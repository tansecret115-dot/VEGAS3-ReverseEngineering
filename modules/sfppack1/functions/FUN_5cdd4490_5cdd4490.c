/* Module: sfppack1.dll
   Function: FUN_5cdd4490
   Address: 5cdd4490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdd4490(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5ce149c8;
  local_10 = DAT_5ce149c0;
  local_c = DAT_5ce149c4;
  local_14 = 0x44;
  local_4 = DAT_5ce149cc;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0x30,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x54) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


