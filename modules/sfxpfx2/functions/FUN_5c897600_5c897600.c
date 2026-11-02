/* Module: sfxpfx2.dll
   Function: FUN_5c897600
   Address: 5c897600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c897600(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_5c8dca10;
  local_10 = DAT_5c8dca08;
  local_c = DAT_5c8dca0c;
  local_14 = 0x24;
  local_4 = DAT_5c8dca14;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_14,0x14,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)this + 0x1c,0x10,0);
    if (-1 < iVar1) {
      *(uint *)((int)this + 0x34) = (uint)(unaff_ESI == 0);
    }
  }
  return;
}


