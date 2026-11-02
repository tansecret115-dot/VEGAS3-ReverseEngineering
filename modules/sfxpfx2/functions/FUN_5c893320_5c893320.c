/* Module: sfxpfx2.dll
   Function: FUN_5c893320
   Address: 5c893320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c893320(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5c8dc4c0;
  local_10 = DAT_5c8dc4b8;
  local_c = DAT_5c8dc4bc;
  local_14 = 0x13c;
  local_4 = DAT_5c8dc4c4;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0x128,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x14c) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


